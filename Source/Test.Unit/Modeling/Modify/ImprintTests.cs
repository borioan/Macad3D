﻿using System.IO;
using System.Linq;
using System.Runtime.ExceptionServices;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Modify
{
    [TestFixture]
    public class ImprintTests
    {
        const string _BasePath = @"Modeling\Modify\Imprint";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Raise()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Raise;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Raise")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Lower()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Lower;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Lower")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Cutout()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Cutout;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Cutout")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RingFace()
        {
            var shape = TestGeomGenerator.CreateImprint(TestGeomGenerator.SketchType.Ring);
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Raise;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "RingFace")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MultiFace()
        {
            var shape = TestGeomGenerator.CreateImprint(TestGeomGenerator.SketchType.MultiCircle);
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Raise;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MultiFace")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RaiseDraft()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Raise;
            shape.DraftAngle = 40;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "RaiseDraft")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LowerDraft()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Lower;
            shape.DraftAngle = 40;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "LowerDraft")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CutoutDraft()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Cutout;
            shape.DraftAngle = 40;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "CutoutDraft")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [HandleProcessCorruptedStateExceptions]
        public void RingFaceDraft()
        {
            var shape = TestGeomGenerator.CreateImprint(TestGeomGenerator.SketchType.Ring);
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Raise;
            shape.DraftAngle = 10;

            //Imprinting a ring face with draft angle isn't supported by the algo.
            // This throws a Process Corrupted State Exception, so we need to catch it here
            try
            {
                Assert.IsFalse(shape.Make(Shape.MakeFlags.None));
            }
            catch (System.AccessViolationException)
            {
                Assert.Pass();
            }
            //Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "RingFaceDraft")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MultiFaceDraft()
        {
            var shape = TestGeomGenerator.CreateImprint(TestGeomGenerator.SketchType.MultiCircle);
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Raise;
            shape.DraftAngle = 40;

            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MultiFaceDraft")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ReversedFace()
        {
            var baseShape = new Box
            {
                DimensionX = 20,
                DimensionY = 20,
                DimensionZ = 20,
            };
            var body = TestGeomGenerator.CreateBody(baseShape, new Pnt(-10, -10, 0));

            var imprint = Imprint.Create(body, baseShape.GetSubshapeReference(SubshapeType.Face, 0));

            var sketch = imprint.Operands[1] as Sketch;
            Assert.IsNotNull(sketch);

            sketch.Points.Add(0, new Pnt2d(0, 0));
            sketch.Points.Add(1, new Pnt2d(0, 11));
            sketch.Segments.Add(0, new SketchSegmentCircle(0, 1));

            Assert.IsNotNull(imprint);

            imprint.Depth = 2.5;
            imprint.Mode = Imprint.ImprintMode.Raise;

            Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(imprint, Path.Combine(_BasePath, "ReversedFace")));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SketchGetsEmpty()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Mode = Imprint.ImprintMode.Raise;
            Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            
            shape.Sketch.DeleteSegment(shape.Sketch.Segments.Values.First());
            
            Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "EmptySketch")));
        }
    }
}