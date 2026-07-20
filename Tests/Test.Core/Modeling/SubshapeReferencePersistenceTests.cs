using System.Collections.Generic;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling;

/// <summary>
/// Persisted subshape references must resolve to the same geometry after a full
/// save -> reload cycle. All the other tests resolve references in memory; this one
/// serializes the whole document (the reference is a [SerializeMember] on the downstream
/// modifier), deserializes it - which also runs GUID redirection - and checks that the
/// reference still addresses the same subshapes.
/// </summary>
[TestFixture]
public class SubshapeReferencePersistenceTests
{
    [SetUp]
    public void SetUp() => Context.InitWithDefault();

    //--------------------------------------------------------------------------------------------------

    static List<string> _TargetedEdgeSignatures(EdgeModifierBase mod)
    {
        var sigs = new List<string>();
        foreach (var edge in mod.GetAllContourEdges())
        {
            BRepLib.BuildCurve3d(edge);
            var bb = edge.BoundingBox(); bb.SetGap(0);
            sigs.Add(bb.ToRoundedString());
        }
        sigs.Sort();
        return sigs;
    }

    //--------------------------------------------------------------------------------------------------

    static Chamfer _ReloadChamfer(Chamfer chamfer)
    {
        var serialized = Serializer.Serialize(CoreContext.Current.Document, new SerializationContext());
        Context.InitWithDefault();
        var model = Serializer.Deserialize<Model>(serialized, new SerializationContext());
        Assert.That(model, Is.Not.Null, "Model did not deserialize");
        CoreContext.Current.Document = model;
        var reloaded = model.FindInstance(chamfer.Guid) as Chamfer;
        Assert.That(reloaded, Is.Not.Null, "Chamfer not found after reload");
        Assert.That(reloaded.Make(Shape.MakeFlags.None), Is.True, "Chamfer rebuild after reload failed");
        return reloaded;
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A simple edge reference on a box must target the same edge after save/reload")]
    public void ChamferReferenceSurvivesSaveReload()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        CoreContext.Current.Document.Add(box.Body);
        Assert.IsTrue(box.Make(Shape.MakeFlags.None));

        var edgeRef = box.GetSubshapeReference(box.GetBRep().Edges()[0]);
        var chamfer = Chamfer.Create(box.Body, new[] { edgeRef });
        chamfer.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(chamfer.Make(Shape.MakeFlags.None));

        var before = _TargetedEdgeSignatures(chamfer);
        Assert.That(before, Is.Not.Empty, "Chamfer targeted no edges before reload");

        var after = _TargetedEdgeSignatures(_ReloadChamfer(chamfer));
        Assert.That(after, Is.EqualTo(before), "Chamfer targeted different edges after save/reload");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A reference to the untransformed array instance must still resolve after save/reload")]
    public void ChamferOnArrayUntransformedInstanceSurvivesSaveReload()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        CoreContext.Current.Document.Add(box.Body);

        var array = LinearArray.Create(box.Body);
        array.Quantity1 = 3;
        array.Distance1 = 25;
        array.DistanceMode1 = LinearArray.DistanceMode.Interval;
        array.Guid = TestData.CreateGuid(2);
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        // A vertical edge of the untransformed instance (box footprint X in [0,10]).
        var edges = array.GetBRep().Edges();
        TopoDS_Edge originalEdge = null;
        foreach (var e in edges)
        {
            var bb = e.BoundingBox(); bb.SetGap(0);
            if (bb.CornerMax().X <= 10.001 && bb.CornerMin().X >= -0.001
                && (bb.CornerMax().Z - bb.CornerMin().Z) > 5)
            {
                originalEdge = e.ToEdge();
                break;
            }
        }
        Assert.That(originalEdge, Is.Not.Null, "Could not find an edge of the untransformed instance");

        var edgeRef = array.GetSubshapeReference(originalEdge);
        var chamfer = Chamfer.Create(array.Body, new[] { edgeRef });
        chamfer.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(chamfer.Make(Shape.MakeFlags.None));

        var before = _TargetedEdgeSignatures(chamfer);
        // The reference addresses one edge per instance (original + copies); the original must be in there.
        Assert.That(before, Is.Not.Empty, "Chamfer targeted no edges before reload");

        var after = _TargetedEdgeSignatures(_ReloadChamfer(chamfer));
        Assert.That(after, Is.EqualTo(before), "Array reference targeted different edges after save/reload");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A reference into a boolean result (born subshape) must survive save/reload")]
    public void ChamferOnBooleanSurvivesSaveReload()
    {
        // Built manually with distinct GUIDs: TestGeomGenerator.CreateBooleanBodies assigns the target
        // body and its shape the same GUID, which breaks model deserialization (unrelated to references).
        var target = Body.Create(new Box { DimensionX = 20, DimensionY = 20, DimensionZ = 10 });
        target.Position = new Pnt(-10, -10, 0);
        target.Guid = TestData.CreateGuid(1);
        target.Shape.Guid = TestData.CreateGuid(2);
        CoreContext.Current.Document.Add(target);

        var tool = Body.Create(new Cylinder { Radius = 10, Height = 15 });
        tool.Position = new Pnt(10, 10, 0);
        tool.Guid = TestData.CreateGuid(3);
        tool.Shape.Guid = TestData.CreateGuid(4);
        CoreContext.Current.Document.Add(tool);

        var boolOp = BooleanFuse.Create(target, tool.Shape);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        // Pick a couple of edges of the fuse result to chamfer.
        var refs = boolOp.GetBRep().Edges().Take(3).Select(boolOp.GetSubshapeReference).ToArray();
        var chamfer = Chamfer.Create(boolOp.Body, refs);
        chamfer.Guid = TestData.CreateGuid(20);
        Assert.IsTrue(chamfer.Make(Shape.MakeFlags.None));

        var before = _TargetedEdgeSignatures(chamfer);
        Assert.That(before, Is.Not.Empty, "Chamfer targeted no edges before reload");

        var after = _TargetedEdgeSignatures(_ReloadChamfer(chamfer));
        Assert.That(after, Is.EqualTo(before), "Boolean reference targeted different edges after save/reload");
    }
}
