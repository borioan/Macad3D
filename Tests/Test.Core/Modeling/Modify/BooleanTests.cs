using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using NUnit.Framework;

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
        boolOp.MergeFaces = false;
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        SubshapeReferenceCompare.AssertResolvable(boolOp);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Boolean subshape references must survive a rebuild and resolve to the same geometry")]
    public void SubshapeReferencesFuseRebuild()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);
        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.MergeFaces = false;
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        SubshapeReferenceCompare.AssertStableAcrossRebuild(boolOp);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Section and split subshapes of a cut must get order-independent references, not raw indices")]
    public void SubshapeReferencesCut()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);
        var boolOp = BooleanCut.Create(shapes.target, shapes.operands);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        SubshapeReferenceCompare.AssertResolvable(boolOp);
    }

    //--------------------------------------------------------------------------------------------------

}