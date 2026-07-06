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
}