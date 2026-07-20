using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;
using System.IO;

namespace Macad.Test.Core.Modeling.Modify;

[TestFixture]
public class BooleanTests
{
    const string _BasePath = @"Modeling\Modify\Boolean";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Fuse()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Fuse")));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void FuseNoMergeFaces()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.MergeFaces = false;

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "FuseNoMergeFaces")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Common()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(true);

        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Common")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cut()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanCut.Create(shapes.target, shapes.operands);

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Cut")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Section and split subshapes of a fuse must get order-independent references, not raw indices")]
    public void SubshapeReferencesFuse()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);
        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesFuse"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Section and split subshapes of a fuse must get order-independent references, not raw indices")]
    public void SubshapeReferencesFuseNoMergeFaces()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);
        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.MergeFaces = false;
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesFuseNoMergeFaces"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Section and split subshapes of a cut must get order-independent references, not raw indices")]
    public void SubshapeReferencesCut()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);
        var boolOp = BooleanCut.Create(shapes.target, shapes.operands);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesCut"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferencesCommonOfTwo()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesCommonOfTwo"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("The common of three boolean bodies is currently leading to an invalid shape, so we accept " +
                 "sub-optimal references until we fixed the underlying issue")]
    public void SubshapeReferencesCommonOfThree()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(true);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp, allowedIndexBased: 14);
    }

    //--------------------------------------------------------------------------------------------------


    [Test]
    public void SubshapeReferences_SphereCutThroughPoleSeam()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 20, DimensionY = 4, DimensionZ = 20 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(0, -2, 0));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences_SphereHalfCutOnSeamPlane()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 40, DimensionY = 20, DimensionZ = 40 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(-20, -20, -20));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences_SpheresFuseAlongSeam()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var sph2 = new Sphere { Radius = 10 };
        var tool = TestGeomGenerator.CreateBody(sph2, new Pnt(0, 0, 12));
        var op = BooleanFuse.Create(target, new BodyShapeOperand(tool));
        op.MergeFaces = false;
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences_CylinderCutBoxOnSeam()
    {
        var cyl = new Cylinder { Radius = 10, Height = 10 };
        var target = TestGeomGenerator.CreateBody(cyl, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 20, DimensionY = 4, DimensionZ = 20 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(0, -2, -5));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(op);
    }

    //--------------------------------------------------------------------------------------------------

}