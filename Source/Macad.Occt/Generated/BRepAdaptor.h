// Generated wrapper code for package BRepAdaptor

#pragma once

#include "GeomAdaptor.h"
#include "Adaptor3d.h"
#include "Geom2dAdaptor.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve
//---------------------------------------------------------------------
public ref class BRepAdaptor_Array1OfCurve sealed
    : public Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>
    , public IIndexEnumerable<Macad::Occt::BRepAdaptor_Curve^>
{

#ifdef Include_BRepAdaptor_Array1OfCurve_h
public:
    Include_BRepAdaptor_Array1OfCurve_h
#endif

public:
    BRepAdaptor_Array1OfCurve(::BRepAdaptor_Array1OfCurve* nativeInstance)
        : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>( nativeInstance, true )
    {}

    BRepAdaptor_Array1OfCurve(::BRepAdaptor_Array1OfCurve& nativeInstance)
        : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>( &nativeInstance, false )
    {}

    property ::BRepAdaptor_Array1OfCurve* NativeInstance
    {
        ::BRepAdaptor_Array1OfCurve* get()
        {
            return static_cast<::BRepAdaptor_Array1OfCurve*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve::Iterator>
    {

#ifdef Include_BRepAdaptor_Array1OfCurve_Iterator_h
    public:
        Include_BRepAdaptor_Array1OfCurve_Iterator_h
#endif

    public:
        Iterator(::BRepAdaptor_Array1OfCurve::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepAdaptor_Array1OfCurve::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve::Iterator>( &nativeInstance, false )
        {}

        property ::BRepAdaptor_Array1OfCurve::Iterator* NativeInstance
        {
            ::BRepAdaptor_Array1OfCurve::Iterator* get()
            {
                return static_cast<::BRepAdaptor_Array1OfCurve::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::BRepAdaptor_Array1OfCurve^ theList);
        bool More();
        void Initialize(Macad::Occt::BRepAdaptor_Array1OfCurve^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::BRepAdaptor_Curve^ Value();
        Macad::Occt::BRepAdaptor_Curve^ ChangeValue();
    }; // class Iterator

    BRepAdaptor_Array1OfCurve();
    BRepAdaptor_Array1OfCurve(int theLower, int theUpper);
    BRepAdaptor_Array1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    BRepAdaptor_Array1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper);
    BRepAdaptor_Array1OfCurve(long long unsigned int theSize);
    void Init(Macad::Occt::BRepAdaptor_Curve^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::BRepAdaptor_Array1OfCurve^ Assign(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther);
    Macad::Occt::BRepAdaptor_Array1OfCurve^ CopyValues(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther);
    Macad::Occt::BRepAdaptor_Array1OfCurve^ Move(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther);
    Macad::Occt::BRepAdaptor_Curve^ First();
    Macad::Occt::BRepAdaptor_Curve^ ChangeFirst();
    Macad::Occt::BRepAdaptor_Curve^ Last();
    Macad::Occt::BRepAdaptor_Curve^ ChangeLast();
    virtual Macad::Occt::BRepAdaptor_Curve^ Value(int theIndex);
    Macad::Occt::BRepAdaptor_Curve^ ChangeValue(int theIndex);
    Macad::Occt::BRepAdaptor_Curve^ At(long long unsigned int theIndex);
    Macad::Occt::BRepAdaptor_Curve^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::BRepAdaptor_Curve^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::BRepAdaptor_Curve^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepAdaptor_Array1OfCurve

//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve
//---------------------------------------------------------------------
public ref class BRepAdaptor_HArray1OfCurve sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::BRepAdaptor_Curve^>
{

#ifdef Include_BRepAdaptor_HArray1OfCurve_h
public:
    Include_BRepAdaptor_HArray1OfCurve_h
#endif

public:
    BRepAdaptor_HArray1OfCurve(::BRepAdaptor_HArray1OfCurve* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepAdaptor_HArray1OfCurve(::BRepAdaptor_HArray1OfCurve& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepAdaptor_HArray1OfCurve* NativeInstance
    {
        ::BRepAdaptor_HArray1OfCurve* get()
        {
            return static_cast<::BRepAdaptor_HArray1OfCurve*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepAdaptor_HArray1OfCurve::Iterator>
    {

#ifdef Include_BRepAdaptor_HArray1OfCurve_Iterator_h
    public:
        Include_BRepAdaptor_HArray1OfCurve_Iterator_h
#endif

    public:
        Iterator(::BRepAdaptor_HArray1OfCurve::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepAdaptor_HArray1OfCurve::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepAdaptor_HArray1OfCurve::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepAdaptor_HArray1OfCurve::Iterator>( &nativeInstance, false )
        {}

        property ::BRepAdaptor_HArray1OfCurve::Iterator* NativeInstance
        {
            ::BRepAdaptor_HArray1OfCurve::Iterator* get()
            {
                return static_cast<::BRepAdaptor_HArray1OfCurve::Iterator*>(_NativeInstance);
            }
        }

    public:
        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::BRepAdaptor_Curve^ Value();
        Macad::Occt::BRepAdaptor_Curve^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::BRepAdaptor_Curve^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    Macad::Occt::BRepAdaptor_Curve^ First();
    Macad::Occt::BRepAdaptor_Curve^ ChangeFirst();
    Macad::Occt::BRepAdaptor_Curve^ Last();
    Macad::Occt::BRepAdaptor_Curve^ ChangeLast();
    virtual Macad::Occt::BRepAdaptor_Curve^ Value(int theIndex);
    Macad::Occt::BRepAdaptor_Curve^ ChangeValue(int theIndex);
    Macad::Occt::BRepAdaptor_Curve^ At(long long unsigned int theIndex);
    Macad::Occt::BRepAdaptor_Curve^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::BRepAdaptor_Curve^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    BRepAdaptor_HArray1OfCurve();
    BRepAdaptor_HArray1OfCurve(int theLower, int theUpper);
    BRepAdaptor_HArray1OfCurve(int theLower, int theUpper, Macad::Occt::BRepAdaptor_Curve^ theValue);
    BRepAdaptor_HArray1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void BRepAdaptor_HArray1OfCurve(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::BRepAdaptor_HArray1OfCurve^ CreateDowncasted(::BRepAdaptor_HArray1OfCurve* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::BRepAdaptor_Curve^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepAdaptor_HArray1OfCurve

//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve
//---------------------------------------------------------------------
/// <summary>
/// The Curve from BRepAdaptor allows to use an Edge
/// of the BRep topology like a 3D curve.
/// 
/// It has the methods the class Curve from Adaptor3d.
/// 
/// It is created or Initialized with an Edge. It
/// takes into account local coordinate systems. If
/// the Edge has a 3D curve it is use with priority.
/// If the edge has no 3D curve one of the curves on
/// surface is used. It is possible to enforce using a
/// curve on surface by creating or initialising with
/// an Edge and a Face.
/// </summary>
public ref class BRepAdaptor_Curve sealed
    : public Macad::Occt::GeomAdaptor_TransformedCurve
{

#ifdef Include_BRepAdaptor_Curve_h
public:
    Include_BRepAdaptor_Curve_h
#endif

public:
    BRepAdaptor_Curve(::BRepAdaptor_Curve* nativeInstance)
        : Macad::Occt::GeomAdaptor_TransformedCurve( nativeInstance )
    {}

    BRepAdaptor_Curve(::BRepAdaptor_Curve& nativeInstance)
        : Macad::Occt::GeomAdaptor_TransformedCurve( nativeInstance )
    {}

    property ::BRepAdaptor_Curve* NativeInstance
    {
        ::BRepAdaptor_Curve* get()
        {
            return static_cast<::BRepAdaptor_Curve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined Curve with no Edge loaded.
    /// </summary>
    BRepAdaptor_Curve();
    /// <summary>
    /// Creates a Curve to access the geometry of edge <E>.
    /// </summary>
    BRepAdaptor_Curve(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Creates a Curve to access the geometry of edge
    /// <E>. The geometry will be computed using the
    /// parametric curve of <E> on the face <F>. An Error
    /// is raised if the edge does not have a pcurve on
    /// the face.
    /// </summary>
    BRepAdaptor_Curve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Reset currently loaded curve (undone Load()).
    /// </summary>
    void Reset();
    /// <summary>
    /// Sets the Curve <me> to access the geometry of
    /// edge <E>.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Sets the Curve <me> to access the geometry of
    /// edge <E>. The geometry will be computed using the
    /// parametric curve of <E> on the face <F>. An Error
    /// is raised if the edge does not have a pcurve on
    /// the face.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns the edge.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the edge tolerance.
    /// </summary>
    double Tolerance();
    /// <summary>
    /// Returns a curve equivalent of <me> between
    /// parameters <First> and <Last>. <Tol> is used to
    /// test for 3d points confusion.
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
    static Macad::Occt::BRepAdaptor_Curve^ CreateDowncasted(::BRepAdaptor_Curve* instance);
}; // class BRepAdaptor_Curve

//---------------------------------------------------------------------
//  Class  BRepAdaptor_CompCurve
//---------------------------------------------------------------------
/// <summary>
/// The Curve from BRepAdaptor allows to use a Wire
/// of the BRep topology like a 3D curve.
/// Warning: With this class of curve, C0 and C1 continuities
/// are not assumed. So be careful with some algorithm!
/// Please note that BRepAdaptor_CompCurve cannot be
/// periodic curve at all (even if it contains single
/// periodic edge).
/// 
/// BRepAdaptor_CompCurve can only work on valid wires where all edges are
/// connected to each other to make a chain.
/// </summary>
public ref class BRepAdaptor_CompCurve sealed
    : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_BRepAdaptor_CompCurve_h
public:
    Include_BRepAdaptor_CompCurve_h
#endif

public:
    BRepAdaptor_CompCurve(::BRepAdaptor_CompCurve* nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    BRepAdaptor_CompCurve(::BRepAdaptor_CompCurve& nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    property ::BRepAdaptor_CompCurve* NativeInstance
    {
        ::BRepAdaptor_CompCurve* get()
        {
            return static_cast<::BRepAdaptor_CompCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined Curve with no Wire loaded.
    /// </summary>
    BRepAdaptor_CompCurve();
    BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa);
    BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Creates a Curve to access the geometry of edge <W>.
    /// </summary>
    BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol);
    /// <summary>
    /// Shallow copy of adaptor.
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Sets the wire <W>.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa);
    /// <summary>
    /// Sets wire <W> and trimmed parameter.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol);
    /// <summary>
    /// Returns the wire.
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Wire();
    /// <summary>
    /// returns an edge and one parameter on them
    /// corresponding to the parameter U.
    /// </summary>
    void Edge(double U, Macad::Occt::TopoDS_Edge^ E, double% UonE);
    double FirstParameter();
    double LastParameter();
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns the number of intervals for continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide enough room to accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns a curve equivalent of <me> between
    /// parameters <First> and <Last>. <Tol> is used to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter theU on the curve.
    /// </summary>
    Macad::Occt::Pnt EvalD0(double theU);
    /* Method skipped due to unknown mapping: ResD1 EvalD1(double theU, ) */
    /* Method skipped due to unknown mapping: ResD2 EvalD2(double theU, ) */
    /* Method skipped due to unknown mapping: ResD3 EvalD3(double theU, ) */
    /// <summary>
    /// Returns the derivative of order theN at parameter theU.
    /// Raised if the continuity of the current interval is not CN.
    /// Raised if theN < 1.
    /// </summary>
    Macad::Occt::Vec EvalDN(double theU, int theN);
    /// <summary>
    /// returns the parametric resolution
    /// </summary>
    double Resolution(double R3d);
    Macad::Occt::GeomAbs_CurveType GetCurveType();
    Macad::Occt::gp_Lin^ Line();
    Macad::Occt::gp_Circ^ Circle();
    Macad::Occt::gp_Elips^ Ellipse();
    Macad::Occt::gp_Hypr^ Hyperbola();
    Macad::Occt::gp_Parab^ Parabola();
    int Degree();
    bool IsRational();
    int NbPoles();
    int NbKnots();
    Macad::Occt::Geom_BezierCurve^ Bezier();
    Macad::Occt::Geom_BSplineCurve^ BSpline();
    static Macad::Occt::BRepAdaptor_CompCurve^ CreateDowncasted(::BRepAdaptor_CompCurve* instance);
}; // class BRepAdaptor_CompCurve

//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve2d
//---------------------------------------------------------------------
/// <summary>
/// The Curve2d from BRepAdaptor allows to use an Edge
/// on a Face like a 2d curve (curve in the parametric
/// space).
/// 
/// It has the methods of the class Curve2d from
/// Adpator.
/// 
/// It is created or initialized with a Face and an
/// Edge. The methods are inherited from Curve from
/// Geom2dAdaptor.
/// </summary>
public ref class BRepAdaptor_Curve2d sealed
    : public Macad::Occt::Geom2dAdaptor_Curve
{

#ifdef Include_BRepAdaptor_Curve2d_h
public:
    Include_BRepAdaptor_Curve2d_h
#endif

public:
    BRepAdaptor_Curve2d(::BRepAdaptor_Curve2d* nativeInstance)
        : Macad::Occt::Geom2dAdaptor_Curve( nativeInstance )
    {}

    BRepAdaptor_Curve2d(::BRepAdaptor_Curve2d& nativeInstance)
        : Macad::Occt::Geom2dAdaptor_Curve( nativeInstance )
    {}

    property ::BRepAdaptor_Curve2d* NativeInstance
    {
        ::BRepAdaptor_Curve2d* get()
        {
            return static_cast<::BRepAdaptor_Curve2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an uninitialized curve2d.
    /// </summary>
    BRepAdaptor_Curve2d();
    /// <summary>
    /// Creates with the pcurve of <E> on <F>.
    /// </summary>
    BRepAdaptor_Curve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
    /// <summary>
    /// Initialize with the pcurve of <E> on <F>.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns the Edge.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the Face.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
    static Macad::Occt::BRepAdaptor_Curve2d^ CreateDowncasted(::BRepAdaptor_Curve2d* instance);
}; // class BRepAdaptor_Curve2d

//---------------------------------------------------------------------
//  Class  BRepAdaptor_Surface
//---------------------------------------------------------------------
/// <summary>
/// The Surface from BRepAdaptor allows to use a Face
/// of the BRep topology look like a 3D surface.
/// 
/// It has the methods of the class Surface from
/// Adaptor3d.
/// 
/// It is created or initialized with a Face. It takes
/// into account the local coordinates system.
/// 
/// The u,v parameter range is the minmax value for
/// the restriction, unless the flag restriction is
/// set to false.
/// </summary>
public ref class BRepAdaptor_Surface sealed
    : public Macad::Occt::GeomAdaptor_TransformedSurface
{

#ifdef Include_BRepAdaptor_Surface_h
public:
    Include_BRepAdaptor_Surface_h
#endif

public:
    BRepAdaptor_Surface(::BRepAdaptor_Surface* nativeInstance)
        : Macad::Occt::GeomAdaptor_TransformedSurface( nativeInstance )
    {}

    BRepAdaptor_Surface(::BRepAdaptor_Surface& nativeInstance)
        : Macad::Occt::GeomAdaptor_TransformedSurface( nativeInstance )
    {}

    property ::BRepAdaptor_Surface* NativeInstance
    {
        ::BRepAdaptor_Surface* get()
        {
            return static_cast<::BRepAdaptor_Surface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined surface with no face loaded.
    /// </summary>
    BRepAdaptor_Surface();
    /// <summary>
    /// Creates a surface to access the geometry of <F>.
    /// If <Restriction> is true the parameter range is
    /// the parameter range in the UV space of the
    /// restriction.
    /// </summary>
    BRepAdaptor_Surface(Macad::Occt::TopoDS_Face^ F, bool R);
    /// <summary>
    /// Creates a surface to access the geometry of <F>.
    /// If <Restriction> is true the parameter range is
    /// the parameter range in the UV space of the
    /// restriction.
    /// </summary>
    BRepAdaptor_Surface(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Shallow copy of adaptor.
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    /// <summary>
    /// Sets the surface to the geometry of <F>.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Face^ F, bool Restriction);
    /// <summary>
    /// Sets the surface to the geometry of <F>.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns the face.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
    /// <summary>
    /// Returns the face tolerance.
    /// </summary>
    double Tolerance();
    static Macad::Occt::BRepAdaptor_Surface^ CreateDowncasted(::BRepAdaptor_Surface* instance);
}; // class BRepAdaptor_Surface

}; // namespace Occt
}; // namespace Macad
