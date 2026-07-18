// THROWAWAY measurement harness. NOT a merge candidate — it uses reflection, writes files, and
// asserts nothing. It exists only to reproduce the reference-footprint numbers.
//
// Measured with: OCCT 7.9.2 (the version Macad links against today), on this branch's base commit.
// Run all four:  dotnet test --filter ReferenceFootprint      (~2-4 min: it opens and rebuilds every sample)
// Output goes to the test directory, or to %MACAD_MEASURE_OUTDIR% if set. Our own run is committed
// alongside this file in _results/, so you can diff your run against ours directly.
//
// Which test answers which question:
//   MeasureRealModels        -> the naming footprint + the depth histogram (metrics 1-3).
//                               Note lines ~75-80: every model is Invalidate()'d and REBUILT, so the
//                               NamedSubshapes measured are produced by the current engine at rebuild,
//                               not read from the file. That is why the sample models' index-based
//                               stored references don't limit what is measured.
//                               Depth is taken by calling GetSubshapeReference for EVERY face and edge
//                               of each final shape. That is deliberately an upper bound, not what a
//                               real session builds — a session only references what the user binds.
//   MeasureAdversarialStack  -> the growth law (metric 4): stacked Mirror(KeepOriginal, MergeFaces),
//                               each copy adjacent so faces really merge, forcing a split per level.
//                               This is the test to re-run after the naming filter lands.
//   MeasureVertexUniqueness  -> whether a vertex's incident-edge set identifies it, on real models.
//   MeasureVertexPrimitives  -> the same, for the seam/pole cases (cylinder, sphere).
//
// The geometry denominator is BRepExchange.WriteBinary(...).Length — the serialized size of the
// cached BRep. That understates live native memory, so the naming/geometry share reported here is
// an over-estimate; the real share is lower.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core._Measure;

[TestFixture]
public class ReferenceFootprint
{
    // Output directory: override with MACAD_MEASURE_OUTDIR, otherwise the test directory.
    static readonly string _OutDir =
        Environment.GetEnvironmentVariable("MACAD_MEASURE_OUTDIR") is { Length: > 0 } dir
            ? dir
            : TestContext.CurrentContext.TestDirectory;

    // Reflection handle for the protected naming storage. Reflection is deliberate: it keeps the
    // measurement non-invasive, so what is measured is the engine exactly as it ships, unpatched.
    static readonly FieldInfo _NamedSubshapesField =
        typeof(Shape).GetField("NamedSubshapes", BindingFlags.Instance | BindingFlags.NonPublic);

    [SetUp]
    public void SetUp()
    {
        // Fail loudly rather than silently reporting zero naming bytes if the field is ever renamed.
        Assert.That(_NamedSubshapesField, Is.Not.Null,
                    "Shape.NamedSubshapes not found by reflection — the measurement would silently report zeros.");

        Context.InitWithView(500);
        Context.Current.Workspace.GridEnabled = false;
    }

    [TearDown]
    public void TearDown() => Context.Current.Deinit();

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeasureRealModels()
    {
        var samplesDir = Path.Combine(TestData.TestDataDirectory, @"..\Samples");
        var files = Directory.EnumerateFiles(samplesDir, "*.model").OrderByDescending(f => new FileInfo(f).Length);

        var sb = new StringBuilder();
        sb.AppendLine("=== HELD NAMING FOOTPRINT — real models ===");
        sb.AppendLine("model | fileKB | shapes | namedSubs | nameChars | srcEntries | namingBytes | brepBytes | naming/brep% | refs | depthMed | depthMax");

        foreach (var file in files)
        {
            var ctx = Context.Current;
            if (!ctx.DocumentController.OpenModel(file))
            {
                sb.AppendLine($"{Path.GetFileName(file)} | OPEN FAILED");
                continue;
            }

            // Rebuild with the current engine so NamedSubshapes reflect today's code.
            foreach (var e in ctx.Document) e.Invalidate();
            foreach (var body in ctx.Document.OfType<Body>())
                if (!body.RootShape.IsValid) body.RootShape.Make(Shape.MakeFlags.None);

            var m = MeasureBodies(ctx.Document.OfType<Body>());
            var pctNaming = (m.BRepBytes > 0 ? 100.0 * m.NamingBytes / m.BRepBytes : 0).ToString("F2", CultureInfo.InvariantCulture);
            sb.AppendLine($"{Path.GetFileName(file)} | {new FileInfo(file).Length / 1024} | {m.ShapeCount} | {m.NamedSubshapeCount} | {m.NameChars} | {m.SourceEntries} | {m.NamingBytes} | {m.BRepBytes} | {pctNaming} | {m.RefCount} | {m.DepthMedian} | {m.DepthMax}");
            sb.AppendLine("    depth histogram: " + string.Join("  ", m.DepthHistogram.OrderBy(k => k.Key).Select(k => $"d{k.Key}={k.Value}")));

            ctx.DocumentController.NewModel(); // reset before next model
        }

        var outPath = Path.Combine(_OutDir, "footprint_real.txt");
        File.WriteAllText(outPath, sb.ToString());
        TestContext.WriteLine(sb.ToString());
        TestContext.WriteLine("written: " + outPath);
    }

