using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Test.Utils;

public static class SubshapeReferenceCompare
{
    /// <summary>
    /// Asserts that every face and edge of the shape yields a reference that is
    /// not a raw index into the shape's own subshape list, and that resolves
    /// back to a valid subshape.
    /// </summary>
    public static bool CheckReferences(Shape shape, out int indexBasedReferences)
    {
        var brep = shape.GetBRep();
        Assert.That(brep, Is.Not.Null, "Shape has no BRep");

        indexBasedReferences = 0;
        bool result = _CheckReferences(shape, brep.Faces().Select(shape.GetSubshapeReference), ref indexBasedReferences);
        result &= _CheckReferences(shape, brep.Edges().Select(shape.GetSubshapeReference), ref indexBasedReferences);

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _CheckReferences(Shape shape, IEnumerable<SubshapeReference> references, ref int indexBasedReferences)
    {
        bool result = true;
        foreach (var reference in references)
        {
            if(reference.Name.IsNullOrEmpty() && reference.Sources == null)
            {
                TestContext.WriteLine($"Raw index reference found: {reference}");
                indexBasedReferences++;
                result = false;
            }
            if (reference.Sources != null)
            {
                if (reference.Sources.Length == 0)
                {
                    TestContext.WriteLine($"Empty source reference found: {reference}");
                    result = false;
                }
                else
                {
                    // We do not check the sources themselves, we only check that they exist.
                    int indxBasedSourceReferences = 0;
                    result &= _CheckReferences(null, reference.Sources, ref indxBasedSourceReferences);
                }
            }

            if (shape != null)
            {
                var found = shape.FindSubshape(reference, null);
                if (found == null || found.Count == 0)
                {
                    TestContext.WriteLine($"Reference could not be resolved: {reference}");
                    result = false;
                }
            }
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CompareReferences(Shape shape, string referenceFile)
    {
        string resultFile = referenceFile + "_TestResult.txt";
        TestData.DeleteTestResult(resultFile);

        bool result = true;

        Dictionary<string, Bnd_Box> subshapes = [];
        foreach (var face in shape.GetBRep().Faces())
        {
            var currentSubshape = shape.GetSubshapeReference(face);
            subshapes.Add(currentSubshape.ToString(), face.BoundingBox());
        }
        foreach (var edge in shape.GetBRep().Edges())
        {
            var currentSubshape = shape.GetSubshapeReference(edge);
            BRepLib.BuildCurve3d(edge);
            subshapes.Add(currentSubshape.ToString(), edge.BoundingBox());
        }

        var expectedList = TestData.GetTestDataSerialized<Dictionary<string, Bnd_Box>>(referenceFile + ".txt");
        if (expectedList == null)
        {
            TestData.WriteTestResultSerialized(subshapes, referenceFile + "_TestResult.txt");
            Assert.Fail("Reference file not found: " + referenceFile);
        }

        foreach (var (reference, bndBox) in subshapes)
        {
            if (!expectedList.TryGetValue(reference, out var expectedBox))
            {
                result = false;
                TestContext.WriteLine($"Unexpected subshape reference found: {reference} / {bndBox}");
                continue;
            }

            if (!_IsSameBounds(expectedBox, bndBox))
            {
                result = false;
                TestContext.WriteLine($"Bounds do not match for reference: {reference}. Bounds: {bndBox}. Expected: {expectedBox}");
                continue;
            }

            expectedList.Remove(reference);
        }

        if (expectedList.Count > 0)
        {
            result = false;
            foreach (var (reference, bndBox) in expectedList)
            {
                TestContext.WriteLine($"Missing subshape reference: {reference}. Bounds: {bndBox}");
            }
        }

        if (!result)
        {
            TestData.WriteTestResultSerialized(subshapes, resultFile);
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _IsSameBounds(Bnd_Box box1, Bnd_Box box2)
    {
        if (box1 == null || box2 == null)
            return false;

        const double tolerance = 1e-6;
        return box1.CornerMin().Distance(box2.CornerMin()) < tolerance
               && box1.CornerMax().Distance(box2.CornerMax()) < tolerance;
    }
}
