using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Multiply;

[TestFixture]
public class MirrorTests
{
    const string _BasePath = @"Modeling\Multiply\Mirror";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchOnEdge()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(sketch.Body, subshape);
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
        Assert.That(mirror.GetBRep().Wires(), Has.Count.EqualTo(1));
        AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "SketchOnEdge"));

        // Ensure that original shape is still unmodified
        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "SketchOnEdge2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchOnEdgeOffset()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(sketch.Body, subshape);
        mirror.Offset = 10;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
        AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "SketchOnEdgeOffset"));
    }

    //--------------------------------------------------------------------------------------------------


    [Test]
    public void SketchOnEdgeOffsetReversed()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 1);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(sketch.Body, subshape);
        mirror.Offset = 10;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
        AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "SketchOnEdgeOffsetReversed"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchOnCurvedEdge()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 2);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(sketch.Body, subshape);
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
        AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "SketchOnCurvedEdge"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SketchDiscardOrginal()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(sketch.Body, subshape);
        mirror.KeepOriginal = false;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
        AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "SketchDiscardOrginal"));
    }
        
    //--------------------------------------------------------------------------------------------------
       
    [Test]
    public void SketchTransformedPlane()
    {
        var section = TestGeomGenerator.CreateCrossSection();
        var subshape = section.GetSubshapeReference(SubshapeType.Edge, 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(section.Body, subshape);
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);

        AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "SketchTransformedPlane"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchSubshapeReferences()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        sketch.Guid = TestData.CreateGuid(1);
        var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(sketch.Body, subshape);
        mirror.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(mirror);
        AssertHelper.IsSameSubshapeReferences(mirror, Path.Combine(_BasePath, "SketchSubshapeReferences"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchSubshapeReferencesNoOriginal()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        sketch.Guid = TestData.CreateGuid(1);
        var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(sketch.Body, subshape);
        mirror.Guid = TestData.CreateGuid(10);
        mirror.KeepOriginal = false;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(mirror);
        AssertHelper.IsSameSubshapeReferences(mirror, Path.Combine(_BasePath, "SketchSubshapeReferencesNoOriginal"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidOnFace()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 5);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(imprint.Body, subshape);
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
        AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "SolidOnFace"));
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SolidOnFaceOffset()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 5);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(imprint.Body, subshape);
        mirror.Offset = 10;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
        AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "SolidOnFaceOffset"));
    }
        
    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void SolidOnFaceOffsetReversed()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(imprint.Body, subshape);
        mirror.Offset = 5;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
        AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "SolidOnFaceOffsetReversed"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidOnCurvedFace()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 6);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(imprint.Body, subshape);
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
        AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "SolidOnCurvedFace"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidDiscardOriginal()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 5);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(imprint.Body, subshape);
        mirror.KeepOriginal = false;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
        AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "SolidDiscardOriginal"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidNoMerge()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 5);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(imprint.Body, subshape);
        mirror.MergeFaces = false;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
        AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "SolidNoMerge"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidOnAxis()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var mirror = Mirror.Create(imprint.Body, new Ax2(new Pnt(50, 50, 40), Dir.DX));
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
        AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "SolidOnAxis"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SolidOnTransformedFace()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 7);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(imprint.Body, subshape);
        mirror.MergeFaces = false;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
        AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "SolidOnTransformedFace"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("OCCT bug 33421, fixed in 7.8.0")]
    public void MergeFacesThrowsException()
    {
        var cylinder = TestGeomGenerator.CreateCylinder();
        var mirror = Mirror.Create(cylinder.Body, cylinder.GetSubshapeReference(SubshapeType.Face, 1));
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Subshape references when resulting objects are not touching.")]
    public void SolidSubshapeReferences()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        var mirror = Mirror.Create(box.Body, new Ax2(new Pnt(50, 50, 40), Dir.DX));
        mirror.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(mirror);
        AssertHelper.IsSameSubshapeReferences(mirror, Path.Combine(_BasePath, "SolidSubshapeReferences"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidSubshapeReferencesNoOriginal()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        var subshape = new SubshapeReference(SubshapeType.Face, box.Guid, "ZMax", 0);
        var mirror = Mirror.Create(box.Body, subshape);
        mirror.Guid = TestData.CreateGuid(10);
        mirror.KeepOriginal = false;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(mirror);
        AssertHelper.IsSameSubshapeReferences(mirror, Path.Combine(_BasePath, "SolidSubshapeReferencesNoOriginal"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Subshape references when resulting objects are touching, but no merged.")]
    public void SolidSubshapeReferencesTouching()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        var subshape = new SubshapeReference(SubshapeType.Face, box.Guid, "ZMax", 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(box.Body, subshape);
        mirror.Guid = TestData.CreateGuid(10);
        mirror.MergeFaces = false;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(mirror, allowSelfReferencing: true);
        AssertHelper.IsSameSubshapeReferences(mirror, Path.Combine(_BasePath, "SolidSubshapeReferencesTouching"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Composite copy references must also cover the touching/merged case (MergeFaces)")]
    public void SolidSubshapeReferencesMerged()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        var subshape = new SubshapeReference(SubshapeType.Face, box.Guid, "ZMax", 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(box.Body, subshape);
        mirror.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
        
        AssertHelper.HasValidSubshapeReferences(mirror, allowSelfReferencing: true);
        AssertHelper.IsSameSubshapeReferences(mirror, Path.Combine(_BasePath, "SolidSubshapeReferencesMerged"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Subshape references when resulting objects are intersecting, but no merged.")]
    public void SolidSubshapeReferencesIntersecting()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        var subshape = new SubshapeReference(SubshapeType.Face, box.Guid, "ZMax", 0);
        Assert.That(subshape != null);

        var mirror = Mirror.Create(box.Body, subshape);
        mirror.Guid = TestData.CreateGuid(10);
        mirror.MergeFaces = false;
        mirror.Offset = -1;
        Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(mirror, allowSelfReferencing: true);
        AssertHelper.IsSameSubshapeReferences(mirror, Path.Combine(_BasePath, "SolidSubshapeReferencesIntersecting"));
    }

    //--------------------------------------------------------------------------------------------------

}