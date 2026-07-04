// Generated wrapper code for package BRepLProp

#include "OcctPCH.h"
#include "BRepLProp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "GeomAbs.h"
#include "BRepAdaptor.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  BRepLProp
//---------------------------------------------------------------------

Macad::Occt::BRepLProp::BRepLProp()
    : Macad::Occt::BaseClass<::BRepLProp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLProp();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepLProp::Continuity(Macad::Occt::BRepAdaptor_Curve^ C1, Macad::Occt::BRepAdaptor_Curve^ C2, double u1, double u2, double tl, double ta)
{
    ::GeomAbs_Shape _result = ::BRepLProp::Continuity(*(::BRepAdaptor_Curve*)C1->NativeInstance, *(::BRepAdaptor_Curve*)C2->NativeInstance, u1, u2, tl, ta);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepLProp::Continuity(Macad::Occt::BRepAdaptor_Curve^ C1, Macad::Occt::BRepAdaptor_Curve^ C2, double u1, double u2)
{
    ::GeomAbs_Shape _result = ::BRepLProp::Continuity(*(::BRepAdaptor_Curve*)C1->NativeInstance, *(::BRepAdaptor_Curve*)C2->NativeInstance, u1, u2);
    return (Macad::Occt::GeomAbs_Shape)_result;
}



//---------------------------------------------------------------------
//  Class  BRepLProp_SurfaceTool
//---------------------------------------------------------------------

Macad::Occt::BRepLProp_SurfaceTool::BRepLProp_SurfaceTool()
    : Macad::Occt::BaseClass<::BRepLProp_SurfaceTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLProp_SurfaceTool();
}

void Macad::Occt::BRepLProp_SurfaceTool::Value(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::BRepLProp_SurfaceTool::Value(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepLProp_SurfaceTool::D1(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
    pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
    ::BRepLProp_SurfaceTool::D1(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void Macad::Occt::BRepLProp_SurfaceTool::D2(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% DUV)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
    pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
    pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
    pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
    pin_ptr<Macad::Occt::Vec> pp_DUV = &DUV;
    ::BRepLProp_SurfaceTool::D2(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_DUV);
}

Macad::Occt::Vec Macad::Occt::BRepLProp_SurfaceTool::DN(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, int IU, int IV)
{
    ::gp_Vec _nativeResult = ::BRepLProp_SurfaceTool::DN(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, IU, IV);
    return Macad::Occt::Vec(_nativeResult);
}

int Macad::Occt::BRepLProp_SurfaceTool::Continuity(Macad::Occt::BRepAdaptor_Surface^ S)
{
    int _result = ::BRepLProp_SurfaceTool::Continuity(*(::BRepAdaptor_Surface*)S->NativeInstance);
    return _result;
}

void Macad::Occt::BRepLProp_SurfaceTool::Bounds(Macad::Occt::BRepAdaptor_Surface^ S, double% U1, double% V1, double% U2, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V2 = &V2;
    ::BRepLProp_SurfaceTool::Bounds(*(::BRepAdaptor_Surface*)S->NativeInstance, *(double*)pp_U1, *(double*)pp_V1, *(double*)pp_U2, *(double*)pp_V2);
}


