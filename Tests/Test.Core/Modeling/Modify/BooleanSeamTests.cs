using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Modify;

// Guards the "Between" edge-identity scheme against degenerate section edges:
// edges bordering fewer than two result faces (seam edges on periodic surfaces,
// free edges) which the scheme cannot identify. These geometries deliberately
// stress the seams of cylinders and spheres. If a boolean ever produces a NEW
// such edge, AssertResolvable fails on a raw-index reference and this catches it.
[TestFixture]
public class BooleanSeamTests
{
    [Test]
    public void SphereCutThroughPoleSeam()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 20, DimensionY = 4, DimensionZ = 20 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(0, -2, 0));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        SubshapeReferenceCompare.AssertResolvable(op);
        SubshapeReferenceCompare.AssertStableAcrossRebuild(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SphereHalfCutOnSeamPlane()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 40, DimensionY = 20, DimensionZ = 40 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(-20, -20, -20));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        SubshapeReferenceCompare.AssertResolvable(op);
        SubshapeReferenceCompare.AssertStableAcrossRebuild(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SpheresFuseAlongSeam()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var sph2 = new Sphere { Radius = 10 };
        var tool = TestGeomGenerator.CreateBody(sph2, new Pnt(0, 0, 12));
        var op = BooleanFuse.Create(target, new BodyShapeOperand(tool));
        op.MergeFaces = false;
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        SubshapeReferenceCompare.AssertResolvable(op);
        SubshapeReferenceCompare.AssertStableAcrossRebuild(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CylinderCutBoxOnSeam()
    {
        var cyl = new Cylinder { Radius = 10, Height = 10 };
        var target = TestGeomGenerator.CreateBody(cyl, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 20, DimensionY = 4, DimensionZ = 20 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(0, -2, -5));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        SubshapeReferenceCompare.AssertResolvable(op);
        SubshapeReferenceCompare.AssertStableAcrossRebuild(op);
    }
}