    //--------------------------------------------------------------------------------------------------

    // Vertex identifiability: the developer's proposal is to name a vertex by "the edges that share it".
    // This measures whether that incident-edge SET uniquely identifies each vertex on real models,
    // and how many vertices are degenerate (<2 incident edges → can't be named this way).
    [Test]
    public void MeasureVertexUniqueness()
    {
        var samplesDir = Path.Combine(TestData.TestDataDirectory, @"..\Samples");
        var files = Directory.EnumerateFiles(samplesDir, "*.model").OrderByDescending(f => new FileInfo(f).Length);

        var sb = new StringBuilder();
        sb.AppendLine("=== VERTEX identifiability by incident-edge set ===");
        sb.AppendLine("model | vertices | uniqueSet | colliding | degenerate(<2edges) | %unique | minEdges | maxEdges");

        foreach (var file in files)
        {
            var ctx = Context.Current;
            if (!ctx.DocumentController.OpenModel(file)) { sb.AppendLine($"{Path.GetFileName(file)} | OPEN FAILED"); continue; }
            foreach (var e in ctx.Document) e.Invalidate();
            foreach (var body in ctx.Document.OfType<Body>())
                if (!body.RootShape.IsValid) body.RootShape.Make(Shape.MakeFlags.None);

            int vTot = 0, vUnique = 0, vColl = 0, vDegen = 0, minE = int.MaxValue, maxE = 0;

            foreach (var body in ctx.Document.OfType<Body>())
            {
                var brep = body.RootShape.GetBRep();
                if (brep == null) continue;
                VertexBrep(brep, ref vTot, ref vUnique, ref vColl, ref vDegen, ref minE, ref maxE);
            }

            var pct = (vTot > 0 ? 100.0 * vUnique / vTot : 0).ToString("F1", CultureInfo.InvariantCulture);
            sb.AppendLine($"{Path.GetFileName(file)} | {vTot} | {vUnique} | {vColl} | {vDegen} | {pct} | {(minE == int.MaxValue ? 0 : minE)} | {maxE}");
            ctx.DocumentController.NewModel();
        }

        var outPath = Path.Combine(_OutDir, "vertex_uniqueness.txt");
        File.WriteAllText(outPath, sb.ToString());
        TestContext.WriteLine(sb.ToString());
        TestContext.WriteLine("written: " + outPath);
    }

    //--------------------------------------------------------------------------------------------------

