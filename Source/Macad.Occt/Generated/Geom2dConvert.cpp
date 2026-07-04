// Generated wrapper code for package Geom2dConvert

#include "OcctPCH.h"
#include "Geom2dConvert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Convert.h"
#include "TColStd.h"
#include "gp.h"
#include "Adaptor2d.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  Geom2dConvert
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert::Geom2dConvert()
    : Macad::Occt::BaseClass<::Geom2dConvert>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert();
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromK1, ToK2, SameOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromK1, ToK2, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, SameOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::CurveToBSplineCurve(Handle(::Geom2d_Curve)(C->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::CurveToBSplineCurve(Handle(::Geom2d_Curve)(C->NativeInstance), Convert_TgtThetaOver2);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

void Macad::Occt::Geom2dConvert::C0BSplineToC1BSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ BS, double Tolerance)
{
    Handle(::Geom2d_BSplineCurve) h_BS = BS->NativeInstance;
    ::Geom2dConvert::C0BSplineToC1BSplineCurve(h_BS, Tolerance);
    BS->NativeInstance = h_BS.get();
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_PPoint
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_PPoint::Geom2dConvert_PPoint()
    : Macad::Occt::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_PPoint();
}

Macad::Occt::Geom2dConvert_PPoint::Geom2dConvert_PPoint(double theParameter, Macad::Occt::XY thePoint, Macad::Occt::XY theD1)
    : Macad::Occt::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::XY> pp_thePoint = &thePoint;
    pin_ptr<Macad::Occt::XY> pp_theD1 = &theD1;
    _NativeInstance = new ::Geom2dConvert_PPoint(theParameter, *(gp_XY*)pp_thePoint, *(gp_XY*)pp_theD1);
}

Macad::Occt::Geom2dConvert_PPoint::Geom2dConvert_PPoint(double theParameter, Macad::Occt::Adaptor2d_Curve2d^ theAdaptor)
    : Macad::Occt::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_PPoint(theParameter, *(::Adaptor2d_Curve2d*)theAdaptor->NativeInstance);
}

double Macad::Occt::Geom2dConvert_PPoint::Dist(Macad::Occt::Geom2dConvert_PPoint^ theOth)
{
    double _result = ((::Geom2dConvert_PPoint*)_NativeInstance)->Dist(*(::Geom2dConvert_PPoint*)theOth->NativeInstance);
    return _result;
}

double Macad::Occt::Geom2dConvert_PPoint::Parameter()
{
    double _result = ((::Geom2dConvert_PPoint*)_NativeInstance)->Parameter();
    return _result;
}

Macad::Occt::XY Macad::Occt::Geom2dConvert_PPoint::Point()
{
    ::gp_XY _nativeResult = ((::Geom2dConvert_PPoint*)_NativeInstance)->Point();
    return Macad::Occt::XY(_nativeResult);
}

Macad::Occt::XY Macad::Occt::Geom2dConvert_PPoint::D1()
{
    ::gp_XY _nativeResult = ((::Geom2dConvert_PPoint*)_NativeInstance)->D1();
    return Macad::Occt::XY(_nativeResult);
}

void Macad::Occt::Geom2dConvert_PPoint::SetD1(Macad::Occt::XY theD1)
{
    pin_ptr<Macad::Occt::XY> pp_theD1 = &theD1;
    ((::Geom2dConvert_PPoint*)_NativeInstance)->SetD1(*(gp_XY*)pp_theD1);
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxArcsSegments
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_ApproxArcsSegments::Geom2dConvert_ApproxArcsSegments(Macad::Occt::Adaptor2d_Curve2d^ theCurve, double theTolerance, double theAngleTol)
    : Macad::Occt::BaseClass<::Geom2dConvert_ApproxArcsSegments>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_ApproxArcsSegments(*(::Adaptor2d_Curve2d*)theCurve->NativeInstance, theTolerance, theAngleTol);
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(Macad::Occt::Geom2d_Curve^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
    : Macad::Occt::BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_ApproxCurve(Handle(::Geom2d_Curve)(Curve->NativeInstance), Tol2d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

Macad::Occt::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(Macad::Occt::Adaptor2d_Curve2d^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
    : Macad::Occt::BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_ApproxCurve(Handle(::Adaptor2d_Curve2d)(Curve->NativeInstance), Tol2d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert_ApproxCurve::Curve()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool Macad::Occt::Geom2dConvert_ApproxCurve::IsDone()
{
    bool _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::Geom2dConvert_ApproxCurve::HasResult()
{
    bool _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->HasResult();
    return _result;
}

double Macad::Occt::Geom2dConvert_ApproxCurve::MaxError()
{
    double _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->MaxError();
    return _result;
}

void Macad::Occt::Geom2dConvert_ApproxCurve::Dump(System::IO::TextWriter^ o)
{
    std::ostringstream oss_o;
    ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->Dump(oss_o);
    o->Write(gcnew System::String(oss_o.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::Geom2dConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, int ContinuityRange)
    : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_BSplineCurveKnotSplitting(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance), ContinuityRange);
}

int Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::NbSplits()
{
    int _result = ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->NbSplits();
    return _result;
}

void Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues)
{
    ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)SplitValues->NativeInstance);
}

int Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::SplitValue(int Index)
{
    int _result = ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->SplitValue(Index);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve)
    : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance));
}

Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance)
    : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance), U1, U2, ParametricTolerance);
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Arc(int Index)
{
    Handle(::Geom2d_BezierCurve) _result = ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Arc(Index);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

void Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots)
{
    ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::NbArcs()
{
    int _result = ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->NbArcs();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation)
    : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve((::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve()
    : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Convert_TgtThetaOver2);
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation)
    : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Handle(::Geom2d_BoundedCurve)(BasisCurve->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve)
    : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Handle(::Geom2d_BoundedCurve)(BasisCurve->NativeInstance), Convert_TgtThetaOver2);
}

bool Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance, bool After)
{
    bool _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom2d_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After);
    return _result;
}

bool Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance)
{
    bool _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom2d_BoundedCurve)(NewCurve->NativeInstance), Tolerance, false);
    return _result;
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::BSplineCurve()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->BSplineCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

void Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Clear()
{
    ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Clear();
}


