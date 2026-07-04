using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Utils;

/// <summary>
/// Assertions for the stability of subshape references produced by a shape.
/// Used to verify that modifiers reference their result subshapes by identity
/// (name/history/composite) rather than by a raw enumeration index, so the
/// references stay valid regardless of the subshape order of the result.
/// </summary>
public static class SubshapeReferenceCompare
{
    /// <summary>
    /// Asserts that every face and edge of the shape yields a reference that is
    /// not a raw index into the shape's own subshape list, and that resolves
    /// back to the exact same subshape. When <paramref name="minCompositeRefs"/>
    /// is greater than zero, at least that many composite (copy) references
    /// must be produced.
    /// </summary>
    public static void AssertResolvable(Shape shape, int minCompositeRefs = 0)
    {
        var brep = shape.GetBRep();
        Assert.That(brep, Is.Not.Null, "Shape has no BRep");

        var compositeCount = 0;
        __Check(brep.Faces().Cast<TopoDS_Shape>(), "face");
        __Check(brep.Edges().Cast<TopoDS_Shape>(), "edge");

        Assert.That(compositeCount, Is.GreaterThanOrEqualTo(minCompositeRefs),
                    $"Expected at least {minCompositeRefs} composite references, found {compositeCount}");

        void __Check(IEnumerable<TopoDS_Shape> subshapes, string kind)
        {
            var index = 0;
            foreach (var subshape in subshapes)
            {
                var reference = shape.GetSubshapeReference(subshape);
                Assert.That(reference, Is.Not.Null, $"No reference for {kind} {index}");
                Assert.That(reference.ShapeId.Equals(shape.Guid) && reference.Name.IsNullOrEmpty(), Is.False,
                            $"{kind} {index} fell back to a raw index reference: {reference}");

                if (reference.Name == "Copy")
                {
                    compositeCount++;
                    Assert.That(reference.Sources, Is.Not.Null.And.Length.EqualTo(1),
                                $"{kind} {index}: copy reference has no single source");
                    Assert.That(reference.Sources[0].ShapeId, Is.Not.EqualTo(shape.Guid),
                                $"{kind} {index}: copy source is anchored at the modifier itself");
                }

                var found = shape.FindSubshape(reference, null);
                Assert.That(found, Is.Not.Null, $"Reference of {kind} {index} ({reference}) could not be resolved");
                Assert.That(found.Any(s => s.IsSame(subshape)), Is.True,
                            $"Reference of {kind} {index} ({reference}) resolved to the wrong subshape");
                index++;
            }
        }
    }

    /// <summary>
    /// Collects references and geometric signatures for all faces, rebuilds the
    /// shape from scratch, and asserts every reference still resolves to a
    /// geometrically identical face.
    /// </summary>
    public static void AssertStableAcrossRebuild(Shape shape)
    {
        var brep = shape.GetBRep();
        var subshapes = brep.Faces().Cast<TopoDS_Shape>().Concat(brep.Edges().Cast<TopoDS_Shape>());
        var references = new List<SubshapeReference>();
        var boundingBoxes = new List<Bnd_Box>();
        foreach (var subshape in subshapes)
        {
            var reference = shape.GetSubshapeReference(subshape);
            Assert.That(reference, Is.Not.Null);
            references.Add(reference);
            boundingBoxes.Add(subshape.BoundingBox());
        }

        shape.Invalidate();
        Assert.That(shape.Make(Shape.MakeFlags.None), Is.True, "Rebuild failed");

        for (var i = 0; i < references.Count; i++)
        {
            var found = shape.FindSubshape(references[i], null);
            Assert.That(found, Is.Not.Null, $"Reference {i} ({references[i]}) could not be resolved after rebuild");
            Assert.That(found.Any(s => _IsSameBounds(s.BoundingBox(), boundingBoxes[i])), Is.True,
                        $"Reference {i} ({references[i]}) resolved to different geometry after rebuild");
        }
    }

    //--------------------------------------------------------------------------------------------------

    static bool _IsSameBounds(Bnd_Box box1, Bnd_Box box2)
    {
        const double tolerance = 1e-6;
        return box1.CornerMin().Distance(box2.CornerMin()) < tolerance
               && box1.CornerMax().Distance(box2.CornerMax()) < tolerance;
    }
}
