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

    /// <summary>
    /// For subshapes whose identity is derived from other subshapes (e.g. the
    /// mirrored copy of an operand face), these reference the source subshapes.
    /// The owning shape interprets Name/Index/Sources on resolution.
    /// </summary>
    public SubshapeReference[] Sources { get; private set; }

    //--------------------------------------------------------------------------------------------------

    // These characters structure the serialized form and are therefore not allowed in names.
    static readonly char[] _ReservedNameChars = ['-', '(', ')', '|', ';', '#', '='];

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
            Debug.Assert(Name.IndexOfAny(_ReservedNameChars) < 0, "Subshape names must not contain characters reserved for serialization.");
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
        if (other == null || other.Type != Type || !other.ShapeId.Equals(ShapeId) || other.Name != Name || other.Index != Index)
        {
            return false;
        }

        if (Sources == null || Sources.Length == 0)
        {
            return other.Sources == null || other.Sources.Length == 0;
        }

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
        if (!_AppendHeader(sb))
            return "Invalid";

        if (Sources is { Length: > 0 })
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

    bool _AppendHeader(StringBuilder sb)
    {
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
                return false;
        }
        sb.Append('-');
        sb.Append(ShapeId.ToString("N"));
        sb.Append('-');
        if (!Name.IsNullOrEmpty())
        {
            sb.Append(Name);
            sb.Append('-');
        }
        sb.Append(Index);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Write(Writer writer, SerializationContext context)
    {
        var registry = _GetRegistry(context);
        var s = registry != null ? _ToSerialString(registry) : _ToSerialString();
        if (s.IsNullOrEmpty() || s == "Invalid")
            return false;

        writer.WriteRawString(s);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Holds the interned subshape references of one serialization run (one document, undo step
    /// or clipboard blob). All references written with the same context share one id space, so
    /// each distinct source subtree is stored only once per file. Created on demand.
    /// </summary>
    sealed class SubshapeReferenceRegistry
    {
        internal readonly Dictionary<SubshapeReference, int> WrittenIds = new();
        internal readonly Dictionary<string, SubshapeReference> ReadEntries = new();
    }

    //--------------------------------------------------------------------------------------------------

    static SubshapeReferenceRegistry _GetRegistry(SerializationContext context)
    {
        if (context == null)
            return null;

        var registry = context.GetInstance<SubshapeReferenceRegistry>();
        if (registry == null)
        {
            registry = new SubshapeReferenceRegistry();
            context.SetInstance(registry);
        }
        return registry;
    }

    //--------------------------------------------------------------------------------------------------

    #region Interned serialization

    /// <summary>
    /// Serializes the reference using the context-wide id space: every source subtree is interned
    /// into the registry, and its entry is written into the trailing table of the first reference
    /// that uses it. Later references just point to the id:
    ///   First:  Main(#1|#2);1=Entry;2=Entry(#1)
    ///   Later:  Main(#1|#2)
    /// So each distinct source subtree is stored only once per file.
    /// </summary>
    string _ToSerialString(SubshapeReferenceRegistry registry)
    {
        if (Sources == null || Sources.Length == 0)
            return ToString();

        var sb = new StringBuilder();
        List<(int Id, string Entry)> newEntries = new();
        if (!_AppendGlobalInterned(sb, this, registry, newEntries))
            return ToString();

        foreach (var (id, entry) in newEntries)
        {
            sb.Append(';');
            sb.Append(id);
            sb.Append('=');
            sb.Append(entry);
        }
        return sb.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    static bool _AppendGlobalInterned(StringBuilder sb, SubshapeReference reference, SubshapeReferenceRegistry registry,
                                      List<(int Id, string Entry)> newEntries)
    {
        if (!reference._AppendHeader(sb))
            return false;

        if (reference.Sources is { Length: > 0 })
        {
            sb.Append('(');
            for (var i = 0; i < reference.Sources.Length; i++)
            {
                if (i > 0)
                {
                    sb.Append('|');
                }

                var source = reference.Sources[i];
                if (!registry.WrittenIds.TryGetValue(source, out var id))
                {
                    // First use in this file: write the entry, sources of the entry first
                    var entrySb = new StringBuilder();
                    if (!_AppendGlobalInterned(entrySb, source, registry, newEntries))
                        return false;
                    id = registry.WrittenIds.Count + 1;
                    registry.WrittenIds.Add(source, id);
                    newEntries.Add((id, entrySb.ToString()));
                }
                sb.Append('#');
                sb.Append(id);
            }
            sb.Append(')');
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Serializes the reference like ToString(), except that source subtrees occurring more than
    /// once in the graph are stored only once in a trailing id table and referenced as #id:
    ///   Main(#1|...);1=Entry;2=Entry(#1)
    /// This keeps the stored string linear in the number of distinct sources, no matter how
    /// often subtrees are shared along a long shape stack. A reference without shared subtrees
    /// serializes exactly as ToString(). Used when no serialization context is available.
    /// </summary>
    string _ToSerialString()
    {
        if (Sources == null || Sources.Length == 0)
            return ToString();

        // Collect the distinct source subtrees (by structural equality) and count how often
        // each one is used as a source.
        Dictionary<SubshapeReference, SubshapeReference> canonical = new();
        _CollectDistinctSources(this, canonical);

        Dictionary<SubshapeReference, int> useCount = new();
        _CountSourceUses(this, canonical, useCount);
        foreach (var node in canonical.Keys)
        {
            _CountSourceUses(node, canonical, useCount);
        }

        if (!useCount.Values.Any(count => count > 1))
            return ToString();

        Dictionary<SubshapeReference, int> ids = new();
        List<string> entries = new();
        var sb = new StringBuilder();
        if (!_AppendInterned(sb, this, canonical, useCount, ids, entries))
            return ToString();

        for (var i = 0; i < entries.Count; i++)
        {
            sb.Append(';');
            sb.Append(i + 1);
            sb.Append('=');
            sb.Append(entries[i]);
        }
        return sb.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    static void _CollectDistinctSources(SubshapeReference reference, Dictionary<SubshapeReference, SubshapeReference> canonical)
    {
        if (reference.Sources == null)
            return;

        foreach (var source in reference.Sources)
        {
            if (canonical.ContainsKey(source))
                continue;

            canonical.Add(source, source);
            _CollectDistinctSources(source, canonical);
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _CountSourceUses(SubshapeReference reference, Dictionary<SubshapeReference, SubshapeReference> canonical,
                                 Dictionary<SubshapeReference, int> useCount)
    {
        if (reference.Sources == null)
            return;

        foreach (var source in reference.Sources)
        {
            var node = canonical[source];
            useCount[node] = useCount.TryGetValue(node, out var count) ? count + 1 : 1;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static bool _AppendInterned(StringBuilder sb, SubshapeReference reference,
                                Dictionary<SubshapeReference, SubshapeReference> canonical,
                                Dictionary<SubshapeReference, int> useCount,
                                Dictionary<SubshapeReference, int> ids, List<string> entries)
    {
        if (!reference._AppendHeader(sb))
            return false;

        if (reference.Sources is { Length: > 0 })
        {
            sb.Append('(');
            for (var i = 0; i < reference.Sources.Length; i++)
            {
                if (i > 0)
                {
                    sb.Append('|');
                }

                var node = canonical[reference.Sources[i]];
                if (useCount[node] > 1)
                {
                    if (!ids.TryGetValue(node, out var id))
                    {
                        var entrySb = new StringBuilder();
                        if (!_AppendInterned(entrySb, node, canonical, useCount, ids, entries))
                            return false;
                        entries.Add(entrySb.ToString());
                        id = entries.Count;
                        ids.Add(node, id);
                    }
                    sb.Append('#');
                    sb.Append(id);
                }
                else
                {
                    if (!_AppendInterned(sb, reference.Sources[i], canonical, useCount, ids, entries))
                        return false;
                }
            }
            sb.Append(')');
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------

    public bool Read(Reader reader, SerializationContext context)
    {
        return _ParseSerialString(reader.ReadValueString(), context);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Holds the id table of an interned serialized reference while parsing.
    /// Entries are expanded lazily and shared, so a subtree referenced multiple
    /// times is materialized as a single instance. When a serialization context
    /// is present, the resolved entries are shared across all references of the
    /// same run, so ids defined by an earlier reference stay available.
    /// </summary>
    sealed class ParseTable
    {
        internal readonly Dictionary<string, string> Entries = new();
        internal readonly Dictionary<string, SubshapeReference> Resolved;
        internal readonly HashSet<string> InProgress = new();

        internal ParseTable(Dictionary<string, SubshapeReference> sharedResolved)
        {
            Resolved = sharedResolved ?? new Dictionary<string, SubshapeReference>();
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _ParseSerialString(string s, SerializationContext context)
    {
        if (s.IsNullOrEmpty())
            return false;

        var registry = _GetRegistry(context);

        // Split off the id table: Main;1=Entry;2=Entry
        ParseTable table = null;
        int tableStart = s.IndexOf(';');
        if (tableStart >= 0)
        {
            table = new ParseTable(registry?.ReadEntries);
            int pos = tableStart + 1;
            while (pos < s.Length)
            {
                int end = s.IndexOf(';', pos);
                if (end < 0)
                    end = s.Length;
                int eq = s.IndexOf('=', pos);
                if (eq <= pos || eq >= end)
                    return false;
                table.Entries[s.Substring(pos, eq - pos)] = s.Substring(eq + 1, end - eq - 1);
                pos = end + 1;
            }
            if (table.Entries.Count == 0)
                return false;

            s = s.Substring(0, tableStart);
        }
        else if (registry != null)
        {
            // No own table, but #ids may point to entries defined by earlier references
            table = new ParseTable(registry.ReadEntries);
        }

        if (!_ParseFromString(s, context, table))
            return false;

        // Make all entries defined here available to later references of the same run
        if (registry != null && table != null)
        {
            foreach (var id in table.Entries.Keys)
            {
                if (_ResolveTableEntry(id, context, table) == null)
                    return false;
            }
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static SubshapeReference _ResolveTableEntry(string id, SerializationContext context, ParseTable table)
    {
        if (table == null)
            return null;

        if (table.Resolved.TryGetValue(id, out var resolved))
            return resolved;

        if (!table.Entries.TryGetValue(id, out var entryString))
            return null;

        if (!table.InProgress.Add(id))
            return null; // Circular reference

        var entry = new SubshapeReference();
        bool isValid = entry._ParseFromString(entryString, context, table);
        table.InProgress.Remove(id);
        if (!isValid)
            return null;

        table.Resolved.Add(id, entry);
        return entry;
    }

    //--------------------------------------------------------------------------------------------------

    bool _ParseFromString(string s, SerializationContext context, ParseTable table = null)
    {
        if (s.IsNullOrEmpty())
            return false;

        ReadOnlySpan<char> span = s.AsSpan();

        // Split off the source list: Type-Guid[-Name]-Index(Source|Source)
        int sourcesStart = span.IndexOf('(');
        if (sourcesStart >= 0)
        {
            if (span[^1] != ')')
                return false;

            var sourcesSpan = span.Slice(sourcesStart + 1, span.Length - sourcesStart - 2);
            Sources = _GetSourceListItems(sourcesSpan).Select(sourceString =>
            {
                if (sourceString.Length > 1 && sourceString[0] == '#')
                    return _ResolveTableEntry(sourceString.Substring(1), context, table);

                var source = new SubshapeReference();
                if (!source._ParseFromString(sourceString, context, table))
                    return null;
                return source;
            }).ToArray();
            if (Sources.Length == 0 || Sources.Contains(null))
                return false;

            span = span.Slice(0, sourcesStart);
        }

        // Parse: Type-Guid[-Name]-Index
        var parts = new List<string>();
        int lastIndex = 0;

        for (int i = 0; i <= span.Length; i++)
        {
            if (i == span.Length || span[i] == '-')
            {
                parts.Add(span.Slice(lastIndex, i - lastIndex).ToString());
                lastIndex = i + 1;
            }
        }

        if (parts.Count < 3 || parts.Count > 4)
            return false;

        switch (parts[0])
        {
            case "V":
                Type = SubshapeType.Vertex;
                break;
            case "E":
                Type = SubshapeType.Edge;
                break;
            case "F":
                Type = SubshapeType.Face;
                break;
            default:
                return false;
        }

        ShapeId = new Guid(parts[1]);

        if (parts.Count == 4)
        {
            Name = parts[2];
            Index = int.Parse(parts[3]);
        }
        else
        {
            Index = int.Parse(parts[2]);
        }

        // Safe for later GUID redirection
        context?.GetInstanceList<SubshapeReference>().Add(this);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static List<string> _GetSourceListItems(ReadOnlySpan<char> s)
    {
        var result = new List<string>();
        int depth = 0;
        int start = 0;
        for (int i = 0; i < s.Length; i++)
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
                    result.Add(s.Slice(start, i - start).ToString());
                    start = i + 1;
                    break;
            }
        }
        result.Add(s.Slice(start).ToString());
        return result;
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