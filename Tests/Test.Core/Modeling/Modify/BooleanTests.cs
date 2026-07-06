using Macad.Core.Shapes;
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
        boolOp.MergeFaces = false;
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesFuse"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Section and split subshapes of a cut must get order-independent references, not raw indices")]
    public void SubshapeReferencesCut()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);
        var boolOp = BooleanCut.Create(shapes.target, shapes.operands);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesCut"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferencesCommon()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesCommon"));
    }

    //--------------------------------------------------------------------------------------------------

}