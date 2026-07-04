using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using Macad.Common;
using Macad.Common.Serialization;

namespace Macad.Core.Shapes;

[SerializeType]
public class SubshapeReference : ISerializeValue, IEquatable<SubshapeReference>
{
    public SubshapeType Type { get; private set; }
    public Guid ShapeId { get; private set; }
    public string Name { get; private set; }
    public int Index { get; private set; }

    // For subshapes whose identity is derived from other subshapes (e.g. the
    // mirrored copy of an operand face), these reference the source subshapes.
    // The owning shape interprets Name/Index/Sources on resolution.
    public SubshapeReference[] Sources { get; private set; }

    //--------------------------------------------------------------------------------------------------

    SubshapeReference()
    {
        // Used only in deserialization
    }

    //--------------------------------------------------------------------------------------------------

    public SubshapeReference(SubshapeType type, Guid shapeId, int index)
    {
        Type = type;
        ShapeId = shapeId;
        Index = index;
    }

    //--------------------------------------------------------------------------------------------------

    public SubshapeReference(SubshapeType type, Guid shapeId, string name, int index)
    {
        Type = type;
        ShapeId = shapeId;
        Name = name;
        Index = index;
        if (!Name.IsNullOrEmpty())
        {
            Debug.Assert(!Name.Contains("-"));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public SubshapeReference(SubshapeType type, Guid shapeId, string name, int index, SubshapeReference[] sources)
        : this(type, shapeId, name, index)
    {
        Debug.Assert(sources == null || sources.All(src => src != null));
        Sources = sources;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Equals(SubshapeReference other)
    {
        if ((other == null) || (other.Type != Type) || !other.ShapeId.Equals(ShapeId) || (other.Name != Name) || (other.Index != Index))
            return false;

        if (Sources == null || Sources.Length == 0)
            return other.Sources == null || other.Sources.Length == 0;

        return other.Sources != null && Sources.SequenceEqual(other.Sources);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Equals(object obj)
    {
        if (obj is SubshapeReference other)
        {
            return Equals(other);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "NonReadonlyMemberInGetHashCode")]
    public override int GetHashCode()
    {
        var hash = ShapeId.GetHashCode() ^ (int)Type ^ Index ^ (Name ?? string.Empty).GetHashCode();
        if (Sources != null)
        {
            foreach (var source in Sources)
            {
                hash ^= source.GetHashCode();
            }
        }
        return hash;
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        var sb = new StringBuilder();
        switch (Type)
        {
            case SubshapeType.Vertex:
                sb.Append('V');
                break;

            case SubshapeType.Edge:
                sb.Append('E');
                break;

            case SubshapeType.Face:
                sb.Append('F');
                break;

            default:
                return "Invalid";
        }
        sb.Append('-');
        sb.Append(ShapeId.ToString("N"));
        sb.Append('-');
        if (!Name.IsNullOrEmpty())
        {
            sb.Append(Name);
            sb.Append('-');
        }
        sb.Append(Index.ToString());

        if (Sources != null && Sources.Length > 0)
        {
            sb.Append('(');
            for (var i = 0; i < Sources.Length; i++)
            {
                if (i > 0)
                {
                    sb.Append('|');
                }
                sb.Append(Sources[i]);
            }
            sb.Append(')');
        }
        return sb.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    public bool Write(Writer writer, SerializationContext context)
    {
        var s = ToString();
        if (s.IsNullOrEmpty() || s == "Invalid")
            return false;

        writer.WriteRawString(s);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Read(Reader reader, SerializationContext context)
    {
        return _ParseFromString(reader.ReadValueString(), context);
    }

    //--------------------------------------------------------------------------------------------------

    bool _ParseFromString(string s, SerializationContext context)
    {
        if (s.IsNullOrEmpty())
            return false;

        // Split off the source list: Type-Guid[-Name]-Index(Source|Source)
        var sourcesStart = s.IndexOf('(');
        if (sourcesStart >= 0)
        {
            if (s[s.Length - 1] != ')')
                return false;

            var sourceList = new List<SubshapeReference>();
            foreach (var sourceString in _SplitSourceList(s.Substring(sourcesStart + 1, s.Length - sourcesStart - 2)))
            {
                var source = new SubshapeReference();
                if (!source._ParseFromString(sourceString, context))
                    return false;
                sourceList.Add(source);
            }
            if (sourceList.Count == 0)
                return false;

            Sources = sourceList.ToArray();
            s = s.Substring(0, sourcesStart);
        }

        var parts = s.Split('-');
        if (parts.Length < 3 || parts.Length > 4)
            return false;

        switch (parts[0])
        {
            case "V": Type = SubshapeType.Vertex;
                break;
            case "E": Type = SubshapeType.Edge;
                break;
            case "F": Type = SubshapeType.Face;
                break;
            default:
                return false;
        }

        ShapeId =new Guid(parts[1]);

        if (parts.Length == 4)
        {
            Name = parts[2];
            Index = Int32.Parse(parts[3]);
        }
        else {
            Index = Int32.Parse(parts[2]);
        }

        // Safe for later GUID redirection
        context?.GetInstanceList<SubshapeReference>().Add(this);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static IEnumerable<string> _SplitSourceList(string s)
    {
        // Split on '|', but only at nesting depth 0
        int depth = 0;
        int start = 0;
        for (var i = 0; i < s.Length; i++)
        {
            switch (s[i])
            {
                case '(':
                    depth++;
                    break;
                case ')':
                    depth--;
                    break;
                case '|' when depth == 0:
                    yield return s.Substring(start, i - start);
                    start = i + 1;
                    break;
            }
        }
        yield return s.Substring(start);
    }

    //--------------------------------------------------------------------------------------------------

    #region Static Functions

    static SubshapeReference()
    {
        Serializer.Deserialized += _Serializer_Deserialized;
    }

    //--------------------------------------------------------------------------------------------------

    static void _Serializer_Deserialized(object result, SerializationContext context)
    {
        // The GUID changes in certain deserialization cases, so we need to redirect them
        var instances = context?.GetInstanceList<SubshapeReference>();
        var guidMap = context?.GetInstance<Dictionary<Guid, Guid>>();
        if (guidMap == null || instances == null || instances.Count == 0)
        {
            return;
        }

        foreach (var subshapeReference in instances)
        {
            if (guidMap.TryGetValue(subshapeReference.ShapeId, out var newGuid))
            {
                subshapeReference.ShapeId = newGuid;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}