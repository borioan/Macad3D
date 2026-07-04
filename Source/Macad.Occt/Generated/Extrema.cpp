// Generated wrapper code for package Extrema

#include "OcctPCH.h"
#include "Extrema.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "Adaptor3d.h"
#include "Adaptor2d.h"
#include "Standard.h"
#include "NCollection.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "Geom.h"
#include "Geom2d.h"
#include "GeomAdaptor.h"


//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnCurv
//---------------------------------------------------------------------

Macad::Occt::Extrema_Array1OfPOnCurv::Extrema_Array1OfPOnCurv()
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv();
}

Macad::Occt::Extrema_Array1OfPOnCurv::Extrema_Array1OfPOnCurv(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv(theLower, theUpper);
}

Macad::Occt::Extrema_Array1OfPOnCurv::Extrema_Array1OfPOnCurv(Macad::Occt::Extrema_POnCurv^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv(*(::Extrema_POnCurv*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Extrema_Array1OfPOnCurv::Extrema_Array1OfPOnCurv(Macad::Occt::Extrema_POnCurv^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv(*(::Extrema_POnCurv*)theBegin->NativeInstance, theLower, theUpper, true);
}

Macad::Occt::Extrema_Array1OfPOnCurv::Extrema_Array1OfPOnCurv(long long unsigned int theSize)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv(theSize);
}

void Macad::Occt::Extrema_Array1OfPOnCurv::Init(Macad::Occt::Extrema_POnCurv^ theValue)
{
    ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Init(*(::Extrema_POnCurv*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Extrema_Array1OfPOnCurv::Size()
{
    long long unsigned int _result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnCurv::Length()
{
    int _result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Extrema_Array1OfPOnCurv::IsEmpty()
{
    bool _result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnCurv::Lower()
{
    int _result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnCurv::Upper()
{
    int _result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_Array1OfPOnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::Assign(Macad::Occt::Extrema_Array1OfPOnCurv^ theOther)
{
    ::Extrema_Array1OfPOnCurv* _result = new ::Extrema_Array1OfPOnCurv();
    *_result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Assign(*(::Extrema_Array1OfPOnCurv*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnCurv(_result);
}

Macad::Occt::Extrema_Array1OfPOnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::CopyValues(Macad::Occt::Extrema_Array1OfPOnCurv^ theOther)
{
    ::Extrema_Array1OfPOnCurv* _result = new ::Extrema_Array1OfPOnCurv();
    *_result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->CopyValues(*(::Extrema_Array1OfPOnCurv*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnCurv(_result);
}

Macad::Occt::Extrema_Array1OfPOnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::Move(Macad::Occt::Extrema_Array1OfPOnCurv^ theOther)
{
    ::Extrema_Array1OfPOnCurv* _result = new ::Extrema_Array1OfPOnCurv();
    *_result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Move(*(::Extrema_Array1OfPOnCurv*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::First()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array1OfPOnCurv*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::ChangeFirst()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::Last()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::ChangeLast()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::Value(int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::ChangeValue(int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::At(long long unsigned int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array1OfPOnCurv*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_Array1OfPOnCurv::SetValue(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_Array1OfPOnCurv::UpdateLowerBound(int theLower)
{
    ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_Array1OfPOnCurv::UpdateUpperBound(int theUpper)
{
    ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Extrema_Array1OfPOnCurv::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array1OfPOnCurv::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Extrema_Array1OfPOnCurv::IsDeletable()
{
    bool _result = ((::Extrema_Array1OfPOnCurv*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv^>^ Macad::Occt::Extrema_Array1OfPOnCurv::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_Array1OfPOnCurv::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnCurv::Iterator
//---------------------------------------------------------------------

void Macad::Occt::Extrema_Array1OfPOnCurv::Iterator::Init(Macad::Occt::Extrema_Array1OfPOnCurv^ theList)
{
    ((::Extrema_Array1OfPOnCurv::Iterator*)_NativeInstance)->Init(*(::Extrema_Array1OfPOnCurv*)theList->NativeInstance);
}

bool Macad::Occt::Extrema_Array1OfPOnCurv::Iterator::More()
{
    bool _result = ((::Extrema_Array1OfPOnCurv::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_Array1OfPOnCurv::Iterator::Initialize(Macad::Occt::Extrema_Array1OfPOnCurv^ theList)
{
    ((::Extrema_Array1OfPOnCurv::Iterator*)_NativeInstance)->Initialize(*(::Extrema_Array1OfPOnCurv*)theList->NativeInstance);
}

void Macad::Occt::Extrema_Array1OfPOnCurv::Iterator::Next()
{
    ((::Extrema_Array1OfPOnCurv::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::Iterator::Value()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array1OfPOnCurv::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array1OfPOnCurv::Iterator::ChangeValue()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array1OfPOnCurv::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnCurv2d
//---------------------------------------------------------------------

Macad::Occt::Extrema_Array1OfPOnCurv2d::Extrema_Array1OfPOnCurv2d()
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv2d();
}

Macad::Occt::Extrema_Array1OfPOnCurv2d::Extrema_Array1OfPOnCurv2d(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv2d(theLower, theUpper);
}

Macad::Occt::Extrema_Array1OfPOnCurv2d::Extrema_Array1OfPOnCurv2d(Macad::Occt::Extrema_POnCurv2d^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv2d(*(::Extrema_POnCurv2d*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Extrema_Array1OfPOnCurv2d::Extrema_Array1OfPOnCurv2d(Macad::Occt::Extrema_POnCurv2d^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv2d(*(::Extrema_POnCurv2d*)theBegin->NativeInstance, theLower, theUpper, true);
}

Macad::Occt::Extrema_Array1OfPOnCurv2d::Extrema_Array1OfPOnCurv2d(long long unsigned int theSize)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnCurv2d(theSize);
}

void Macad::Occt::Extrema_Array1OfPOnCurv2d::Init(Macad::Occt::Extrema_POnCurv2d^ theValue)
{
    ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Init(*(::Extrema_POnCurv2d*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Extrema_Array1OfPOnCurv2d::Size()
{
    long long unsigned int _result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnCurv2d::Length()
{
    int _result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Extrema_Array1OfPOnCurv2d::IsEmpty()
{
    bool _result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnCurv2d::Lower()
{
    int _result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnCurv2d::Upper()
{
    int _result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_Array1OfPOnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::Assign(Macad::Occt::Extrema_Array1OfPOnCurv2d^ theOther)
{
    ::Extrema_Array1OfPOnCurv2d* _result = new ::Extrema_Array1OfPOnCurv2d();
    *_result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Assign(*(::Extrema_Array1OfPOnCurv2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnCurv2d(_result);
}

Macad::Occt::Extrema_Array1OfPOnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::CopyValues(Macad::Occt::Extrema_Array1OfPOnCurv2d^ theOther)
{
    ::Extrema_Array1OfPOnCurv2d* _result = new ::Extrema_Array1OfPOnCurv2d();
    *_result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->CopyValues(*(::Extrema_Array1OfPOnCurv2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnCurv2d(_result);
}

Macad::Occt::Extrema_Array1OfPOnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::Move(Macad::Occt::Extrema_Array1OfPOnCurv2d^ theOther)
{
    ::Extrema_Array1OfPOnCurv2d* _result = new ::Extrema_Array1OfPOnCurv2d();
    *_result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Move(*(::Extrema_Array1OfPOnCurv2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::First()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::ChangeFirst()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::Last()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::ChangeLast()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::Value(int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::ChangeValue(int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::At(long long unsigned int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_Array1OfPOnCurv2d::SetValue(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_Array1OfPOnCurv2d::UpdateLowerBound(int theLower)
{
    ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_Array1OfPOnCurv2d::UpdateUpperBound(int theUpper)
{
    ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Extrema_Array1OfPOnCurv2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array1OfPOnCurv2d::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Extrema_Array1OfPOnCurv2d::IsDeletable()
{
    bool _result = ((::Extrema_Array1OfPOnCurv2d*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv2d^>^ Macad::Occt::Extrema_Array1OfPOnCurv2d::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_Array1OfPOnCurv2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnCurv2d::Iterator
//---------------------------------------------------------------------

void Macad::Occt::Extrema_Array1OfPOnCurv2d::Iterator::Init(Macad::Occt::Extrema_Array1OfPOnCurv2d^ theList)
{
    ((::Extrema_Array1OfPOnCurv2d::Iterator*)_NativeInstance)->Init(*(::Extrema_Array1OfPOnCurv2d*)theList->NativeInstance);
}

bool Macad::Occt::Extrema_Array1OfPOnCurv2d::Iterator::More()
{
    bool _result = ((::Extrema_Array1OfPOnCurv2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_Array1OfPOnCurv2d::Iterator::Initialize(Macad::Occt::Extrema_Array1OfPOnCurv2d^ theList)
{
    ((::Extrema_Array1OfPOnCurv2d::Iterator*)_NativeInstance)->Initialize(*(::Extrema_Array1OfPOnCurv2d*)theList->NativeInstance);
}

void Macad::Occt::Extrema_Array1OfPOnCurv2d::Iterator::Next()
{
    ((::Extrema_Array1OfPOnCurv2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::Iterator::Value()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array1OfPOnCurv2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array1OfPOnCurv2d::Iterator::ChangeValue()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array1OfPOnCurv2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnSurf
//---------------------------------------------------------------------

Macad::Occt::Extrema_Array1OfPOnSurf::Extrema_Array1OfPOnSurf()
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnSurf();
}

Macad::Occt::Extrema_Array1OfPOnSurf::Extrema_Array1OfPOnSurf(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnSurf(theLower, theUpper);
}

Macad::Occt::Extrema_Array1OfPOnSurf::Extrema_Array1OfPOnSurf(Macad::Occt::Extrema_POnSurf^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnSurf(*(::Extrema_POnSurf*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Extrema_Array1OfPOnSurf::Extrema_Array1OfPOnSurf(Macad::Occt::Extrema_POnSurf^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnSurf(*(::Extrema_POnSurf*)theBegin->NativeInstance, theLower, theUpper, true);
}

Macad::Occt::Extrema_Array1OfPOnSurf::Extrema_Array1OfPOnSurf(long long unsigned int theSize)
    : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array1OfPOnSurf(theSize);
}

void Macad::Occt::Extrema_Array1OfPOnSurf::Init(Macad::Occt::Extrema_POnSurf^ theValue)
{
    ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Init(*(::Extrema_POnSurf*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Extrema_Array1OfPOnSurf::Size()
{
    long long unsigned int _result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnSurf::Length()
{
    int _result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Extrema_Array1OfPOnSurf::IsEmpty()
{
    bool _result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnSurf::Lower()
{
    int _result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_Array1OfPOnSurf::Upper()
{
    int _result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_Array1OfPOnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::Assign(Macad::Occt::Extrema_Array1OfPOnSurf^ theOther)
{
    ::Extrema_Array1OfPOnSurf* _result = new ::Extrema_Array1OfPOnSurf();
    *_result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Assign(*(::Extrema_Array1OfPOnSurf*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnSurf(_result);
}

Macad::Occt::Extrema_Array1OfPOnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::CopyValues(Macad::Occt::Extrema_Array1OfPOnSurf^ theOther)
{
    ::Extrema_Array1OfPOnSurf* _result = new ::Extrema_Array1OfPOnSurf();
    *_result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->CopyValues(*(::Extrema_Array1OfPOnSurf*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnSurf(_result);
}

Macad::Occt::Extrema_Array1OfPOnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::Move(Macad::Occt::Extrema_Array1OfPOnSurf^ theOther)
{
    ::Extrema_Array1OfPOnSurf* _result = new ::Extrema_Array1OfPOnSurf();
    *_result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Move(*(::Extrema_Array1OfPOnSurf*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array1OfPOnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::First()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array1OfPOnSurf*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::ChangeFirst()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::Last()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::ChangeLast()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::Value(int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::ChangeValue(int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::At(long long unsigned int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array1OfPOnSurf*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_Array1OfPOnSurf::SetValue(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_Array1OfPOnSurf::UpdateLowerBound(int theLower)
{
    ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_Array1OfPOnSurf::UpdateUpperBound(int theUpper)
{
    ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Extrema_Array1OfPOnSurf::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array1OfPOnSurf::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Extrema_Array1OfPOnSurf::IsDeletable()
{
    bool _result = ((::Extrema_Array1OfPOnSurf*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnSurf^>^ Macad::Occt::Extrema_Array1OfPOnSurf::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnSurf^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_Array1OfPOnSurf::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnSurf^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnSurf::Iterator
//---------------------------------------------------------------------

void Macad::Occt::Extrema_Array1OfPOnSurf::Iterator::Init(Macad::Occt::Extrema_Array1OfPOnSurf^ theList)
{
    ((::Extrema_Array1OfPOnSurf::Iterator*)_NativeInstance)->Init(*(::Extrema_Array1OfPOnSurf*)theList->NativeInstance);
}

bool Macad::Occt::Extrema_Array1OfPOnSurf::Iterator::More()
{
    bool _result = ((::Extrema_Array1OfPOnSurf::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_Array1OfPOnSurf::Iterator::Initialize(Macad::Occt::Extrema_Array1OfPOnSurf^ theList)
{
    ((::Extrema_Array1OfPOnSurf::Iterator*)_NativeInstance)->Initialize(*(::Extrema_Array1OfPOnSurf*)theList->NativeInstance);
}

void Macad::Occt::Extrema_Array1OfPOnSurf::Iterator::Next()
{
    ((::Extrema_Array1OfPOnSurf::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::Iterator::Value()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array1OfPOnSurf::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array1OfPOnSurf::Iterator::ChangeValue()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array1OfPOnSurf::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnCurv
//---------------------------------------------------------------------

void Macad::Occt::Extrema_Array2OfPOnCurv::Init(Macad::Occt::Extrema_POnCurv^ theValue)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Init(*(::Extrema_POnCurv*)theValue->NativeInstance);
}

bool Macad::Occt::Extrema_Array2OfPOnCurv::IsEmpty()
{
    bool _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::Lower()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::Upper()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::First()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array2OfPOnCurv*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::ChangeFirst()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::Last()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::ChangeLast()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::UpdateLowerBound(int theLower)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::UpdateUpperBound(int theUpper)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::Extrema_Array2OfPOnCurv::IsDeletable()
{
    bool _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Extrema_Array2OfPOnCurv::Extrema_Array2OfPOnCurv()
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnCurv();
}

Macad::Occt::Extrema_Array2OfPOnCurv::Extrema_Array2OfPOnCurv(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnCurv(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Extrema_Array2OfPOnCurv::Extrema_Array2OfPOnCurv(Macad::Occt::Extrema_POnCurv^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnCurv(*(::Extrema_POnCurv*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Extrema_Array2OfPOnCurv::Extrema_Array2OfPOnCurv(long long unsigned int theNbRows, long long unsigned int theNbCols)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnCurv(theNbRows, theNbCols);
}

int Macad::Occt::Extrema_Array2OfPOnCurv::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::Extrema_Array2OfPOnCurv::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::Extrema_Array2OfPOnCurv::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

long long unsigned int Macad::Occt::Extrema_Array2OfPOnCurv::Size()
{
    long long unsigned int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::Length()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::NbRows()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::NbColumns()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::RowLength()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::ColLength()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::LowerRow()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::UpperRow()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::LowerCol()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv::UpperCol()
{
    int _result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->UpperCol();
    return _result;
}

void Macad::Occt::Extrema_Array2OfPOnCurv::UpdateLowerRow(int theLowerRow)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->UpdateLowerRow(theLowerRow);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::UpdateLowerCol(int theLowerCol)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->UpdateLowerCol(theLowerCol);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::UpdateUpperRow(int theUpperRow)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->UpdateUpperRow(theUpperRow);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::UpdateUpperCol(int theUpperCol)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->UpdateUpperCol(theUpperCol);
}

Macad::Occt::Extrema_Array2OfPOnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::Assign(Macad::Occt::Extrema_Array2OfPOnCurv^ theOther)
{
    ::Extrema_Array2OfPOnCurv* _result = new ::Extrema_Array2OfPOnCurv();
    *_result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Assign(*(::Extrema_Array2OfPOnCurv*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnCurv(_result);
}

Macad::Occt::Extrema_Array2OfPOnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::CopyValues(Macad::Occt::Extrema_Array2OfPOnCurv^ theOther)
{
    ::Extrema_Array2OfPOnCurv* _result = new ::Extrema_Array2OfPOnCurv();
    *_result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->CopyValues(*(::Extrema_Array2OfPOnCurv*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnCurv(_result);
}

Macad::Occt::Extrema_Array2OfPOnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::Move(Macad::Occt::Extrema_Array2OfPOnCurv^ theOther)
{
    ::Extrema_Array2OfPOnCurv* _result = new ::Extrema_Array2OfPOnCurv();
    *_result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Move(*(::Extrema_Array2OfPOnCurv*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::Value(int theRow, int theCol)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::ChangeValue(int theRow, int theCol)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->SetValue(theRow, theCol, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::At(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array2OfPOnCurv*)_NativeInstance)->At(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::ChangeAt(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->ChangeAt(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->ResizeWithTrim(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->Resize(theNbRows, theNbCols, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnCurv::ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnCurv*)_NativeInstance)->ResizeWithTrim(theNbRows, theNbCols, theToCopyData);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnCurv::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_Array2OfPOnCurv::Iterator::More()
{
    bool _result = ((::Extrema_Array2OfPOnCurv::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_Array2OfPOnCurv::Iterator::Next()
{
    ((::Extrema_Array2OfPOnCurv::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::Iterator::Value()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_Array2OfPOnCurv::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_Array2OfPOnCurv::Iterator::ChangeValue()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_Array2OfPOnCurv::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnCurv2d
//---------------------------------------------------------------------

void Macad::Occt::Extrema_Array2OfPOnCurv2d::Init(Macad::Occt::Extrema_POnCurv2d^ theValue)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Init(*(::Extrema_POnCurv2d*)theValue->NativeInstance);
}

bool Macad::Occt::Extrema_Array2OfPOnCurv2d::IsEmpty()
{
    bool _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::Lower()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::Upper()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::First()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::ChangeFirst()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::Last()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::ChangeLast()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::UpdateLowerBound(int theLower)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::UpdateUpperBound(int theUpper)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::Extrema_Array2OfPOnCurv2d::IsDeletable()
{
    bool _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Extrema_Array2OfPOnCurv2d::Extrema_Array2OfPOnCurv2d()
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnCurv2d();
}

Macad::Occt::Extrema_Array2OfPOnCurv2d::Extrema_Array2OfPOnCurv2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnCurv2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Extrema_Array2OfPOnCurv2d::Extrema_Array2OfPOnCurv2d(Macad::Occt::Extrema_POnCurv2d^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnCurv2d(*(::Extrema_POnCurv2d*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Extrema_Array2OfPOnCurv2d::Extrema_Array2OfPOnCurv2d(long long unsigned int theNbRows, long long unsigned int theNbCols)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnCurv2d(theNbRows, theNbCols);
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::Extrema_Array2OfPOnCurv2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::Extrema_Array2OfPOnCurv2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

long long unsigned int Macad::Occt::Extrema_Array2OfPOnCurv2d::Size()
{
    long long unsigned int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::Length()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::NbRows()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::NbColumns()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::RowLength()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::ColLength()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::LowerRow()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::UpperRow()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::LowerCol()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnCurv2d::UpperCol()
{
    int _result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->UpperCol();
    return _result;
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::UpdateLowerRow(int theLowerRow)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->UpdateLowerRow(theLowerRow);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::UpdateLowerCol(int theLowerCol)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->UpdateLowerCol(theLowerCol);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::UpdateUpperRow(int theUpperRow)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->UpdateUpperRow(theUpperRow);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::UpdateUpperCol(int theUpperCol)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->UpdateUpperCol(theUpperCol);
}

Macad::Occt::Extrema_Array2OfPOnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::Assign(Macad::Occt::Extrema_Array2OfPOnCurv2d^ theOther)
{
    ::Extrema_Array2OfPOnCurv2d* _result = new ::Extrema_Array2OfPOnCurv2d();
    *_result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Assign(*(::Extrema_Array2OfPOnCurv2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnCurv2d(_result);
}

Macad::Occt::Extrema_Array2OfPOnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::CopyValues(Macad::Occt::Extrema_Array2OfPOnCurv2d^ theOther)
{
    ::Extrema_Array2OfPOnCurv2d* _result = new ::Extrema_Array2OfPOnCurv2d();
    *_result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->CopyValues(*(::Extrema_Array2OfPOnCurv2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnCurv2d(_result);
}

Macad::Occt::Extrema_Array2OfPOnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::Move(Macad::Occt::Extrema_Array2OfPOnCurv2d^ theOther)
{
    ::Extrema_Array2OfPOnCurv2d* _result = new ::Extrema_Array2OfPOnCurv2d();
    *_result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Move(*(::Extrema_Array2OfPOnCurv2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::Value(int theRow, int theCol)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::ChangeValue(int theRow, int theCol)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->SetValue(theRow, theCol, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::At(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->At(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::ChangeAt(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->ChangeAt(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->ResizeWithTrim(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->Resize(theNbRows, theNbCols, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnCurv2d*)_NativeInstance)->ResizeWithTrim(theNbRows, theNbCols, theToCopyData);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnCurv2d::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_Array2OfPOnCurv2d::Iterator::More()
{
    bool _result = ((::Extrema_Array2OfPOnCurv2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_Array2OfPOnCurv2d::Iterator::Next()
{
    ((::Extrema_Array2OfPOnCurv2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::Iterator::Value()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_Array2OfPOnCurv2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_Array2OfPOnCurv2d::Iterator::ChangeValue()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_Array2OfPOnCurv2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnSurf
//---------------------------------------------------------------------

void Macad::Occt::Extrema_Array2OfPOnSurf::Init(Macad::Occt::Extrema_POnSurf^ theValue)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Init(*(::Extrema_POnSurf*)theValue->NativeInstance);
}

bool Macad::Occt::Extrema_Array2OfPOnSurf::IsEmpty()
{
    bool _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::Lower()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::Upper()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::First()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array2OfPOnSurf*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::ChangeFirst()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::Last()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::ChangeLast()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::UpdateLowerBound(int theLower)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::UpdateUpperBound(int theUpper)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::Extrema_Array2OfPOnSurf::IsDeletable()
{
    bool _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Extrema_Array2OfPOnSurf::Extrema_Array2OfPOnSurf()
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnSurf();
}

Macad::Occt::Extrema_Array2OfPOnSurf::Extrema_Array2OfPOnSurf(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnSurf(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Extrema_Array2OfPOnSurf::Extrema_Array2OfPOnSurf(Macad::Occt::Extrema_POnSurf^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnSurf(*(::Extrema_POnSurf*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Extrema_Array2OfPOnSurf::Extrema_Array2OfPOnSurf(long long unsigned int theNbRows, long long unsigned int theNbCols)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnSurf(theNbRows, theNbCols);
}

int Macad::Occt::Extrema_Array2OfPOnSurf::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::Extrema_Array2OfPOnSurf::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::Extrema_Array2OfPOnSurf::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

long long unsigned int Macad::Occt::Extrema_Array2OfPOnSurf::Size()
{
    long long unsigned int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::Length()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::NbRows()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::NbColumns()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::RowLength()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::ColLength()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::LowerRow()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::UpperRow()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::LowerCol()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurf::UpperCol()
{
    int _result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->UpperCol();
    return _result;
}

void Macad::Occt::Extrema_Array2OfPOnSurf::UpdateLowerRow(int theLowerRow)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->UpdateLowerRow(theLowerRow);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::UpdateLowerCol(int theLowerCol)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->UpdateLowerCol(theLowerCol);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::UpdateUpperRow(int theUpperRow)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->UpdateUpperRow(theUpperRow);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::UpdateUpperCol(int theUpperCol)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->UpdateUpperCol(theUpperCol);
}

Macad::Occt::Extrema_Array2OfPOnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::Assign(Macad::Occt::Extrema_Array2OfPOnSurf^ theOther)
{
    ::Extrema_Array2OfPOnSurf* _result = new ::Extrema_Array2OfPOnSurf();
    *_result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Assign(*(::Extrema_Array2OfPOnSurf*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnSurf(_result);
}

Macad::Occt::Extrema_Array2OfPOnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::CopyValues(Macad::Occt::Extrema_Array2OfPOnSurf^ theOther)
{
    ::Extrema_Array2OfPOnSurf* _result = new ::Extrema_Array2OfPOnSurf();
    *_result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->CopyValues(*(::Extrema_Array2OfPOnSurf*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnSurf(_result);
}

Macad::Occt::Extrema_Array2OfPOnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::Move(Macad::Occt::Extrema_Array2OfPOnSurf^ theOther)
{
    ::Extrema_Array2OfPOnSurf* _result = new ::Extrema_Array2OfPOnSurf();
    *_result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Move(*(::Extrema_Array2OfPOnSurf*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::Value(int theRow, int theCol)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::ChangeValue(int theRow, int theCol)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->SetValue(theRow, theCol, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::At(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array2OfPOnSurf*)_NativeInstance)->At(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::ChangeAt(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->ChangeAt(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->ResizeWithTrim(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->Resize(theNbRows, theNbCols, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnSurf::ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnSurf*)_NativeInstance)->ResizeWithTrim(theNbRows, theNbCols, theToCopyData);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnSurf::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_Array2OfPOnSurf::Iterator::More()
{
    bool _result = ((::Extrema_Array2OfPOnSurf::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_Array2OfPOnSurf::Iterator::Next()
{
    ((::Extrema_Array2OfPOnSurf::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::Iterator::Value()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_Array2OfPOnSurf::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_Array2OfPOnSurf::Iterator::ChangeValue()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_Array2OfPOnSurf::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnSurfParams
//---------------------------------------------------------------------

void Macad::Occt::Extrema_Array2OfPOnSurfParams::Init(Macad::Occt::Extrema_POnSurfParams^ theValue)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Init(*(::Extrema_POnSurfParams*)theValue->NativeInstance);
}

bool Macad::Occt::Extrema_Array2OfPOnSurfParams::IsEmpty()
{
    bool _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::Lower()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::Upper()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::First()
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = (::Extrema_POnSurfParams)((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::ChangeFirst()
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::Last()
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = (::Extrema_POnSurfParams)((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::ChangeLast()
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::UpdateLowerBound(int theLower)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::UpdateUpperBound(int theUpper)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::Extrema_Array2OfPOnSurfParams::IsDeletable()
{
    bool _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Extrema_Array2OfPOnSurfParams::Extrema_Array2OfPOnSurfParams()
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnSurfParams();
}

Macad::Occt::Extrema_Array2OfPOnSurfParams::Extrema_Array2OfPOnSurfParams(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnSurfParams(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Extrema_Array2OfPOnSurfParams::Extrema_Array2OfPOnSurfParams(Macad::Occt::Extrema_POnSurfParams^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnSurfParams(*(::Extrema_POnSurfParams*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Extrema_Array2OfPOnSurfParams::Extrema_Array2OfPOnSurfParams(long long unsigned int theNbRows, long long unsigned int theNbCols)
    : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Array2OfPOnSurfParams(theNbRows, theNbCols);
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::Extrema_Array2OfPOnSurfParams::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::Extrema_Array2OfPOnSurfParams::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

long long unsigned int Macad::Occt::Extrema_Array2OfPOnSurfParams::Size()
{
    long long unsigned int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::Length()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::NbRows()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::NbColumns()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::RowLength()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::ColLength()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::LowerRow()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::UpperRow()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::LowerCol()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::Extrema_Array2OfPOnSurfParams::UpperCol()
{
    int _result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->UpperCol();
    return _result;
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::UpdateLowerRow(int theLowerRow)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->UpdateLowerRow(theLowerRow);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::UpdateLowerCol(int theLowerCol)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->UpdateLowerCol(theLowerCol);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::UpdateUpperRow(int theUpperRow)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->UpdateUpperRow(theUpperRow);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::UpdateUpperCol(int theUpperCol)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->UpdateUpperCol(theUpperCol);
}

Macad::Occt::Extrema_Array2OfPOnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::Assign(Macad::Occt::Extrema_Array2OfPOnSurfParams^ theOther)
{
    ::Extrema_Array2OfPOnSurfParams* _result = new ::Extrema_Array2OfPOnSurfParams();
    *_result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Assign(*(::Extrema_Array2OfPOnSurfParams*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnSurfParams(_result);
}

Macad::Occt::Extrema_Array2OfPOnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::CopyValues(Macad::Occt::Extrema_Array2OfPOnSurfParams^ theOther)
{
    ::Extrema_Array2OfPOnSurfParams* _result = new ::Extrema_Array2OfPOnSurfParams();
    *_result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->CopyValues(*(::Extrema_Array2OfPOnSurfParams*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnSurfParams(_result);
}

Macad::Occt::Extrema_Array2OfPOnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::Move(Macad::Occt::Extrema_Array2OfPOnSurfParams^ theOther)
{
    ::Extrema_Array2OfPOnSurfParams* _result = new ::Extrema_Array2OfPOnSurfParams();
    *_result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Move(*(::Extrema_Array2OfPOnSurfParams*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_Array2OfPOnSurfParams(_result);
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::Value(int theRow, int theCol)
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = (::Extrema_POnSurfParams)((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::ChangeValue(int theRow, int theCol)
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnSurfParams^ theItem)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->SetValue(theRow, theCol, *(::Extrema_POnSurfParams*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::At(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = (::Extrema_POnSurfParams)((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->At(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::ChangeAt(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->ChangeAt(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->ResizeWithTrim(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->Resize(theNbRows, theNbCols, theToCopyData);
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_Array2OfPOnSurfParams*)_NativeInstance)->ResizeWithTrim(theNbRows, theNbCols, theToCopyData);
}



//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnSurfParams::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_Array2OfPOnSurfParams::Iterator::More()
{
    bool _result = ((::Extrema_Array2OfPOnSurfParams::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_Array2OfPOnSurfParams::Iterator::Next()
{
    ((::Extrema_Array2OfPOnSurfParams::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::Iterator::Value()
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = (::Extrema_POnSurfParams)((::Extrema_Array2OfPOnSurfParams::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}

Macad::Occt::Extrema_POnSurfParams^ Macad::Occt::Extrema_Array2OfPOnSurfParams::Iterator::ChangeValue()
{
    ::Extrema_POnSurfParams* _result = new ::Extrema_POnSurfParams();
    *_result = ((::Extrema_Array2OfPOnSurfParams::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurfParams(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPC
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC()
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtPC();
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Curve^ theC, double theUinf, double theUsup, double theTolF)
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Curve*)theC->NativeInstance, theUinf, theUsup, theTolF);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Curve^ theC, double theUinf, double theUsup)
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Curve*)theC->NativeInstance, theUinf, theUsup, 1.0E-10);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Curve^ theC, double theTolF)
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Curve*)theC->NativeInstance, theTolF);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Curve^ theC)
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Curve*)theC->NativeInstance, 1.0E-10);
}

void Macad::Occt::Extrema_ExtPC::Initialize(Macad::Occt::Adaptor3d_Curve^ theC, double theUinf, double theUsup, double theTolF)
{
    ((::Extrema_ExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)theC->NativeInstance, theUinf, theUsup, theTolF);
}

void Macad::Occt::Extrema_ExtPC::Initialize(Macad::Occt::Adaptor3d_Curve^ theC, double theUinf, double theUsup)
{
    ((::Extrema_ExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)theC->NativeInstance, theUinf, theUsup, 1.0E-10);
}

void Macad::Occt::Extrema_ExtPC::Perform(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::Extrema_ExtPC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_theP);
}

bool Macad::Occt::Extrema_ExtPC::IsDone()
{
    bool _result = ((::Extrema_ExtPC*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_ExtPC::SquareDistance(int theN)
{
    double _result = ((::Extrema_ExtPC*)_NativeInstance)->SquareDistance(theN);
    return _result;
}

int Macad::Occt::Extrema_ExtPC::NbExt()
{
    int _result = ((::Extrema_ExtPC*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::Extrema_ExtPC::IsMin(int theN)
{
    bool _result = ((::Extrema_ExtPC*)_NativeInstance)->IsMin(theN);
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_ExtPC::Point(int theN)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_ExtPC*)_NativeInstance)->Point(theN);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_ExtPC::TrimmedSquareDistances(double% theDist1, double% theDist2, Macad::Occt::Pnt% theP1, Macad::Occt::Pnt% theP2)
{
    pin_ptr<double> pp_theDist1 = &theDist1;
    pin_ptr<double> pp_theDist2 = &theDist2;
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::Extrema_ExtPC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_theDist1, *(double*)pp_theDist2, *(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPC2d
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPC2d::Extrema_ExtPC2d()
    : Macad::Occt::BaseClass<::Extrema_ExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtPC2d();
}

Macad::Occt::Extrema_ExtPC2d::Extrema_ExtPC2d(Macad::Occt::Pnt2d theP, Macad::Occt::Adaptor2d_Curve2d^ theC, double theUinf, double theUsup, double theTolF)
    : Macad::Occt::BaseClass<::Extrema_ExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ExtPC2d(*(gp_Pnt2d*)pp_theP, *(::Adaptor2d_Curve2d*)theC->NativeInstance, theUinf, theUsup, theTolF);
}

Macad::Occt::Extrema_ExtPC2d::Extrema_ExtPC2d(Macad::Occt::Pnt2d theP, Macad::Occt::Adaptor2d_Curve2d^ theC, double theUinf, double theUsup)
    : Macad::Occt::BaseClass<::Extrema_ExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ExtPC2d(*(gp_Pnt2d*)pp_theP, *(::Adaptor2d_Curve2d*)theC->NativeInstance, theUinf, theUsup, 1.0E-10);
}

Macad::Occt::Extrema_ExtPC2d::Extrema_ExtPC2d(Macad::Occt::Pnt2d theP, Macad::Occt::Adaptor2d_Curve2d^ theC, double theTolF)
    : Macad::Occt::BaseClass<::Extrema_ExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ExtPC2d(*(gp_Pnt2d*)pp_theP, *(::Adaptor2d_Curve2d*)theC->NativeInstance, theTolF);
}

Macad::Occt::Extrema_ExtPC2d::Extrema_ExtPC2d(Macad::Occt::Pnt2d theP, Macad::Occt::Adaptor2d_Curve2d^ theC)
    : Macad::Occt::BaseClass<::Extrema_ExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ExtPC2d(*(gp_Pnt2d*)pp_theP, *(::Adaptor2d_Curve2d*)theC->NativeInstance, 1.0E-10);
}

void Macad::Occt::Extrema_ExtPC2d::Initialize(Macad::Occt::Adaptor2d_Curve2d^ theC, double theUinf, double theUsup, double theTolF)
{
    ((::Extrema_ExtPC2d*)_NativeInstance)->Initialize(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theUinf, theUsup, theTolF);
}

void Macad::Occt::Extrema_ExtPC2d::Initialize(Macad::Occt::Adaptor2d_Curve2d^ theC, double theUinf, double theUsup)
{
    ((::Extrema_ExtPC2d*)_NativeInstance)->Initialize(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theUinf, theUsup, 1.0E-10);
}

void Macad::Occt::Extrema_ExtPC2d::Perform(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::Extrema_ExtPC2d*)_NativeInstance)->Perform(*(gp_Pnt2d*)pp_theP);
}

bool Macad::Occt::Extrema_ExtPC2d::IsDone()
{
    bool _result = ((::Extrema_ExtPC2d*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_ExtPC2d::SquareDistance(int theN)
{
    double _result = ((::Extrema_ExtPC2d*)_NativeInstance)->SquareDistance(theN);
    return _result;
}

int Macad::Occt::Extrema_ExtPC2d::NbExt()
{
    int _result = ((::Extrema_ExtPC2d*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::Extrema_ExtPC2d::IsMin(int theN)
{
    bool _result = ((::Extrema_ExtPC2d*)_NativeInstance)->IsMin(theN);
    return _result;
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_ExtPC2d::Point(int theN)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_ExtPC2d*)_NativeInstance)->Point(theN);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_ExtPC2d::TrimmedSquareDistances(double% theDist1, double% theDist2, Macad::Occt::Pnt2d% theP1, Macad::Occt::Pnt2d% theP2)
{
    pin_ptr<double> pp_theDist1 = &theDist1;
    pin_ptr<double> pp_theDist2 = &theDist2;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    ((::Extrema_ExtPC2d*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_theDist1, *(double*)pp_theDist2, *(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}



//---------------------------------------------------------------------
//  Class  Extrema_ELPCOfLocateExtPC
//---------------------------------------------------------------------

Macad::Occt::Extrema_ELPCOfLocateExtPC::Extrema_ELPCOfLocateExtPC()
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC();
}

Macad::Occt::Extrema_ELPCOfLocateExtPC::Extrema_ELPCOfLocateExtPC(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Curve^ theC, double theUinf, double theUsup, double theTolF)
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Curve*)theC->NativeInstance, theUinf, theUsup, theTolF);
}

Macad::Occt::Extrema_ELPCOfLocateExtPC::Extrema_ELPCOfLocateExtPC(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Curve^ theC, double theUinf, double theUsup)
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Curve*)theC->NativeInstance, theUinf, theUsup, 1.0E-10);
}

Macad::Occt::Extrema_ELPCOfLocateExtPC::Extrema_ELPCOfLocateExtPC(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Curve^ theC, double theTolF)
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Curve*)theC->NativeInstance, theTolF);
}

Macad::Occt::Extrema_ELPCOfLocateExtPC::Extrema_ELPCOfLocateExtPC(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Curve^ theC)
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Curve*)theC->NativeInstance, 1.0E-10);
}

void Macad::Occt::Extrema_ELPCOfLocateExtPC::Initialize(Macad::Occt::Adaptor3d_Curve^ theC, double theUinf, double theUsup, double theTolF)
{
    ((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)theC->NativeInstance, theUinf, theUsup, theTolF);
}

void Macad::Occt::Extrema_ELPCOfLocateExtPC::Initialize(Macad::Occt::Adaptor3d_Curve^ theC, double theUinf, double theUsup)
{
    ((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)theC->NativeInstance, theUinf, theUsup, 1.0E-10);
}

void Macad::Occt::Extrema_ELPCOfLocateExtPC::Perform(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_theP);
}

bool Macad::Occt::Extrema_ELPCOfLocateExtPC::IsDone()
{
    bool _result = ((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_ELPCOfLocateExtPC::SquareDistance(int theN)
{
    double _result = ((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->SquareDistance(theN);
    return _result;
}

int Macad::Occt::Extrema_ELPCOfLocateExtPC::NbExt()
{
    int _result = ((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::Extrema_ELPCOfLocateExtPC::IsMin(int theN)
{
    bool _result = ((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->IsMin(theN);
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_ELPCOfLocateExtPC::Point(int theN)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->Point(theN);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_ELPCOfLocateExtPC::TrimmedSquareDistances(double% theDist1, double% theDist2, Macad::Occt::Pnt% theP1, Macad::Occt::Pnt% theP2)
{
    pin_ptr<double> pp_theDist1 = &theDist1;
    pin_ptr<double> pp_theDist2 = &theDist2;
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::Extrema_ELPCOfLocateExtPC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_theDist1, *(double*)pp_theDist2, *(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}



//---------------------------------------------------------------------
//  Class  Extrema_ELPCOfLocateExtPC2d
//---------------------------------------------------------------------

Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Extrema_ELPCOfLocateExtPC2d()
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC2d();
}

Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Extrema_ELPCOfLocateExtPC2d(Macad::Occt::Pnt2d theP, Macad::Occt::Adaptor2d_Curve2d^ theC, double theUinf, double theUsup, double theTolF)
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC2d(*(gp_Pnt2d*)pp_theP, *(::Adaptor2d_Curve2d*)theC->NativeInstance, theUinf, theUsup, theTolF);
}

Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Extrema_ELPCOfLocateExtPC2d(Macad::Occt::Pnt2d theP, Macad::Occt::Adaptor2d_Curve2d^ theC, double theUinf, double theUsup)
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC2d(*(gp_Pnt2d*)pp_theP, *(::Adaptor2d_Curve2d*)theC->NativeInstance, theUinf, theUsup, 1.0E-10);
}

Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Extrema_ELPCOfLocateExtPC2d(Macad::Occt::Pnt2d theP, Macad::Occt::Adaptor2d_Curve2d^ theC, double theTolF)
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC2d(*(gp_Pnt2d*)pp_theP, *(::Adaptor2d_Curve2d*)theC->NativeInstance, theTolF);
}

Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Extrema_ELPCOfLocateExtPC2d(Macad::Occt::Pnt2d theP, Macad::Occt::Adaptor2d_Curve2d^ theC)
    : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_ELPCOfLocateExtPC2d(*(gp_Pnt2d*)pp_theP, *(::Adaptor2d_Curve2d*)theC->NativeInstance, 1.0E-10);
}

void Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Initialize(Macad::Occt::Adaptor2d_Curve2d^ theC, double theUinf, double theUsup, double theTolF)
{
    ((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->Initialize(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theUinf, theUsup, theTolF);
}

void Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Initialize(Macad::Occt::Adaptor2d_Curve2d^ theC, double theUinf, double theUsup)
{
    ((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->Initialize(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theUinf, theUsup, 1.0E-10);
}

void Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Perform(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->Perform(*(gp_Pnt2d*)pp_theP);
}

bool Macad::Occt::Extrema_ELPCOfLocateExtPC2d::IsDone()
{
    bool _result = ((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_ELPCOfLocateExtPC2d::SquareDistance(int theN)
{
    double _result = ((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->SquareDistance(theN);
    return _result;
}

int Macad::Occt::Extrema_ELPCOfLocateExtPC2d::NbExt()
{
    int _result = ((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::Extrema_ELPCOfLocateExtPC2d::IsMin(int theN)
{
    bool _result = ((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->IsMin(theN);
    return _result;
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_ELPCOfLocateExtPC2d::Point(int theN)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->Point(theN);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_ELPCOfLocateExtPC2d::TrimmedSquareDistances(double% theDist1, double% theDist2, Macad::Occt::Pnt2d% theP1, Macad::Occt::Pnt2d% theP2)
{
    pin_ptr<double> pp_theDist1 = &theDist1;
    pin_ptr<double> pp_theDist2 = &theDist2;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    ((::Extrema_ELPCOfLocateExtPC2d*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_theDist1, *(double*)pp_theDist2, *(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnCurv
//---------------------------------------------------------------------

void Macad::Occt::Extrema_HArray1OfPOnCurv::Init(Macad::Occt::Extrema_POnCurv^ theValue)
{
    ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Init(*(::Extrema_POnCurv*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Extrema_HArray1OfPOnCurv::Size()
{
    long long unsigned int _result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnCurv::Length()
{
    int _result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Extrema_HArray1OfPOnCurv::IsEmpty()
{
    bool _result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnCurv::Lower()
{
    int _result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnCurv::Upper()
{
    int _result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::First()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::ChangeFirst()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::Last()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::ChangeLast()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::Value(int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::ChangeValue(int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::At(long long unsigned int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv::SetValue(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv::UpdateLowerBound(int theLower)
{
    ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv::UpdateUpperBound(int theUpper)
{
    ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Extrema_HArray1OfPOnCurv::IsDeletable()
{
    bool _result = ((::Extrema_HArray1OfPOnCurv*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Extrema_HArray1OfPOnCurv::Extrema_HArray1OfPOnCurv()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnCurv();
}

Macad::Occt::Extrema_HArray1OfPOnCurv::Extrema_HArray1OfPOnCurv(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnCurv(theLower, theUpper);
}

Macad::Occt::Extrema_HArray1OfPOnCurv::Extrema_HArray1OfPOnCurv(int theLower, int theUpper, Macad::Occt::Extrema_POnCurv^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnCurv(theLower, theUpper, *(::Extrema_POnCurv*)theValue->NativeInstance);
}

Macad::Occt::Extrema_HArray1OfPOnCurv::Extrema_HArray1OfPOnCurv(Macad::Occt::Extrema_POnCurv^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnCurv(*(::Extrema_POnCurv*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Extrema_HArray1OfPOnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::CreateDowncasted(::Extrema_HArray1OfPOnCurv* instance)
{
    return gcnew Macad::Occt::Extrema_HArray1OfPOnCurv( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv^>^ Macad::Occt::Extrema_HArray1OfPOnCurv::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_HArray1OfPOnCurv::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnCurv::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_HArray1OfPOnCurv::Iterator::More()
{
    bool _result = ((::Extrema_HArray1OfPOnCurv::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_HArray1OfPOnCurv::Iterator::Next()
{
    ((::Extrema_HArray1OfPOnCurv::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::Iterator::Value()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray1OfPOnCurv::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray1OfPOnCurv::Iterator::ChangeValue()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray1OfPOnCurv::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnCurv2d
//---------------------------------------------------------------------

void Macad::Occt::Extrema_HArray1OfPOnCurv2d::Init(Macad::Occt::Extrema_POnCurv2d^ theValue)
{
    ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Init(*(::Extrema_POnCurv2d*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Extrema_HArray1OfPOnCurv2d::Size()
{
    long long unsigned int _result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnCurv2d::Length()
{
    int _result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Extrema_HArray1OfPOnCurv2d::IsEmpty()
{
    bool _result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnCurv2d::Lower()
{
    int _result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnCurv2d::Upper()
{
    int _result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::First()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::ChangeFirst()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::Last()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::ChangeLast()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::Value(int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::ChangeValue(int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::At(long long unsigned int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv2d::SetValue(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv2d::UpdateLowerBound(int theLower)
{
    ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv2d::UpdateUpperBound(int theUpper)
{
    ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray1OfPOnCurv2d::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Extrema_HArray1OfPOnCurv2d::IsDeletable()
{
    bool _result = ((::Extrema_HArray1OfPOnCurv2d*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Extrema_HArray1OfPOnCurv2d::Extrema_HArray1OfPOnCurv2d()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnCurv2d();
}

Macad::Occt::Extrema_HArray1OfPOnCurv2d::Extrema_HArray1OfPOnCurv2d(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnCurv2d(theLower, theUpper);
}

Macad::Occt::Extrema_HArray1OfPOnCurv2d::Extrema_HArray1OfPOnCurv2d(int theLower, int theUpper, Macad::Occt::Extrema_POnCurv2d^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnCurv2d(theLower, theUpper, *(::Extrema_POnCurv2d*)theValue->NativeInstance);
}

Macad::Occt::Extrema_HArray1OfPOnCurv2d::Extrema_HArray1OfPOnCurv2d(Macad::Occt::Extrema_POnCurv2d^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnCurv2d(*(::Extrema_POnCurv2d*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Extrema_HArray1OfPOnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::CreateDowncasted(::Extrema_HArray1OfPOnCurv2d* instance)
{
    return gcnew Macad::Occt::Extrema_HArray1OfPOnCurv2d( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv2d^>^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnCurv2d::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_HArray1OfPOnCurv2d::Iterator::More()
{
    bool _result = ((::Extrema_HArray1OfPOnCurv2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_HArray1OfPOnCurv2d::Iterator::Next()
{
    ((::Extrema_HArray1OfPOnCurv2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::Iterator::Value()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray1OfPOnCurv2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray1OfPOnCurv2d::Iterator::ChangeValue()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray1OfPOnCurv2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnSurf
//---------------------------------------------------------------------

void Macad::Occt::Extrema_HArray1OfPOnSurf::Init(Macad::Occt::Extrema_POnSurf^ theValue)
{
    ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Init(*(::Extrema_POnSurf*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Extrema_HArray1OfPOnSurf::Size()
{
    long long unsigned int _result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnSurf::Length()
{
    int _result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Extrema_HArray1OfPOnSurf::IsEmpty()
{
    bool _result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnSurf::Lower()
{
    int _result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_HArray1OfPOnSurf::Upper()
{
    int _result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::First()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::ChangeFirst()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::Last()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::ChangeLast()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::Value(int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::ChangeValue(int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::At(long long unsigned int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_HArray1OfPOnSurf::SetValue(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_HArray1OfPOnSurf::UpdateLowerBound(int theLower)
{
    ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_HArray1OfPOnSurf::UpdateUpperBound(int theUpper)
{
    ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Extrema_HArray1OfPOnSurf::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray1OfPOnSurf::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Extrema_HArray1OfPOnSurf::IsDeletable()
{
    bool _result = ((::Extrema_HArray1OfPOnSurf*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Extrema_HArray1OfPOnSurf::Extrema_HArray1OfPOnSurf()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnSurf();
}

Macad::Occt::Extrema_HArray1OfPOnSurf::Extrema_HArray1OfPOnSurf(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnSurf(theLower, theUpper);
}

Macad::Occt::Extrema_HArray1OfPOnSurf::Extrema_HArray1OfPOnSurf(int theLower, int theUpper, Macad::Occt::Extrema_POnSurf^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnSurf(theLower, theUpper, *(::Extrema_POnSurf*)theValue->NativeInstance);
}

Macad::Occt::Extrema_HArray1OfPOnSurf::Extrema_HArray1OfPOnSurf(Macad::Occt::Extrema_POnSurf^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray1OfPOnSurf(*(::Extrema_POnSurf*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Extrema_HArray1OfPOnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::CreateDowncasted(::Extrema_HArray1OfPOnSurf* instance)
{
    return gcnew Macad::Occt::Extrema_HArray1OfPOnSurf( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnSurf^>^ Macad::Occt::Extrema_HArray1OfPOnSurf::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnSurf^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_HArray1OfPOnSurf::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnSurf^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnSurf::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_HArray1OfPOnSurf::Iterator::More()
{
    bool _result = ((::Extrema_HArray1OfPOnSurf::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_HArray1OfPOnSurf::Iterator::Next()
{
    ((::Extrema_HArray1OfPOnSurf::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::Iterator::Value()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray1OfPOnSurf::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray1OfPOnSurf::Iterator::ChangeValue()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray1OfPOnSurf::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnCurv
//---------------------------------------------------------------------

void Macad::Occt::Extrema_HArray2OfPOnCurv::Init(Macad::Occt::Extrema_POnCurv^ theValue)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Init(*(::Extrema_POnCurv*)theValue->NativeInstance);
}

bool Macad::Occt::Extrema_HArray2OfPOnCurv::IsEmpty()
{
    bool _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::Lower()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::Upper()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::First()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::ChangeFirst()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::Last()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::ChangeLast()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::UpdateLowerBound(int theLower)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::UpdateUpperBound(int theUpper)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::Extrema_HArray2OfPOnCurv::IsDeletable()
{
    bool _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->IsDeletable();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::Extrema_HArray2OfPOnCurv::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::Extrema_HArray2OfPOnCurv::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

long long unsigned int Macad::Occt::Extrema_HArray2OfPOnCurv::Size()
{
    long long unsigned int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::Length()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::NbRows()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::NbColumns()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::RowLength()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::ColLength()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::LowerRow()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::UpperRow()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::LowerCol()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv::UpperCol()
{
    int _result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->UpperCol();
    return _result;
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::UpdateLowerRow(int theLowerRow)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->UpdateLowerRow(theLowerRow);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::UpdateLowerCol(int theLowerCol)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->UpdateLowerCol(theLowerCol);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::UpdateUpperRow(int theUpperRow)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->UpdateUpperRow(theUpperRow);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::UpdateUpperCol(int theUpperCol)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->UpdateUpperCol(theUpperCol);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::Value(int theRow, int theCol)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::ChangeValue(int theRow, int theCol)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->SetValue(theRow, theCol, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::At(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->At(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::ChangeAt(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->ChangeAt(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->ResizeWithTrim(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->Resize(theNbRows, theNbCols, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnCurv*)_NativeInstance)->ResizeWithTrim(theNbRows, theNbCols, theToCopyData);
}

Macad::Occt::Extrema_HArray2OfPOnCurv::Extrema_HArray2OfPOnCurv(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray2OfPOnCurv(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::Extrema_HArray2OfPOnCurv::Extrema_HArray2OfPOnCurv(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Extrema_POnCurv^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray2OfPOnCurv(theRowLow, theRowUpp, theColLow, theColUpp, *(::Extrema_POnCurv*)theValue->NativeInstance);
}

Macad::Occt::Extrema_HArray2OfPOnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::CreateDowncasted(::Extrema_HArray2OfPOnCurv* instance)
{
    return gcnew Macad::Occt::Extrema_HArray2OfPOnCurv( instance );
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnCurv::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_HArray2OfPOnCurv::Iterator::More()
{
    bool _result = ((::Extrema_HArray2OfPOnCurv::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_HArray2OfPOnCurv::Iterator::Next()
{
    ((::Extrema_HArray2OfPOnCurv::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::Iterator::Value()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_HArray2OfPOnCurv::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_HArray2OfPOnCurv::Iterator::ChangeValue()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_HArray2OfPOnCurv::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnCurv2d
//---------------------------------------------------------------------

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::Init(Macad::Occt::Extrema_POnCurv2d^ theValue)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Init(*(::Extrema_POnCurv2d*)theValue->NativeInstance);
}

bool Macad::Occt::Extrema_HArray2OfPOnCurv2d::IsEmpty()
{
    bool _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::Lower()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::Upper()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::First()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::ChangeFirst()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::Last()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::ChangeLast()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::UpdateLowerBound(int theLower)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::UpdateUpperBound(int theUpper)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::Extrema_HArray2OfPOnCurv2d::IsDeletable()
{
    bool _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->IsDeletable();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::Extrema_HArray2OfPOnCurv2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::Extrema_HArray2OfPOnCurv2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

long long unsigned int Macad::Occt::Extrema_HArray2OfPOnCurv2d::Size()
{
    long long unsigned int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::Length()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::NbRows()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::NbColumns()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::RowLength()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::ColLength()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::LowerRow()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::UpperRow()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::LowerCol()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnCurv2d::UpperCol()
{
    int _result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->UpperCol();
    return _result;
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::UpdateLowerRow(int theLowerRow)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->UpdateLowerRow(theLowerRow);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::UpdateLowerCol(int theLowerCol)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->UpdateLowerCol(theLowerCol);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::UpdateUpperRow(int theUpperRow)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->UpdateUpperRow(theUpperRow);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::UpdateUpperCol(int theUpperCol)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->UpdateUpperCol(theUpperCol);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::Value(int theRow, int theCol)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::ChangeValue(int theRow, int theCol)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->SetValue(theRow, theCol, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::At(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->At(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::ChangeAt(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->ChangeAt(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->ResizeWithTrim(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->Resize(theNbRows, theNbCols, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnCurv2d*)_NativeInstance)->ResizeWithTrim(theNbRows, theNbCols, theToCopyData);
}

Macad::Occt::Extrema_HArray2OfPOnCurv2d::Extrema_HArray2OfPOnCurv2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray2OfPOnCurv2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::Extrema_HArray2OfPOnCurv2d::Extrema_HArray2OfPOnCurv2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Extrema_POnCurv2d^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray2OfPOnCurv2d(theRowLow, theRowUpp, theColLow, theColUpp, *(::Extrema_POnCurv2d*)theValue->NativeInstance);
}

Macad::Occt::Extrema_HArray2OfPOnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::CreateDowncasted(::Extrema_HArray2OfPOnCurv2d* instance)
{
    return gcnew Macad::Occt::Extrema_HArray2OfPOnCurv2d( instance );
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnCurv2d::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_HArray2OfPOnCurv2d::Iterator::More()
{
    bool _result = ((::Extrema_HArray2OfPOnCurv2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_HArray2OfPOnCurv2d::Iterator::Next()
{
    ((::Extrema_HArray2OfPOnCurv2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::Iterator::Value()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_HArray2OfPOnCurv2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_HArray2OfPOnCurv2d::Iterator::ChangeValue()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_HArray2OfPOnCurv2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnSurf
//---------------------------------------------------------------------

void Macad::Occt::Extrema_HArray2OfPOnSurf::Init(Macad::Occt::Extrema_POnSurf^ theValue)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Init(*(::Extrema_POnSurf*)theValue->NativeInstance);
}

bool Macad::Occt::Extrema_HArray2OfPOnSurf::IsEmpty()
{
    bool _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::Lower()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::Upper()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::First()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::ChangeFirst()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::Last()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::ChangeLast()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::UpdateLowerBound(int theLower)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::UpdateUpperBound(int theUpper)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::Extrema_HArray2OfPOnSurf::IsDeletable()
{
    bool _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->IsDeletable();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::Extrema_HArray2OfPOnSurf::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::Extrema_HArray2OfPOnSurf::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

long long unsigned int Macad::Occt::Extrema_HArray2OfPOnSurf::Size()
{
    long long unsigned int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::Length()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::NbRows()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::NbColumns()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::RowLength()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::ColLength()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::LowerRow()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::UpperRow()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::LowerCol()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::Extrema_HArray2OfPOnSurf::UpperCol()
{
    int _result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->UpperCol();
    return _result;
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::UpdateLowerRow(int theLowerRow)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->UpdateLowerRow(theLowerRow);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::UpdateLowerCol(int theLowerCol)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->UpdateLowerCol(theLowerCol);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::UpdateUpperRow(int theUpperRow)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->UpdateUpperRow(theUpperRow);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::UpdateUpperCol(int theUpperCol)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->UpdateUpperCol(theUpperCol);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::Value(int theRow, int theCol)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::ChangeValue(int theRow, int theCol)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->SetValue(theRow, theCol, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::At(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->At(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::ChangeAt(long long unsigned int theRow, long long unsigned int theCol)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->ChangeAt(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->ResizeWithTrim(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->Resize(theNbRows, theNbCols, theToCopyData);
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData)
{
    ((::Extrema_HArray2OfPOnSurf*)_NativeInstance)->ResizeWithTrim(theNbRows, theNbCols, theToCopyData);
}

Macad::Occt::Extrema_HArray2OfPOnSurf::Extrema_HArray2OfPOnSurf(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray2OfPOnSurf(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::Extrema_HArray2OfPOnSurf::Extrema_HArray2OfPOnSurf(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Extrema_POnSurf^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_HArray2OfPOnSurf(theRowLow, theRowUpp, theColLow, theColUpp, *(::Extrema_POnSurf*)theValue->NativeInstance);
}

Macad::Occt::Extrema_HArray2OfPOnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::CreateDowncasted(::Extrema_HArray2OfPOnSurf* instance)
{
    return gcnew Macad::Occt::Extrema_HArray2OfPOnSurf( instance );
}



//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnSurf::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Extrema_HArray2OfPOnSurf::Iterator::More()
{
    bool _result = ((::Extrema_HArray2OfPOnSurf::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_HArray2OfPOnSurf::Iterator::Next()
{
    ((::Extrema_HArray2OfPOnSurf::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::Iterator::Value()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_HArray2OfPOnSurf::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_HArray2OfPOnSurf::Iterator::ChangeValue()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_HArray2OfPOnSurf::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_HUBTreeOfSphere
//---------------------------------------------------------------------

Macad::Occt::Extrema_HUBTreeOfSphere::Extrema_HUBTreeOfSphere()
    : Macad::Occt::BaseClass<::Extrema_HUBTreeOfSphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_HUBTreeOfSphere();
}

Macad::Occt::Extrema_HUBTreeOfSphere^ Macad::Occt::Extrema_HUBTreeOfSphere::DownCast(Macad::Occt::Standard_Transient^ theOther)
{
    ::Extrema_HUBTreeOfSphere* _result = new ::Extrema_HUBTreeOfSphere();
    *_result = ::Extrema_HUBTreeOfSphere::DownCast(Handle(::Standard_Transient)(theOther->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_HUBTreeOfSphere(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnCurv
//---------------------------------------------------------------------

int Macad::Occt::Extrema_SequenceOfPOnCurv::Length()
{
    int _result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Length();
    return _result;
}

long long unsigned int Macad::Occt::Extrema_SequenceOfPOnCurv::Size()
{
    long long unsigned int _result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::Extrema_SequenceOfPOnCurv::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

Macad::Occt::Extrema_SequenceOfPOnCurv::Extrema_SequenceOfPOnCurv()
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv();
}

Macad::Occt::Extrema_SequenceOfPOnCurv::Extrema_SequenceOfPOnCurv(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Extrema_SequenceOfPOnCurv::Lower()
{
    int _result = ::Extrema_SequenceOfPOnCurv::Lower();
    return _result;
}

int Macad::Occt::Extrema_SequenceOfPOnCurv::Upper()
{
    int _result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Extrema_SequenceOfPOnCurv::IsEmpty()
{
    bool _result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Reverse()
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Reverse();
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Exchange(long long unsigned int I, long long unsigned int J)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Exchange(int I, int J)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Clear()
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Clear(nullptr);
}

Macad::Occt::Extrema_SequenceOfPOnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::Assign(Macad::Occt::Extrema_SequenceOfPOnCurv^ theOther)
{
    ::Extrema_SequenceOfPOnCurv* _result = new ::Extrema_SequenceOfPOnCurv();
    *_result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Assign(*(::Extrema_SequenceOfPOnCurv*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_SequenceOfPOnCurv(_result);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Remove(Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator^ thePosition)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Remove(*(::Extrema_SequenceOfPOnCurv::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Remove(long long unsigned int theIndex)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Remove(int theIndex)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Remove(int theFromIndex, int theToIndex)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Append(Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Append(*(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Append(Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Append(*(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Prepend(Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Prepend(*(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Prepend(Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Prepend(*(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertBefore(long long unsigned int theIndex, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertBefore(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertBefore(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertBefore(int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertAfter(Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator^ thePosition, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertAfter(*(::Extrema_SequenceOfPOnCurv::Iterator*)thePosition->NativeInstance, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertAfter(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertAfter(int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertAfter(long long unsigned int theIndex, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::InsertAfter(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Split(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Split(theIndex, *(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Split(int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Split(theIndex, *(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::First()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::ChangeFirst()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::Last()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::ChangeLast()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::Value(long long unsigned int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::Value(int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::ChangeValue(long long unsigned int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::ChangeValue(int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::SetValue(long long unsigned int theIndex, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::SetValue(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnCurv*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::At(long long unsigned int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_SequenceOfPOnCurv*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv^>^ Macad::Occt::Extrema_SequenceOfPOnCurv::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_SequenceOfPOnCurv::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnCurv::Iterator
//---------------------------------------------------------------------

Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv::Iterator();
}

Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::Iterator(Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq, bool isStart)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv::Iterator(*(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance, isStart);
}

Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::Iterator(Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv::Iterator(*(::Extrema_SequenceOfPOnCurv*)theSeq->NativeInstance, true);
}

bool Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::More()
{
    bool _result = ((::Extrema_SequenceOfPOnCurv::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::Next()
{
    ((::Extrema_SequenceOfPOnCurv::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::Value()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_SequenceOfPOnCurv::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::ChangeValue()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = ((::Extrema_SequenceOfPOnCurv::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

bool Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::IsEqual(Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator^ theOther)
{
    bool _result = ((::Extrema_SequenceOfPOnCurv::Iterator*)_NativeInstance)->IsEqual(*(::Extrema_SequenceOfPOnCurv::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnCurv2d
//---------------------------------------------------------------------

int Macad::Occt::Extrema_SequenceOfPOnCurv2d::Length()
{
    int _result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Length();
    return _result;
}

long long unsigned int Macad::Occt::Extrema_SequenceOfPOnCurv2d::Size()
{
    long long unsigned int _result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

Macad::Occt::Extrema_SequenceOfPOnCurv2d::Extrema_SequenceOfPOnCurv2d()
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv2d();
}

Macad::Occt::Extrema_SequenceOfPOnCurv2d::Extrema_SequenceOfPOnCurv2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv2d(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Extrema_SequenceOfPOnCurv2d::Lower()
{
    int _result = ::Extrema_SequenceOfPOnCurv2d::Lower();
    return _result;
}

int Macad::Occt::Extrema_SequenceOfPOnCurv2d::Upper()
{
    int _result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Extrema_SequenceOfPOnCurv2d::IsEmpty()
{
    bool _result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Reverse()
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Exchange(long long unsigned int I, long long unsigned int J)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Exchange(int I, int J)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Clear()
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Clear(nullptr);
}

Macad::Occt::Extrema_SequenceOfPOnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::Assign(Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theOther)
{
    ::Extrema_SequenceOfPOnCurv2d* _result = new ::Extrema_SequenceOfPOnCurv2d();
    *_result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Assign(*(::Extrema_SequenceOfPOnCurv2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_SequenceOfPOnCurv2d(_result);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Remove(Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator^ thePosition)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Remove(*(::Extrema_SequenceOfPOnCurv2d::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Remove(long long unsigned int theIndex)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Remove(int theIndex)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Remove(int theFromIndex, int theToIndex)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Append(Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Append(*(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Append(Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Append(*(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Prepend(Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Prepend(*(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Prepend(Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Prepend(*(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertBefore(long long unsigned int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertBefore(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertBefore(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertBefore(int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertAfter(Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator^ thePosition, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertAfter(*(::Extrema_SequenceOfPOnCurv2d::Iterator*)thePosition->NativeInstance, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertAfter(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertAfter(int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertAfter(long long unsigned int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::InsertAfter(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Split(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Split(theIndex, *(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Split(int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Split(theIndex, *(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::First()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::ChangeFirst()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::Last()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::ChangeLast()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::Value(long long unsigned int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::Value(int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::ChangeValue(long long unsigned int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::ChangeValue(int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::SetValue(long long unsigned int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::SetValue(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem)
{
    ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnCurv2d*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::At(long long unsigned int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_SequenceOfPOnCurv2d*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv2d^>^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnCurv2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnCurv2d::Iterator
//---------------------------------------------------------------------

Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv2d::Iterator();
}

Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::Iterator(Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq, bool isStart)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv2d::Iterator(*(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance, isStart);
}

Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::Iterator(Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnCurv2d::Iterator(*(::Extrema_SequenceOfPOnCurv2d*)theSeq->NativeInstance, true);
}

bool Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::More()
{
    bool _result = ((::Extrema_SequenceOfPOnCurv2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::Next()
{
    ((::Extrema_SequenceOfPOnCurv2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::Value()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_SequenceOfPOnCurv2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::ChangeValue()
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = ((::Extrema_SequenceOfPOnCurv2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}

bool Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::IsEqual(Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator^ theOther)
{
    bool _result = ((::Extrema_SequenceOfPOnCurv2d::Iterator*)_NativeInstance)->IsEqual(*(::Extrema_SequenceOfPOnCurv2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnSurf
//---------------------------------------------------------------------

int Macad::Occt::Extrema_SequenceOfPOnSurf::Length()
{
    int _result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Length();
    return _result;
}

long long unsigned int Macad::Occt::Extrema_SequenceOfPOnSurf::Size()
{
    long long unsigned int _result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::Extrema_SequenceOfPOnSurf::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

Macad::Occt::Extrema_SequenceOfPOnSurf::Extrema_SequenceOfPOnSurf()
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnSurf();
}

Macad::Occt::Extrema_SequenceOfPOnSurf::Extrema_SequenceOfPOnSurf(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnSurf(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Extrema_SequenceOfPOnSurf::Lower()
{
    int _result = ::Extrema_SequenceOfPOnSurf::Lower();
    return _result;
}

int Macad::Occt::Extrema_SequenceOfPOnSurf::Upper()
{
    int _result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Extrema_SequenceOfPOnSurf::IsEmpty()
{
    bool _result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Reverse()
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Reverse();
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Exchange(long long unsigned int I, long long unsigned int J)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Exchange(int I, int J)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Clear()
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Clear(nullptr);
}

Macad::Occt::Extrema_SequenceOfPOnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::Assign(Macad::Occt::Extrema_SequenceOfPOnSurf^ theOther)
{
    ::Extrema_SequenceOfPOnSurf* _result = new ::Extrema_SequenceOfPOnSurf();
    *_result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Assign(*(::Extrema_SequenceOfPOnSurf*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_SequenceOfPOnSurf(_result);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Remove(Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator^ thePosition)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Remove(*(::Extrema_SequenceOfPOnSurf::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Remove(long long unsigned int theIndex)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Remove(int theIndex)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Remove(int theFromIndex, int theToIndex)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Append(Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Append(*(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Append(Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Append(*(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Prepend(Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Prepend(*(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Prepend(Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Prepend(*(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertBefore(long long unsigned int theIndex, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertBefore(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertBefore(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertBefore(int theIndex, Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertBefore(theIndex, *(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertAfter(Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator^ thePosition, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertAfter(*(::Extrema_SequenceOfPOnSurf::Iterator*)thePosition->NativeInstance, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertAfter(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertAfter(int theIndex, Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertAfter(long long unsigned int theIndex, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::InsertAfter(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->InsertAfter(theIndex, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Split(long long unsigned int theIndex, Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Split(theIndex, *(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Split(int theIndex, Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Split(theIndex, *(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::First()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::ChangeFirst()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::Last()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::ChangeLast()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::Value(long long unsigned int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::Value(int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::ChangeValue(long long unsigned int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::ChangeValue(int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::SetValue(long long unsigned int theIndex, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::SetValue(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem)
{
    ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->SetValue(theIndex, *(::Extrema_POnSurf*)theItem->NativeInstance);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::At(long long unsigned int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::ChangeAt(long long unsigned int theIndex)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_SequenceOfPOnSurf*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnSurf^>^ Macad::Occt::Extrema_SequenceOfPOnSurf::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnSurf^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Extrema_SequenceOfPOnSurf::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Extrema_POnSurf^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnSurf::Iterator
//---------------------------------------------------------------------

Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnSurf::Iterator();
}

Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::Iterator(Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq, bool isStart)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnSurf::Iterator(*(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance, isStart);
}

Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::Iterator(Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq)
    : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_SequenceOfPOnSurf::Iterator(*(::Extrema_SequenceOfPOnSurf*)theSeq->NativeInstance, true);
}

bool Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::More()
{
    bool _result = ((::Extrema_SequenceOfPOnSurf::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::Next()
{
    ((::Extrema_SequenceOfPOnSurf::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::Value()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_SequenceOfPOnSurf::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::ChangeValue()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = ((::Extrema_SequenceOfPOnSurf::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

bool Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::IsEqual(Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator^ theOther)
{
    bool _result = ((::Extrema_SequenceOfPOnSurf::Iterator*)_NativeInstance)->IsEqual(*(::Extrema_SequenceOfPOnSurf::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Extrema_POnCurv
//---------------------------------------------------------------------

Macad::Occt::Extrema_POnCurv::Extrema_POnCurv()
    : Macad::Occt::BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_POnCurv();
}

Macad::Occt::Extrema_POnCurv::Extrema_POnCurv(double theU, Macad::Occt::Pnt theP)
    : Macad::Occt::BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_POnCurv(theU, *(gp_Pnt*)pp_theP);
}

void Macad::Occt::Extrema_POnCurv::SetValues(double theU, Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::Extrema_POnCurv*)_NativeInstance)->SetValues(theU, *(gp_Pnt*)pp_theP);
}

Macad::Occt::Pnt Macad::Occt::Extrema_POnCurv::Value()
{
    ::gp_Pnt _nativeResult = ((::Extrema_POnCurv*)_NativeInstance)->Value();
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::Extrema_POnCurv::Parameter()
{
    double _result = ((::Extrema_POnCurv*)_NativeInstance)->Parameter();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Extrema_POnCurv2d
//---------------------------------------------------------------------

Macad::Occt::Extrema_POnCurv2d::Extrema_POnCurv2d()
    : Macad::Occt::BaseClass<::Extrema_POnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_POnCurv2d();
}

Macad::Occt::Extrema_POnCurv2d::Extrema_POnCurv2d(double theU, Macad::Occt::Pnt2d theP)
    : Macad::Occt::BaseClass<::Extrema_POnCurv2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    _NativeInstance = new ::Extrema_POnCurv2d(theU, *(gp_Pnt2d*)pp_theP);
}

void Macad::Occt::Extrema_POnCurv2d::SetValues(double theU, Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::Extrema_POnCurv2d*)_NativeInstance)->SetValues(theU, *(gp_Pnt2d*)pp_theP);
}

Macad::Occt::Pnt2d Macad::Occt::Extrema_POnCurv2d::Value()
{
    ::gp_Pnt2d _nativeResult = ((::Extrema_POnCurv2d*)_NativeInstance)->Value();
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::Extrema_POnCurv2d::Parameter()
{
    double _result = ((::Extrema_POnCurv2d*)_NativeInstance)->Parameter();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Extrema_POnSurf
//---------------------------------------------------------------------

Macad::Occt::Extrema_POnSurf::Extrema_POnSurf()
    : Macad::Occt::BaseClass<::Extrema_POnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_POnSurf();
}

Macad::Occt::Extrema_POnSurf::Extrema_POnSurf(double theU, double theV, Macad::Occt::Pnt theP)
    : Macad::Occt::BaseClass<::Extrema_POnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    _NativeInstance = new ::Extrema_POnSurf(theU, theV, *(gp_Pnt*)pp_theP);
}

Macad::Occt::Pnt Macad::Occt::Extrema_POnSurf::Value()
{
    ::gp_Pnt _nativeResult = ((::Extrema_POnSurf*)_NativeInstance)->Value();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Extrema_POnSurf::SetParameters(double theU, double theV, Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ((::Extrema_POnSurf*)_NativeInstance)->SetParameters(theU, theV, *(gp_Pnt*)pp_thePnt);
}

void Macad::Occt::Extrema_POnSurf::Parameter(double% theU, double% theV)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    ((::Extrema_POnSurf*)_NativeInstance)->Parameter(*(double*)pp_theU, *(double*)pp_theV);
}



//---------------------------------------------------------------------
//  Class  Extrema_POnSurfParams
//---------------------------------------------------------------------

Macad::Occt::Extrema_POnSurfParams::Extrema_POnSurfParams()
    : Macad::Occt::Extrema_POnSurf(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_POnSurfParams();
}

Macad::Occt::Extrema_POnSurfParams::Extrema_POnSurfParams(double theU, double theV, Macad::Occt::Pnt thePnt)
    : Macad::Occt::Extrema_POnSurf(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    _NativeInstance = new ::Extrema_POnSurfParams(theU, theV, *(gp_Pnt*)pp_thePnt);
}

void Macad::Occt::Extrema_POnSurfParams::SetSqrDistance(double theSqrDistance)
{
    ((::Extrema_POnSurfParams*)_NativeInstance)->SetSqrDistance(theSqrDistance);
}

double Macad::Occt::Extrema_POnSurfParams::GetSqrDistance()
{
    double _result = ((::Extrema_POnSurfParams*)_NativeInstance)->GetSqrDistance();
    return _result;
}

void Macad::Occt::Extrema_POnSurfParams::SetElementType(Macad::Occt::Extrema_ElementType theElementType)
{
    ((::Extrema_POnSurfParams*)_NativeInstance)->SetElementType((::Extrema_ElementType)theElementType);
}

Macad::Occt::Extrema_ElementType Macad::Occt::Extrema_POnSurfParams::GetElementType()
{
    ::Extrema_ElementType _result = ((::Extrema_POnSurfParams*)_NativeInstance)->GetElementType();
    return (Macad::Occt::Extrema_ElementType)_result;
}

void Macad::Occt::Extrema_POnSurfParams::SetIndices(int theIndexU, int theIndexV)
{
    ((::Extrema_POnSurfParams*)_NativeInstance)->SetIndices(theIndexU, theIndexV);
}

void Macad::Occt::Extrema_POnSurfParams::GetIndices(int% theIndexU, int% theIndexV)
{
    pin_ptr<int> pp_theIndexU = &theIndexU;
    pin_ptr<int> pp_theIndexV = &theIndexV;
    ((::Extrema_POnSurfParams*)_NativeInstance)->GetIndices(*(int*)pp_theIndexU, *(int*)pp_theIndexV);
}



//---------------------------------------------------------------------
//  Class  Extrema_CurveTool
//---------------------------------------------------------------------

Macad::Occt::Extrema_CurveTool::Extrema_CurveTool()
    : Macad::Occt::BaseClass<::Extrema_CurveTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_CurveTool();
}

double Macad::Occt::Extrema_CurveTool::FirstParameter(Macad::Occt::Adaptor3d_Curve^ theC)
{
    double _result = ::Extrema_CurveTool::FirstParameter(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result;
}

double Macad::Occt::Extrema_CurveTool::LastParameter(Macad::Occt::Adaptor3d_Curve^ theC)
{
    double _result = ::Extrema_CurveTool::LastParameter(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Extrema_CurveTool::Continuity(Macad::Occt::Adaptor3d_Curve^ theC)
{
    ::GeomAbs_Shape _result = ::Extrema_CurveTool::Continuity(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::Extrema_CurveTool::NbIntervals(Macad::Occt::Adaptor3d_Curve^ theC, Macad::Occt::GeomAbs_Shape theS)
{
    int _result = ::Extrema_CurveTool::NbIntervals(*(::Adaptor3d_Curve*)theC->NativeInstance, (::GeomAbs_Shape)theS);
    return _result;
}

void Macad::Occt::Extrema_CurveTool::Intervals(Macad::Occt::Adaptor3d_Curve^ theC, Macad::Occt::TColStd_Array1OfReal^ theT, Macad::Occt::GeomAbs_Shape theS)
{
    ::Extrema_CurveTool::Intervals(*(::Adaptor3d_Curve*)theC->NativeInstance, *(::TColStd_Array1OfReal*)theT->NativeInstance, (::GeomAbs_Shape)theS);
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::Extrema_CurveTool::DeflCurvIntervals(Macad::Occt::Adaptor3d_Curve^ theC)
{
    Handle(::TColStd_HArray1OfReal) _result = ::Extrema_CurveTool::DeflCurvIntervals(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted(_result.get());
}

bool Macad::Occt::Extrema_CurveTool::IsPeriodic(Macad::Occt::Adaptor3d_Curve^ theC)
{
    bool _result = ::Extrema_CurveTool::IsPeriodic(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result;
}

double Macad::Occt::Extrema_CurveTool::Period(Macad::Occt::Adaptor3d_Curve^ theC)
{
    double _result = ::Extrema_CurveTool::Period(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result;
}

double Macad::Occt::Extrema_CurveTool::Resolution(Macad::Occt::Adaptor3d_Curve^ theC, double theR3d)
{
    double _result = ::Extrema_CurveTool::Resolution(*(::Adaptor3d_Curve*)theC->NativeInstance, theR3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Extrema_CurveTool::GetCurveType(Macad::Occt::Adaptor3d_Curve^ theC)
{
    ::GeomAbs_CurveType _result = ::Extrema_CurveTool::GetType(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return (Macad::Occt::GeomAbs_CurveType)_result;
}

Macad::Occt::Pnt Macad::Occt::Extrema_CurveTool::Value(Macad::Occt::Adaptor3d_Curve^ theC, double theU)
{
    ::gp_Pnt _nativeResult = ::Extrema_CurveTool::Value(*(::Adaptor3d_Curve*)theC->NativeInstance, theU);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Extrema_CurveTool::D0(Macad::Occt::Adaptor3d_Curve^ theC, double theU, Macad::Occt::Pnt% theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ::Extrema_CurveTool::D0(*(::Adaptor3d_Curve*)theC->NativeInstance, theU, *(gp_Pnt*)pp_theP);
}

void Macad::Occt::Extrema_CurveTool::D1(Macad::Occt::Adaptor3d_Curve^ theC, double theU, Macad::Occt::Pnt% theP, Macad::Occt::Vec% theV)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ::Extrema_CurveTool::D1(*(::Adaptor3d_Curve*)theC->NativeInstance, theU, *(gp_Pnt*)pp_theP, *(gp_Vec*)pp_theV);
}

void Macad::Occt::Extrema_CurveTool::D2(Macad::Occt::Adaptor3d_Curve^ theC, double theU, Macad::Occt::Pnt% theP, Macad::Occt::Vec% theV1, Macad::Occt::Vec% theV2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    pin_ptr<Macad::Occt::Vec> pp_theV1 = &theV1;
    pin_ptr<Macad::Occt::Vec> pp_theV2 = &theV2;
    ::Extrema_CurveTool::D2(*(::Adaptor3d_Curve*)theC->NativeInstance, theU, *(gp_Pnt*)pp_theP, *(gp_Vec*)pp_theV1, *(gp_Vec*)pp_theV2);
}

void Macad::Occt::Extrema_CurveTool::D3(Macad::Occt::Adaptor3d_Curve^ theC, double theU, Macad::Occt::Pnt% theP, Macad::Occt::Vec% theV1, Macad::Occt::Vec% theV2, Macad::Occt::Vec% theV3)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    pin_ptr<Macad::Occt::Vec> pp_theV1 = &theV1;
    pin_ptr<Macad::Occt::Vec> pp_theV2 = &theV2;
    pin_ptr<Macad::Occt::Vec> pp_theV3 = &theV3;
    ::Extrema_CurveTool::D3(*(::Adaptor3d_Curve*)theC->NativeInstance, theU, *(gp_Pnt*)pp_theP, *(gp_Vec*)pp_theV1, *(gp_Vec*)pp_theV2, *(gp_Vec*)pp_theV3);
}

Macad::Occt::Vec Macad::Occt::Extrema_CurveTool::DN(Macad::Occt::Adaptor3d_Curve^ theC, double theU, int theN)
{
    ::gp_Vec _nativeResult = ::Extrema_CurveTool::DN(*(::Adaptor3d_Curve*)theC->NativeInstance, theU, theN);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::gp_Lin^ Macad::Occt::Extrema_CurveTool::Line(Macad::Occt::Adaptor3d_Curve^ theC)
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ::Extrema_CurveTool::Line(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::Extrema_CurveTool::Circle(Macad::Occt::Adaptor3d_Curve^ theC)
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = ::Extrema_CurveTool::Circle(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::Extrema_CurveTool::Ellipse(Macad::Occt::Adaptor3d_Curve^ theC)
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = ::Extrema_CurveTool::Ellipse(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::Extrema_CurveTool::Hyperbola(Macad::Occt::Adaptor3d_Curve^ theC)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ::Extrema_CurveTool::Hyperbola(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::Extrema_CurveTool::Parabola(Macad::Occt::Adaptor3d_Curve^ theC)
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = ::Extrema_CurveTool::Parabola(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::Extrema_CurveTool::Degree(Macad::Occt::Adaptor3d_Curve^ theC)
{
    int _result = ::Extrema_CurveTool::Degree(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result;
}

bool Macad::Occt::Extrema_CurveTool::IsRational(Macad::Occt::Adaptor3d_Curve^ theC)
{
    bool _result = ::Extrema_CurveTool::IsRational(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result;
}

int Macad::Occt::Extrema_CurveTool::NbPoles(Macad::Occt::Adaptor3d_Curve^ theC)
{
    int _result = ::Extrema_CurveTool::NbPoles(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result;
}

int Macad::Occt::Extrema_CurveTool::NbKnots(Macad::Occt::Adaptor3d_Curve^ theC)
{
    int _result = ::Extrema_CurveTool::NbKnots(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result;
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::Extrema_CurveTool::Bezier(Macad::Occt::Adaptor3d_Curve^ theC)
{
    Handle(::Geom_BezierCurve) _result = ::Extrema_CurveTool::Bezier(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::Extrema_CurveTool::BSpline(Macad::Occt::Adaptor3d_Curve^ theC)
{
    Handle(::Geom_BSplineCurve) _result = ::Extrema_CurveTool::BSpline(*(::Adaptor3d_Curve*)theC->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Extrema_Curve2dTool
//---------------------------------------------------------------------

Macad::Occt::Extrema_Curve2dTool::Extrema_Curve2dTool()
    : Macad::Occt::BaseClass<::Extrema_Curve2dTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_Curve2dTool();
}

double Macad::Occt::Extrema_Curve2dTool::FirstParameter(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    double _result = ::Extrema_Curve2dTool::FirstParameter(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

double Macad::Occt::Extrema_Curve2dTool::LastParameter(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    double _result = ::Extrema_Curve2dTool::LastParameter(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Extrema_Curve2dTool::Continuity(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    ::GeomAbs_Shape _result = ::Extrema_Curve2dTool::Continuity(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::Extrema_Curve2dTool::NbIntervals(Macad::Occt::Adaptor2d_Curve2d^ theC, Macad::Occt::GeomAbs_Shape theS)
{
    int _result = ::Extrema_Curve2dTool::NbIntervals(*(::Adaptor2d_Curve2d*)theC->NativeInstance, (::GeomAbs_Shape)theS);
    return _result;
}

void Macad::Occt::Extrema_Curve2dTool::Intervals(Macad::Occt::Adaptor2d_Curve2d^ theC, Macad::Occt::TColStd_Array1OfReal^ theT, Macad::Occt::GeomAbs_Shape theS)
{
    ::Extrema_Curve2dTool::Intervals(*(::Adaptor2d_Curve2d*)theC->NativeInstance, *(::TColStd_Array1OfReal*)theT->NativeInstance, (::GeomAbs_Shape)theS);
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::Extrema_Curve2dTool::DeflCurvIntervals(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    Handle(::TColStd_HArray1OfReal) _result = ::Extrema_Curve2dTool::DeflCurvIntervals(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted(_result.get());
}

bool Macad::Occt::Extrema_Curve2dTool::IsClosed(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    bool _result = ::Extrema_Curve2dTool::IsClosed(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

bool Macad::Occt::Extrema_Curve2dTool::IsPeriodic(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    bool _result = ::Extrema_Curve2dTool::IsPeriodic(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

double Macad::Occt::Extrema_Curve2dTool::Period(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    double _result = ::Extrema_Curve2dTool::Period(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Extrema_Curve2dTool::Value(Macad::Occt::Adaptor2d_Curve2d^ theC, double theU)
{
    ::gp_Pnt2d _nativeResult = ::Extrema_Curve2dTool::Value(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theU);
    return Macad::Occt::Pnt2d(_nativeResult);
}

void Macad::Occt::Extrema_Curve2dTool::D0(Macad::Occt::Adaptor2d_Curve2d^ theC, double theU, Macad::Occt::Pnt2d% theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ::Extrema_Curve2dTool::D0(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theU, *(gp_Pnt2d*)pp_theP);
}

void Macad::Occt::Extrema_Curve2dTool::D1(Macad::Occt::Adaptor2d_Curve2d^ theC, double theU, Macad::Occt::Pnt2d% theP, Macad::Occt::Vec2d% theV)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    ::Extrema_Curve2dTool::D1(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theU, *(gp_Pnt2d*)pp_theP, *(gp_Vec2d*)pp_theV);
}

void Macad::Occt::Extrema_Curve2dTool::D2(Macad::Occt::Adaptor2d_Curve2d^ theC, double theU, Macad::Occt::Pnt2d% theP, Macad::Occt::Vec2d% theV1, Macad::Occt::Vec2d% theV2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    pin_ptr<Macad::Occt::Vec2d> pp_theV1 = &theV1;
    pin_ptr<Macad::Occt::Vec2d> pp_theV2 = &theV2;
    ::Extrema_Curve2dTool::D2(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theU, *(gp_Pnt2d*)pp_theP, *(gp_Vec2d*)pp_theV1, *(gp_Vec2d*)pp_theV2);
}

void Macad::Occt::Extrema_Curve2dTool::D3(Macad::Occt::Adaptor2d_Curve2d^ theC, double theU, Macad::Occt::Pnt2d% theP, Macad::Occt::Vec2d% theV1, Macad::Occt::Vec2d% theV2, Macad::Occt::Vec2d% theV3)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    pin_ptr<Macad::Occt::Vec2d> pp_theV1 = &theV1;
    pin_ptr<Macad::Occt::Vec2d> pp_theV2 = &theV2;
    pin_ptr<Macad::Occt::Vec2d> pp_theV3 = &theV3;
    ::Extrema_Curve2dTool::D3(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theU, *(gp_Pnt2d*)pp_theP, *(gp_Vec2d*)pp_theV1, *(gp_Vec2d*)pp_theV2, *(gp_Vec2d*)pp_theV3);
}

Macad::Occt::Vec2d Macad::Occt::Extrema_Curve2dTool::DN(Macad::Occt::Adaptor2d_Curve2d^ theC, double theU, int theN)
{
    ::gp_Vec2d _nativeResult = ::Extrema_Curve2dTool::DN(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theU, theN);
    return Macad::Occt::Vec2d(_nativeResult);
}

double Macad::Occt::Extrema_Curve2dTool::Resolution(Macad::Occt::Adaptor2d_Curve2d^ theC, double theR3d)
{
    double _result = ::Extrema_Curve2dTool::Resolution(*(::Adaptor2d_Curve2d*)theC->NativeInstance, theR3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Extrema_Curve2dTool::GetCurveType(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    ::GeomAbs_CurveType _result = ::Extrema_Curve2dTool::GetType(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return (Macad::Occt::GeomAbs_CurveType)_result;
}

Macad::Occt::gp_Lin2d^ Macad::Occt::Extrema_Curve2dTool::Line(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ::Extrema_Curve2dTool::Line(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::Extrema_Curve2dTool::Circle(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ::Extrema_Curve2dTool::Circle(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::Extrema_Curve2dTool::Ellipse(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = ::Extrema_Curve2dTool::Ellipse(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Extrema_Curve2dTool::Hyperbola(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ::Extrema_Curve2dTool::Hyperbola(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::Extrema_Curve2dTool::Parabola(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = ::Extrema_Curve2dTool::Parabola(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

int Macad::Occt::Extrema_Curve2dTool::Degree(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    int _result = ::Extrema_Curve2dTool::Degree(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

bool Macad::Occt::Extrema_Curve2dTool::IsRational(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    bool _result = ::Extrema_Curve2dTool::IsRational(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

int Macad::Occt::Extrema_Curve2dTool::NbPoles(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    int _result = ::Extrema_Curve2dTool::NbPoles(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

int Macad::Occt::Extrema_Curve2dTool::NbKnots(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    int _result = ::Extrema_Curve2dTool::NbKnots(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result;
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Extrema_Curve2dTool::Bezier(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    Handle(::Geom2d_BezierCurve) _result = ::Extrema_Curve2dTool::Bezier(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Extrema_Curve2dTool::BSpline(Macad::Occt::Adaptor2d_Curve2d^ theC)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Extrema_Curve2dTool::BSpline(*(::Adaptor2d_Curve2d*)theC->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPElC
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPElC::Extrema_ExtPElC()
    : Macad::Occt::BaseClass<::Extrema_ExtPElC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtPElC();
}

Macad::Occt::Extrema_ExtPElC::Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC(*(gp_Pnt*)pp_P, *(::gp_Lin*)C->NativeInstance, Tol, Uinf, Usup);
}

Macad::Occt::Extrema_ExtPElC::Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Circ^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC(*(gp_Pnt*)pp_P, *(::gp_Circ*)C->NativeInstance, Tol, Uinf, Usup);
}

Macad::Occt::Extrema_ExtPElC::Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Elips^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC(*(gp_Pnt*)pp_P, *(::gp_Elips*)C->NativeInstance, Tol, Uinf, Usup);
}

Macad::Occt::Extrema_ExtPElC::Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Hypr^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC(*(gp_Pnt*)pp_P, *(::gp_Hypr*)C->NativeInstance, Tol, Uinf, Usup);
}

Macad::Occt::Extrema_ExtPElC::Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Parab^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC(*(gp_Pnt*)pp_P, *(::gp_Parab*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Lin*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Circ^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Circ*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Elips^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Elips*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Hypr^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Hypr*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Parab^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Parab*)C->NativeInstance, Tol, Uinf, Usup);
}

bool Macad::Occt::Extrema_ExtPElC::IsDone()
{
    bool _result = ((::Extrema_ExtPElC*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_ExtPElC::NbExt()
{
    int _result = ((::Extrema_ExtPElC*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtPElC::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtPElC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

bool Macad::Occt::Extrema_ExtPElC::IsMin(int N)
{
    bool _result = ((::Extrema_ExtPElC*)_NativeInstance)->IsMin(N);
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_ExtPElC::Point(int N)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_ExtPElC*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPElC2d
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPElC2d::Extrema_ExtPElC2d()
    : Macad::Occt::BaseClass<::Extrema_ExtPElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtPElC2d();
}

Macad::Occt::Extrema_ExtPElC2d::Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Lin2d^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC2d(*(gp_Pnt2d*)pp_P, *(::gp_Lin2d*)C->NativeInstance, Tol, Uinf, Usup);
}

Macad::Occt::Extrema_ExtPElC2d::Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Circ2d^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC2d(*(gp_Pnt2d*)pp_P, *(::gp_Circ2d*)C->NativeInstance, Tol, Uinf, Usup);
}

Macad::Occt::Extrema_ExtPElC2d::Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Elips2d^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC2d(*(gp_Pnt2d*)pp_P, *(::gp_Elips2d*)C->NativeInstance, Tol, Uinf, Usup);
}

Macad::Occt::Extrema_ExtPElC2d::Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Hypr2d^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC2d(*(gp_Pnt2d*)pp_P, *(::gp_Hypr2d*)C->NativeInstance, Tol, Uinf, Usup);
}

Macad::Occt::Extrema_ExtPElC2d::Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Parab2d^ C, double Tol, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPElC2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElC2d(*(gp_Pnt2d*)pp_P, *(::gp_Parab2d*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC2d::Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Lin2d^ L, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    ((::Extrema_ExtPElC2d*)_NativeInstance)->Perform(*(gp_Pnt2d*)pp_P, *(::gp_Lin2d*)L->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC2d::Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Circ2d^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    ((::Extrema_ExtPElC2d*)_NativeInstance)->Perform(*(gp_Pnt2d*)pp_P, *(::gp_Circ2d*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC2d::Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Elips2d^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    ((::Extrema_ExtPElC2d*)_NativeInstance)->Perform(*(gp_Pnt2d*)pp_P, *(::gp_Elips2d*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC2d::Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Hypr2d^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    ((::Extrema_ExtPElC2d*)_NativeInstance)->Perform(*(gp_Pnt2d*)pp_P, *(::gp_Hypr2d*)C->NativeInstance, Tol, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtPElC2d::Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Parab2d^ C, double Tol, double Uinf, double Usup)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    ((::Extrema_ExtPElC2d*)_NativeInstance)->Perform(*(gp_Pnt2d*)pp_P, *(::gp_Parab2d*)C->NativeInstance, Tol, Uinf, Usup);
}

bool Macad::Occt::Extrema_ExtPElC2d::IsDone()
{
    bool _result = ((::Extrema_ExtPElC2d*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_ExtPElC2d::NbExt()
{
    int _result = ((::Extrema_ExtPElC2d*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtPElC2d::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtPElC2d*)_NativeInstance)->SquareDistance(N);
    return _result;
}

bool Macad::Occt::Extrema_ExtPElC2d::IsMin(int N)
{
    bool _result = ((::Extrema_ExtPElC2d*)_NativeInstance)->IsMin(N);
    return _result;
}

Macad::Occt::Extrema_POnCurv2d^ Macad::Occt::Extrema_ExtPElC2d::Point(int N)
{
    ::Extrema_POnCurv2d* _result = new ::Extrema_POnCurv2d();
    *_result = (::Extrema_POnCurv2d)((::Extrema_ExtPElC2d*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv2d(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtElC
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtElC::Extrema_ExtElC()
    : Macad::Occt::BaseClass<::Extrema_ExtElC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC();
}

Macad::Occt::Extrema_ExtElC::Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Lin^ C2, double AngTol)
    : Macad::Occt::BaseClass<::Extrema_ExtElC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC(*(::gp_Lin*)C1->NativeInstance, *(::gp_Lin*)C2->NativeInstance, AngTol);
}

Macad::Occt::Extrema_ExtElC::Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Circ^ C2, double Tol)
    : Macad::Occt::BaseClass<::Extrema_ExtElC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC(*(::gp_Lin*)C1->NativeInstance, *(::gp_Circ*)C2->NativeInstance, Tol);
}

Macad::Occt::Extrema_ExtElC::Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Elips^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC(*(::gp_Lin*)C1->NativeInstance, *(::gp_Elips*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC::Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Hypr^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC(*(::gp_Lin*)C1->NativeInstance, *(::gp_Hypr*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC::Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Parab^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC(*(::gp_Lin*)C1->NativeInstance, *(::gp_Parab*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC::Extrema_ExtElC(Macad::Occt::gp_Circ^ C1, Macad::Occt::gp_Circ^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC(*(::gp_Circ*)C1->NativeInstance, *(::gp_Circ*)C2->NativeInstance);
}

bool Macad::Occt::Extrema_ExtElC::IsDone()
{
    bool _result = ((::Extrema_ExtElC*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::Extrema_ExtElC::IsParallel()
{
    bool _result = ((::Extrema_ExtElC*)_NativeInstance)->IsParallel();
    return _result;
}

int Macad::Occt::Extrema_ExtElC::NbExt()
{
    int _result = ((::Extrema_ExtElC*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtElC::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtElC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double Macad::Occt::Extrema_ExtElC::SquareDistance()
{
    double _result = ((::Extrema_ExtElC*)_NativeInstance)->SquareDistance(1);
    return _result;
}

void Macad::Occt::Extrema_ExtElC::Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnCurv^ P2)
{
    ((::Extrema_ExtElC*)_NativeInstance)->Points(N, *(::Extrema_POnCurv*)P1->NativeInstance, *(::Extrema_POnCurv*)P2->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtCC
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC(double TolC1, double TolC2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(TolC1, TolC2);
}

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC(double TolC1)
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(TolC1, 1.0E-10);
}

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC()
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(1.0E-10, 1.0E-10);
}

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double TolC1, double TolC2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, TolC1, TolC2);
}

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double TolC1)
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, TolC1, 1.0E-10);
}

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, 1.0E-10, 1.0E-10);
}

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2, double TolC1, double TolC2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, U1, U2, V1, V2, TolC1, TolC2);
}

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2, double TolC1)
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, U1, U2, V1, V2, TolC1, 1.0E-10);
}

Macad::Occt::Extrema_ExtCC::Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, U1, U2, V1, V2, 1.0E-10, 1.0E-10);
}

void Macad::Occt::Extrema_ExtCC::Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double TolC1, double TolC2)
{
    ((::Extrema_ExtCC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, TolC1, TolC2);
}

void Macad::Occt::Extrema_ExtCC::Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double TolC1)
{
    ((::Extrema_ExtCC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, TolC1, 1.0E-10);
}

void Macad::Occt::Extrema_ExtCC::Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2)
{
    ((::Extrema_ExtCC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, 1.0E-10, 1.0E-10);
}

void Macad::Occt::Extrema_ExtCC::Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2, double TolC1, double TolC2)
{
    ((::Extrema_ExtCC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, U1, U2, V1, V2, TolC1, TolC2);
}

void Macad::Occt::Extrema_ExtCC::Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2, double TolC1)
{
    ((::Extrema_ExtCC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, U1, U2, V1, V2, TolC1, 1.0E-10);
}

void Macad::Occt::Extrema_ExtCC::Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2)
{
    ((::Extrema_ExtCC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, U1, U2, V1, V2, 1.0E-10, 1.0E-10);
}

void Macad::Occt::Extrema_ExtCC::SetCurve(int theRank, Macad::Occt::Adaptor3d_Curve^ C)
{
    ((::Extrema_ExtCC*)_NativeInstance)->SetCurve(theRank, *(::Adaptor3d_Curve*)C->NativeInstance);
}

void Macad::Occt::Extrema_ExtCC::SetCurve(int theRank, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup)
{
    ((::Extrema_ExtCC*)_NativeInstance)->SetCurve(theRank, *(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtCC::SetRange(int theRank, double Uinf, double Usup)
{
    ((::Extrema_ExtCC*)_NativeInstance)->SetRange(theRank, Uinf, Usup);
}

void Macad::Occt::Extrema_ExtCC::SetTolerance(int theRank, double Tol)
{
    ((::Extrema_ExtCC*)_NativeInstance)->SetTolerance(theRank, Tol);
}

void Macad::Occt::Extrema_ExtCC::Perform()
{
    ((::Extrema_ExtCC*)_NativeInstance)->Perform();
}

bool Macad::Occt::Extrema_ExtCC::IsDone()
{
    bool _result = ((::Extrema_ExtCC*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_ExtCC::NbExt()
{
    int _result = ((::Extrema_ExtCC*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::Extrema_ExtCC::IsParallel()
{
    bool _result = ((::Extrema_ExtCC*)_NativeInstance)->IsParallel();
    return _result;
}

double Macad::Occt::Extrema_ExtCC::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtCC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double Macad::Occt::Extrema_ExtCC::SquareDistance()
{
    double _result = ((::Extrema_ExtCC*)_NativeInstance)->SquareDistance(1);
    return _result;
}

void Macad::Occt::Extrema_ExtCC::Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnCurv^ P2)
{
    ((::Extrema_ExtCC*)_NativeInstance)->Points(N, *(::Extrema_POnCurv*)P1->NativeInstance, *(::Extrema_POnCurv*)P2->NativeInstance);
}

void Macad::Occt::Extrema_ExtCC::TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, Macad::Occt::Pnt% P11, Macad::Occt::Pnt% P12, Macad::Occt::Pnt% P21, Macad::Occt::Pnt% P22)
{
    pin_ptr<double> pp_dist11 = &dist11;
    pin_ptr<double> pp_distP12 = &distP12;
    pin_ptr<double> pp_distP21 = &distP21;
    pin_ptr<double> pp_distP22 = &distP22;
    pin_ptr<Macad::Occt::Pnt> pp_P11 = &P11;
    pin_ptr<Macad::Occt::Pnt> pp_P12 = &P12;
    pin_ptr<Macad::Occt::Pnt> pp_P21 = &P21;
    pin_ptr<Macad::Occt::Pnt> pp_P22 = &P22;
    ((::Extrema_ExtCC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dist11, *(double*)pp_distP12, *(double*)pp_distP21, *(double*)pp_distP22, *(gp_Pnt*)pp_P11, *(gp_Pnt*)pp_P12, *(gp_Pnt*)pp_P21, *(gp_Pnt*)pp_P22);
}

void Macad::Occt::Extrema_ExtCC::SetSingleSolutionFlag(bool theSingleSolutionFlag)
{
    ((::Extrema_ExtCC*)_NativeInstance)->SetSingleSolutionFlag(theSingleSolutionFlag);
}

bool Macad::Occt::Extrema_ExtCC::GetSingleSolutionFlag()
{
    bool _result = ((::Extrema_ExtCC*)_NativeInstance)->GetSingleSolutionFlag();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtElC2d
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d()
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d();
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Lin2d^ C2, double AngTol)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Lin2d*)C1->NativeInstance, *(::gp_Lin2d*)C2->NativeInstance, AngTol);
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Circ2d^ C2, double Tol)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Lin2d*)C1->NativeInstance, *(::gp_Circ2d*)C2->NativeInstance, Tol);
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Elips2d^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Lin2d*)C1->NativeInstance, *(::gp_Elips2d*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Hypr2d^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Lin2d*)C1->NativeInstance, *(::gp_Hypr2d*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Parab2d^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Lin2d*)C1->NativeInstance, *(::gp_Parab2d*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Circ2d^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Circ2d*)C1->NativeInstance, *(::gp_Circ2d*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Elips2d^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Circ2d*)C1->NativeInstance, *(::gp_Elips2d*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Hypr2d^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Circ2d*)C1->NativeInstance, *(::gp_Hypr2d*)C2->NativeInstance);
}

Macad::Occt::Extrema_ExtElC2d::Extrema_ExtElC2d(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Parab2d^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtElC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElC2d(*(::gp_Circ2d*)C1->NativeInstance, *(::gp_Parab2d*)C2->NativeInstance);
}

bool Macad::Occt::Extrema_ExtElC2d::IsDone()
{
    bool _result = ((::Extrema_ExtElC2d*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::Extrema_ExtElC2d::IsParallel()
{
    bool _result = ((::Extrema_ExtElC2d*)_NativeInstance)->IsParallel();
    return _result;
}

int Macad::Occt::Extrema_ExtElC2d::NbExt()
{
    int _result = ((::Extrema_ExtElC2d*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtElC2d::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtElC2d*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double Macad::Occt::Extrema_ExtElC2d::SquareDistance()
{
    double _result = ((::Extrema_ExtElC2d*)_NativeInstance)->SquareDistance(1);
    return _result;
}

void Macad::Occt::Extrema_ExtElC2d::Points(int N, Macad::Occt::Extrema_POnCurv2d^ P1, Macad::Occt::Extrema_POnCurv2d^ P2)
{
    ((::Extrema_ExtElC2d*)_NativeInstance)->Points(N, *(::Extrema_POnCurv2d*)P1->NativeInstance, *(::Extrema_POnCurv2d*)P2->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtCC2d
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtCC2d::Extrema_ExtCC2d()
    : Macad::Occt::BaseClass<::Extrema_ExtCC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC2d();
}

Macad::Occt::Extrema_ExtCC2d::Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double TolC1, double TolC2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC2d(*(::Adaptor2d_Curve2d*)C1->NativeInstance, *(::Adaptor2d_Curve2d*)C2->NativeInstance, TolC1, TolC2);
}

Macad::Occt::Extrema_ExtCC2d::Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double TolC1)
    : Macad::Occt::BaseClass<::Extrema_ExtCC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC2d(*(::Adaptor2d_Curve2d*)C1->NativeInstance, *(::Adaptor2d_Curve2d*)C2->NativeInstance, TolC1, 1.0E-10);
}

Macad::Occt::Extrema_ExtCC2d::Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC2d(*(::Adaptor2d_Curve2d*)C1->NativeInstance, *(::Adaptor2d_Curve2d*)C2->NativeInstance, 1.0E-10, 1.0E-10);
}

Macad::Occt::Extrema_ExtCC2d::Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U1, double U2, double V1, double V2, double TolC1, double TolC2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC2d(*(::Adaptor2d_Curve2d*)C1->NativeInstance, *(::Adaptor2d_Curve2d*)C2->NativeInstance, U1, U2, V1, V2, TolC1, TolC2);
}

Macad::Occt::Extrema_ExtCC2d::Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U1, double U2, double V1, double V2, double TolC1)
    : Macad::Occt::BaseClass<::Extrema_ExtCC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC2d(*(::Adaptor2d_Curve2d*)C1->NativeInstance, *(::Adaptor2d_Curve2d*)C2->NativeInstance, U1, U2, V1, V2, TolC1, 1.0E-10);
}

Macad::Occt::Extrema_ExtCC2d::Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U1, double U2, double V1, double V2)
    : Macad::Occt::BaseClass<::Extrema_ExtCC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCC2d(*(::Adaptor2d_Curve2d*)C1->NativeInstance, *(::Adaptor2d_Curve2d*)C2->NativeInstance, U1, U2, V1, V2, 1.0E-10, 1.0E-10);
}

void Macad::Occt::Extrema_ExtCC2d::Initialize(Macad::Occt::Adaptor2d_Curve2d^ C2, double V1, double V2, double TolC1, double TolC2)
{
    ((::Extrema_ExtCC2d*)_NativeInstance)->Initialize(*(::Adaptor2d_Curve2d*)C2->NativeInstance, V1, V2, TolC1, TolC2);
}

void Macad::Occt::Extrema_ExtCC2d::Initialize(Macad::Occt::Adaptor2d_Curve2d^ C2, double V1, double V2, double TolC1)
{
    ((::Extrema_ExtCC2d*)_NativeInstance)->Initialize(*(::Adaptor2d_Curve2d*)C2->NativeInstance, V1, V2, TolC1, 1.0E-10);
}

void Macad::Occt::Extrema_ExtCC2d::Initialize(Macad::Occt::Adaptor2d_Curve2d^ C2, double V1, double V2)
{
    ((::Extrema_ExtCC2d*)_NativeInstance)->Initialize(*(::Adaptor2d_Curve2d*)C2->NativeInstance, V1, V2, 1.0E-10, 1.0E-10);
}

void Macad::Occt::Extrema_ExtCC2d::Perform(Macad::Occt::Adaptor2d_Curve2d^ C1, double U1, double U2)
{
    ((::Extrema_ExtCC2d*)_NativeInstance)->Perform(*(::Adaptor2d_Curve2d*)C1->NativeInstance, U1, U2);
}

bool Macad::Occt::Extrema_ExtCC2d::IsDone()
{
    bool _result = ((::Extrema_ExtCC2d*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_ExtCC2d::NbExt()
{
    int _result = ((::Extrema_ExtCC2d*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::Extrema_ExtCC2d::IsParallel()
{
    bool _result = ((::Extrema_ExtCC2d*)_NativeInstance)->IsParallel();
    return _result;
}

double Macad::Occt::Extrema_ExtCC2d::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtCC2d*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double Macad::Occt::Extrema_ExtCC2d::SquareDistance()
{
    double _result = ((::Extrema_ExtCC2d*)_NativeInstance)->SquareDistance(1);
    return _result;
}

void Macad::Occt::Extrema_ExtCC2d::Points(int N, Macad::Occt::Extrema_POnCurv2d^ P1, Macad::Occt::Extrema_POnCurv2d^ P2)
{
    ((::Extrema_ExtCC2d*)_NativeInstance)->Points(N, *(::Extrema_POnCurv2d*)P1->NativeInstance, *(::Extrema_POnCurv2d*)P2->NativeInstance);
}

void Macad::Occt::Extrema_ExtCC2d::TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, Macad::Occt::Pnt2d% P11, Macad::Occt::Pnt2d% P12, Macad::Occt::Pnt2d% P21, Macad::Occt::Pnt2d% P22)
{
    pin_ptr<double> pp_dist11 = &dist11;
    pin_ptr<double> pp_distP12 = &distP12;
    pin_ptr<double> pp_distP21 = &distP21;
    pin_ptr<double> pp_distP22 = &distP22;
    pin_ptr<Macad::Occt::Pnt2d> pp_P11 = &P11;
    pin_ptr<Macad::Occt::Pnt2d> pp_P12 = &P12;
    pin_ptr<Macad::Occt::Pnt2d> pp_P21 = &P21;
    pin_ptr<Macad::Occt::Pnt2d> pp_P22 = &P22;
    ((::Extrema_ExtCC2d*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dist11, *(double*)pp_distP12, *(double*)pp_distP21, *(double*)pp_distP22, *(gp_Pnt2d*)pp_P11, *(gp_Pnt2d*)pp_P12, *(gp_Pnt2d*)pp_P21, *(gp_Pnt2d*)pp_P22);
}

void Macad::Occt::Extrema_ExtCC2d::SetSingleSolutionFlag(bool theSingleSolutionFlag)
{
    ((::Extrema_ExtCC2d*)_NativeInstance)->SetSingleSolutionFlag(theSingleSolutionFlag);
}

bool Macad::Occt::Extrema_ExtCC2d::GetSingleSolutionFlag()
{
    bool _result = ((::Extrema_ExtCC2d*)_NativeInstance)->GetSingleSolutionFlag();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtElCS
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS()
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS();
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::Pln S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_S = &S;
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Lin*)C->NativeInstance, *(gp_Pln*)pp_S);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Cylinder^ S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Lin*)C->NativeInstance, *(::gp_Cylinder*)S->NativeInstance);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Cone^ S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Lin*)C->NativeInstance, *(::gp_Cone*)S->NativeInstance);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Sphere^ S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Lin*)C->NativeInstance, *(::gp_Sphere*)S->NativeInstance);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Torus^ S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Lin*)C->NativeInstance, *(::gp_Torus*)S->NativeInstance);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_S = &S;
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Circ*)C->NativeInstance, *(gp_Pln*)pp_S);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Cylinder^ S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Circ*)C->NativeInstance, *(::gp_Cylinder*)S->NativeInstance);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Cone^ S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Circ*)C->NativeInstance, *(::gp_Cone*)S->NativeInstance);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Sphere^ S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Circ*)C->NativeInstance, *(::gp_Sphere*)S->NativeInstance);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Torus^ S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Circ*)C->NativeInstance, *(::gp_Torus*)S->NativeInstance);
}

Macad::Occt::Extrema_ExtElCS::Extrema_ExtElCS(Macad::Occt::gp_Hypr^ C, Macad::Occt::Pln S)
    : Macad::Occt::BaseClass<::Extrema_ExtElCS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_S = &S;
    _NativeInstance = new ::Extrema_ExtElCS(*(::gp_Hypr*)C->NativeInstance, *(gp_Pln*)pp_S);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::Pln S)
{
    pin_ptr<Macad::Occt::Pln> pp_S = &S;
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Lin*)C->NativeInstance, *(gp_Pln*)pp_S);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Cylinder^ S)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Lin*)C->NativeInstance, *(::gp_Cylinder*)S->NativeInstance);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Cone^ S)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Lin*)C->NativeInstance, *(::gp_Cone*)S->NativeInstance);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Sphere^ S)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Lin*)C->NativeInstance, *(::gp_Sphere*)S->NativeInstance);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Torus^ S)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Lin*)C->NativeInstance, *(::gp_Torus*)S->NativeInstance);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln S)
{
    pin_ptr<Macad::Occt::Pln> pp_S = &S;
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(gp_Pln*)pp_S);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Cylinder^ S)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(::gp_Cylinder*)S->NativeInstance);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Cone^ S)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(::gp_Cone*)S->NativeInstance);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Sphere^ S)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(::gp_Sphere*)S->NativeInstance);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Torus^ S)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(::gp_Torus*)S->NativeInstance);
}

void Macad::Occt::Extrema_ExtElCS::Perform(Macad::Occt::gp_Hypr^ C, Macad::Occt::Pln S)
{
    pin_ptr<Macad::Occt::Pln> pp_S = &S;
    ((::Extrema_ExtElCS*)_NativeInstance)->Perform(*(::gp_Hypr*)C->NativeInstance, *(gp_Pln*)pp_S);
}

bool Macad::Occt::Extrema_ExtElCS::IsDone()
{
    bool _result = ((::Extrema_ExtElCS*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::Extrema_ExtElCS::IsParallel()
{
    bool _result = ((::Extrema_ExtElCS*)_NativeInstance)->IsParallel();
    return _result;
}

int Macad::Occt::Extrema_ExtElCS::NbExt()
{
    int _result = ((::Extrema_ExtElCS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtElCS::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtElCS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double Macad::Occt::Extrema_ExtElCS::SquareDistance()
{
    double _result = ((::Extrema_ExtElCS*)_NativeInstance)->SquareDistance(1);
    return _result;
}

void Macad::Occt::Extrema_ExtElCS::Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnSurf^ P2)
{
    ((::Extrema_ExtElCS*)_NativeInstance)->Points(N, *(::Extrema_POnCurv*)P1->NativeInstance, *(::Extrema_POnSurf*)P2->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtCS
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtCS::Extrema_ExtCS()
    : Macad::Occt::BaseClass<::Extrema_ExtCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCS();
}

Macad::Occt::Extrema_ExtCS::Extrema_ExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double TolC, double TolS)
    : Macad::Occt::BaseClass<::Extrema_ExtCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCS(*(::Adaptor3d_Curve*)C->NativeInstance, *(::Adaptor3d_Surface*)S->NativeInstance, TolC, TolS);
}

Macad::Occt::Extrema_ExtCS::Extrema_ExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double UCinf, double UCsup, double Uinf, double Usup, double Vinf, double Vsup, double TolC, double TolS)
    : Macad::Occt::BaseClass<::Extrema_ExtCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtCS(*(::Adaptor3d_Curve*)C->NativeInstance, *(::Adaptor3d_Surface*)S->NativeInstance, UCinf, UCsup, Uinf, Usup, Vinf, Vsup, TolC, TolS);
}

void Macad::Occt::Extrema_ExtCS::Initialize(Macad::Occt::Adaptor3d_Surface^ S, double TolC, double TolS)
{
    ((::Extrema_ExtCS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S->NativeInstance, TolC, TolS);
}

void Macad::Occt::Extrema_ExtCS::Initialize(Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolC, double TolS)
{
    ((::Extrema_ExtCS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S->NativeInstance, Uinf, Usup, Vinf, Vsup, TolC, TolS);
}

void Macad::Occt::Extrema_ExtCS::Perform(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup)
{
    ((::Extrema_ExtCS*)_NativeInstance)->Perform(*(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup);
}

bool Macad::Occt::Extrema_ExtCS::IsDone()
{
    bool _result = ((::Extrema_ExtCS*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::Extrema_ExtCS::IsParallel()
{
    bool _result = ((::Extrema_ExtCS*)_NativeInstance)->IsParallel();
    return _result;
}

int Macad::Occt::Extrema_ExtCS::NbExt()
{
    int _result = ((::Extrema_ExtCS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtCS::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtCS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

void Macad::Occt::Extrema_ExtCS::Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnSurf^ P2)
{
    ((::Extrema_ExtCS*)_NativeInstance)->Points(N, *(::Extrema_POnCurv*)P1->NativeInstance, *(::Extrema_POnSurf*)P2->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtElSS
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtElSS::Extrema_ExtElSS()
    : Macad::Occt::BaseClass<::Extrema_ExtElSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElSS();
}

Macad::Occt::Extrema_ExtElSS::Extrema_ExtElSS(Macad::Occt::Pln S1, Macad::Occt::Pln S2)
    : Macad::Occt::BaseClass<::Extrema_ExtElSS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_S1 = &S1;
    pin_ptr<Macad::Occt::Pln> pp_S2 = &S2;
    _NativeInstance = new ::Extrema_ExtElSS(*(gp_Pln*)pp_S1, *(gp_Pln*)pp_S2);
}

Macad::Occt::Extrema_ExtElSS::Extrema_ExtElSS(Macad::Occt::Pln S1, Macad::Occt::gp_Sphere^ S2)
    : Macad::Occt::BaseClass<::Extrema_ExtElSS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_S1 = &S1;
    _NativeInstance = new ::Extrema_ExtElSS(*(gp_Pln*)pp_S1, *(::gp_Sphere*)S2->NativeInstance);
}

Macad::Occt::Extrema_ExtElSS::Extrema_ExtElSS(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Sphere^ S2)
    : Macad::Occt::BaseClass<::Extrema_ExtElSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElSS(*(::gp_Sphere*)S1->NativeInstance, *(::gp_Sphere*)S2->NativeInstance);
}

Macad::Occt::Extrema_ExtElSS::Extrema_ExtElSS(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Cylinder^ S2)
    : Macad::Occt::BaseClass<::Extrema_ExtElSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElSS(*(::gp_Sphere*)S1->NativeInstance, *(::gp_Cylinder*)S2->NativeInstance);
}

Macad::Occt::Extrema_ExtElSS::Extrema_ExtElSS(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Cone^ S2)
    : Macad::Occt::BaseClass<::Extrema_ExtElSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElSS(*(::gp_Sphere*)S1->NativeInstance, *(::gp_Cone*)S2->NativeInstance);
}

Macad::Occt::Extrema_ExtElSS::Extrema_ExtElSS(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Torus^ S2)
    : Macad::Occt::BaseClass<::Extrema_ExtElSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtElSS(*(::gp_Sphere*)S1->NativeInstance, *(::gp_Torus*)S2->NativeInstance);
}

void Macad::Occt::Extrema_ExtElSS::Perform(Macad::Occt::Pln S1, Macad::Occt::Pln S2)
{
    pin_ptr<Macad::Occt::Pln> pp_S1 = &S1;
    pin_ptr<Macad::Occt::Pln> pp_S2 = &S2;
    ((::Extrema_ExtElSS*)_NativeInstance)->Perform(*(gp_Pln*)pp_S1, *(gp_Pln*)pp_S2);
}

void Macad::Occt::Extrema_ExtElSS::Perform(Macad::Occt::Pln S1, Macad::Occt::gp_Sphere^ S2)
{
    pin_ptr<Macad::Occt::Pln> pp_S1 = &S1;
    ((::Extrema_ExtElSS*)_NativeInstance)->Perform(*(gp_Pln*)pp_S1, *(::gp_Sphere*)S2->NativeInstance);
}

void Macad::Occt::Extrema_ExtElSS::Perform(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Sphere^ S2)
{
    ((::Extrema_ExtElSS*)_NativeInstance)->Perform(*(::gp_Sphere*)S1->NativeInstance, *(::gp_Sphere*)S2->NativeInstance);
}

void Macad::Occt::Extrema_ExtElSS::Perform(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Cylinder^ S2)
{
    ((::Extrema_ExtElSS*)_NativeInstance)->Perform(*(::gp_Sphere*)S1->NativeInstance, *(::gp_Cylinder*)S2->NativeInstance);
}

void Macad::Occt::Extrema_ExtElSS::Perform(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Cone^ S2)
{
    ((::Extrema_ExtElSS*)_NativeInstance)->Perform(*(::gp_Sphere*)S1->NativeInstance, *(::gp_Cone*)S2->NativeInstance);
}

void Macad::Occt::Extrema_ExtElSS::Perform(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Torus^ S2)
{
    ((::Extrema_ExtElSS*)_NativeInstance)->Perform(*(::gp_Sphere*)S1->NativeInstance, *(::gp_Torus*)S2->NativeInstance);
}

bool Macad::Occt::Extrema_ExtElSS::IsDone()
{
    bool _result = ((::Extrema_ExtElSS*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::Extrema_ExtElSS::IsParallel()
{
    bool _result = ((::Extrema_ExtElSS*)_NativeInstance)->IsParallel();
    return _result;
}

int Macad::Occt::Extrema_ExtElSS::NbExt()
{
    int _result = ((::Extrema_ExtElSS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtElSS::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtElSS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double Macad::Occt::Extrema_ExtElSS::SquareDistance()
{
    double _result = ((::Extrema_ExtElSS*)_NativeInstance)->SquareDistance(1);
    return _result;
}

void Macad::Occt::Extrema_ExtElSS::Points(int N, Macad::Occt::Extrema_POnSurf^ P1, Macad::Occt::Extrema_POnSurf^ P2)
{
    ((::Extrema_ExtElSS*)_NativeInstance)->Points(N, *(::Extrema_POnSurf*)P1->NativeInstance, *(::Extrema_POnSurf*)P2->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPElS
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPElS::Extrema_ExtPElS()
    : Macad::Occt::BaseClass<::Extrema_ExtPElS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtPElS();
}

Macad::Occt::Extrema_ExtPElS::Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::gp_Cylinder^ S, double Tol)
    : Macad::Occt::BaseClass<::Extrema_ExtPElS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElS(*(gp_Pnt*)pp_P, *(::gp_Cylinder*)S->NativeInstance, Tol);
}

Macad::Occt::Extrema_ExtPElS::Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::Pln S, double Tol)
    : Macad::Occt::BaseClass<::Extrema_ExtPElS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Pln> pp_S = &S;
    _NativeInstance = new ::Extrema_ExtPElS(*(gp_Pnt*)pp_P, *(gp_Pln*)pp_S, Tol);
}

Macad::Occt::Extrema_ExtPElS::Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::gp_Cone^ S, double Tol)
    : Macad::Occt::BaseClass<::Extrema_ExtPElS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElS(*(gp_Pnt*)pp_P, *(::gp_Cone*)S->NativeInstance, Tol);
}

Macad::Occt::Extrema_ExtPElS::Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::gp_Torus^ S, double Tol)
    : Macad::Occt::BaseClass<::Extrema_ExtPElS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElS(*(gp_Pnt*)pp_P, *(::gp_Torus*)S->NativeInstance, Tol);
}

Macad::Occt::Extrema_ExtPElS::Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::gp_Sphere^ S, double Tol)
    : Macad::Occt::BaseClass<::Extrema_ExtPElS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPElS(*(gp_Pnt*)pp_P, *(::gp_Sphere*)S->NativeInstance, Tol);
}

void Macad::Occt::Extrema_ExtPElS::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Cylinder^ S, double Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Cylinder*)S->NativeInstance, Tol);
}

void Macad::Occt::Extrema_ExtPElS::Perform(Macad::Occt::Pnt P, Macad::Occt::Pln S, double Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Pln> pp_S = &S;
    ((::Extrema_ExtPElS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(gp_Pln*)pp_S, Tol);
}

void Macad::Occt::Extrema_ExtPElS::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Cone^ S, double Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Cone*)S->NativeInstance, Tol);
}

void Macad::Occt::Extrema_ExtPElS::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Torus^ S, double Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Torus*)S->NativeInstance, Tol);
}

void Macad::Occt::Extrema_ExtPElS::Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Sphere^ S, double Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPElS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, *(::gp_Sphere*)S->NativeInstance, Tol);
}

bool Macad::Occt::Extrema_ExtPElS::IsDone()
{
    bool _result = ((::Extrema_ExtPElS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_ExtPElS::NbExt()
{
    int _result = ((::Extrema_ExtPElS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtPElS::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtPElS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_ExtPElS::Point(int N)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_ExtPElS*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_GenExtPS
//---------------------------------------------------------------------

Macad::Occt::Extrema_GenExtPS::Extrema_GenExtPS()
    : Macad::Occt::BaseClass<::Extrema_GenExtPS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenExtPS();
}

Macad::Occt::Extrema_GenExtPS::Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A)
    : Macad::Occt::BaseClass<::Extrema_GenExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_GenExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, TolU, TolV, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A);
}

Macad::Occt::Extrema_GenExtPS::Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F)
    : Macad::Occt::BaseClass<::Extrema_GenExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_GenExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, TolU, TolV, (::Extrema_ExtFlag)F, Extrema_ExtAlgo_Grad);
}

Macad::Occt::Extrema_GenExtPS::Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double TolU, double TolV)
    : Macad::Occt::BaseClass<::Extrema_GenExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_GenExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, TolU, TolV, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

Macad::Occt::Extrema_GenExtPS::Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A)
    : Macad::Occt::BaseClass<::Extrema_GenExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_GenExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, Umin, Usup, Vmin, Vsup, TolU, TolV, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A);
}

Macad::Occt::Extrema_GenExtPS::Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F)
    : Macad::Occt::BaseClass<::Extrema_GenExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_GenExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, Umin, Usup, Vmin, Vsup, TolU, TolV, (::Extrema_ExtFlag)F, Extrema_ExtAlgo_Grad);
}

Macad::Occt::Extrema_GenExtPS::Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV)
    : Macad::Occt::BaseClass<::Extrema_GenExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_GenExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, Umin, Usup, Vmin, Vsup, TolU, TolV, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::Extrema_GenExtPS::Initialize(Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double TolU, double TolV)
{
    ((::Extrema_GenExtPS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, TolU, TolV);
}

void Macad::Occt::Extrema_GenExtPS::Initialize(Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV)
{
    ((::Extrema_GenExtPS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, Umin, Usup, Vmin, Vsup, TolU, TolV);
}

void Macad::Occt::Extrema_GenExtPS::Perform(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_GenExtPS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

void Macad::Occt::Extrema_GenExtPS::SetFlag(Macad::Occt::Extrema_ExtFlag F)
{
    ((::Extrema_GenExtPS*)_NativeInstance)->SetFlag((::Extrema_ExtFlag)F);
}

void Macad::Occt::Extrema_GenExtPS::SetAlgo(Macad::Occt::Extrema_ExtAlgo A)
{
    ((::Extrema_GenExtPS*)_NativeInstance)->SetAlgo((::Extrema_ExtAlgo)A);
}

bool Macad::Occt::Extrema_GenExtPS::IsDone()
{
    bool _result = ((::Extrema_GenExtPS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_GenExtPS::NbExt()
{
    int _result = ((::Extrema_GenExtPS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_GenExtPS::SquareDistance(int N)
{
    double _result = ((::Extrema_GenExtPS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_GenExtPS::Point(int N)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_GenExtPS*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPExtS
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPExtS::Extrema_ExtPExtS()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_ExtPExtS();
}

Macad::Occt::Extrema_ExtPExtS::Extrema_ExtPExtS(Macad::Occt::Pnt P, Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    NativeInstance = new ::Extrema_ExtPExtS(*(gp_Pnt*)pp_P, Handle(::GeomAdaptor_SurfaceOfLinearExtrusion)(S->NativeInstance), Umin, Usup, Vmin, Vsup, TolU, TolV);
}

Macad::Occt::Extrema_ExtPExtS::Extrema_ExtPExtS(Macad::Occt::Pnt P, Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S, double TolU, double TolV)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    NativeInstance = new ::Extrema_ExtPExtS(*(gp_Pnt*)pp_P, Handle(::GeomAdaptor_SurfaceOfLinearExtrusion)(S->NativeInstance), TolU, TolV);
}

void Macad::Occt::Extrema_ExtPExtS::Initialize(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV)
{
    ((::Extrema_ExtPExtS*)_NativeInstance)->Initialize(Handle(::GeomAdaptor_SurfaceOfLinearExtrusion)(S->NativeInstance), Uinf, Usup, Vinf, Vsup, TolU, TolV);
}

void Macad::Occt::Extrema_ExtPExtS::Perform(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPExtS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::Extrema_ExtPExtS::IsDone()
{
    bool _result = ((::Extrema_ExtPExtS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_ExtPExtS::NbExt()
{
    int _result = ((::Extrema_ExtPExtS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtPExtS::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtPExtS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_ExtPExtS::Point(int N)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_ExtPExtS*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_ExtPExtS^ Macad::Occt::Extrema_ExtPExtS::CreateDowncasted(::Extrema_ExtPExtS* instance)
{
    return gcnew Macad::Occt::Extrema_ExtPExtS( instance );
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPRevS
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPRevS::Extrema_ExtPRevS()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Extrema_ExtPRevS();
}

Macad::Occt::Extrema_ExtPRevS::Extrema_ExtPRevS(Macad::Occt::Pnt P, Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    NativeInstance = new ::Extrema_ExtPRevS(*(gp_Pnt*)pp_P, Handle(::GeomAdaptor_SurfaceOfRevolution)(S->NativeInstance), Umin, Usup, Vmin, Vsup, TolU, TolV);
}

Macad::Occt::Extrema_ExtPRevS::Extrema_ExtPRevS(Macad::Occt::Pnt P, Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S, double TolU, double TolV)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    NativeInstance = new ::Extrema_ExtPRevS(*(gp_Pnt*)pp_P, Handle(::GeomAdaptor_SurfaceOfRevolution)(S->NativeInstance), TolU, TolV);
}

void Macad::Occt::Extrema_ExtPRevS::Initialize(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV)
{
    ((::Extrema_ExtPRevS*)_NativeInstance)->Initialize(Handle(::GeomAdaptor_SurfaceOfRevolution)(S->NativeInstance), Umin, Usup, Vmin, Vsup, TolU, TolV);
}

void Macad::Occt::Extrema_ExtPRevS::Perform(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPRevS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::Extrema_ExtPRevS::IsDone()
{
    bool _result = ((::Extrema_ExtPRevS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_ExtPRevS::NbExt()
{
    int _result = ((::Extrema_ExtPRevS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtPRevS::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtPRevS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_ExtPRevS::Point(int N)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_ExtPRevS*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_ExtPRevS^ Macad::Occt::Extrema_ExtPRevS::CreateDowncasted(::Extrema_ExtPRevS* instance)
{
    return gcnew Macad::Occt::Extrema_ExtPRevS( instance );
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPS
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPS::Extrema_ExtPS()
    : Macad::Occt::BaseClass<::Extrema_ExtPS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtPS();
}

Macad::Occt::Extrema_ExtPS::Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A)
    : Macad::Occt::BaseClass<::Extrema_ExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, TolU, TolV, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A);
}

Macad::Occt::Extrema_ExtPS::Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F)
    : Macad::Occt::BaseClass<::Extrema_ExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, TolU, TolV, (::Extrema_ExtFlag)F, Extrema_ExtAlgo_Grad);
}

Macad::Occt::Extrema_ExtPS::Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double TolU, double TolV)
    : Macad::Occt::BaseClass<::Extrema_ExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, TolU, TolV, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

Macad::Occt::Extrema_ExtPS::Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A)
    : Macad::Occt::BaseClass<::Extrema_ExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, Uinf, Usup, Vinf, Vsup, TolU, TolV, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A);
}

Macad::Occt::Extrema_ExtPS::Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F)
    : Macad::Occt::BaseClass<::Extrema_ExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, Uinf, Usup, Vinf, Vsup, TolU, TolV, (::Extrema_ExtFlag)F, Extrema_ExtAlgo_Grad);
}

Macad::Occt::Extrema_ExtPS::Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV)
    : Macad::Occt::BaseClass<::Extrema_ExtPS>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPS(*(gp_Pnt*)pp_P, *(::Adaptor3d_Surface*)S->NativeInstance, Uinf, Usup, Vinf, Vsup, TolU, TolV, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::Extrema_ExtPS::Initialize(Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV)
{
    ((::Extrema_ExtPS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S->NativeInstance, Uinf, Usup, Vinf, Vsup, TolU, TolV);
}

void Macad::Occt::Extrema_ExtPS::Perform(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::Extrema_ExtPS::IsDone()
{
    bool _result = ((::Extrema_ExtPS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_ExtPS::NbExt()
{
    int _result = ((::Extrema_ExtPS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtPS::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtPS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_ExtPS::Point(int N)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_ExtPS*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

void Macad::Occt::Extrema_ExtPS::TrimmedSquareDistances(double% dUfVf, double% dUfVl, double% dUlVf, double% dUlVl, Macad::Occt::Pnt% PUfVf, Macad::Occt::Pnt% PUfVl, Macad::Occt::Pnt% PUlVf, Macad::Occt::Pnt% PUlVl)
{
    pin_ptr<double> pp_dUfVf = &dUfVf;
    pin_ptr<double> pp_dUfVl = &dUfVl;
    pin_ptr<double> pp_dUlVf = &dUlVf;
    pin_ptr<double> pp_dUlVl = &dUlVl;
    pin_ptr<Macad::Occt::Pnt> pp_PUfVf = &PUfVf;
    pin_ptr<Macad::Occt::Pnt> pp_PUfVl = &PUfVl;
    pin_ptr<Macad::Occt::Pnt> pp_PUlVf = &PUlVf;
    pin_ptr<Macad::Occt::Pnt> pp_PUlVl = &PUlVl;
    ((::Extrema_ExtPS*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dUfVf, *(double*)pp_dUfVl, *(double*)pp_dUlVf, *(double*)pp_dUlVl, *(gp_Pnt*)pp_PUfVf, *(gp_Pnt*)pp_PUfVl, *(gp_Pnt*)pp_PUlVf, *(gp_Pnt*)pp_PUlVl);
}

void Macad::Occt::Extrema_ExtPS::SetFlag(Macad::Occt::Extrema_ExtFlag F)
{
    ((::Extrema_ExtPS*)_NativeInstance)->SetFlag((::Extrema_ExtFlag)F);
}

void Macad::Occt::Extrema_ExtPS::SetAlgo(Macad::Occt::Extrema_ExtAlgo A)
{
    ((::Extrema_ExtPS*)_NativeInstance)->SetAlgo((::Extrema_ExtAlgo)A);
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtSS
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtSS::Extrema_ExtSS()
    : Macad::Occt::BaseClass<::Extrema_ExtSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtSS();
}

Macad::Occt::Extrema_ExtSS::Extrema_ExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, double TolS1, double TolS2)
    : Macad::Occt::BaseClass<::Extrema_ExtSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtSS(*(::Adaptor3d_Surface*)S1->NativeInstance, *(::Adaptor3d_Surface*)S2->NativeInstance, TolS1, TolS2);
}

Macad::Occt::Extrema_ExtSS::Extrema_ExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, double Uinf1, double Usup1, double Vinf1, double Vsup1, double Uinf2, double Usup2, double Vinf2, double Vsup2, double TolS1, double TolS2)
    : Macad::Occt::BaseClass<::Extrema_ExtSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtSS(*(::Adaptor3d_Surface*)S1->NativeInstance, *(::Adaptor3d_Surface*)S2->NativeInstance, Uinf1, Usup1, Vinf1, Vsup1, Uinf2, Usup2, Vinf2, Vsup2, TolS1, TolS2);
}

void Macad::Occt::Extrema_ExtSS::Initialize(Macad::Occt::Adaptor3d_Surface^ S2, double Uinf2, double Usup2, double Vinf2, double Vsup2, double TolS1)
{
    ((::Extrema_ExtSS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S2->NativeInstance, Uinf2, Usup2, Vinf2, Vsup2, TolS1);
}

void Macad::Occt::Extrema_ExtSS::Perform(Macad::Occt::Adaptor3d_Surface^ S1, double Uinf1, double Usup1, double Vinf1, double Vsup1, double TolS1)
{
    ((::Extrema_ExtSS*)_NativeInstance)->Perform(*(::Adaptor3d_Surface*)S1->NativeInstance, Uinf1, Usup1, Vinf1, Vsup1, TolS1);
}

bool Macad::Occt::Extrema_ExtSS::IsDone()
{
    bool _result = ((::Extrema_ExtSS*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::Extrema_ExtSS::IsParallel()
{
    bool _result = ((::Extrema_ExtSS*)_NativeInstance)->IsParallel();
    return _result;
}

int Macad::Occt::Extrema_ExtSS::NbExt()
{
    int _result = ((::Extrema_ExtSS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_ExtSS::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtSS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

void Macad::Occt::Extrema_ExtSS::Points(int N, Macad::Occt::Extrema_POnSurf^ P1, Macad::Occt::Extrema_POnSurf^ P2)
{
    ((::Extrema_ExtSS*)_NativeInstance)->Points(N, *(::Extrema_POnSurf*)P1->NativeInstance, *(::Extrema_POnSurf*)P2->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Extrema_GenExtCS
//---------------------------------------------------------------------

Macad::Occt::Extrema_GenExtCS::Extrema_GenExtCS()
    : Macad::Occt::BaseClass<::Extrema_GenExtCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenExtCS();
}

Macad::Occt::Extrema_GenExtCS::Extrema_GenExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, int NbT, int NbU, int NbV, double Tol1, double Tol2)
    : Macad::Occt::BaseClass<::Extrema_GenExtCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenExtCS(*(::Adaptor3d_Curve*)C->NativeInstance, *(::Adaptor3d_Surface*)S->NativeInstance, NbT, NbU, NbV, Tol1, Tol2);
}

Macad::Occt::Extrema_GenExtCS::Extrema_GenExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, int NbT, int NbU, int NbV, double tmin, double tsup, double Umin, double Usup, double Vmin, double Vsup, double Tol1, double Tol2)
    : Macad::Occt::BaseClass<::Extrema_GenExtCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenExtCS(*(::Adaptor3d_Curve*)C->NativeInstance, *(::Adaptor3d_Surface*)S->NativeInstance, NbT, NbU, NbV, tmin, tsup, Umin, Usup, Vmin, Vsup, Tol1, Tol2);
}

void Macad::Occt::Extrema_GenExtCS::Initialize(Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Tol2)
{
    ((::Extrema_GenExtCS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, Tol2);
}

void Macad::Occt::Extrema_GenExtCS::Initialize(Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double Tol2)
{
    ((::Extrema_GenExtCS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S->NativeInstance, NbU, NbV, Umin, Usup, Vmin, Vsup, Tol2);
}

void Macad::Occt::Extrema_GenExtCS::Perform(Macad::Occt::Adaptor3d_Curve^ C, int NbT, double Tol1)
{
    ((::Extrema_GenExtCS*)_NativeInstance)->Perform(*(::Adaptor3d_Curve*)C->NativeInstance, NbT, Tol1);
}

void Macad::Occt::Extrema_GenExtCS::Perform(Macad::Occt::Adaptor3d_Curve^ C, int NbT, double tmin, double tsup, double Tol1)
{
    ((::Extrema_GenExtCS*)_NativeInstance)->Perform(*(::Adaptor3d_Curve*)C->NativeInstance, NbT, tmin, tsup, Tol1);
}

bool Macad::Occt::Extrema_GenExtCS::IsDone()
{
    bool _result = ((::Extrema_GenExtCS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_GenExtCS::NbExt()
{
    int _result = ((::Extrema_GenExtCS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_GenExtCS::SquareDistance(int N)
{
    double _result = ((::Extrema_GenExtCS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_GenExtCS::PointOnCurve(int N)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_GenExtCS*)_NativeInstance)->PointOnCurve(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_GenExtCS::PointOnSurface(int N)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_GenExtCS*)_NativeInstance)->PointOnSurface(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_GenExtSS
//---------------------------------------------------------------------

Macad::Occt::Extrema_GenExtSS::Extrema_GenExtSS()
    : Macad::Occt::BaseClass<::Extrema_GenExtSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenExtSS();
}

Macad::Occt::Extrema_GenExtSS::Extrema_GenExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, int NbU, int NbV, double Tol1, double Tol2)
    : Macad::Occt::BaseClass<::Extrema_GenExtSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenExtSS(*(::Adaptor3d_Surface*)S1->NativeInstance, *(::Adaptor3d_Surface*)S2->NativeInstance, NbU, NbV, Tol1, Tol2);
}

Macad::Occt::Extrema_GenExtSS::Extrema_GenExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, int NbU, int NbV, double U1min, double U1sup, double V1min, double V1sup, double U2min, double U2sup, double V2min, double V2sup, double Tol1, double Tol2)
    : Macad::Occt::BaseClass<::Extrema_GenExtSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenExtSS(*(::Adaptor3d_Surface*)S1->NativeInstance, *(::Adaptor3d_Surface*)S2->NativeInstance, NbU, NbV, U1min, U1sup, V1min, V1sup, U2min, U2sup, V2min, V2sup, Tol1, Tol2);
}

void Macad::Occt::Extrema_GenExtSS::Initialize(Macad::Occt::Adaptor3d_Surface^ S2, int NbU, int NbV, double Tol2)
{
    ((::Extrema_GenExtSS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S2->NativeInstance, NbU, NbV, Tol2);
}

void Macad::Occt::Extrema_GenExtSS::Initialize(Macad::Occt::Adaptor3d_Surface^ S2, int NbU, int NbV, double U2min, double U2sup, double V2min, double V2sup, double Tol2)
{
    ((::Extrema_GenExtSS*)_NativeInstance)->Initialize(*(::Adaptor3d_Surface*)S2->NativeInstance, NbU, NbV, U2min, U2sup, V2min, V2sup, Tol2);
}

void Macad::Occt::Extrema_GenExtSS::Perform(Macad::Occt::Adaptor3d_Surface^ S1, double Tol1)
{
    ((::Extrema_GenExtSS*)_NativeInstance)->Perform(*(::Adaptor3d_Surface*)S1->NativeInstance, Tol1);
}

void Macad::Occt::Extrema_GenExtSS::Perform(Macad::Occt::Adaptor3d_Surface^ S1, double U1min, double U1sup, double V1min, double V1sup, double Tol1)
{
    ((::Extrema_GenExtSS*)_NativeInstance)->Perform(*(::Adaptor3d_Surface*)S1->NativeInstance, U1min, U1sup, V1min, V1sup, Tol1);
}

bool Macad::Occt::Extrema_GenExtSS::IsDone()
{
    bool _result = ((::Extrema_GenExtSS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::Extrema_GenExtSS::NbExt()
{
    int _result = ((::Extrema_GenExtSS*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::Extrema_GenExtSS::SquareDistance(int N)
{
    double _result = ((::Extrema_GenExtSS*)_NativeInstance)->SquareDistance(N);
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_GenExtSS::PointOnS1(int N)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_GenExtSS*)_NativeInstance)->PointOnS1(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_GenExtSS::PointOnS2(int N)
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_GenExtSS*)_NativeInstance)->PointOnS2(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_GenLocateExtCS
//---------------------------------------------------------------------

Macad::Occt::Extrema_GenLocateExtCS::Extrema_GenLocateExtCS()
    : Macad::Occt::BaseClass<::Extrema_GenLocateExtCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenLocateExtCS();
}

Macad::Occt::Extrema_GenLocateExtCS::Extrema_GenLocateExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double T, double U, double V, double Tol1, double Tol2)
    : Macad::Occt::BaseClass<::Extrema_GenLocateExtCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenLocateExtCS(*(::Adaptor3d_Curve*)C->NativeInstance, *(::Adaptor3d_Surface*)S->NativeInstance, T, U, V, Tol1, Tol2);
}

void Macad::Occt::Extrema_GenLocateExtCS::Perform(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double T, double U, double V, double Tol1, double Tol2)
{
    ((::Extrema_GenLocateExtCS*)_NativeInstance)->Perform(*(::Adaptor3d_Curve*)C->NativeInstance, *(::Adaptor3d_Surface*)S->NativeInstance, T, U, V, Tol1, Tol2);
}

bool Macad::Occt::Extrema_GenLocateExtCS::IsDone()
{
    bool _result = ((::Extrema_GenLocateExtCS*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_GenLocateExtCS::SquareDistance()
{
    double _result = ((::Extrema_GenLocateExtCS*)_NativeInstance)->SquareDistance();
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_GenLocateExtCS::PointOnCurve()
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_GenLocateExtCS*)_NativeInstance)->PointOnCurve();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_GenLocateExtCS::PointOnSurface()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_GenLocateExtCS*)_NativeInstance)->PointOnSurface();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_GenLocateExtPS
//---------------------------------------------------------------------

Macad::Occt::Extrema_GenLocateExtPS::Extrema_GenLocateExtPS(Macad::Occt::Adaptor3d_Surface^ theS, double theTolU, double theTolV)
    : Macad::Occt::BaseClass<::Extrema_GenLocateExtPS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenLocateExtPS(*(::Adaptor3d_Surface*)theS->NativeInstance, theTolU, theTolV);
}

Macad::Occt::Extrema_GenLocateExtPS::Extrema_GenLocateExtPS(Macad::Occt::Adaptor3d_Surface^ theS, double theTolU)
    : Macad::Occt::BaseClass<::Extrema_GenLocateExtPS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenLocateExtPS(*(::Adaptor3d_Surface*)theS->NativeInstance, theTolU, ::Precision::PConfusion());
}

Macad::Occt::Extrema_GenLocateExtPS::Extrema_GenLocateExtPS(Macad::Occt::Adaptor3d_Surface^ theS)
    : Macad::Occt::BaseClass<::Extrema_GenLocateExtPS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenLocateExtPS(*(::Adaptor3d_Surface*)theS->NativeInstance, ::Precision::PConfusion(), ::Precision::PConfusion());
}

void Macad::Occt::Extrema_GenLocateExtPS::Perform(Macad::Occt::Pnt theP, double theU0, double theV0, bool isDistanceCriteria)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::Extrema_GenLocateExtPS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_theP, theU0, theV0, isDistanceCriteria);
}

void Macad::Occt::Extrema_GenLocateExtPS::Perform(Macad::Occt::Pnt theP, double theU0, double theV0)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::Extrema_GenLocateExtPS*)_NativeInstance)->Perform(*(gp_Pnt*)pp_theP, theU0, theV0, false);
}

bool Macad::Occt::Extrema_GenLocateExtPS::IsDone()
{
    bool _result = ((::Extrema_GenLocateExtPS*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_GenLocateExtPS::SquareDistance()
{
    double _result = ((::Extrema_GenLocateExtPS*)_NativeInstance)->SquareDistance();
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_GenLocateExtPS::Point()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_GenLocateExtPS*)_NativeInstance)->Point();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

bool Macad::Occt::Extrema_GenLocateExtPS::IsMinDist(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Surface^ theS, double theU0, double theV0)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    bool _result = ::Extrema_GenLocateExtPS::IsMinDist(*(gp_Pnt*)pp_theP, *(::Adaptor3d_Surface*)theS->NativeInstance, theU0, theV0);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Extrema_GenLocateExtSS
//---------------------------------------------------------------------

Macad::Occt::Extrema_GenLocateExtSS::Extrema_GenLocateExtSS()
    : Macad::Occt::BaseClass<::Extrema_GenLocateExtSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenLocateExtSS();
}

Macad::Occt::Extrema_GenLocateExtSS::Extrema_GenLocateExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, double U1, double V1, double U2, double V2, double Tol1, double Tol2)
    : Macad::Occt::BaseClass<::Extrema_GenLocateExtSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_GenLocateExtSS(*(::Adaptor3d_Surface*)S1->NativeInstance, *(::Adaptor3d_Surface*)S2->NativeInstance, U1, V1, U2, V2, Tol1, Tol2);
}

void Macad::Occt::Extrema_GenLocateExtSS::Perform(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, double U1, double V1, double U2, double V2, double Tol1, double Tol2)
{
    ((::Extrema_GenLocateExtSS*)_NativeInstance)->Perform(*(::Adaptor3d_Surface*)S1->NativeInstance, *(::Adaptor3d_Surface*)S2->NativeInstance, U1, V1, U2, V2, Tol1, Tol2);
}

bool Macad::Occt::Extrema_GenLocateExtSS::IsDone()
{
    bool _result = ((::Extrema_GenLocateExtSS*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_GenLocateExtSS::SquareDistance()
{
    double _result = ((::Extrema_GenLocateExtSS*)_NativeInstance)->SquareDistance();
    return _result;
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_GenLocateExtSS::PointOnS1()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_GenLocateExtSS*)_NativeInstance)->PointOnS1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}

Macad::Occt::Extrema_POnSurf^ Macad::Occt::Extrema_GenLocateExtSS::PointOnS2()
{
    ::Extrema_POnSurf* _result = new ::Extrema_POnSurf();
    *_result = (::Extrema_POnSurf)((::Extrema_GenLocateExtSS*)_NativeInstance)->PointOnS2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnSurf(_result);
}



//---------------------------------------------------------------------
//  Class  Extrema_LocateExtCC
//---------------------------------------------------------------------

Macad::Occt::Extrema_LocateExtCC::Extrema_LocateExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U0, double V0)
    : Macad::Occt::BaseClass<::Extrema_LocateExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_LocateExtCC(*(::Adaptor3d_Curve*)C1->NativeInstance, *(::Adaptor3d_Curve*)C2->NativeInstance, U0, V0);
}

bool Macad::Occt::Extrema_LocateExtCC::IsDone()
{
    bool _result = ((::Extrema_LocateExtCC*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_LocateExtCC::SquareDistance()
{
    double _result = ((::Extrema_LocateExtCC*)_NativeInstance)->SquareDistance();
    return _result;
}

void Macad::Occt::Extrema_LocateExtCC::Point(Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnCurv^ P2)
{
    ((::Extrema_LocateExtCC*)_NativeInstance)->Point(*(::Extrema_POnCurv*)P1->NativeInstance, *(::Extrema_POnCurv*)P2->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Extrema_LocateExtCC2d
//---------------------------------------------------------------------

Macad::Occt::Extrema_LocateExtCC2d::Extrema_LocateExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U0, double V0)
    : Macad::Occt::BaseClass<::Extrema_LocateExtCC2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_LocateExtCC2d(*(::Adaptor2d_Curve2d*)C1->NativeInstance, *(::Adaptor2d_Curve2d*)C2->NativeInstance, U0, V0);
}

bool Macad::Occt::Extrema_LocateExtCC2d::IsDone()
{
    bool _result = ((::Extrema_LocateExtCC2d*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_LocateExtCC2d::SquareDistance()
{
    double _result = ((::Extrema_LocateExtCC2d*)_NativeInstance)->SquareDistance();
    return _result;
}

void Macad::Occt::Extrema_LocateExtCC2d::Point(Macad::Occt::Extrema_POnCurv2d^ P1, Macad::Occt::Extrema_POnCurv2d^ P2)
{
    ((::Extrema_LocateExtCC2d*)_NativeInstance)->Point(*(::Extrema_POnCurv2d*)P1->NativeInstance, *(::Extrema_POnCurv2d*)P2->NativeInstance);
}


