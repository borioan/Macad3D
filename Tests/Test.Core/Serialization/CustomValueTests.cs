using System;
using Macad.Core;
using Macad.Common.Serialization;
using Macad.Core.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.Serialization;

[TestFixture]
public class CustomValueTests
{
    [Test]
    public void SubshapeReferenceSerialize()
    {
        var originalValue = new SubshapeReference(SubshapeType.Edge, new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}"), 42);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("E-fb82b37ccc56415ebaea773f4bbe7203-42", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NamedSubshapeReferenceSerialize()
    {
        var originalValue = new SubshapeReference(SubshapeType.Edge, new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}"), "MyPart", 42);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("E-fb82b37ccc56415ebaea773f4bbe7203-MyPart-42", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CompositeSubshapeReferenceSerialize()
    {
        var source1 = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(1), "seg", 3);
        var source2 = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(2), 7);
        var originalValue = new SubshapeReference(SubshapeType.Edge, TestData.CreateGuid(3), "Copy", 0, [source1, source2]);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("E-00000000000000000000000000000003-Copy-0(F-00000000000000000000000000000001-seg-3|F-00000000000000000000000000000002-7)", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NestedCompositeSubshapeReferenceSerialize()
    {
        var inner = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(1), "seg", 3);
        var middle = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(2), "Copy", 0, [inner]);
        var originalValue = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(3), "Copy", 1, [middle]);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InternedSubshapeReferenceSerialize()
    {
        // A source used in two places is written only once, into the id table
        var sourceA = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(1), "XMin", 0);
        var sourceA2 = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(1), "XMin", 0);
        var middle = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(3), "Mirror", 1, [sourceA2]);
        var originalValue = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(3), "Mirror", 2, [sourceA, middle]);

        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("F-00000000000000000000000000000003-Mirror-2(#1|F-00000000000000000000000000000003-Mirror-1(#1));1=F-00000000000000000000000000000001-XMin-0", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);

        // The shared entry is materialized as a single instance
        Assert.AreSame(targetValue.Sources[0], targetValue.Sources[1].Sources[0]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InternedSubshapeReferenceSerializeSharedSubtree()
    {
        // A whole repeated subtree is written only once, its own sources stay inline
        var copy1 = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(2), "Copy", 1,
                                          [new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(1), "Top", 0)]);
        var copy2 = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(2), "Copy", 1,
                                          [new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(1), "Top", 0)]);
        var originalValue = new SubshapeReference(SubshapeType.Edge, TestData.CreateGuid(3), "Boolean", 3, [copy1, copy2]);

        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("E-00000000000000000000000000000003-Boolean-3(#1|#1);1=F-00000000000000000000000000000002-Copy-1(F-00000000000000000000000000000001-Top-0)", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);
        Assert.AreSame(targetValue.Sources[0], targetValue.Sources[1]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InternedSubshapeReferenceReadInlineForm()
    {
        // The fully expanded inline form of the same reference must stay readable
        var s = "F-00000000000000000000000000000003-Mirror-2(F-00000000000000000000000000000001-XMin-0|F-00000000000000000000000000000003-Mirror-1(F-00000000000000000000000000000001-XMin-0))";
        var sourceA = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(1), "XMin", 0);
        var middle = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(3), "Mirror", 1, [sourceA]);
        var expected = new SubshapeReference(SubshapeType.Face, TestData.CreateGuid(3), "Mirror", 2, [sourceA, middle]);

        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        var r = new Reader(s);
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(expected, targetValue);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InternedSubshapeReferenceReadMalformed()
    {
        // Broken interned strings must fail gracefully instead of crashing or looping
        string[] malformed =
        [
            "F-00000000000000000000000000000003-Mirror-2(#9);1=F-00000000000000000000000000000001-XMin-0", // unknown id
            "F-00000000000000000000000000000003-Mirror-2(#1)",                                             // missing table
            "F-00000000000000000000000000000003-Mirror-2(#1);1=F-00000000000000000000000000000001-XMin-0(#1)", // circular
            "F-00000000000000000000000000000003-Mirror-2(#1);1=",                                          // empty entry
            "F-00000000000000000000000000000003-Mirror-2(#1);=x",                                          // missing id
        ];

        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        foreach (var s in malformed)
        {
            var r = new Reader(s);
            var targetValue = serializer.Read(r, null, null) as SubshapeReference;
            Assert.NotNull(targetValue, s);
            Assert.AreEqual(Guid.Empty, targetValue.ShapeId, s);
        }
    }
}