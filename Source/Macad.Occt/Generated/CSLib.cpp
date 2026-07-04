// Generated wrapper code for package CSLib

#include "OcctPCH.h"
#include "CSLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  CSLib
//---------------------------------------------------------------------

Macad::Occt::CSLib::CSLib()
    : Macad::Occt::BaseClass<::CSLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::CSLib();
}

void Macad::Occt::CSLib::Normal(Macad::Occt::Vec theD1U, Macad::Occt::Vec theD1V, double theSinTol, Macad::Occt::CSLib_DerivativeStatus% theStatus, Macad::Occt::Dir% theNormal)
{
    pin_ptr<Macad::Occt::Vec> pp_theD1U = &theD1U;
    pin_ptr<Macad::Occt::Vec> pp_theD1V = &theD1V;
    pin_ptr<Macad::Occt::CSLib_DerivativeStatus> pp_theStatus = &theStatus;
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    ::CSLib::Normal(*(gp_Vec*)pp_theD1U, *(gp_Vec*)pp_theD1V, theSinTol, *(::CSLib_DerivativeStatus*)pp_theStatus, *(gp_Dir*)pp_theNormal);
}

void Macad::Occt::CSLib::Normal(Macad::Occt::Vec theD1U, Macad::Occt::Vec theD1V, Macad::Occt::Vec theD2U, Macad::Occt::Vec theD2V, Macad::Occt::Vec theD2UV, double theSinTol, bool% theDone, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% theNormal)
{
    pin_ptr<Macad::Occt::Vec> pp_theD1U = &theD1U;
    pin_ptr<Macad::Occt::Vec> pp_theD1V = &theD1V;
    pin_ptr<Macad::Occt::Vec> pp_theD2U = &theD2U;
    pin_ptr<Macad::Occt::Vec> pp_theD2V = &theD2V;
    pin_ptr<Macad::Occt::Vec> pp_theD2UV = &theD2UV;
    pin_ptr<bool> pp_theDone = &theDone;
    pin_ptr<Macad::Occt::CSLib_NormalStatus> pp_theStatus = &theStatus;
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    ::CSLib::Normal(*(gp_Vec*)pp_theD1U, *(gp_Vec*)pp_theD1V, *(gp_Vec*)pp_theD2U, *(gp_Vec*)pp_theD2V, *(gp_Vec*)pp_theD2UV, theSinTol, *(bool*)pp_theDone, *(::CSLib_NormalStatus*)pp_theStatus, *(gp_Dir*)pp_theNormal);
}

void Macad::Occt::CSLib::Normal(Macad::Occt::Vec theD1U, Macad::Occt::Vec theD1V, double theMagTol, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% theNormal)
{
    pin_ptr<Macad::Occt::Vec> pp_theD1U = &theD1U;
    pin_ptr<Macad::Occt::Vec> pp_theD1V = &theD1V;
    pin_ptr<Macad::Occt::CSLib_NormalStatus> pp_theStatus = &theStatus;
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    ::CSLib::Normal(*(gp_Vec*)pp_theD1U, *(gp_Vec*)pp_theD1V, theMagTol, *(::CSLib_NormalStatus*)pp_theStatus, *(gp_Dir*)pp_theNormal);
}

void Macad::Occt::CSLib::Normal(int theMaxOrder, Macad::Occt::TColgp_Array2OfVec^ theDerNUV, double theMagTol, double theU, double theV, double theUmin, double theUmax, double theVmin, double theVmax, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% theNormal, int% theOrderU, int% theOrderV)
{
    pin_ptr<Macad::Occt::CSLib_NormalStatus> pp_theStatus = &theStatus;
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    pin_ptr<int> pp_theOrderU = &theOrderU;
    pin_ptr<int> pp_theOrderV = &theOrderV;
    ::CSLib::Normal(theMaxOrder, *(::TColgp_Array2OfVec*)theDerNUV->NativeInstance, theMagTol, theU, theV, theUmin, theUmax, theVmin, theVmax, *(::CSLib_NormalStatus*)pp_theStatus, *(gp_Dir*)pp_theNormal, *(int*)pp_theOrderU, *(int*)pp_theOrderV);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNUV(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerSurf)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNUV(theNu, theNv, *(::TColgp_Array2OfVec*)theDerSurf->NativeInstance);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNUV(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerSurf1, Macad::Occt::TColgp_Array2OfVec^ theDerSurf2)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNUV(theNu, theNv, *(::TColgp_Array2OfVec*)theDerSurf1->NativeInstance, *(::TColgp_Array2OfVec*)theDerSurf2->NativeInstance);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNormal(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerNUV, int theIduref, int theIdvref)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNormal(theNu, theNv, *(::TColgp_Array2OfVec*)theDerNUV->NativeInstance, theIduref, theIdvref);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNormal(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerNUV, int theIduref)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNormal(theNu, theNv, *(::TColgp_Array2OfVec*)theDerNUV->NativeInstance, theIduref, 0);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNormal(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerNUV)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNormal(theNu, theNv, *(::TColgp_Array2OfVec*)theDerNUV->NativeInstance, 0, 0);
    return Macad::Occt::Vec(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  CSLib_Class2d
//---------------------------------------------------------------------

Macad::Occt::CSLib_Class2d::CSLib_Class2d()
    : Macad::Occt::BaseClass<::CSLib_Class2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::CSLib_Class2d();
}

Macad::Occt::CSLib_Class2d::CSLib_Class2d(Macad::Occt::TColgp_Array1OfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax)
    : Macad::Occt::BaseClass<::CSLib_Class2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::CSLib_Class2d(*(::TColgp_Array1OfPnt2d*)thePnts2d->NativeInstance, theTolU, theTolV, theUMin, theVMin, theUMax, theVMax);
}

Macad::Occt::CSLib_Class2d::CSLib_Class2d(Macad::Occt::TColgp_SequenceOfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax)
    : Macad::Occt::BaseClass<::CSLib_Class2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::CSLib_Class2d(*(::TColgp_SequenceOfPnt2d*)thePnts2d->NativeInstance, theTolU, theTolV, theUMin, theVMin, theUMax, theVMax);
}

Macad::Occt::CSLib_Class2d::Result Macad::Occt::CSLib_Class2d::SiDans(Macad::Occt::Pnt2d thePoint)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePoint = &thePoint;
    ::CSLib_Class2d::Result _result = ((::CSLib_Class2d*)_NativeInstance)->SiDans(*(gp_Pnt2d*)pp_thePoint);
    return (Macad::Occt::CSLib_Class2d::Result)_result;
}

Macad::Occt::CSLib_Class2d::Result Macad::Occt::CSLib_Class2d::SiDans_OnMode(Macad::Occt::Pnt2d thePoint, double theTol)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePoint = &thePoint;
    ::CSLib_Class2d::Result _result = ((::CSLib_Class2d*)_NativeInstance)->SiDans_OnMode(*(gp_Pnt2d*)pp_thePoint, theTol);
    return (Macad::Occt::CSLib_Class2d::Result)_result;
}


