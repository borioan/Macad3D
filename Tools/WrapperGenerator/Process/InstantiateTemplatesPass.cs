using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public class InstantiateTemplatesPass : Pass
{
    protected override bool ProcessClass(ClassDecl cd)
    {
        Dictionary<string, string> substitutes = new();
        return _ProcessClass(cd, substitutes);
    }

    //--------------------------------------------------------------------------------------------------

    protected bool _ProcessClass(ClassDecl cd, Dictionary<string, string> substitutes)
    {
        var sourceName = cd.NativeBaseClasses.FirstOrDefault();
        if (string.IsNullOrEmpty(sourceName) || !sourceName.Contains("<"))
        {
            return true;
        }

        if (sourceName.StartsWith("handle<")        // Handle typedefs not used
            || sourceName.Contains("TI_"))          // Cascaded templates not supported
        {
            cd.Ignore = true;
            return true;
        }

        // Find template class
        var sourceClass = Context.Current.Classes.FirstOrDefault(cd => cd.IsTemplate && cd.Name.Equals(sourceName));
        // castxml occasionally reports a concrete instantiation (e.g. because it happens
        // to be used explicitly elsewhere in the translation unit) with its inherited
        // members already flattened into its own method list, but without a recorded
        // base class - the flattening loses the fact that same-named-but-different-arity
        // base overloads are hidden by the derived member (real C++ name hiding), so both
        // end up looking like valid, callable overloads. Detect that symptom (no base
        // recorded, yet a name appears with more than one arity) and fall back to the
        // synthetic TI_ generic template below, which always has clean base linkage.
        if (sourceClass != null
            && sourceClass.NativeBaseClasses.Count == 0
            && sourceClass.Methods.GroupBy(m => m.Name).Any(g => g.Select(m => m.Parameters.Count).Distinct().Count() > 1))
        {
            sourceClass = null;
        }
        if (sourceClass is { IsIncomplete: false })
        {
            substitutes[sourceName] = cd.Name;
        }
        else
        {
            var instanceParts = _GetTemplateParts(sourceName).ToArray();
            var templateParts = new string[instanceParts.Length - 1];
            for (int i = 0; i < instanceParts.Length - 1; i++)
                templateParts[i] = "TI_" + i;
            var templateClassName = instanceParts[0] + "<" + string.Join(", ", templateParts) + ">";
            sourceClass = Context.Current.Classes.FirstOrDefault(cd => cd.IsTemplate && cd.Name.Equals(templateClassName));
            if (sourceClass == null)
            {
                Logger.WriteLine(true, "Template class not found: " + templateClassName + " for instance " + cd.Name);
                cd.Ignore = true;
                return true;
            }
            substitutes[templateClassName] = cd.Name;
            for (int i = 0; i < templateParts.Length; i++)
            {
                substitutes["TI_" + i] = instanceParts[i + 1];
            }
        }

        // Cleanup base class
        if (cd.NativeBaseClasses.Contains("Standard_Transient"))
        {
            cd.BaseClassName = "Standard_Transient";
            cd.IsTransient = true;
        }
        cd.NativeBaseClasses.Clear();

        // Create template instance
        _CopyClass(sourceClass, cd, substitutes, cd.IsTypedef);

        // _CopyClass may have propagated IsTransient from a Standard_Transient-derived
        // source template (e.g. an "H..." handle-collection typedef) that wasn't caught
        // by the NativeBaseClasses check above, because a typedef's own NativeBaseClasses
        // only ever names the template instantiation, never "Standard_Transient" directly.
        // Without this, BuildInheritancePass would default such a class to the raw
        // BaseClass<T> base (since NativeBaseClasses is now empty), while the generated
        // constructor body assumes a Standard_Transient-style base because IsTransient is set.
        if (cd.IsTransient && string.IsNullOrEmpty(cd.BaseClassName))
        {
            cd.BaseClassName = "Standard_Transient";
        }

        foreach (var md in cd.Methods)
        {
            _FixTypeReferences(md.Type, cd);
            foreach (var pd in md.Parameters)
            {
                _FixTypeReferences(pd.Type, cd);
            }
        }

        // Remove all inner classes except Iterator which is used by our Enumerators
        cd.InnerClasses.ForEach(icd =>
        {
            if (icd.Name is not "Iterator")
                icd.Ignore = true;
        });

        return base.ProcessClass(cd);
    }

    //--------------------------------------------------------------------------------------------------

    void _CopyClass(ClassDecl template, ClassDecl cd, Dictionary<string, string> substitutes, bool includeConstructors)
    {
        // A method name declared directly on this template hides *all* same-named base
        // overloads in real C++ (name hiding), regardless of arity - e.g. NCollection_Array2
        // now derives from NCollection_Array1 in OCCT 8, and both declare a "Value"/"At"
        // member with a different number of index parameters; the base one-index overload
        // is not callable through an Array2 instance at all.
        var ownNames = new HashSet<string>(template.Methods.Select(m => m.Name));

        // Copy base class
        template.NativeBaseClasses.ForEach(baseClassName =>
        {
            if (baseClassName == "Standard_Transient")
            {
                // Only Standard_Transient needs to be propagated here (it's the only
                // value later checked, to mark the instantiated class as transient) - it's
                // a real, separately-wrapped C++/CLI base, not just a method source.
                cd.NativeBaseClasses.Add(baseClassName);
                return;
            }

            ClassDecl basecd = Context.Classes.FirstOrDefault(cd => cd.Name == baseClassName);
            if (basecd != null)
            {
                // Flatten methods from ANY base, template or not: OCCT 8 pushed common
                // accessors (e.g. Size/Extent/Length) down into plain, non-template base
                // classes shared by several containers (NCollection_BaseList,
                // NCollection_BaseSequence, ...), which previous OCCT versions redeclared
                // directly on the template itself. These bases aren't wrappable C++/CLI
                // base classes on their own, so their methods are copied in (flattened)
                // rather than the base being registered as an actual native base class.
                _CopyClass(basecd, cd, substitutes, false);
                cd.Methods.RemoveAll(m => ownNames.Contains(m.Name));
            }
        });

        // Copy current class
        cd.IsTransient |= template.IsTransient;
        cd.IsPublic |= template.IsPublic;

        foreach (var method in template.Methods)
        {
            // Constructors are not inherited
            if (method.IsConstructor && !includeConstructors)
            {
                continue;
            }

            // Destructors are never inherited as named members either - a base's destructor
            // (e.g. NCollection_BaseMap's, which is protected since it's meant to be used
            // only through a derived type) would otherwise leak in via base-method flattening
            // and could look like a non-public destructor on the instantiated class itself.
            if (method.IsDestructor)
            {
                continue;
            }

            // OCCT 8 removed NCollection_Array1/Array2's (value, size[, size]) "fill"
            // constructor in favor of bounds-based or raw-pointer overloads; the wrapper's
            // simple fill-constructor call pattern no longer matches any real native
            // overload (Array1: (value, size); Array2: (value, rows, cols)).
            if (method.IsConstructor
                && (template.Name.StartsWith("NCollection_Array1<") || template.Name.StartsWith("NCollection_Array2<"))
                && method.Parameters.Count is 2 or 3
                && method.Parameters[0].Type.Name == "TI_0"
                && method.Parameters.Skip(1).All(p => p.Type.Name.Contains("long long")))
            {
                continue;
            }

            MethodDecl md = new(method)
            {
                Class = cd,
            };
            if (md.IsConstructor || md.IsDestructor)
                md.Name = cd.Name;
            _SubtituteType(md.Type, substitutes);
            md.Type.Context = md;
            foreach (var pd in md.Parameters)
            {
                _SubtituteType(pd.Type, substitutes);
                pd.Type.Context = md;
            }
            // Skip only an identically-signed duplicate among this template's own methods.
            if (cd.Methods.Any(existing => md.IsEqual(existing)))
                continue;

            cd.Methods.Add(md);
        }

        foreach (var templateType in template.TemplateTypes)
        {
            cd.TemplateTypes.Add(new TypeDecl
            {
                Name = substitutes.GetValueOrDefault(templateType.Name) ?? templateType.Name
            });
        }

        foreach (var innerClassOriginal in template.InnerClasses)
        {
            Dictionary<string, string> innerClassSubstitutes = new(substitutes);
            var innerClass = innerClassOriginal.IsIncomplete
                ? _TryFindGenericInnerClass(innerClassOriginal, innerClassSubstitutes)
                : innerClassOriginal;

            _ProcessClass(innerClass, innerClassSubstitutes);

            // a nested class cannot have the same name as the immediately enclosing class
            if (innerClass.Name == cd.Name)
                continue; 

            var copiedClass = new ClassDecl
            {
                Name = innerClass.Name,
                NativeName = innerClass.NativeName,
                Package = cd.Package,
                FileName = innerClass.FileName,
                BaseClassName = innerClass.BaseClassName,
                IsTransient = innerClass.IsTransient,
                IsPublic = innerClass.IsPublic,
                OuterClass = cd,
                Comment = innerClass.Comment
            };
            _CopyClass(innerClass, copiedClass, innerClassSubstitutes, innerClass.OuterClass.IsTemplate || includeConstructors);

            int baseEntry = cd.InnerClasses.FindIndex(icd => icd.Name == copiedClass.Name);
            if(baseEntry != -1)
                cd.InnerClasses.RemoveAt(baseEntry);
            cd.InnerClasses.Add(copiedClass);
        }
    }

    //--------------------------------------------------------------------------------------------------

    ClassDecl _TryFindGenericInnerClass(ClassDecl innerClass, Dictionary<string, string> substitutes)
    {
        var instanceParts = _GetTemplateParts(innerClass.OuterClass.Name)?.ToArray();
        if (instanceParts?.Length <= 1)
        {
            // No template class 
            return innerClass;
        }

        var templateParts = new string[instanceParts.Length - 1];
        for (int i = 0; i < instanceParts.Length - 1; i++)
            templateParts[i] = "TI_" + i;
        var templateClassName = instanceParts[0] + "<" + string.Join(", ", templateParts) + ">";
        var genericClass = Context.Current.Classes.FirstOrDefault(cd => cd.IsTemplate && cd.Name.Equals(templateClassName));
        if (genericClass == null)
        {
            Logger.WriteLine(true, "Generic instantnce of template class not found: " + templateClassName + " for inner class " + innerClass.FullName);
            return innerClass;
        }

        if (substitutes.ContainsKey(innerClass.OuterClass.Name))
            substitutes[genericClass.Name] = substitutes[innerClass.OuterClass.Name];
        else
            substitutes[genericClass.Name] = innerClass.OuterClass.Name;

        for (int i = 0; i < templateParts.Length; i++)
        {
            substitutes["TI_" + i] = instanceParts[i + 1];
        }

        var completeInnerClass = genericClass.InnerClasses.FirstOrDefault(cd => cd.Name == innerClass.Name);
        if (completeInnerClass == null)
        {
            Logger.WriteLine(true, "Generic instantnce of template class has no matching inner class: " + templateClassName + " for instance " + innerClass.FullName);
            return innerClass;
        }

        return completeInnerClass;
    }

    //--------------------------------------------------------------------------------------------------

    void _FixTypeReferences(TypeDecl td, ClassDecl cd)
    {
        // check inner class
        var name = td.Name;
        if (cd.InnerClasses.Any(cd => cd.Name == name))
            return;

        // check with outer class in typedefs
        name = cd.BaseClassName + "::" + td.Name;
        if (Context.TypeDefs.TryGetValue(name, out name))
        {
            td.Name = name;
            return;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SubtituteType(TypeDecl td, Dictionary<string, string> substitutes)
    {
        if (substitutes.TryGetValue(td.Name, out var newName))
        {
            td.Name = newName;
            if (td.Name.StartsWith("opencascade::handle<"))
            {
                td.Name = td.Name.Substring(20, td.Name.Length - 21).Trim();
                td.IsHandle = true;
            }
            td.IsTemplate = td.Name.Contains("<");
        }
    }

    //--------------------------------------------------------------------------------------------------

    IEnumerable<string> _GetTemplateParts(string source)
    {
        var tpBegin = source.IndexOf('<');
        var tpEnd = source.LastIndexOf('>');
        yield return source.Substring(0, tpBegin);

        // Split on top-level commas only: a template argument can itself be a
        // multi-parameter template instance (e.g. "Extrema_GGenExtPC<A, B, C>"), whose
        // own internal commas must not be treated as separators for the outer list.
        var inner = source.Substring(tpBegin + 1, tpEnd - tpBegin - 1);
        int depth = 0;
        int partStart = 0;
        for (int i = 0; i < inner.Length; i++)
        {
            switch (inner[i])
            {
                case '<': depth++; break;
                case '>': depth--; break;
                case ',' when depth == 0:
                    yield return inner.Substring(partStart, i - partStart).Trim();
                    partStart = i + 1;
                    break;
            }
        }
        var lastPart = inner.Substring(partStart).Trim();
        if (lastPart.Length > 0)
            yield return lastPart;
    }
}