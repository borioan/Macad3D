// Generated wrapper code for package GeomAdaptor

#pragma once

#include "Adaptor3d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomAdaptor
//---------------------------------------------------------------------
/// <summary>
/// this package contains the geometric definition of
/// curve and surface necessary to use algorithms.
/// </summary>
public ref class GeomAdaptor sealed
    : public Macad::Occt::BaseClass<::GeomAdaptor>
{

#ifdef Include_GeomAdaptor_h
public:
    Include_GeomAdaptor_h
#endif

public:
    GeomAdaptor(::GeomAdaptor* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAdaptor>( nativeInstance, true )
    {}

    GeomAdaptor(::GeomAdaptor& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAdaptor>( &nativeInstance, false )
    {}

    property ::GeomAdaptor* NativeInstance
    {
        ::GeomAdaptor* get()
        {
            return static_cast<::GeomAdaptor*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor();
    /// <summary>
    /// Inherited from GHCurve. Provides a curve
    /// handled by reference.
    /// Build a Geom_Curve using the information from the
    /// Curve from Adaptor3d
    /// </summary>
    static Macad::Occt::Geom_Curve^ MakeCurve(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Build a Geom_Surface using the information from the Surface from Adaptor3d
    /// </summary>
    /// <param name="theS">
    /// - Surface adaptor to convert.
    /// </param>
    /// <param name="theTrimFlag">
    /// - True if perform trim surface values by adaptor and false otherwise.
    /// </param>
    static Macad::Occt::Geom_Surface^ MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS, bool theTrimFlag);
    /// <summary>
    /// Build a Geom_Surface using the information from the Surface from Adaptor3d
    /// </summary>
    /// <param name="theS">
    /// - Surface adaptor to convert.
    /// </param>
    /// <param name="theTrimFlag">
    /// - True if perform trim surface values by adaptor and false otherwise.
    /// </param>
    static Macad::Occt::Geom_Surface^ MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS);
}; // class GeomAdaptor

//---------------------------------------------------------------------
//  Class  GeomAdaptor_Curve
//---------------------------------------------------------------------
/// <summary>
/// This class provides an interface between the services provided by any
/// curve from the package Geom and those required of the curve by algorithms which use it.
/// Creation of the loaded curve the curve is C1 by piece.
/// 
/// Polynomial coefficients of BSpline curves used for their evaluation are
/// cached for better performance. Therefore these evaluations are not
/// thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class GeomAdaptor_Curve sealed
    : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_GeomAdaptor_Curve_h
public:
    Include_GeomAdaptor_Curve_h
#endif

public:
    GeomAdaptor_Curve(::GeomAdaptor_Curve* nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    GeomAdaptor_Curve(::GeomAdaptor_Curve& nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    property ::GeomAdaptor_Curve* NativeInstance
    {
        ::GeomAdaptor_Curve* get()
        {
            return static_cast<::GeomAdaptor_Curve*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor_Curve();
    GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ theCurve);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst > theULast + Precision::PConfusion()
    /// </summary>
    GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ theCurve, double theUFirst, double theULast);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Reset currently loaded curve (undone Load()).
    /// </summary>
    void Reset();
    void Load(Macad::Occt::Geom_Curve^ theCurve);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst > theULast + Precision::PConfusion()
    /// </summary>
    void Load(Macad::Occt::Geom_Curve^ theCurve, double theUFirst, double theULast);
    /// <summary>
    /// Provides a curve inherited from Hcurve from Adaptor.
    /// This is inherited to provide easy to use constructors.
    /// </summary>
    Macad::Occt::Geom_Curve^ Curve();
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
    /// returns the parametric resolution
    /// </summary>
    double Resolution(double R3d);
    Macad::Occt::GeomAbs_CurveType GetCurveType();
    Macad::Occt::gp_Lin^ Line();
    Macad::Occt::gp_Circ^ Circle();
    Macad::Occt::gp_Elips^ Ellipse();
    Macad::Occt::gp_Hypr^ Hyperbola();
    Macad::Occt::gp_Parab^ Parabola();
    /// <summary>
    /// this should NEVER make a copy
    /// of the underlying curve to read
    /// the relevant information
    /// </summary>
    int Degree();
    /// <summary>
    /// this should NEVER make a copy
    /// of the underlying curve to read
    /// the relevant information
    /// </summary>
    bool IsRational();
    /// <summary>
    /// this should NEVER make a copy
    /// of the underlying curve to read
    /// the relevant information
    /// </summary>
    int NbPoles();
    /// <summary>
    /// this should NEVER make a copy
    /// of the underlying curve to read
    /// the relevant information
    /// </summary>
    int NbKnots();
    /// <summary>
    /// this will NOT make a copy of the
    /// Bezier Curve : If you want to modify
    /// the Curve please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BezierCurve^ Bezier();
    /// <summary>
    /// this will NOT make a copy of the
    /// BSpline Curve : If you want to modify
    /// the Curve please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BSplineCurve^ BSpline();
    Macad::Occt::Geom_OffsetCurve^ OffsetCurve();
    /// <summary>
    /// Point evaluation. Raises an exception on failure.
    /// </summary>
    Macad::Occt::Pnt EvalD0(double theU);
    /* Method skipped due to unknown mapping: ResD1 EvalD1(double theU, ) */
    /* Method skipped due to unknown mapping: ResD2 EvalD2(double theU, ) */
    /* Method skipped due to unknown mapping: ResD3 EvalD3(double theU, ) */
    /// <summary>
    /// DN evaluation. Raises an exception on failure.
    /// </summary>
    Macad::Occt::Vec EvalDN(double theU, int theN);
    static Macad::Occt::GeomAdaptor_Curve^ CreateDowncasted(::GeomAdaptor_Curve* instance);
}; // class GeomAdaptor_Curve

//---------------------------------------------------------------------
//  Class  GeomAdaptor_Surface
//---------------------------------------------------------------------
/// <summary>
/// An interface between the services provided by any
/// surface from the package Geom and those required
/// of the surface by algorithms which use it.
/// Creation of the loaded surface the surface is C1 by piece
/// 
/// Polynomial coefficients of BSpline surfaces used for their evaluation are
/// cached for better performance. Therefore these evaluations are not
/// thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class GeomAdaptor_Surface
    : public Macad::Occt::Adaptor3d_Surface
{

#ifdef Include_GeomAdaptor_Surface_h
public:
    Include_GeomAdaptor_Surface_h
#endif

protected:
    GeomAdaptor_Surface(InitMode init)
        : Macad::Occt::Adaptor3d_Surface( init )
    {}

public:
    GeomAdaptor_Surface(::GeomAdaptor_Surface* nativeInstance)
        : Macad::Occt::Adaptor3d_Surface( nativeInstance )
    {}

    GeomAdaptor_Surface(::GeomAdaptor_Surface& nativeInstance)
        : Macad::Occt::Adaptor3d_Surface( nativeInstance )
    {}

    property ::GeomAdaptor_Surface* NativeInstance
    {
        ::GeomAdaptor_Surface* get()
        {
            return static_cast<::GeomAdaptor_Surface*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor_Surface();
    GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf);
    /// <summary>
    /// Standard_ConstructionError is raised if UFirst>ULast or VFirst>VLast
    /// </summary>
    GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV);
    /// <summary>
    /// Standard_ConstructionError is raised if UFirst>ULast or VFirst>VLast
    /// </summary>
    GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU);
    /// <summary>
    /// Standard_ConstructionError is raised if UFirst>ULast or VFirst>VLast
    /// </summary>
    GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    void Load(Macad::Occt::Geom_Surface^ theSurf);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast or theVFirst>theVLast
    /// </summary>
    void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast or theVFirst>theVLast
    /// </summary>
    void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast or theVFirst>theVLast
    /// </summary>
    void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast);
    Macad::Occt::Geom_Surface^ Surface();
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    /// <summary>
    /// Returns the parametric bounds of the surface.
    /// </summary>
    /// <param name="out]">
    /// theU1 minimum U parameter
    /// </param>
    /// <param name="out]">
    /// theU2 maximum U parameter
    /// </param>
    /// <param name="out]">
    /// theV1 minimum V parameter
    /// </param>
    /// <param name="out]">
    /// theV2 maximum V parameter
    /// </param>
    void Bounds(double% theU1, double% theU2, double% theV1, double% theV2);
    /// <summary>
    /// Returns tolerance in U direction.
    /// </summary>
    double ToleranceU();
    /// <summary>
    /// Returns tolerance in V direction.
    /// </summary>
    double ToleranceV();
    Macad::Occt::GeomAbs_Shape UContinuity();
    Macad::Occt::GeomAbs_Shape VContinuity();
    /// <summary>
    /// Returns the number of U intervals for continuity
    /// <S>. May be one if UContinuity(me) >= <S>
    /// </summary>
    int NbUIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the number of V intervals for continuity
    /// <S>. May be one if VContinuity(me) >= <S>
    /// </summary>
    int NbVIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the intervals with the requested continuity
    /// in the U direction.
    /// </summary>
    void UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the intervals with the requested continuity
    /// in the V direction.
    /// </summary>
    void VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns a surface trimmed in the U direction
    /// equivalent of <me> between
    /// parameters <First> and <Last>. <Tol> is used to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
    /// <summary>
    /// Returns a surface trimmed in the V direction between
    /// parameters <First> and <Last>. <Tol> is used to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
    bool IsUClosed();
    bool IsVClosed();
    bool IsUPeriodic();
    double UPeriod();
    bool IsVPeriodic();
    double VPeriod();
    /// <summary>
    /// Point evaluation. Raises an exception on failure.
    /// </summary>
    Macad::Occt::Pnt EvalD0(double theU, double theV);
    /* Method skipped due to unknown mapping: ResD1 EvalD1(double theU, double theV, ) */
    /* Method skipped due to unknown mapping: ResD2 EvalD2(double theU, double theV, ) */
    /* Method skipped due to unknown mapping: ResD3 EvalD3(double theU, double theV, ) */
    /// <summary>
    /// DN evaluation. Raises an exception on failure.
    /// </summary>
    Macad::Occt::Vec EvalDN(double theU, double theV, int theNu, int theNv);
    /// <summary>
    /// Returns the parametric U resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double UResolution(double R3d);
    /// <summary>
    /// Returns the parametric V resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double VResolution(double R3d);
    /// <summary>
    /// Returns the type of the surface: Plane, Cylinder,
    /// Cone, Sphere, Torus, BezierSurface,
    /// BSplineSurface, SurfaceOfRevolution,
    /// SurfaceOfExtrusion, OtherSurface
    /// </summary>
    Macad::Occt::GeomAbs_SurfaceType GetSurfaceType();
    Macad::Occt::Pln Plane();
    Macad::Occt::gp_Cylinder^ Cylinder();
    Macad::Occt::gp_Cone^ Cone();
    Macad::Occt::gp_Sphere^ Sphere();
    Macad::Occt::gp_Torus^ Torus();
    int UDegree();
    int NbUPoles();
    int VDegree();
    int NbVPoles();
    int NbUKnots();
    int NbVKnots();
    bool IsURational();
    bool IsVRational();
    /// <summary>
    /// This will NOT make a copy of the
    /// Bezier Surface : If you want to modify
    /// the Surface please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myU/VFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BezierSurface^ Bezier();
    /// <summary>
    /// This will NOT make a copy of the
    /// BSpline Surface : If you want to modify
    /// the Surface please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myU/VFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BSplineSurface^ BSpline();
    Macad::Occt::Ax1 AxeOfRevolution();
    Macad::Occt::Dir Direction();
    Macad::Occt::Adaptor3d_Curve^ BasisCurve();
    Macad::Occt::Adaptor3d_Surface^ BasisSurface();
    double OffsetValue();
    static Macad::Occt::GeomAdaptor_Surface^ CreateDowncasted(::GeomAdaptor_Surface* instance);
}; // class GeomAdaptor_Surface

//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------
/// <summary>
/// Generalised cylinder. This surface is obtained by sweeping a curve in a given
/// direction. The parametrization range for the parameter U is defined
/// with referenced the curve.
/// The parametrization range for the parameter V is ]-infinite,+infinite[
/// The position of the curve gives the origin for the parameter V.
/// The continuity of the surface is CN in the V direction.
/// </summary>
public ref class GeomAdaptor_SurfaceOfLinearExtrusion sealed
    : public Macad::Occt::GeomAdaptor_Surface
{

#ifdef Include_GeomAdaptor_SurfaceOfLinearExtrusion_h
public:
    Include_GeomAdaptor_SurfaceOfLinearExtrusion_h
#endif

public:
    GeomAdaptor_SurfaceOfLinearExtrusion(::GeomAdaptor_SurfaceOfLinearExtrusion* nativeInstance)
        : Macad::Occt::GeomAdaptor_Surface( nativeInstance )
    {}

    GeomAdaptor_SurfaceOfLinearExtrusion(::GeomAdaptor_SurfaceOfLinearExtrusion& nativeInstance)
        : Macad::Occt::GeomAdaptor_Surface( nativeInstance )
    {}

    property ::GeomAdaptor_SurfaceOfLinearExtrusion* NativeInstance
    {
        ::GeomAdaptor_SurfaceOfLinearExtrusion* get()
        {
            return static_cast<::GeomAdaptor_SurfaceOfLinearExtrusion*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor_SurfaceOfLinearExtrusion();
    /// <summary>
    /// The Curve is loaded.
    /// </summary>
    GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Thew Curve and the Direction are loaded.
    /// </summary>
    GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Dir V);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    /// <summary>
    /// Changes the Curve
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Changes the Direction
    /// </summary>
    void Load(Macad::Occt::Dir V);
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    Macad::Occt::GeomAbs_Shape UContinuity();
    /// <summary>
    /// Return CN.
    /// </summary>
    Macad::Occt::GeomAbs_Shape VContinuity();
    /// <summary>
    /// Returns the number of U intervals for continuity
    /// <S>. May be one if UContinuity(me) >= <S>
    /// </summary>
    int NbUIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the number of V intervals for continuity
    /// <S>. May be one if VContinuity(me) >= <S>
    /// </summary>
    int NbVIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the intervals with the requested continuity
    /// in the U direction.
    /// </summary>
    void UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the intervals with the requested continuity
    /// in the V direction.
    /// </summary>
    void VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns a surface trimmed in the U direction
    /// equivalent of <me> between
    /// parameters <First> and <Last>. <Tol> is used to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
    /// <summary>
    /// Returns a surface trimmed in the V direction between
    /// parameters <First> and <Last>. <Tol> is used to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
    bool IsUClosed();
    bool IsVClosed();
    bool IsUPeriodic();
    double UPeriod();
    bool IsVPeriodic();
    double VPeriod();
    /// <summary>
    /// Returns the parametric U resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double UResolution(double R3d);
    /// <summary>
    /// Returns the parametric V resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double VResolution(double R3d);
    /// <summary>
    /// Returns the type of the surface: Plane, Cylinder,
    /// Cone, Sphere, Torus, BezierSurface,
    /// BSplineSurface, SurfaceOfRevolution,
    /// SurfaceOfExtrusion, OtherSurface
    /// </summary>
    Macad::Occt::GeomAbs_SurfaceType GetSurfaceType();
    Macad::Occt::Pln Plane();
    Macad::Occt::gp_Cylinder^ Cylinder();
    Macad::Occt::gp_Cone^ Cone();
    Macad::Occt::gp_Sphere^ Sphere();
    Macad::Occt::gp_Torus^ Torus();
    int UDegree();
    int NbUPoles();
    bool IsURational();
    bool IsVRational();
    Macad::Occt::Geom_BezierSurface^ Bezier();
    Macad::Occt::Geom_BSplineSurface^ BSpline();
    Macad::Occt::Ax1 AxeOfRevolution();
    Macad::Occt::Dir Direction();
    Macad::Occt::Adaptor3d_Curve^ BasisCurve();
    static Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ CreateDowncasted(::GeomAdaptor_SurfaceOfLinearExtrusion* instance);
}; // class GeomAdaptor_SurfaceOfLinearExtrusion

//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfRevolution
//---------------------------------------------------------------------
/// <summary>
/// This class defines a complete surface of revolution.
/// The surface is obtained by rotating a curve a complete revolution
/// about an axis. The curve and the axis must be in the same plane.
/// If the curve and the axis are not in the same plane it is always
/// possible to be in the previous case after a cylindrical projection
/// of the curve in a referenced plane.
/// For a complete surface of revolution the parametric range is
/// 0 <= U <= 2*PI
/// The parametric range for V is defined with the revolved curve.
/// The origin of the U parametrization is given by the position
/// of the revolved curve (reference). The direction of the revolution
/// axis defines the positive sense of rotation (trigonometric sense)
/// corresponding to the increasing of the parametric value U.
/// The derivatives are always defined for the u direction.
/// For the v direction the definition of the derivatives depends on
/// the degree of continuity of the referenced curve.
/// </summary>
public ref class GeomAdaptor_SurfaceOfRevolution sealed
    : public Macad::Occt::GeomAdaptor_Surface
{

#ifdef Include_GeomAdaptor_SurfaceOfRevolution_h
public:
    Include_GeomAdaptor_SurfaceOfRevolution_h
#endif

public:
    GeomAdaptor_SurfaceOfRevolution(::GeomAdaptor_SurfaceOfRevolution* nativeInstance)
        : Macad::Occt::GeomAdaptor_Surface( nativeInstance )
    {}

    GeomAdaptor_SurfaceOfRevolution(::GeomAdaptor_SurfaceOfRevolution& nativeInstance)
        : Macad::Occt::GeomAdaptor_Surface( nativeInstance )
    {}

    property ::GeomAdaptor_SurfaceOfRevolution* NativeInstance
    {
        ::GeomAdaptor_SurfaceOfRevolution* get()
        {
            return static_cast<::GeomAdaptor_SurfaceOfRevolution*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor_SurfaceOfRevolution();
    /// <summary>
    /// The Curve is loaded.
    /// </summary>
    GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// The Curve and the Direction are loaded.
    /// </summary>
    GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Ax1 V);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    /// <summary>
    /// Changes the Curve
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Changes the Direction
    /// </summary>
    void Load(Macad::Occt::Ax1 V);
    Macad::Occt::Ax1 AxeOfRevolution();
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    Macad::Occt::GeomAbs_Shape UContinuity();
    /// <summary>
    /// Return CN.
    /// </summary>
    Macad::Occt::GeomAbs_Shape VContinuity();
    /// <summary>
    /// Returns the number of U intervals for continuity
    /// <S>. May be one if UContinuity(me) >= <S>
    /// </summary>
    int NbUIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the number of V intervals for continuity
    /// <S>. May be one if VContinuity(me) >= <S>
    /// </summary>
    int NbVIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the intervals with the requested continuity
    /// in the U direction.
    /// </summary>
    void UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the intervals with the requested continuity
    /// in the V direction.
    /// </summary>
    void VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns a surface trimmed in the U direction
    /// equivalent of <me> between
    /// parameters <First> and <Last>. <Tol> is used to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
    /// <summary>
    /// Returns a surface trimmed in the V direction between
    /// parameters <First> and <Last>. <Tol> is used to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
    bool IsUClosed();
    bool IsVClosed();
    bool IsUPeriodic();
    double UPeriod();
    bool IsVPeriodic();
    double VPeriod();
    /// <summary>
    /// Returns the parametric U resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double UResolution(double R3d);
    /// <summary>
    /// Returns the parametric V resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double VResolution(double R3d);
    /// <summary>
    /// Returns the type of the surface: Plane, Cylinder,
    /// Cone, Sphere, Torus, BezierSurface,
    /// BSplineSurface, SurfaceOfRevolution,
    /// SurfaceOfExtrusion, OtherSurface
    /// </summary>
    Macad::Occt::GeomAbs_SurfaceType GetSurfaceType();
    Macad::Occt::Pln Plane();
    Macad::Occt::gp_Cylinder^ Cylinder();
    /// <summary>
    /// Apex of the Cone = Cone.Position().Location()
    /// ==> ReferenceRadius = 0.
    /// </summary>
    Macad::Occt::gp_Cone^ Cone();
    Macad::Occt::gp_Sphere^ Sphere();
    Macad::Occt::gp_Torus^ Torus();
    int VDegree();
    int NbVPoles();
    int NbVKnots();
    bool IsURational();
    bool IsVRational();
    Macad::Occt::Geom_BezierSurface^ Bezier();
    Macad::Occt::Geom_BSplineSurface^ BSpline();
    Macad::Occt::Ax3 Axis();
    Macad::Occt::Adaptor3d_Curve^ BasisCurve();
    static Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ CreateDowncasted(::GeomAdaptor_SurfaceOfRevolution* instance);
}; // class GeomAdaptor_SurfaceOfRevolution

//---------------------------------------------------------------------
//  Class  GeomAdaptor_TransformedCurve
//---------------------------------------------------------------------
/// <summary>
/// An adaptor for curves with an applied transformation.
/// 
/// This class wraps a GeomAdaptor_Curve (or an Adaptor3d_CurveOnSurface) and
/// applies a gp_Trsf transformation to all point and derivative evaluations.
/// It serves as a base class for BRepAdaptor_Curve and allows batch evaluation
/// with transformations in GeomGridEval_Curve.
/// 
/// The evaluation methods (Value, D0, D1, D2, D3, DN) are marked final
/// to enable optimizations in grid evaluation.
/// </summary>
public ref class GeomAdaptor_TransformedCurve
    : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_GeomAdaptor_TransformedCurve_h
public:
    Include_GeomAdaptor_TransformedCurve_h
#endif

protected:
    GeomAdaptor_TransformedCurve(InitMode init)
        : Macad::Occt::Adaptor3d_Curve( init )
    {}

public:
    GeomAdaptor_TransformedCurve(::GeomAdaptor_TransformedCurve* nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    GeomAdaptor_TransformedCurve(::GeomAdaptor_TransformedCurve& nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    property ::GeomAdaptor_TransformedCurve* NativeInstance
    {
        ::GeomAdaptor_TransformedCurve* get()
        {
            return static_cast<::GeomAdaptor_TransformedCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined curve with identity transformation.
    /// </summary>
    GeomAdaptor_TransformedCurve();
    /// <summary>
    /// Creates a curve adaptor with transformation.
    /// </summary>
    /// <param name="theCurve">
    /// underlying geometry
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    GeomAdaptor_TransformedCurve(Macad::Occt::Geom_Curve^ theCurve, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Creates a curve adaptor with transformation and parameter bounds.
    /// </summary>
    /// <param name="theCurve">
    /// underlying geometry
    /// </param>
    /// <param name="theFirst">
    /// minimum parameter
    /// </param>
    /// <param name="theLast">
    /// maximum parameter
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    GeomAdaptor_TransformedCurve(Macad::Occt::Geom_Curve^ theCurve, double theFirst, double theLast, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Shallow copy of adaptor.
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Loads the curve geometry.
    /// </summary>
    /// <param name="theCurve">
    /// underlying geometry
    /// </param>
    void Load(Macad::Occt::Geom_Curve^ theCurve);
    /// <summary>
    /// Loads the curve geometry with parameter bounds.
    /// </summary>
    /// <param name="theCurve">
    /// underlying geometry
    /// </param>
    /// <param name="theFirst">
    /// minimum parameter
    /// </param>
    /// <param name="theLast">
    /// maximum parameter
    /// </param>
    void Load(Macad::Occt::Geom_Curve^ theCurve, double theFirst, double theLast);
    /// <summary>
    /// Sets the curve on surface adaptor.
    /// </summary>
    /// <param name="theConSurf">
    /// curve on surface adaptor
    /// </param>
    void LoadCurveOnSurface(Macad::Occt::Adaptor3d_CurveOnSurface^ theConSurf);
    /// <summary>
    /// Sets the transformation.
    /// </summary>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    void SetTrsf(Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Returns the transformation.
    /// </summary>
    Macad::Occt::Trsf Trsf();
    /// <summary>
    /// Returns true if the geometry is a 3D curve (not curve on surface).
    /// </summary>
    bool Is3DCurve();
    /// <summary>
    /// Returns true if the geometry is a curve on surface.
    /// </summary>
    bool IsCurveOnSurface();
    /// <summary>
    /// Returns the underlying GeomAdaptor_Curve.
    /// </summary>
    Macad::Occt::GeomAdaptor_Curve^ Curve();
    /// <summary>
    /// Returns the underlying GeomAdaptor_Curve for modification.
    /// </summary>
    Macad::Occt::GeomAdaptor_Curve^ ChangeCurve();
    /// <summary>
    /// Returns the CurveOnSurface adaptor.
    /// </summary>
    Macad::Occt::Adaptor3d_CurveOnSurface^ CurveOnSurface();
    /// <summary>
    /// Returns the underlying Geom_Curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ GeomCurve();
    double FirstParameter();
    double LastParameter();
    Macad::Occt::GeomAbs_Shape Continuity();
    int NbIntervals(Macad::Occt::GeomAbs_Shape theS);
    void Intervals(Macad::Occt::TColStd_Array1OfReal^ theT, Macad::Occt::GeomAbs_Shape theS);
    Macad::Occt::Adaptor3d_Curve^ Trim(double theFirst, double theLast, double theTol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Point evaluation. Applies transformation after evaluation.
    /// </summary>
    Macad::Occt::Pnt EvalD0(double theU);
    /* Method skipped due to unknown mapping: ResD1 EvalD1(double theU, ) */
    /* Method skipped due to unknown mapping: ResD2 EvalD2(double theU, ) */
    /* Method skipped due to unknown mapping: ResD3 EvalD3(double theU, ) */
    /// <summary>
    /// DN evaluation. Applies transformation after evaluation.
    /// </summary>
    Macad::Occt::Vec EvalDN(double theU, int theN);
    double Resolution(double theR3d);
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
    Macad::Occt::Geom_OffsetCurve^ OffsetCurve();
    static Macad::Occt::GeomAdaptor_TransformedCurve^ CreateDowncasted(::GeomAdaptor_TransformedCurve* instance);
}; // class GeomAdaptor_TransformedCurve

//---------------------------------------------------------------------
//  Class  GeomAdaptor_TransformedSurface
//---------------------------------------------------------------------
/// <summary>
/// An adaptor for surfaces with an applied transformation.
/// 
/// This class wraps a GeomAdaptor_Surface and applies a gp_Trsf transformation
/// to all point and derivative evaluations. It serves as a base class for
/// BRepAdaptor_Surface and allows batch evaluation with transformations in
/// GeomGridEval_Surface.
/// 
/// The evaluation methods (Value, D0, D1, D2, D3, DN) are marked final
/// to enable optimizations in grid evaluation.
/// </summary>
public ref class GeomAdaptor_TransformedSurface
    : public Macad::Occt::Adaptor3d_Surface
{

#ifdef Include_GeomAdaptor_TransformedSurface_h
public:
    Include_GeomAdaptor_TransformedSurface_h
#endif

protected:
    GeomAdaptor_TransformedSurface(InitMode init)
        : Macad::Occt::Adaptor3d_Surface( init )
    {}

public:
    GeomAdaptor_TransformedSurface(::GeomAdaptor_TransformedSurface* nativeInstance)
        : Macad::Occt::Adaptor3d_Surface( nativeInstance )
    {}

    GeomAdaptor_TransformedSurface(::GeomAdaptor_TransformedSurface& nativeInstance)
        : Macad::Occt::Adaptor3d_Surface( nativeInstance )
    {}

    property ::GeomAdaptor_TransformedSurface* NativeInstance
    {
        ::GeomAdaptor_TransformedSurface* get()
        {
            return static_cast<::GeomAdaptor_TransformedSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined surface with identity transformation.
    /// </summary>
    GeomAdaptor_TransformedSurface();
    /// <summary>
    /// Creates a surface adaptor with transformation.
    /// </summary>
    /// <param name="theSurface">
    /// underlying geometry
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    GeomAdaptor_TransformedSurface(Macad::Occt::Geom_Surface^ theSurface, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Creates a surface adaptor with transformation and parameter bounds.
    /// </summary>
    /// <param name="theSurface">
    /// underlying geometry
    /// </param>
    /// <param name="theUFirst">
    /// minimum U parameter
    /// </param>
    /// <param name="theULast">
    /// maximum U parameter
    /// </param>
    /// <param name="theVFirst">
    /// minimum V parameter
    /// </param>
    /// <param name="theVLast">
    /// maximum V parameter
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    /// <param name="theTolU">
    /// tolerance in U direction
    /// </param>
    /// <param name="theTolV">
    /// tolerance in V direction
    /// </param>
    GeomAdaptor_TransformedSurface(Macad::Occt::Geom_Surface^ theSurface, double theUFirst, double theULast, double theVFirst, double theVLast, Macad::Occt::Trsf theTrsf, double theTolU, double theTolV);
    /// <summary>
    /// Creates a surface adaptor with transformation and parameter bounds.
    /// </summary>
    /// <param name="theSurface">
    /// underlying geometry
    /// </param>
    /// <param name="theUFirst">
    /// minimum U parameter
    /// </param>
    /// <param name="theULast">
    /// maximum U parameter
    /// </param>
    /// <param name="theVFirst">
    /// minimum V parameter
    /// </param>
    /// <param name="theVLast">
    /// maximum V parameter
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    /// <param name="theTolU">
    /// tolerance in U direction
    /// </param>
    /// <param name="theTolV">
    /// tolerance in V direction
    /// </param>
    GeomAdaptor_TransformedSurface(Macad::Occt::Geom_Surface^ theSurface, double theUFirst, double theULast, double theVFirst, double theVLast, Macad::Occt::Trsf theTrsf, double theTolU);
    /// <summary>
    /// Creates a surface adaptor with transformation and parameter bounds.
    /// </summary>
    /// <param name="theSurface">
    /// underlying geometry
    /// </param>
    /// <param name="theUFirst">
    /// minimum U parameter
    /// </param>
    /// <param name="theULast">
    /// maximum U parameter
    /// </param>
    /// <param name="theVFirst">
    /// minimum V parameter
    /// </param>
    /// <param name="theVLast">
    /// maximum V parameter
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    /// <param name="theTolU">
    /// tolerance in U direction
    /// </param>
    /// <param name="theTolV">
    /// tolerance in V direction
    /// </param>
    GeomAdaptor_TransformedSurface(Macad::Occt::Geom_Surface^ theSurface, double theUFirst, double theULast, double theVFirst, double theVLast, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Shallow copy of adaptor.
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    /// <summary>
    /// Loads the surface geometry.
    /// </summary>
    /// <param name="theSurface">
    /// underlying geometry
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    void Load(Macad::Occt::Geom_Surface^ theSurface, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Loads the surface geometry with parameter bounds.
    /// </summary>
    /// <param name="theSurface">
    /// underlying geometry
    /// </param>
    /// <param name="theUFirst">
    /// minimum U parameter
    /// </param>
    /// <param name="theULast">
    /// maximum U parameter
    /// </param>
    /// <param name="theVFirst">
    /// minimum V parameter
    /// </param>
    /// <param name="theVLast">
    /// maximum V parameter
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    /// <param name="theTolU">
    /// tolerance in U direction
    /// </param>
    /// <param name="theTolV">
    /// tolerance in V direction
    /// </param>
    void Load(Macad::Occt::Geom_Surface^ theSurface, double theUFirst, double theULast, double theVFirst, double theVLast, Macad::Occt::Trsf theTrsf, double theTolU, double theTolV);
    /// <summary>
    /// Loads the surface geometry with parameter bounds.
    /// </summary>
    /// <param name="theSurface">
    /// underlying geometry
    /// </param>
    /// <param name="theUFirst">
    /// minimum U parameter
    /// </param>
    /// <param name="theULast">
    /// maximum U parameter
    /// </param>
    /// <param name="theVFirst">
    /// minimum V parameter
    /// </param>
    /// <param name="theVLast">
    /// maximum V parameter
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    /// <param name="theTolU">
    /// tolerance in U direction
    /// </param>
    /// <param name="theTolV">
    /// tolerance in V direction
    /// </param>
    void Load(Macad::Occt::Geom_Surface^ theSurface, double theUFirst, double theULast, double theVFirst, double theVLast, Macad::Occt::Trsf theTrsf, double theTolU);
    /// <summary>
    /// Loads the surface geometry with parameter bounds.
    /// </summary>
    /// <param name="theSurface">
    /// underlying geometry
    /// </param>
    /// <param name="theUFirst">
    /// minimum U parameter
    /// </param>
    /// <param name="theULast">
    /// maximum U parameter
    /// </param>
    /// <param name="theVFirst">
    /// minimum V parameter
    /// </param>
    /// <param name="theVLast">
    /// maximum V parameter
    /// </param>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    /// <param name="theTolU">
    /// tolerance in U direction
    /// </param>
    /// <param name="theTolV">
    /// tolerance in V direction
    /// </param>
    void Load(Macad::Occt::Geom_Surface^ theSurface, double theUFirst, double theULast, double theVFirst, double theVLast, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Sets the transformation.
    /// </summary>
    /// <param name="theTrsf">
    /// transformation to apply
    /// </param>
    void SetTrsf(Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Returns true if non-identity transformation is applied.
    /// </summary>
    bool HasTrsf();
    /// <summary>
    /// Returns the transformation.
    /// </summary>
    Macad::Occt::Trsf Trsf();
    /// <summary>
    /// Returns the underlying GeomAdaptor_Surface.
    /// </summary>
    Macad::Occt::GeomAdaptor_Surface^ Surface();
    /// <summary>
    /// Returns the underlying original GeomAdaptor_Surface without transformation applied.
    /// </summary>
    Macad::Occt::GeomAdaptor_Surface^ AdaptorSurfaceOriginal();
    /// <summary>
    /// Returns an adaptor for the transformed surface state.
    /// Uses the original adaptor for identity transformation to preserve existing trimming.
    /// </summary>
    Macad::Occt::GeomAdaptor_Surface^ AdaptorSurfaceTransformed();
    /// <summary>
    /// Returns the underlying original Geom_Surface without transformation applied.
    /// </summary>
    Macad::Occt::Geom_Surface^ GeomSurfaceOriginal();
    /// <summary>
    /// Returns the transformed Geom_Surface cached for current state.
    /// </summary>
    Macad::Occt::Geom_Surface^ GeomSurfaceTransformed();
    /// <summary>
    /// Returns the underlying Geom_Surface.
    /// </summary>
    Macad::Occt::Geom_Surface^ GeomSurface();
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    Macad::Occt::GeomAbs_Shape UContinuity();
    Macad::Occt::GeomAbs_Shape VContinuity();
    int NbUIntervals(Macad::Occt::GeomAbs_Shape theS);
    int NbVIntervals(Macad::Occt::GeomAbs_Shape theS);
    void UIntervals(Macad::Occt::TColStd_Array1OfReal^ theT, Macad::Occt::GeomAbs_Shape theS);
    void VIntervals(Macad::Occt::TColStd_Array1OfReal^ theT, Macad::Occt::GeomAbs_Shape theS);
    Macad::Occt::Adaptor3d_Surface^ UTrim(double theFirst, double theLast, double theTol);
    Macad::Occt::Adaptor3d_Surface^ VTrim(double theFirst, double theLast, double theTol);
    bool IsUClosed();
    bool IsVClosed();
    bool IsUPeriodic();
    double UPeriod();
    bool IsVPeriodic();
    double VPeriod();
    /// <summary>
    /// Returns tolerance in U direction.
    /// </summary>
    double ToleranceU();
    /// <summary>
    /// Returns tolerance in V direction.
    /// </summary>
    double ToleranceV();
    /// <summary>
    /// Point evaluation. Applies transformation after evaluation.
    /// </summary>
    Macad::Occt::Pnt EvalD0(double theU, double theV);
    /* Method skipped due to unknown mapping: ResD1 EvalD1(double theU, double theV, ) */
    /* Method skipped due to unknown mapping: ResD2 EvalD2(double theU, double theV, ) */
    /* Method skipped due to unknown mapping: ResD3 EvalD3(double theU, double theV, ) */
    /// <summary>
    /// DN evaluation. Applies transformation after evaluation.
    /// </summary>
    Macad::Occt::Vec EvalDN(double theU, double theV, int theNu, int theNv);
    double UResolution(double theR3d);
    double VResolution(double theR3d);
    Macad::Occt::GeomAbs_SurfaceType GetSurfaceType();
    Macad::Occt::Pln Plane();
    Macad::Occt::gp_Cylinder^ Cylinder();
    Macad::Occt::gp_Cone^ Cone();
    Macad::Occt::gp_Sphere^ Sphere();
    Macad::Occt::gp_Torus^ Torus();
    int UDegree();
    int NbUPoles();
    int VDegree();
    int NbVPoles();
    int NbUKnots();
    int NbVKnots();
    bool IsURational();
    bool IsVRational();
    Macad::Occt::Geom_BezierSurface^ Bezier();
    Macad::Occt::Geom_BSplineSurface^ BSpline();
    Macad::Occt::Ax1 AxeOfRevolution();
    Macad::Occt::Dir Direction();
    Macad::Occt::Adaptor3d_Curve^ BasisCurve();
    Macad::Occt::Adaptor3d_Surface^ BasisSurface();
    double OffsetValue();
    static Macad::Occt::GeomAdaptor_TransformedSurface^ CreateDowncasted(::GeomAdaptor_TransformedSurface* instance);
}; // class GeomAdaptor_TransformedSurface

}; // namespace Occt
}; // namespace Macad
