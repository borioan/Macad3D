using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public class DedupeWrappedSignaturesPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        // Two different native overloads can resolve to the identical wrapped C++/CLI
        // signature once TypeWrapper resolution collapses them to the same managed type
        // (e.g. OCCT 8 added a TCollection_ExtendedString(const char16_t*) overload
        // alongside the pre-existing (const wchar_t*) one - both become System::String^).
        // ParsePass/BuildInheritancePass dedupe by *native* type name, which correctly
        // keeps both as distinct methods at that stage; only after wrapper resolution
        // does the collision become visible, so it must be caught here. Keep the first.
        var seen = new HashSet<string>();
        foreach (var md in cd.Methods.Where(md => !md.Ignore))
        {
            if (!_TryGetSignatureKey(md, out var key))
                continue;

            if (!seen.Add(key))
            {
                md.Ignore = true;
            }
        }

        return base.ProcessClass(cd);
    }

    //--------------------------------------------------------------------------------------------------

    bool _TryGetSignatureKey(MethodDecl md, out string key)
    {
        key = null;
        var parts = new List<string> { md.Name, md.MethodType.ToString(), md.IsStatic ? "static" : "instance" };
        foreach (var pd in md.Parameters)
        {
            if (pd.Type?.Wrapper == null)
                return false;
            if (!pd.Type.Wrapper.GetDeclaration(pd.Type, false, out var decl))
                return false;
            parts.Add(decl);
        }
        key = string.Join("|", parts);
        return true;
    }
}