    // Direct probe of the seam/pole cases I flagged: pure curved primitives.
    [Test]
    public void MeasureVertexPrimitives()
    {
        var ctx = Context.Current;
        var sb = new StringBuilder();
        sb.AppendLine("=== VERTEX identifiability — curved primitives (seam/pole cases) ===");
        sb.AppendLine("primitive | vertices | uniqueSet | colliding | degenerate | minEdges | maxEdges");

        var cases = new (string, Func<Shape>)[]
        {
            ("Cylinder", () => { var s = new Cylinder { Radius = 10, Height = 20 }; Body.Create(s); return s; }),
            ("Sphere",   () => { var s = new Sphere   { Radius = 10 };             Body.Create(s); return s; }),
        };

        foreach (var (name, make) in cases)
        {
            ctx.DocumentController.NewModel();
            Shape shape;
            try { shape = make(); } catch (Exception e) { sb.AppendLine($"{name} | CTOR FAILED: {e.Message}"); continue; }
            if (!shape.Make(Shape.MakeFlags.None)) { sb.AppendLine($"{name} | MAKE FAILED"); continue; }
            var brep = shape.GetBRep();
            if (brep == null) { sb.AppendLine($"{name} | NO BREP"); continue; }

            int vTot = 0, vUnique = 0, vColl = 0, vDegen = 0, minE = int.MaxValue, maxE = 0;
            VertexBrep(brep, ref vTot, ref vUnique, ref vColl, ref vDegen, ref minE, ref maxE);
            sb.AppendLine($"{name} | {vTot} | {vUnique} | {vColl} | {vDegen} | {(minE == int.MaxValue ? 0 : minE)} | {maxE}");
        }

        var outPath = Path.Combine(_OutDir, "vertex_primitives.txt");
        File.WriteAllText(outPath, sb.ToString());
        TestContext.WriteLine(sb.ToString());
        TestContext.WriteLine("written: " + outPath);
    }

    //--------------------------------------------------------------------------------------------------

