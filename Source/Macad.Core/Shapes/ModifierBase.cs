using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.InteropServices;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public abstract class ModifierBase : Shape
{
    #region Properties
        
    [SerializeMember(SortKey = 900)]
    public List<IShapeOperand> Operands { get; }

    //--------------------------------------------------------------------------------------------------

    public override IShapeOperand Predecessor
    {
        get { return Operands.FirstOrDefault();}
        set
        {
            if (Operands.Count > 0)
                ReplaceOperand(0, value);
            else
                AddOperand(value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Initialization

    protected ModifierBase()
    {
        // Init with placeholder for predecessor shape
        Operands = new List<IShapeOperand>() { null };
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Topology

    public override void Remove()
    {
        Operands.ForEach(operand =>
        {
            if (operand != null)
            {
                operand.RemoveDependent(this);
                operand.Remove();
            }
        });
        Operands.Clear();
        base.Remove();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Operands

    public bool AddOperand(IShapeOperand operandShape)
    {
        if(operandShape is Shape { Body: not null } shape 
           && shape.Body != Body)
        {
            // Wrap to ensure transformation between different local spaces
            Body foreignBody = shape.Body;
            Shape foreignShape = foreignBody.Shape != shape ? shape : null;
            operandShape = new BodyShapeOperand(foreignBody, foreignShape);
        }
        Operands.Add(operandShape);
        operandShape.AddDependent(this);

        RaisePropertyChanged("ChildCount");
        Body?.RaiseShapeTopologyChanged();
        Invalidate();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool ReplaceOperand(int operandIndex, IShapeOperand operandShape)
    {
        Debug.Assert(operandIndex < Operands.Count);
        Debug.Assert(operandShape != null);

        if (!CanReplaceOperand(operandIndex))
            return false;

        var oldOp = Operands[operandIndex];
        oldOp?.RemoveDependent(this);

        Operands[operandIndex] = operandShape;
        operandShape.AddDependent(this);

        RaisePropertyChanged("ChildCount");
        Body?.RaiseShapeTopologyChanged();
        Invalidate();
        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    public bool ReplaceOperand(IShapeOperand oldOperand, IShapeOperand newOperand)
    {
        var operandIndex = Operands.IndexOf(oldOperand);
        return ReplaceOperand(operandIndex, newOperand);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool CanReplaceOperand(int operandIndex)
    {
        Debug.Assert(operandIndex < Operands.Count);
        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    public bool CanReplaceOperand(IShapeOperand oldOperand)
    {
        var operandIndex = Operands.IndexOf(oldOperand);
        return CanReplaceOperand(operandIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveOperand(int operandIndex)
    {
        var oldOp = Operands[operandIndex];
        oldOp?.RemoveDependent(this);

        Operands.RemoveAt(operandIndex);

        RaisePropertyChanged("ChildCount");
        Body?.RaiseShapeTopologyChanged();
        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    protected IShapeOperand GetOperand(int operandIndex)
    {
        if ((operandIndex < 0) || (operandIndex >= Operands.Count))
        {
            Messages.Error("Not enough operands for this modifier.");
            return null;
        }
        return Operands[operandIndex];
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Shape GetOperandBRep(int operandIndex)
    {
        if ((operandIndex < 0) || (operandIndex >= Operands.Count))
        {
            Messages.Error("Not enough operands for this modifier.");
            return null;
        }

        return Operands[operandIndex].GetBRep(GetCoordinateSystem());
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Shape GetOperand2DFaces(int operandIndex, Pln? boundToPlane)
    {
        var operand = GetOperand(operandIndex);
        if (operand == null)
            return null;

        if (boundToPlane.HasValue)
        {
            operand.BindToPlane(GetCoordinateSystem(), this, boundToPlane);
        }

        var sourceBrep = GetOperandBRep(operandIndex);
        if (sourceBrep == null)
            return null;

        // Check if we already have faces
        var exp = new TopExp_Explorer(sourceBrep, TopAbs_ShapeEnum.FACE, TopAbs_ShapeEnum.SHAPE);
        if (exp.More())
        {
            return sourceBrep;
        }

        // Check if we have any wire at all
        exp = new TopExp_Explorer(sourceBrep, TopAbs_ShapeEnum.WIRE, TopAbs_ShapeEnum.SHAPE);
        if (!exp.More())
        {
            TopoDS_Shape shape = new();
            return shape;
        }

        Geom_Plane geomPlane;
        if (!Topo2dUtils.GetPlaneOfEdges(sourceBrep, out geomPlane))
            return null;
        var baseFacesShape = TopoUtils.CreateFacesFromWires(sourceBrep, geomPlane.Pln());

        if (boundToPlane != null && baseFacesShape != null)
        {
            var trsf = new Trsf(boundToPlane.Value.Rotation(), boundToPlane.Value.Location.ToVec());
            baseFacesShape = baseFacesShape.Moved(new TopLoc_Location(trsf));
        }

        return baseFacesShape;
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Face GetOperandFace(int operandIndex, SubshapeReference faceRef)
    {
        var operand = GetOperand(operandIndex);
        if (operand == null)
            return null;

        // Find target face
        var faces = operand.FindSubshape(faceRef, GetCoordinateSystem());
        if (faces == null || faces.Count == 0 || faces.Any(face => face.ShapeType() != TopAbs_ShapeEnum.FACE))
        {
            Messages.Error("The face index is invalid and must be re-selected.");
            return null;
        }

        return faces[0].ToFace();
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Edge GetOperandEdge(int operandIndex, SubshapeReference edgeRef, TopoDS_Face forFace = null)
    {
        var operand = GetOperand(operandIndex);
        if (operand == null)
            return null;

        // Find target edge
        var edges = operand.FindSubshape(edgeRef, GetCoordinateSystem());
        if (edges == null || edges.Count == 0 || edges.Any(edge => edge.ShapeType() != TopAbs_ShapeEnum.EDGE))
        {
            Messages.Error("The edge index is invalid and must be re-selected.");
            return null;
        }

        if (forFace == null)
        {
            return edges[0].ToEdge();
        }

        // Find the proper oriented for the given face
        return forFace.Edges().Find(e => e.IsSame(edges[0]));
    }
        
    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Vertex GetOperandVertex(int operandIndex, SubshapeReference vertexRef)
    {
        var operand = GetOperand(operandIndex);
        if (operand == null)
            return null;

        // Find target vertex
        var vertices = operand.FindSubshape(vertexRef, GetCoordinateSystem());
        if (vertices == null || vertices.Count == 0 || vertices.Any(vertex => vertex.ShapeType() != TopAbs_ShapeEnum.VERTEX))
        {
            Messages.Error("The vertex index is invalid and must be re-selected.");
            return null;
        }

        return vertices[0].ToVertex();
    }

    //--------------------------------------------------------------------------------------------------

    public override void GetReferencedBodies(List<Body> bodyList)
    {
        foreach (var op in Operands)
        {
            op?.GetReferencedBodies(bodyList);
        }
    }

    #endregion

    #region Serialization

    //--------------------------------------------------------------------------------------------------

    public override void OnDeserialized(SerializationContext context)
    {
        foreach (var operand in Operands)
        {
            operand?.AddDependent(this);
        }
        base.OnDeserialized(context);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    protected override bool Skip()
    {
        ClearSubshapeLists();

        if (Operands.Any())
        {
            var baseBRep = GetOperandBRep(0);
            if (baseBRep != null)
            {
                // Transform to local space if needed
                BRep = baseBRep;
                HasErrors = false;
                return base.MakeInternal(MakeFlags.None);
            }
            HasErrors = true;
            return true;
        }
        return base.Skip();
    }

    //--------------------------------------------------------------------------------------------------

    public override void InvalidateTransformation()
    {
        bool mustInvalidate = false;
        base.InvalidateTransformation();
        foreach (var operand in Operands)
        {
            if (operand is Shape shape)
                shape.InvalidateTransformation();
            else
                mustInvalidate = true;
        }

        if (mustInvalidate)
            Invalidate();
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Subshapes

    readonly Dictionary<TopoDS_Shape, List<TopoDS_Shape>> _ModifiedShapes = new();

    //--------------------------------------------------------------------------------------------------

    // Copies produced by multiplying modifiers (Mirror, arrays). A copy has no
    // identity of its own in the operands, so it is referenced by the source
    // subshape it was copied from plus the copy number. This keeps references
    // to copies independent of the (non-deterministic) subshape order of the
    // result shape.
    protected const string CopySubshapeName = "Copy";

    readonly List<(int CopyIndex, TopoDS_Shape Source, List<TopoDS_Shape> Images)> _CopyModifications = new();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Registers that <paramref name="source"/> (a subshape of an operand) was copied into
    /// <paramref name="images"/> (subshapes of the result) by the copy with number <paramref name="copyIndex"/>.
    /// </summary>
    protected void AddCopyModification(int copyIndex, TopoDS_Shape source, List<TopoDS_Shape> images)
    {
        if (source == null || images == null || images.Count == 0)
            return;

        var existing = _CopyModifications.FindIndex(e => e.CopyIndex == copyIndex && e.Source.IsSame(source));
        if (existing >= 0)
        {
            _CopyModifications[existing].Images.AddRange(images);
        }
        else
        {
            _CopyModifications.Add((copyIndex, source, images));
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Registers all subshapes of a pure-transform copy (as produced by array modifiers).
    /// Each source subshape maps to its single transformed image via <c>ModifiedShape</c>.
    /// </summary>
    protected void AddCopyModifications(int copyIndex, TopoDS_Shape sourceBRep, BRepBuilderAPI_Transform makeTransform)
    {
        __Process(sourceBRep.Faces());
        __Process(sourceBRep.Edges());
        __Process(sourceBRep.Vertices());

        //----

        void __Process(IEnumerable<TopoDS_Shape> shapes)
        {
            foreach (var source in shapes)
            {
                var image = makeTransform.ModifiedShape(source);
                if (image != null && !image.IsNull())
                {
                    AddCopyModification(copyIndex, source, new List<TopoDS_Shape> {image});
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    SubshapeReference _GetCopySubshapeReference(TopoDS_Shape ocSubshape)
    {
        var entry = _CopyModifications.FirstOrDefault(e => e.Images.Any(s => s.IsSame(ocSubshape)));
        if (entry.Source == null)
            return null;

        foreach (var operand in Operands)
        {
            var sourceRef = operand.GetSubshapeReference(entry.Source, GetCoordinateSystem());
            if (sourceRef != null)
            {
                return new SubshapeReference(SubshapeTypeHelper.GetType(ocSubshape), Guid, CopySubshapeName, entry.CopyIndex, new[] {sourceRef});
            }
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    List<TopoDS_Shape> _FindCopySubshape(SubshapeReference reference)
    {
        if (reference.Sources == null || reference.Sources.Length != 1)
            return null;

        EnsureHistory();
        if (!IsValid)
            return null;

        foreach (var operand in Operands)
        {
            var sources = operand.FindSubshape(reference.Sources[0], GetCoordinateSystem());
            if (sources == null)
                continue;

            var images = new List<TopoDS_Shape>();
            foreach (var source in sources)
            {
                var entry = _CopyModifications.FirstOrDefault(e => e.CopyIndex == reference.Index && e.Source.IsSame(source));
                if (entry.Source != null)
                    images.AddRange(entry.Images);
            }

            if (images.Count > 0)
                return images;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    // Subshapes derived from operand subshapes through the modeling history but
    // with no direct 1:1 identity. Two purely topological identity schemes are
    // used, no geometric comparison:
    //   Faces are identified by the set of operand source faces they derive from
    //     ("Derived"). This is unambiguous: a result face maps to a unique set.
    //   Edges are identified by the two result faces they lie between ("Between").
    //     The faces are themselves uniquely identifiable, so this disambiguates
    //     e.g. the multiple section edges of a curved intersection without any
    //     occurrence index. Faces do not depend on edges, so there is no cycle.
    protected const string DerivedSubshapeName = "Derived";
    protected const string BetweenSubshapeName = "Between";

    SubshapeReference _GetDerivedSubshapeReference(TopoDS_Shape ocSubshape, KeyValuePair<TopoDS_Shape, List<TopoDS_Shape>>[] modList)
    {
        var type = SubshapeTypeHelper.GetType(ocSubshape);

        if (type == SubshapeType.Edge)
            return _GetBetweenSubshapeReference(ocSubshape);

        if (modList.Length == 0)
            return null;

        // Reference each operand source subshape.
        var sourceRefs = new List<SubshapeReference>();
        foreach (var kvp in modList)
        {
            SubshapeReference sourceRef = null;
            foreach (var operand in Operands)
            {
                sourceRef = operand.GetSubshapeReference(kvp.Key, GetCoordinateSystem());
                if (sourceRef != null)
                    break;
            }
            if (sourceRef == null)
                return null;
            sourceRefs.Add(sourceRef);
        }

        // Stable order so the reference is independent of operand enumeration order.
        sourceRefs.Sort((a, b) => string.CompareOrdinal(a.ToString(), b.ToString()));

        return new SubshapeReference(type, Guid, DerivedSubshapeName, 0, sourceRefs.ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    List<TopoDS_Shape> _FindDerivedSubshape(SubshapeReference reference)
    {
        if (reference.Sources == null || reference.Sources.Length == 0)
            return null;

        EnsureHistory();
        if (!IsValid)
            return null;

        // For each source reference, resolve the operand subshapes and forward
        // them through the history to the images they produced in the result.
        var perSourceImages = new List<List<TopoDS_Shape>>();
        foreach (var sourceRef in reference.Sources)
        {
            List<TopoDS_Shape> sources = null;
            foreach (var operand in Operands)
            {
                sources = operand.FindSubshape(sourceRef, GetCoordinateSystem());
                if (sources != null)
                    break;
            }
            if (sources == null)
                return null;

            var images = new List<TopoDS_Shape>();
            foreach (var source in sources)
            {
                var entry = _ModifiedShapes.FirstOrDefault(kvp => kvp.Key.IsSame(source));
                if (entry.Key != null)
                    images.AddRange(entry.Value);
            }
            perSourceImages.Add(images);
        }

        // The derived subshape is an image shared by all sources, of the right type.
        var shared = perSourceImages[0]
                     .Where(s => SubshapeTypeHelper.GetType(s) == reference.Type
                                 && perSourceImages.All(list => list.Any(v => v.IsSame(s))))
                     .ToList();

        return shared.Count > 0 ? shared : null;
    }

    //--------------------------------------------------------------------------------------------------

    // An edge identified by the two result faces it lies between.
    SubshapeReference _GetBetweenSubshapeReference(TopoDS_Shape ocEdge)
    {
        var faces = _GetAdjacentFaces(ocEdge);
        if (faces.Count < 2)
            return null;

        var faceRefs = new List<SubshapeReference>();
        foreach (var face in faces)
        {
            var faceRef = GetSubshapeReference(face);
            // Only accept unambiguous, identity-based face references.
            if (faceRef == null || (faceRef.ShapeId.Equals(Guid) && string.IsNullOrEmpty(faceRef.Name)))
                return null;
            faceRefs.Add(faceRef);
        }

        faceRefs.Sort((a, b) => string.CompareOrdinal(a.ToString(), b.ToString()));
        return new SubshapeReference(SubshapeType.Edge, Guid, BetweenSubshapeName, 0, faceRefs.ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    List<TopoDS_Shape> _FindBetweenSubshape(SubshapeReference reference)
    {
        if (reference.Sources == null || reference.Sources.Length < 2)
            return null;

        EnsureHistory();
        if (!IsValid)
            return null;

        // Resolve each adjacent face, then take the edge(s) shared by all of them.
        List<TopoDS_Shape> shared = null;
        foreach (var faceRef in reference.Sources)
        {
            var faces = FindSubshape(faceRef, null);
            if (faces == null || faces.Count == 0)
                return null;

            var edges = new List<TopoDS_Shape>();
            foreach (var face in faces)
                edges.AddRange(face.Edges());

            if (shared == null)
                shared = edges;
            else
                shared = shared.Where(e => edges.Any(o => o.IsSame(e))).ToList();
        }

        return shared != null && shared.Count > 0 ? shared : null;
    }

    //--------------------------------------------------------------------------------------------------

    List<TopoDS_Shape> _GetAdjacentFaces(TopoDS_Shape edge)
    {
        var brep = GetBRep();
        if (brep == null)
            return new List<TopoDS_Shape>();

        var map = new TopTools_IndexedDataMapOfShapeListOfShape(1);
        TopExp.MapShapesAndAncestors(brep, TopAbs_ShapeEnum.EDGE, TopAbs_ShapeEnum.FACE, map);
        if (!map.Contains(edge))
            return new List<TopoDS_Shape>();

        return map.FindFromKey(edge).ToList();
    }

    //--------------------------------------------------------------------------------------------------

    protected void AddModifiedSubshape(TopoDS_Shape original, List<TopoDS_Shape> shapes)
    {
        if ((shapes == null) || (shapes.Count == 0))
            return;

        // Was the original already modified?
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Value.Any(s => s.IsSame(original)));
        if (kvpModif.Key != null)
        {
            kvpModif.Value.RemoveAt(kvpModif.Value.IndexOfSame(original));
            kvpModif.Value.AddRange(shapes);
            return;
        }

        // Now add
        var realKey = _ModifiedShapes.Keys.FirstOrDefault(s => s.IsSame(original));
        if (realKey != null)
        {
            _ModifiedShapes[realKey].AddRange(shapes);
        }
        else
        {
            _ModifiedShapes.Add(original, shapes);
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected List<TopoDS_Shape> GetSubshapeModifications(TopoDS_Shape original)
    {
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Key.IsSame(original));
        if (kvpModif.Key != null)
        {
            return kvpModif.Value;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------
        
    protected TopoDS_Shape FindOriginalSubshape(TopoDS_Shape modifiedOrCreated)
    {
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Value.Any(s => s.IsSame(modifiedOrCreated)));
        return kvpModif.Key;
    }

    //--------------------------------------------------------------------------------------------------

    protected void RemoveModifiedSubshape(TopoDS_Shape original)
    {
        if (original == null)
            return;

        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Value.Any(s => s.IsSame(original)));
        if (kvpModif.Key != null)
        {
            if (kvpModif.Value.Count == 1)
            {
                _ModifiedShapes.Remove(kvpModif.Key);
            }
            else
            {
                kvpModif.Value.RemoveAt(kvpModif.Value.IndexOfSame(original));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void UpdateModifiedSubshapes(TopoDS_Shape sourceShape, BRepBuilderAPI_MakeShape makeShape)
    {
        __Process(sourceShape.Faces());
        __Process(sourceShape.Edges());
        __Process(sourceShape.Vertices());

        //-----

        void __Process(IEnumerable<TopoDS_Shape> shapes)
        {
            foreach (var shape in shapes)
            {
                var modList = makeShape.Modified(shape);
                if (modList.Size() == 0)
                {
                    // Delete check can result in exception
                    try
                    {
                        if (makeShape.IsDeleted(shape))
                        {
                            RemoveModifiedSubshape(shape);
                        }
                    }
                    catch(SEHException)
                    {
                        // That means that the makeShape has this shape not in list,
                        // so it is NOT deleted and NOT modified
                    }
                }
                else
                {
                    AddModifiedSubshape(shape, modList.ToList());
                    AddModifiedSubshape(shape, makeShape.Generated(shape).ToList());
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void UpdateModifiedSubshapes(TopoDS_Shape sourceShape, BRepTools_History history)
    {
        bool hasModified = history.HasModified();
        bool hasGenerated = history.HasGenerated();
        bool hasRemoved = history.HasRemoved();

        __Process(sourceShape.Faces());
        __Process(sourceShape.Edges());
        __Process(sourceShape.Vertices());

        //-----

        void __Process(IEnumerable<TopoDS_Shape> shapes)
        {
            foreach (var shape in shapes)
            {
                if (hasModified)
                {
                    var modList = history.Modified(shape);
                    if (modList.Size() != 0)
                    {
                        AddModifiedSubshape(shape, modList.ToList());
                    }
                }

                if (hasGenerated)
                {
                    AddModifiedSubshape(shape, history.Generated(shape).ToList());
                }

                if (hasRemoved)
                {
                    if (history.IsRemoved(shape))
                    {
                        RemoveModifiedSubshape(shape);
                    }
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void AddNamedSubshapes(string name, TopoDS_Shape sourceShape, BRepBuilderAPI_MakeShape makeShape)
    {
        __ProcessShapes(sourceShape.Faces());
        __ProcessShapes(sourceShape.Edges());
        __ProcessShapes(sourceShape.Vertices());

        //----

        void __ProcessShapes(IEnumerable<TopoDS_Shape> shapes)
        {
            var index = 0;
            foreach (var shape in shapes)
            {
                var modifiedShapes = makeShape.Modified(shape).ToList();
                if (modifiedShapes.Any())
                {
                    foreach (var modifiedShape in modifiedShapes)
                    {
                        AddNamedSubshape(name, modifiedShape, index);
                    }
                }
                else if (!makeShape.IsDeleted(shape))
                {
                    AddNamedSubshape(name, shape, index);
                }
                index++;
            }
        }

    }

    //--------------------------------------------------------------------------------------------------

    protected override void ClearSubshapeLists()
    {
        _ModifiedShapes.Clear();
        _CopyModifications.Clear();
        base.ClearSubshapeLists();
    }

    //--------------------------------------------------------------------------------------------------

    public override SubshapeReference GetSubshapeReference(TopoDS_Shape ocSubshape)
    {
        var original = ocSubshape;

        // Do we have modified this shape?
        // Only redirect if the shape wasn't splitted and there is no ambiguity.
        var modList = _ModifiedShapes.Where(kvp => kvp.Value.Any(s => s.IsSame(ocSubshape))).ToArray();
        if (modList.Length == 1 && modList[0].Value.Count == 1)
        {
            ocSubshape = modList[0].Key;
        }

        // Crawl operands
        foreach (var operand in Operands)
        {
            var res = operand.GetSubshapeReference(ocSubshape, GetCoordinateSystem());
            if (res != null)
                return res;
        }

        // Subshape of a copy (Mirror, arrays)? Reference it by its source instead
        // of falling back to a raw index in the result.
        var copyRef = _GetCopySubshapeReference(original);
        if (copyRef != null)
            return copyRef;

        // A named subshape (from the base implementation) takes priority over a
        // derived or raw-index reference.
        var baseRef = base.GetSubshapeReference(original);
        if (baseRef != null && !(baseRef.ShapeId.Equals(Guid) && string.IsNullOrEmpty(baseRef.Name)))
            return baseRef;

        // Subshape derived from one or more operand subshapes via the modeling
        // history (e.g. boolean section edges, split faces)? Reference it by
        // those sources instead of a raw index.
        var derivedRef = _GetDerivedSubshapeReference(original, modList);
        if (derivedRef != null)
            return derivedRef;

        return baseRef;
    }

    //--------------------------------------------------------------------------------------------------

    public override List<TopoDS_Shape> FindSubshape(SubshapeReference reference, Ax3? targetFrame)
    {
        if (Guid.Equals(reference.ShapeId) && reference.Name == CopySubshapeName)
            return _FindCopySubshape(reference);

        if (Guid.Equals(reference.ShapeId) && reference.Name == DerivedSubshapeName)
            return _FindDerivedSubshape(reference);

        if (Guid.Equals(reference.ShapeId) && reference.Name == BetweenSubshapeName)
            return _FindBetweenSubshape(reference);

        if (Guid.Equals(reference.ShapeId))
            return base.FindSubshape(reference, targetFrame);

        foreach (var operand in Operands)
        {
            var subshapes = operand?.FindSubshape(reference, GetCoordinateSystem());
            if (subshapes == null)
                continue;

            EnsureHistory();
            if (!IsValid)
                return null;
                
            // Do we have modified this shape?
            var mods = _ModifiedShapes
                       .Where(kvp => subshapes.ContainsSame(kvp.Key))
                       .SelectMany(kvp => kvp.Value).ToList();
            if (mods.Count > 0)
            {
                subshapes = mods;
            }

            // Unmodified, find in current shape
            var currents = new List<TopoDS_Shape>();
            switch (reference.Type)
            {
                case SubshapeType.Vertex:
                    var vertices = BRep.Vertices();
                    foreach (var shape in subshapes)
                    {
                        int sameIndex = vertices.IndexOfSame(shape);
                        if(sameIndex >= 0)
                            currents.Add(vertices[sameIndex]);
                    }
                    break;

                case SubshapeType.Edge:
                    var edges = BRep.Edges();
                    foreach (var shape in subshapes)
                    {
                        int sameIndex = edges.IndexOfSame(shape);
                        if(sameIndex >= 0)
                            currents.Add(edges[sameIndex]);
                    }
                    break;

                case SubshapeType.Face:
                    var faces = BRep.Faces();
                    foreach (var shape in subshapes)
                    {
                        int sameIndex = faces.IndexOfSame(shape);
                        if (sameIndex >= 0)
                            currents.Add(faces[sameIndex]);
                    }
                    break;
            }

            if (currents.Count > 0)
            {
                return currents;
            }
            return null;
        }
        return null;
    }

    #endregion

    #region Forwardings

    public override bool BindToPlane(Ax3 targetFrame, Entity boundTo, Pln? plane)
    {
        if (Operands[0] == null)
            return false;

        return Operands[0].BindToPlane(targetFrame, boundTo, plane);
    }

    //--------------------------------------------------------------------------------------------------

    public override Ax3 GetCoordinateSystem()
    {
        var opShape = Operands.FirstOrDefault() as Shape;
        return opShape?.GetCoordinateSystem() ?? base.GetCoordinateSystem();
    }

    //--------------------------------------------------------------------------------------------------

    public override Trsf GetTransformation()
    {
        var opShape = Operands.FirstOrDefault() as Shape;
        return opShape?.GetTransformation() ?? base.GetTransformation();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}