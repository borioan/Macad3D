using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Utils;

/// <summary>
/// Checks that a subshape reference keeps pointing at the *same* subshape after an
/// upstream parameter was changed and the shape was rebuilt.
///
/// The golden-file comparison pins reference names to bounding boxes for one fixed set
/// of parameters, so it cannot see a reference that slides onto a different face once a
/// parameter moves. That is what this checks instead.
///
/// Ground truth is geometric and computed independently of the references: the parameter
/// change is kept small, so every face of the rebuilt shape can be matched to the face it
/// came from by (same normal direction, nearest centre). The reference is correct only if
/// it resolves to exactly that face.
/// </summary>
public static class SubshapeReferenceStability
{
    const double _NormalTolerance = 1e-4;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Every face and edge of the shape must resolve back to itself: the reference produced for a
    /// subshape, when resolved, must contain that very subshape. A reference that resolves only to
    /// other subshapes (e.g. an array's untransformed instance resolving to its transformed copies
    /// but not itself) is invalid even though it resolves to something - which the other checks miss.
    /// </summary>
    public static bool CheckRoundTrip(Shape shape, out string summary)
    {
        var brep = shape.GetBRep();
        Assert.That(brep, Is.Not.Null, "Shape has no BRep");

        int checkedCount = 0, failed = 0;

        bool __Check(IEnumerable<TopoDS_Shape> subshapes)
        {
            bool ok = true;
            foreach (var subshape in subshapes)
            {
                var reference = shape.GetSubshapeReference(subshape);
                if (reference == null)
                    continue;
                checkedCount++;

                var resolved = shape.FindSubshape(reference, null);
                if (resolved == null || !resolved.Any(r => r.IsSame(subshape)))
                {
                    TestContext.WriteLine($"Reference does not resolve back to its own subshape: {reference}");
                    failed++;
                    ok = false;
                }
            }
            return ok;
        }

        bool result = __Check(brep.Faces());
        result &= __Check(brep.Edges());

        summary = $"{checkedCount} subshapes checked, {failed} did not resolve back to themselves";
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CheckFacesAfterChange(Shape shape, Action applyChange, out string summary)
    {
        // --- capture the state before the change ---
        var brepBefore = shape.GetBRep();
        Assert.That(brepBefore, Is.Not.Null, "Shape has no BRep before the change");

        // Control: a reference is only eligible if it already resolves back to the very face
        // it was taken from BEFORE anything is changed. Without this, a reference that never
        // addressed its own face would be reported as "slid", blaming the parameter change for
        // a property that was there all along.
        var before = new List<(SubshapeReference Reference, Ax1 Axis)>();
        int notSelfResolvingBefore = 0;

        foreach (var face in brepBefore.Faces())
        {
            var reference = shape.GetSubshapeReference(face);
            if (reference == null)
                continue;

            var resolved = shape.FindSubshape(reference, null);
            if (resolved == null || resolved.Count == 0 || !resolved[0].IsSame(face))
            {
                TestContext.WriteLine($"[baseline] reference does not resolve to its own face: {reference}"
                                      + $" - taken from face {_Describe(FaceAlgo.GetFaceCenterNormal(face))}"
                                      + (resolved is { Count: > 0 }
                                          ? $", resolves to {_Describe(FaceAlgo.GetFaceCenterNormal(resolved[0].ToFace()))}"
                                          : ", resolves to nothing"));
                notSelfResolvingBefore++;
                continue;
            }

            before.Add((reference, FaceAlgo.GetFaceCenterNormal(face)));
        }

        int capturedCount = before.Count;

        // --- change a parameter and rebuild ---
        applyChange();
        shape.Invalidate();
        Assert.That(shape.Make(Shape.MakeFlags.None), Is.True, "Rebuild after the parameter change failed");

        var brepAfter = shape.GetBRep();
        Assert.That(brepAfter, Is.Not.Null, "Shape has no BRep after the rebuild");

        var facesAfter = brepAfter.Faces();
        var axesAfter = facesAfter.Select(FaceAlgo.GetFaceCenterNormal).ToList();

        // The change must not alter the topology, otherwise the geometric matching below
        // has no well-defined answer and the test would be measuring the wrong thing.
        if (facesAfter.Count != brepBefore.Faces().Count)
        {
            summary = $"topology changed by the parameter change ({brepBefore.Faces().Count} -> {facesAfter.Count} faces) "
                      + "- choose a smaller change";
            return false;
        }

        bool result = true;
        int unresolved = 0, slid = 0, ambiguousMatch = 0;
        var resolvedTo = new Dictionary<int, string>();

        foreach (var (reference, axisBefore) in before)
        {
            // --- ground truth: which face did this one become? ---
            int expected = _FindCorrespondingFace(axisBefore, axesAfter, out bool unique);
            if (expected < 0 || !unique)
            {
                // Cannot establish ground truth for this face - do not judge the reference by it.
                ambiguousMatch++;
                continue;
            }

            // --- what the reference actually resolves to now ---
            var found = shape.FindSubshape(reference, null);
            if (found == null || found.Count == 0)
            {
                TestContext.WriteLine($"Reference no longer resolves after the change: {reference}");
                unresolved++;
                result = false;
                continue;
            }

            int actual = facesAfter.FindIndex(f => f.IsSame(found[0]));
            if (actual < 0)
            {
                TestContext.WriteLine($"Reference resolved to a shape that is not a face of the result: {reference}");
                result = false;
                continue;
            }

            if (actual != expected)
            {
                TestContext.WriteLine($"Reference slid onto a different face: {reference}");
                TestContext.WriteLine($"    expected face {_Describe(axesAfter[expected])}");
                TestContext.WriteLine($"    resolved face {_Describe(axesAfter[actual])}");
                slid++;
                result = false;
                continue;
            }

            // Two references must never end up on the same face.
            if (resolvedTo.TryGetValue(actual, out var other))
            {
                TestContext.WriteLine($"Two references resolve to the same face: {reference} and {other}");
                result = false;
            }
            else
            {
                resolvedTo[actual] = reference.ToString();
            }
        }

        summary = $"{capturedCount} face refs checked, {notSelfResolvingBefore} excluded (did not address their own "
                  + $"face even before the change), {ambiguousMatch} skipped (no unique geometric match), "
                  + $"{unresolved} unresolved, {slid} slid to another face";
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static string _Describe(Ax1 axis)
        => $"at ({axis.Location.X:F2}, {axis.Location.Y:F2}, {axis.Location.Z:F2}) "
           + $"dir ({axis.Direction.X:F2}, {axis.Direction.Y:F2}, {axis.Direction.Z:F2})";

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Finds the face the given one turned into: same normal direction, nearest centre.
    /// Reports whether that match is unique, so an undecidable case is skipped rather than
    /// silently judged.
    /// </summary>
    static int _FindCorrespondingFace(Ax1 axisBefore, List<Ax1> axesAfter, out bool unique)
    {
        unique = false;
        int best = -1;
        double bestDistance = double.MaxValue, secondBestDistance = double.MaxValue;

        for (int i = 0; i < axesAfter.Count; i++)
        {
            if (!axesAfter[i].Direction.IsEqual(axisBefore.Direction, _NormalTolerance))
                continue;

            double distance = axesAfter[i].Location.Distance(axisBefore.Location);
            if (distance < bestDistance)
            {
                secondBestDistance = bestDistance;
                bestDistance = distance;
                best = i;
            }
            else if (distance < secondBestDistance)
            {
                secondBestDistance = distance;
            }
        }

        // The nearest candidate must be clearly nearer than the runner-up, otherwise the
        // correspondence is a guess.
        unique = best >= 0 && (secondBestDistance == double.MaxValue || bestDistance < secondBestDistance * 0.5);
        return best;
    }
}
