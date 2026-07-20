using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling;

/// <summary>
/// Subshape references must keep addressing the same subshape when an upstream parameter
/// changes and the shape is rebuilt. That is the whole purpose of naming them instead of
/// indexing them, and it is the one property the golden-file comparison cannot see: it
/// pins names to bounding boxes for one fixed set of parameters.
///
/// Each test makes a small, topology-preserving change so that every face of the result can
/// be matched to the face it came from purely geometrically - that matching is the ground
/// truth the references are judged against.
/// </summary>
[TestFixture]
public class SubshapeReferenceStabilityTests
{
    [Test]
    [Description("Every array face/edge - including the untransformed instance - must resolve back to itself")]
    public void LinearArrayUntransformedInstanceResolvesToItself()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);

        var array = LinearArray.Create(box.Body);
        array.Quantity1 = 3;
        array.Distance1 = 25;
        array.DistanceMode1 = LinearArray.DistanceMode.Interval;
        array.Quantity2 = 2;
        array.Distance2 = 30;
        array.DistanceMode2 = LinearArray.DistanceMode.Interval;
        array.Guid = TestData.CreateGuid(2);
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        bool ok = SubshapeReferenceStability.CheckRoundTrip(array, out string summary);
        TestContext.WriteLine(summary);
        Assert.That(ok, Is.True, "Some array subshapes do not resolve back to themselves.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Every array face/edge - including the untransformed instance - must resolve back to itself")]
    public void CircularArrayUntransformedInstanceResolvesToItself()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);

        var array = CircularArray.Create(box.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Guid = TestData.CreateGuid(2);
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        bool ok = SubshapeReferenceStability.CheckRoundTrip(array, out string summary);
        TestContext.WriteLine(summary);
        Assert.That(ok, Is.True, "Some array subshapes do not resolve back to themselves.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A primitive's face references must survive a change of its own dimensions")]
    public void BoxSurvivesDimensionChange()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        Assert.IsTrue(box.Make(Shape.MakeFlags.None));

        bool stable = SubshapeReferenceStability.CheckFacesAfterChange(
            box, () => box.DimensionZ = 14, out string summary);

        TestContext.WriteLine(summary);
        Assert.That(stable, Is.True, "Box references did not survive the dimension change.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Mirror without merged faces: both the original and the copied faces must stay addressable")]
    public void MirrorTouchingSurvivesSourceChange()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        var mirrorPlane = new SubshapeReference(SubshapeType.Face, box.Guid, "ZMax", 0);

        var mirror = Mirror.Create(box.Body, mirrorPlane);
        mirror.Guid = TestData.CreateGuid(10);
        mirror.MergeFaces = false;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));

        bool stable = SubshapeReferenceStability.CheckFacesAfterChange(
            mirror, () => box.DimensionX = 13, out string summary);

        TestContext.WriteLine(summary);
        Assert.That(stable, Is.True, "Mirror references did not survive the source change.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Mirror with merged faces - the case that motivated the whole hardening effort")]
    public void MirrorMergedSurvivesSourceChange()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        var mirrorPlane = new SubshapeReference(SubshapeType.Face, box.Guid, "ZMax", 0);

        var mirror = Mirror.Create(box.Body, mirrorPlane);
        mirror.Guid = TestData.CreateGuid(10);
        mirror.MergeFaces = true;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));

        bool stable = SubshapeReferenceStability.CheckFacesAfterChange(
            mirror, () => box.DimensionX = 13, out string summary);

        TestContext.WriteLine(summary);
        Assert.That(stable, Is.True, "Merged mirror references did not survive the source change.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("An array's instance faces must not swap identity when the spacing changes")]
    public void LinearArraySurvivesDistanceChange()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);

        var array = LinearArray.Create(box.Body);
        array.Quantity1 = 3;
        array.Distance1 = 25;
        array.DistanceMode1 = LinearArray.DistanceMode.Interval;
        array.Guid = TestData.CreateGuid(2);
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        bool stable = SubshapeReferenceStability.CheckFacesAfterChange(
            array, () => array.Distance1 = 30, out string summary);

        TestContext.WriteLine(summary);
        Assert.That(stable, Is.True, "Linear array references did not survive the distance change.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Faces born at a boolean intersection must stay bound to the same geometry")]
    public void BooleanFuseSurvivesOperandChange()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        var cylinder = (shapes.operands[0] as BodyShapeOperand)?.Shape as Cylinder;
        Assert.That(cylinder, Is.Not.Null, "Expected a cylinder as first operand");

        bool stable = SubshapeReferenceStability.CheckFacesAfterChange(
            boolOp, () => cylinder.Height = 18, out string summary);

        TestContext.WriteLine(summary);
        Assert.That(stable, Is.True, "Boolean references did not survive the operand change.");
    }
}
