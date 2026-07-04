// Generated wrapper code for package ShapeConstruct

#pragma once

#include "BRepBuilderAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeConstruct
//---------------------------------------------------------------------
/// <summary>
/// This package provides new algorithms for constructing
/// new geometrical objects and topological shapes. It
/// complements and extends algorithms available in Open
/// CASCADE topological and geometrical toolkist.
/// The functionality provided by this package are the
/// following:
/// projecting curves on surface,
/// adjusting curve to have given start and end points. P
/// </summary>
public ref class ShapeConstruct sealed
    : public Macad::Occt::BaseClass<::ShapeConstruct>
{

#ifdef Include_ShapeConstruct_h
public:
    Include_ShapeConstruct_h
#endif

public:
    ShapeConstruct(::ShapeConstruct* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeConstruct>( nativeInstance, true )
    {}

    ShapeConstruct(::ShapeConstruct& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeConstruct>( &nativeInstance, false )
    {}

    property ::ShapeConstruct* NativeInstance
    {
        ::ShapeConstruct* get()
        {
            return static_cast<::ShapeConstruct*>(_NativeInstance);
        }
    }

public:
    ShapeConstruct();
    /// <summary>
    /// Tool for wire triangulation
    /// </summary>
    static Macad::Occt::Geom_BSplineCurve^ ConvertCurveToBSpline(Macad::Occt::Geom_Curve^ C3D, double First, double Last, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
    static Macad::Occt::Geom2d_BSplineCurve^ ConvertCurveToBSpline(Macad::Occt::Geom2d_Curve^ C2D, double First, double Last, double Tol2d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
    static Macad::Occt::Geom_BSplineSurface^ ConvertSurfaceToBSpline(Macad::Occt::Geom_Surface^ surf, double UF, double UL, double VF, double VL, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
    /// <summary>
    /// join pcurves of the <theEdge> on the <theFace>
    /// try to use pcurves from originas edges <theEdges>
    /// Returns false if cannot join pcurves
    /// </summary>
    static bool JoinPCurves(Macad::Occt::TopTools_HSequenceOfShape^ theEdges, Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge);
    /// <summary>
    /// Method for joininig curves 3D.
    /// Parameters : c3d1,ac3d2 - initial curves
    /// Orient1, Orient2 - initial edges orientations.
    /// first1,last1,first2,last2 - parameters for trimming curves
    /// (re-calculate with account of orientation edges)
    /// c3dOut - result curve
    /// isRev1,isRev2 - out parameters indicative on possible errors.
    /// Return value : True - if curves were joined successfully,
    /// else - False.
    /// </summary>
    static bool JoinCurves(Macad::Occt::Geom_Curve^ c3d1, Macad::Occt::Geom_Curve^ ac3d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom_Curve^ c3dOut, bool% isRev1, bool% isRev2);
    /// <summary>
    /// Method for joininig curves 3D.
    /// Parameters : c3d1,ac3d2 - initial curves
    /// Orient1, Orient2 - initial edges orientations.
    /// first1,last1,first2,last2 - parameters for trimming curves
    /// (re-calculate with account of orientation edges)
    /// c3dOut - result curve
    /// isRev1,isRev2 - out parameters indicative on possible errors.
    /// isError - input parameter indicative possible errors due to that one from edges have one
    /// vertex Return value : True - if curves were joined successfully, else - False.
    /// </summary>
    static bool JoinCurves(Macad::Occt::Geom2d_Curve^ c2d1, Macad::Occt::Geom2d_Curve^ ac2d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2, bool isError);
    /// <summary>
    /// Method for joininig curves 3D.
    /// Parameters : c3d1,ac3d2 - initial curves
    /// Orient1, Orient2 - initial edges orientations.
    /// first1,last1,first2,last2 - parameters for trimming curves
    /// (re-calculate with account of orientation edges)
    /// c3dOut - result curve
    /// isRev1,isRev2 - out parameters indicative on possible errors.
    /// isError - input parameter indicative possible errors due to that one from edges have one
    /// vertex Return value : True - if curves were joined successfully, else - False.
    /// </summary>
    static bool JoinCurves(Macad::Occt::Geom2d_Curve^ c2d1, Macad::Occt::Geom2d_Curve^ ac2d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2);
}; // class ShapeConstruct

//---------------------------------------------------------------------
//  Class  ShapeConstruct_Curve
//---------------------------------------------------------------------
/// <summary>
/// Adjusts curve to have start and end points at the given
/// points (currently works on lines and B-Splines only)
/// </summary>
public ref class ShapeConstruct_Curve sealed
    : public Macad::Occt::BaseClass<::ShapeConstruct_Curve>
{

#ifdef Include_ShapeConstruct_Curve_h
public:
    Include_ShapeConstruct_Curve_h
#endif

public:
    ShapeConstruct_Curve(::ShapeConstruct_Curve* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeConstruct_Curve>( nativeInstance, true )
    {}

    ShapeConstruct_Curve(::ShapeConstruct_Curve& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeConstruct_Curve>( &nativeInstance, false )
    {}

    property ::ShapeConstruct_Curve* NativeInstance
    {
        ::ShapeConstruct_Curve* get()
        {
            return static_cast<::ShapeConstruct_Curve*>(_NativeInstance);
        }
    }

public:
    ShapeConstruct_Curve();
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool take1, bool take2);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool take1);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines.
    /// 
    /// For lines works as previous method, B-Splines are segmented
    /// at the given values and then are adjusted to the points.
    /// </summary>
    bool AdjustCurveSegment(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double U1, double U2);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// 
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool take1, bool take2);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// 
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool take1);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// 
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    /// <summary>
    /// Converts a curve of any type (only part from first to last)
    /// to bspline. The method of conversion depends on the type
    /// of original curve:
    /// BSpline -> C.Segment(first,last)
    /// Bezier and Line -> GeomConvert::CurveToBSplineCurve(C).Segment(first,last)
    /// Conic and Other -> Approx_Curve3d(C[first,last],prec,C1,9,1000)
    /// </summary>
    Macad::Occt::Geom_BSplineCurve^ ConvertToBSpline(Macad::Occt::Geom_Curve^ C, double first, double last, double prec);
    /// <summary>
    /// Converts a curve of any type (only part from first to last)
    /// to bspline. The method of conversion depends on the type
    /// of original curve:
    /// BSpline -> C.Segment(first,last)
    /// Bezier and Line -> GeomConvert::CurveToBSplineCurve(C).Segment(first,last)
    /// Conic and Other -> Approx_Curve2d(C[first,last],prec,C1,9,1000)
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ ConvertToBSpline(Macad::Occt::Geom2d_Curve^ C, double first, double last, double prec);
    static bool FixKnots(Macad::Occt::TColStd_HArray1OfReal^ knots);
    /// <summary>
    /// Fix bspline knots to ensure that there is enough
    /// gap between neighbouring values
    /// Returns True if something fixed (by shifting knot)
    /// </summary>
    static bool FixKnots(Macad::Occt::TColStd_Array1OfReal^ knots);
}; // class ShapeConstruct_Curve

//---------------------------------------------------------------------
//  Class  ShapeConstruct_MakeTriangulation
//---------------------------------------------------------------------
public ref class ShapeConstruct_MakeTriangulation sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_ShapeConstruct_MakeTriangulation_h
public:
    Include_ShapeConstruct_MakeTriangulation_h
#endif

public:
    ShapeConstruct_MakeTriangulation(::ShapeConstruct_MakeTriangulation* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    ShapeConstruct_MakeTriangulation(::ShapeConstruct_MakeTriangulation& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::ShapeConstruct_MakeTriangulation* NativeInstance
    {
        ::ShapeConstruct_MakeTriangulation* get()
        {
            return static_cast<::ShapeConstruct_MakeTriangulation*>(_NativeInstance);
        }
    }

public:
    ShapeConstruct_MakeTriangulation(Macad::Occt::TColgp_Array1OfPnt^ pnts, double prec);
    ShapeConstruct_MakeTriangulation(Macad::Occt::TColgp_Array1OfPnt^ pnts);
    ShapeConstruct_MakeTriangulation(Macad::Occt::TopoDS_Wire^ wire, double prec);
    ShapeConstruct_MakeTriangulation(Macad::Occt::TopoDS_Wire^ wire);
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    void Build();
    bool IsDone();
}; // class ShapeConstruct_MakeTriangulation

//---------------------------------------------------------------------
//  Class  ShapeConstruct_ProjectCurveOnSurface
//---------------------------------------------------------------------
/// <summary>
/// This tool provides a method for computing pcurve by projecting
/// 3d curve onto a surface.
/// Projection is done by 23 or more points (this number is changed
/// for B-Splines according to the following rule:
/// the total number of the points is not less than number of spans *
/// (degree + 1);
/// it is increased recursively starting with 23 and is added with 22
/// until the condition is fulfilled).
/// Isoparametric cases (if curve corresponds to U=const or V=const on
/// the surface) are recognized with the given precision.
/// </summary>
public ref class ShapeConstruct_ProjectCurveOnSurface sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeConstruct_ProjectCurveOnSurface_h
public:
    Include_ShapeConstruct_ProjectCurveOnSurface_h
#endif

public:
    ShapeConstruct_ProjectCurveOnSurface(::ShapeConstruct_ProjectCurveOnSurface* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeConstruct_ProjectCurveOnSurface(::ShapeConstruct_ProjectCurveOnSurface& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeConstruct_ProjectCurveOnSurface* NativeInstance
    {
        ::ShapeConstruct_ProjectCurveOnSurface* get()
        {
            return static_cast<::ShapeConstruct_ProjectCurveOnSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) the flag specifying to which side of
    /// parametrical space adjust part of pcurve which lies on seam.
    /// This is required in very rare case when 3d curve which is
    /// to be projected goes partly along the seam on the closed
    /// surface with singularity (e.g. sphere), goes through the
    /// degenerated point and partly lies on internal area of surface.
    /// 
    /// If this flag is True, the seam part of such curve will be
    /// adjusted to the left side of parametric space (on sphere U=0),
    /// else to the right side (on sphere U=2*PI)
    /// Default value is True
    /// </summary>
    /// <returns>
    /// modifiable reference to the adjustment flag
    /// </returns>
    property int AdjustOverDegenMode {
        int get() {
            return ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->AdjustOverDegenMode();
        }
        void set(int value) {
            ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->AdjustOverDegenMode() = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeConstruct_ProjectCurveOnSurface();
    /// <summary>
    /// Initializes the object with all necessary parameters,
    /// i.e. surface and precision
    /// </summary>
    /// <param name="in]">
    /// theSurf the surface to project on
    /// </param>
    /// <param name="in]">
    /// thePreci the precision for projection
    /// </param>
    void Init(Macad::Occt::Geom_Surface^ theSurf, double thePreci);
    /// <summary>
    /// Initializes the object with all necessary parameters,
    /// i.e. surface and precision
    /// </summary>
    /// <param name="in]">
    /// theSurf the surface to project on (ShapeAnalysis_Surface)
    /// </param>
    /// <param name="in]">
    /// thePreci the precision for projection
    /// </param>
    void Init(Macad::Occt::ShapeAnalysis_Surface^ theSurf, double thePreci);
    /// <summary>
    /// Loads a surface (in the form of Geom_Surface) to project on
    /// </summary>
    /// <param name="in]">
    /// theSurf the surface to project on
    /// </param>
    void SetSurface(Macad::Occt::Geom_Surface^ theSurf);
    /// <summary>
    /// Loads a surface (in the form of ShapeAnalysis_Surface) to project on
    /// </summary>
    /// <param name="in]">
    /// theSurf the surface to project on
    /// </param>
    void SetSurface(Macad::Occt::ShapeAnalysis_Surface^ theSurf);
    /// <summary>
    /// Sets value for current precision
    /// </summary>
    /// <param name="in]">
    /// thePreci the precision value
    /// </param>
    void SetPrecision(double thePreci);
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status theStatus, ) */
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// specialized algorithm. Returns False if projector fails,
    /// otherwise, if pcurve computed successfully, returns True.
    /// The output curve 2D is guaranteed to be same-parameter
    /// with input curve 3D on the interval [theFirst, theLast]. If the output curve
    /// lies on a direct line the infinite line is returned, in the case
    /// same-parameter condition is satisfied.
    /// </summary>
    /// <param name="in]">
    /// theC3D the 3D curve to project
    /// </param>
    /// <param name="in]">
    /// theFirst the first parameter of the curve
    /// </param>
    /// <param name="in]">
    /// theLast the last parameter of the curve
    /// </param>
    /// <param name="out]">
    /// theC2D the resulting 2D curve
    /// </param>
    /// <param name="in]">
    /// theTolFirst the tolerance at the first point (default: Precision::Confusion())
    /// </param>
    /// <param name="in]">
    /// theTolLast the tolerance at the last point (default: Precision::Confusion())
    /// </param>
    /// <returns>
    /// true if projection succeeded
    /// </returns>
    bool Perform(Macad::Occt::Geom_Curve^ theC3D, double theFirst, double theLast, Macad::Occt::Geom2d_Curve^ theC2D, double theTolFirst, double theTolLast);
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// specialized algorithm. Returns False if projector fails,
    /// otherwise, if pcurve computed successfully, returns True.
    /// The output curve 2D is guaranteed to be same-parameter
    /// with input curve 3D on the interval [theFirst, theLast]. If the output curve
    /// lies on a direct line the infinite line is returned, in the case
    /// same-parameter condition is satisfied.
    /// </summary>
    /// <param name="in]">
    /// theC3D the 3D curve to project
    /// </param>
    /// <param name="in]">
    /// theFirst the first parameter of the curve
    /// </param>
    /// <param name="in]">
    /// theLast the last parameter of the curve
    /// </param>
    /// <param name="out]">
    /// theC2D the resulting 2D curve
    /// </param>
    /// <param name="in]">
    /// theTolFirst the tolerance at the first point (default: Precision::Confusion())
    /// </param>
    /// <param name="in]">
    /// theTolLast the tolerance at the last point (default: Precision::Confusion())
    /// </param>
    /// <returns>
    /// true if projection succeeded
    /// </returns>
    bool Perform(Macad::Occt::Geom_Curve^ theC3D, double theFirst, double theLast, Macad::Occt::Geom2d_Curve^ theC2D, double theTolFirst);
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// specialized algorithm. Returns False if projector fails,
    /// otherwise, if pcurve computed successfully, returns True.
    /// The output curve 2D is guaranteed to be same-parameter
    /// with input curve 3D on the interval [theFirst, theLast]. If the output curve
    /// lies on a direct line the infinite line is returned, in the case
    /// same-parameter condition is satisfied.
    /// </summary>
    /// <param name="in]">
    /// theC3D the 3D curve to project
    /// </param>
    /// <param name="in]">
    /// theFirst the first parameter of the curve
    /// </param>
    /// <param name="in]">
    /// theLast the last parameter of the curve
    /// </param>
    /// <param name="out]">
    /// theC2D the resulting 2D curve
    /// </param>
    /// <param name="in]">
    /// theTolFirst the tolerance at the first point (default: Precision::Confusion())
    /// </param>
    /// <param name="in]">
    /// theTolLast the tolerance at the last point (default: Precision::Confusion())
    /// </param>
    /// <returns>
    /// true if projection succeeded
    /// </returns>
    bool Perform(Macad::Occt::Geom_Curve^ theC3D, double theFirst, double theLast, Macad::Occt::Geom2d_Curve^ theC2D);
    static Macad::Occt::ShapeConstruct_ProjectCurveOnSurface^ CreateDowncasted(::ShapeConstruct_ProjectCurveOnSurface* instance);
}; // class ShapeConstruct_ProjectCurveOnSurface

}; // namespace Occt
}; // namespace Macad