    // Vertex identified by its incident-edge set; count unique vs colliding vs degenerate (<2 edges).
    void VertexBrep(TopoDS_Shape brep, ref int vTot, ref int vUnique, ref int vColl, ref int vDegen, ref int minE, ref int maxE)
    {
        var edges = brep.Edges();
        var verts = brep.Vertices();

        var incident = new List<int>[verts.Count];
        for (int i = 0; i < verts.Count; i++) incident[i] = new List<int>();
        for (int ei = 0; ei < edges.Count; ei++)
            foreach (var ev in edges[ei].Vertices())
            {
                int vi = verts.IndexOfSame(ev);
                if (vi >= 0) incident[vi].Add(ei);
            }

        var local = new Dictionary<string, int>();
        var keys = new string[verts.Count];
        for (int vi = 0; vi < verts.Count; vi++)
        {
            var inc = incident[vi];
            int ec = inc.Count;
            if (ec < minE) minE = ec;
            if (ec > maxE) maxE = ec;
            if (ec < 2) { keys[vi] = null; vDegen++; continue; }
            inc.Sort();
            var key = string.Join(",", inc);
            local[key] = local.GetValueOrDefault(key) + 1;
            keys[vi] = key;
        }
        for (int vi = 0; vi < verts.Count; vi++)
        {
            vTot++;
            if (keys[vi] == null) continue;
            if (local[keys[vi]] == 1) vUnique++; else vColl++;
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeasureAdversarialStack()
    {
        var ctx = Context.Current;
        ctx.DocumentController.NewModel();

        var box = TestGeomGenerator.CreateBox();
        var body = box.Body;
        body.RootShape.Make(Shape.MakeFlags.None);

        var sb = new StringBuilder();
        sb.AppendLine("=== ADVERSARIAL — stacked Mirror(KeepOriginal, MergeFaces), adjacent along +X ===");
        sb.AppendLine("N | shapes | namedSubs | namingBytes | refs | depthMax | deltaBytesVsPrev");

        long prev = 0;
        const int maxN = 7;
        for (int n = 0; n <= maxN; n++)
        {
            if (n > 0)
            {
                var brep = body.RootShape.GetBRep();
                var bb = brep.BoundingBox(); bb.SetGap(0);
                var lo = bb.CornerMin(); var hi = bb.CornerMax();
                // Mirror about the current +X face plane: reflected copy is adjacent, faces merge.
                var axis = new Ax2(new Pnt(hi.X, (lo.Y + hi.Y) / 2, (lo.Z + hi.Z) / 2), Dir.DX);
                var mirror = Mirror.Create(body, axis);
                if (!mirror.Make(Shape.MakeFlags.None)) { sb.AppendLine($"{n} | MAKE FAILED"); break; }
            }

            var m = MeasureBodies(new[] { body });
            sb.AppendLine($"{n} | {m.ShapeCount} | {m.NamedSubshapeCount} | {m.NamingBytes} | {m.RefCount} | {m.DepthMax} | {m.NamingBytes - prev}");
            prev = m.NamingBytes;
        }

        var outPath = Path.Combine(_OutDir, "footprint_adversarial.txt");
        File.WriteAllText(outPath, sb.ToString());
        TestContext.WriteLine(sb.ToString());
        TestContext.WriteLine("written: " + outPath);
    }

    //--------------------------------------------------------------------------------------------------

    // Walk every shape in every body, accumulate the held-naming metrics + depth of references
    // built for the final RootShape subshapes (what a user actually binds to).
    Metrics MeasureBodies(IEnumerable<Body> bodies)
    {
        var m = new Metrics();
        var seen = new HashSet<Shape>();

        foreach (var body in bodies)
        {
            // Held naming memory + held geometry: sum over the whole modifier chain
            // (after a full rebuild every shape is valid, so every _BRep and NamedSubshapes list is held).
            foreach (var shape in EnumerateShapes(body.RootShape, seen))
            {
                m.ShapeCount++;

                // Held geometry (fair denominator): this shape's cached BRep, exactly as Macad caches it.
                var sbrep = shape.GetBRep();
                if (sbrep != null)
                {
                    try { m.BRepBytes += Macad.Occt.Helper.BRepExchange.WriteBinary(sbrep, false)?.Length ?? 0; }
                    catch { }
                }

                var named = _NamedSubshapesField?.GetValue(shape) as System.Collections.IEnumerable;
                if (named == null) continue;
                foreach (var ns in named)
                {
                    m.NamedSubshapeCount++;
                    var t = ns.GetType();
                    var name = t.GetField("Name", BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.Public)?.GetValue(ns) as string;
                    var sources = t.GetField("Sources", BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.Public)?.GetValue(ns) as Array;
                    int nameLen = name?.Length ?? 0;
                    int srcCount = sources?.Length ?? 0;
                    m.NameChars += nameLen;
                    m.SourceEntries += srcCount;
                    // Held bytes per the developer's own model:
                    //   fixed per NamedSubshape (type+index+refs+shape handle) ~44b
                    //   name: 16b string obj + 2b/char
                    //   sources: 16b array obj + 8b/entry  (TShape handles shared with BRep, not counted)
                    m.NamingBytes += 44 + (nameLen > 0 ? 16 + 2 * nameLen : 0) + (srcCount > 0 ? 16 + 8 * srcCount : 0);
                }
            }

            // Depth of references for the FINAL shape's faces/edges (what users bind to).
            var brep = body.RootShape.GetBRep();
            if (brep != null)
            {
                foreach (var face in brep.Faces()) AccumulateDepth(body.RootShape, face, m);
                foreach (var edge in brep.Edges()) AccumulateDepth(body.RootShape, edge, m);
            }
        }

        m.Finish();
        return m;
    }

    void AccumulateDepth(Shape shape, TopoDS_Shape sub, Metrics m)
    {
        SubshapeReference r;
        try { r = shape.GetSubshapeReference(sub); } catch { return; }
        if (r == null) return;
        m.RefCount++;
        int d = DepthOf(r);
        m.Depths.Add(d);
        m.DepthHistogram.TryGetValue(d, out int c);
        m.DepthHistogram[d] = c + 1;
    }

    static int DepthOf(SubshapeReference r)
    {
        if (r?.Sources == null || r.Sources.Length == 0) return 0;
        return 1 + r.Sources.Max(DepthOf);
    }

    static IEnumerable<Shape> EnumerateShapes(IShapeOperand op, HashSet<Shape> seen)
    {
        if (op is Shape s)
        {
            if (!seen.Add(s)) yield break;
            yield return s;
            if (s is ModifierBase mod)
                foreach (var operand in mod.Operands)
                    if (operand != null)
                        foreach (var child in EnumerateShapes(operand, seen))
                            yield return child;
        }
    }

    //--------------------------------------------------------------------------------------------------

    class Metrics
    {
        public int ShapeCount, NamedSubshapeCount, NameChars, SourceEntries, RefCount;
        public long NamingBytes, BRepBytes;
        public readonly List<int> Depths = new();
        public readonly Dictionary<int, int> DepthHistogram = new();
        public int DepthMedian, DepthMax;

        public void Finish()
        {
            if (Depths.Count == 0) return;
            Depths.Sort();
            DepthMedian = Depths[Depths.Count / 2];
            DepthMax = Depths[^1];
        }
    }
}
