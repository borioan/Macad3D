using System;
using Macad.Core;
using Macad.Common.Serialization;
using Macad.Core.Shapes;
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
        var source1 = new SubshapeReference(SubshapeType.Face, new Guid("{d2f7e04c-8a10-45e2-9351-27551eb1f335}"), "seg", 3);
        var source2 = new SubshapeReference(SubshapeType.Face, new Guid("{81c74035-5710-4bcf-b807-54338e01e348}"), 7);
        var originalValue = new SubshapeReference(SubshapeType.Edge, new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}"), "Copy", 0, new[] {source1, source2});
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("E-fb82b37ccc56415ebaea773f4bbe7203-Copy-0(F-d2f7e04c8a1045e2935127551eb1f335-seg-3|F-81c7403557104bcfb80754338e01e348-7)", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NestedCompositeSubshapeReferenceSerialize()
    {
        var inner = new SubshapeReference(SubshapeType.Face, new Guid("{d2f7e04c-8a10-45e2-9351-27551eb1f335}"), "seg", 3);
        var middle = new SubshapeReference(SubshapeType.Face, new Guid("{81c74035-5710-4bcf-b807-54338e01e348}"), "Copy", 0, new[] {inner});
        var originalValue = new SubshapeReference(SubshapeType.Face, new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}"), "Copy", 1, new[] {middle});
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