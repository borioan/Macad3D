// Generated wrapper code for package Bnd

#include "OcctPCH.h"
#include "Bnd.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "TColStd.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox
//---------------------------------------------------------------------

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox()
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox();
}

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox(theLower, theUpper);
}

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox(*(::Bnd_Box*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox(*(::Bnd_Box*)theBegin->NativeInstance, theLower, theUpper, true);
}

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox(long long unsigned int theSize)
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox(theSize);
}

void Macad::Occt::Bnd_Array1OfBox::Init(Macad::Occt::Bnd_Box^ theValue)
{
    ((::Bnd_Array1OfBox*)_NativeInstance)->Init(*(::Bnd_Box*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Bnd_Array1OfBox::Size()
{
    long long unsigned int _result = ((::Bnd_Array1OfBox*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Bnd_Array1OfBox::Length()
{
    int _result = ((::Bnd_Array1OfBox*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Bnd_Array1OfBox::IsEmpty()
{
    bool _result = ((::Bnd_Array1OfBox*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Bnd_Array1OfBox::Lower()
{
    int _result = ((::Bnd_Array1OfBox*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Bnd_Array1OfBox::Upper()
{
    int _result = ((::Bnd_Array1OfBox*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Bnd_Array1OfBox^ Macad::Occt::Bnd_Array1OfBox::Assign(Macad::Occt::Bnd_Array1OfBox^ theOther)
{
    ::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
    *_result = ((::Bnd_Array1OfBox*)_NativeInstance)->Assign(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox(_result);
}

Macad::Occt::Bnd_Array1OfBox^ Macad::Occt::Bnd_Array1OfBox::CopyValues(Macad::Occt::Bnd_Array1OfBox^ theOther)
{
    ::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
    *_result = ((::Bnd_Array1OfBox*)_NativeInstance)->CopyValues(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox(_result);
}

Macad::Occt::Bnd_Array1OfBox^ Macad::Occt::Bnd_Array1OfBox::Move(Macad::Occt::Bnd_Array1OfBox^ theOther)
{
    ::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
    *_result = ((::Bnd_Array1OfBox*)_NativeInstance)->Move(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::First()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::ChangeFirst()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::Last()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::ChangeLast()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::Value(int theIndex)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::ChangeValue(int theIndex)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::At(long long unsigned int theIndex)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::ChangeAt(long long unsigned int theIndex)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::Bnd_Array1OfBox::SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem)
{
    ((::Bnd_Array1OfBox*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfBox::UpdateLowerBound(int theLower)
{
    ((::Bnd_Array1OfBox*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Bnd_Array1OfBox::UpdateUpperBound(int theUpper)
{
    ((::Bnd_Array1OfBox*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Bnd_Array1OfBox::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Bnd_Array1OfBox*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Bnd_Array1OfBox::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Bnd_Array1OfBox*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Bnd_Array1OfBox::IsDeletable()
{
    bool _result = ((::Bnd_Array1OfBox*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box^>^ Macad::Occt::Bnd_Array1OfBox::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Box^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Bnd_Array1OfBox::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Box^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox::Iterator
//---------------------------------------------------------------------

void Macad::Occt::Bnd_Array1OfBox::Iterator::Init(Macad::Occt::Bnd_Array1OfBox^ theList)
{
    ((::Bnd_Array1OfBox::Iterator*)_NativeInstance)->Init(*(::Bnd_Array1OfBox*)theList->NativeInstance);
}

bool Macad::Occt::Bnd_Array1OfBox::Iterator::More()
{
    bool _result = ((::Bnd_Array1OfBox::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Bnd_Array1OfBox::Iterator::Initialize(Macad::Occt::Bnd_Array1OfBox^ theList)
{
    ((::Bnd_Array1OfBox::Iterator*)_NativeInstance)->Initialize(*(::Bnd_Array1OfBox*)theList->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfBox::Iterator::Next()
{
    ((::Bnd_Array1OfBox::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::Iterator::Value()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_Array1OfBox::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::Iterator::ChangeValue()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_Array1OfBox::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox2d
//---------------------------------------------------------------------

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d()
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox2d();
}

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox2d(theLower, theUpper);
}

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox2d(*(::Bnd_Box2d*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox2d(*(::Bnd_Box2d*)theBegin->NativeInstance, theLower, theUpper, true);
}

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(long long unsigned int theSize)
    : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfBox2d(theSize);
}

void Macad::Occt::Bnd_Array1OfBox2d::Init(Macad::Occt::Bnd_Box2d^ theValue)
{
    ((::Bnd_Array1OfBox2d*)_NativeInstance)->Init(*(::Bnd_Box2d*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Bnd_Array1OfBox2d::Size()
{
    long long unsigned int _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Bnd_Array1OfBox2d::Length()
{
    int _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Bnd_Array1OfBox2d::IsEmpty()
{
    bool _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Bnd_Array1OfBox2d::Lower()
{
    int _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Bnd_Array1OfBox2d::Upper()
{
    int _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Bnd_Array1OfBox2d^ Macad::Occt::Bnd_Array1OfBox2d::Assign(Macad::Occt::Bnd_Array1OfBox2d^ theOther)
{
    ::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
    *_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Assign(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox2d(_result);
}

Macad::Occt::Bnd_Array1OfBox2d^ Macad::Occt::Bnd_Array1OfBox2d::CopyValues(Macad::Occt::Bnd_Array1OfBox2d^ theOther)
{
    ::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
    *_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->CopyValues(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox2d(_result);
}

Macad::Occt::Bnd_Array1OfBox2d^ Macad::Occt::Bnd_Array1OfBox2d::Move(Macad::Occt::Bnd_Array1OfBox2d^ theOther)
{
    ::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
    *_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Move(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::First()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::ChangeFirst()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::Last()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::ChangeLast()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::Value(int theIndex)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::ChangeValue(int theIndex)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::At(long long unsigned int theIndex)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::ChangeAt(long long unsigned int theIndex)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

void Macad::Occt::Bnd_Array1OfBox2d::SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem)
{
    ((::Bnd_Array1OfBox2d*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box2d*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfBox2d::UpdateLowerBound(int theLower)
{
    ((::Bnd_Array1OfBox2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Bnd_Array1OfBox2d::UpdateUpperBound(int theUpper)
{
    ((::Bnd_Array1OfBox2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Bnd_Array1OfBox2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Bnd_Array1OfBox2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Bnd_Array1OfBox2d::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Bnd_Array1OfBox2d*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Bnd_Array1OfBox2d::IsDeletable()
{
    bool _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box2d^>^ Macad::Occt::Bnd_Array1OfBox2d::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Box2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Bnd_Array1OfBox2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Box2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox2d::Iterator
//---------------------------------------------------------------------

void Macad::Occt::Bnd_Array1OfBox2d::Iterator::Init(Macad::Occt::Bnd_Array1OfBox2d^ theList)
{
    ((::Bnd_Array1OfBox2d::Iterator*)_NativeInstance)->Init(*(::Bnd_Array1OfBox2d*)theList->NativeInstance);
}

bool Macad::Occt::Bnd_Array1OfBox2d::Iterator::More()
{
    bool _result = ((::Bnd_Array1OfBox2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Bnd_Array1OfBox2d::Iterator::Initialize(Macad::Occt::Bnd_Array1OfBox2d^ theList)
{
    ((::Bnd_Array1OfBox2d::Iterator*)_NativeInstance)->Initialize(*(::Bnd_Array1OfBox2d*)theList->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfBox2d::Iterator::Next()
{
    ((::Bnd_Array1OfBox2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::Iterator::Value()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_Array1OfBox2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::Iterator::ChangeValue()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_Array1OfBox2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfSphere
//---------------------------------------------------------------------

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere()
    : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfSphere();
}

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfSphere(theLower, theUpper);
}

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfSphere(*(::Bnd_Sphere*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfSphere(*(::Bnd_Sphere*)theBegin->NativeInstance, theLower, theUpper, true);
}

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere(long long unsigned int theSize)
    : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Array1OfSphere(theSize);
}

void Macad::Occt::Bnd_Array1OfSphere::Init(Macad::Occt::Bnd_Sphere^ theValue)
{
    ((::Bnd_Array1OfSphere*)_NativeInstance)->Init(*(::Bnd_Sphere*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Bnd_Array1OfSphere::Size()
{
    long long unsigned int _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Bnd_Array1OfSphere::Length()
{
    int _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Bnd_Array1OfSphere::IsEmpty()
{
    bool _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Bnd_Array1OfSphere::Lower()
{
    int _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Bnd_Array1OfSphere::Upper()
{
    int _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Bnd_Array1OfSphere^ Macad::Occt::Bnd_Array1OfSphere::Assign(Macad::Occt::Bnd_Array1OfSphere^ theOther)
{
    ::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
    *_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Assign(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfSphere(_result);
}

Macad::Occt::Bnd_Array1OfSphere^ Macad::Occt::Bnd_Array1OfSphere::CopyValues(Macad::Occt::Bnd_Array1OfSphere^ theOther)
{
    ::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
    *_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->CopyValues(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfSphere(_result);
}

Macad::Occt::Bnd_Array1OfSphere^ Macad::Occt::Bnd_Array1OfSphere::Move(Macad::Occt::Bnd_Array1OfSphere^ theOther)
{
    ::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
    *_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Move(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfSphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::First()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::ChangeFirst()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::Last()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::ChangeLast()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::Value(int theIndex)
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::ChangeValue(int theIndex)
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::At(long long unsigned int theIndex)
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::ChangeAt(long long unsigned int theIndex)
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

void Macad::Occt::Bnd_Array1OfSphere::SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem)
{
    ((::Bnd_Array1OfSphere*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Sphere*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfSphere::UpdateLowerBound(int theLower)
{
    ((::Bnd_Array1OfSphere*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Bnd_Array1OfSphere::UpdateUpperBound(int theUpper)
{
    ((::Bnd_Array1OfSphere*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Bnd_Array1OfSphere::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Bnd_Array1OfSphere*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Bnd_Array1OfSphere::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Bnd_Array1OfSphere*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Bnd_Array1OfSphere::IsDeletable()
{
    bool _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Sphere^>^ Macad::Occt::Bnd_Array1OfSphere::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Sphere^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Bnd_Array1OfSphere::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Sphere^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfSphere::Iterator
//---------------------------------------------------------------------

void Macad::Occt::Bnd_Array1OfSphere::Iterator::Init(Macad::Occt::Bnd_Array1OfSphere^ theList)
{
    ((::Bnd_Array1OfSphere::Iterator*)_NativeInstance)->Init(*(::Bnd_Array1OfSphere*)theList->NativeInstance);
}

bool Macad::Occt::Bnd_Array1OfSphere::Iterator::More()
{
    bool _result = ((::Bnd_Array1OfSphere::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Bnd_Array1OfSphere::Iterator::Initialize(Macad::Occt::Bnd_Array1OfSphere^ theList)
{
    ((::Bnd_Array1OfSphere::Iterator*)_NativeInstance)->Initialize(*(::Bnd_Array1OfSphere*)theList->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfSphere::Iterator::Next()
{
    ((::Bnd_Array1OfSphere::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::Iterator::Value()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_Array1OfSphere::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::Iterator::ChangeValue()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_Array1OfSphere::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox
//---------------------------------------------------------------------

void Macad::Occt::Bnd_HArray1OfBox::Init(Macad::Occt::Bnd_Box^ theValue)
{
    ((::Bnd_HArray1OfBox*)_NativeInstance)->Init(*(::Bnd_Box*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Bnd_HArray1OfBox::Size()
{
    long long unsigned int _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfBox::Length()
{
    int _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Bnd_HArray1OfBox::IsEmpty()
{
    bool _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfBox::Lower()
{
    int _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfBox::Upper()
{
    int _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::First()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::ChangeFirst()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::Last()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::ChangeLast()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::Value(int theIndex)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::ChangeValue(int theIndex)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::At(long long unsigned int theIndex)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::ChangeAt(long long unsigned int theIndex)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::Bnd_HArray1OfBox::SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem)
{
    ((::Bnd_HArray1OfBox*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_HArray1OfBox::UpdateLowerBound(int theLower)
{
    ((::Bnd_HArray1OfBox*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Bnd_HArray1OfBox::UpdateUpperBound(int theUpper)
{
    ((::Bnd_HArray1OfBox*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Bnd_HArray1OfBox::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Bnd_HArray1OfBox*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Bnd_HArray1OfBox::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Bnd_HArray1OfBox*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Bnd_HArray1OfBox::IsDeletable()
{
    bool _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfBox();
}

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfBox(theLower, theUpper);
}

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox(int theLower, int theUpper, Macad::Occt::Bnd_Box^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfBox(theLower, theUpper, *(::Bnd_Box*)theValue->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfBox(*(::Bnd_Box*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Bnd_HArray1OfBox^ Macad::Occt::Bnd_HArray1OfBox::CreateDowncasted(::Bnd_HArray1OfBox* instance)
{
    return gcnew Macad::Occt::Bnd_HArray1OfBox( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box^>^ Macad::Occt::Bnd_HArray1OfBox::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Box^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Bnd_HArray1OfBox::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Box^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Bnd_HArray1OfBox::Iterator::More()
{
    bool _result = ((::Bnd_HArray1OfBox::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Bnd_HArray1OfBox::Iterator::Next()
{
    ((::Bnd_HArray1OfBox::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::Iterator::Value()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::Bnd_HArray1OfBox::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::Iterator::ChangeValue()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_HArray1OfBox::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox2d
//---------------------------------------------------------------------

void Macad::Occt::Bnd_HArray1OfBox2d::Init(Macad::Occt::Bnd_Box2d^ theValue)
{
    ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Init(*(::Bnd_Box2d*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Bnd_HArray1OfBox2d::Size()
{
    long long unsigned int _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfBox2d::Length()
{
    int _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Bnd_HArray1OfBox2d::IsEmpty()
{
    bool _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfBox2d::Lower()
{
    int _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfBox2d::Upper()
{
    int _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::First()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::ChangeFirst()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::Last()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::ChangeLast()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::Value(int theIndex)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::ChangeValue(int theIndex)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::At(long long unsigned int theIndex)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::ChangeAt(long long unsigned int theIndex)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

void Macad::Occt::Bnd_HArray1OfBox2d::SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem)
{
    ((::Bnd_HArray1OfBox2d*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box2d*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_HArray1OfBox2d::UpdateLowerBound(int theLower)
{
    ((::Bnd_HArray1OfBox2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Bnd_HArray1OfBox2d::UpdateUpperBound(int theUpper)
{
    ((::Bnd_HArray1OfBox2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Bnd_HArray1OfBox2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Bnd_HArray1OfBox2d::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Bnd_HArray1OfBox2d::IsDeletable()
{
    bool _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfBox2d();
}

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfBox2d(theLower, theUpper);
}

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(int theLower, int theUpper, Macad::Occt::Bnd_Box2d^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfBox2d(theLower, theUpper, *(::Bnd_Box2d*)theValue->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfBox2d(*(::Bnd_Box2d*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Bnd_HArray1OfBox2d^ Macad::Occt::Bnd_HArray1OfBox2d::CreateDowncasted(::Bnd_HArray1OfBox2d* instance)
{
    return gcnew Macad::Occt::Bnd_HArray1OfBox2d( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box2d^>^ Macad::Occt::Bnd_HArray1OfBox2d::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Box2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Bnd_HArray1OfBox2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Box2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox2d::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Bnd_HArray1OfBox2d::Iterator::More()
{
    bool _result = ((::Bnd_HArray1OfBox2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Bnd_HArray1OfBox2d::Iterator::Next()
{
    ((::Bnd_HArray1OfBox2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::Iterator::Value()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = (::Bnd_Box2d)((::Bnd_HArray1OfBox2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::Iterator::ChangeValue()
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    *_result = ((::Bnd_HArray1OfBox2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfSphere
//---------------------------------------------------------------------

void Macad::Occt::Bnd_HArray1OfSphere::Init(Macad::Occt::Bnd_Sphere^ theValue)
{
    ((::Bnd_HArray1OfSphere*)_NativeInstance)->Init(*(::Bnd_Sphere*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::Bnd_HArray1OfSphere::Size()
{
    long long unsigned int _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfSphere::Length()
{
    int _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Bnd_HArray1OfSphere::IsEmpty()
{
    bool _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfSphere::Lower()
{
    int _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Bnd_HArray1OfSphere::Upper()
{
    int _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::First()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::ChangeFirst()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::Last()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::ChangeLast()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::Value(int theIndex)
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::ChangeValue(int theIndex)
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::At(long long unsigned int theIndex)
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::ChangeAt(long long unsigned int theIndex)
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

void Macad::Occt::Bnd_HArray1OfSphere::SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem)
{
    ((::Bnd_HArray1OfSphere*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Sphere*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_HArray1OfSphere::UpdateLowerBound(int theLower)
{
    ((::Bnd_HArray1OfSphere*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Bnd_HArray1OfSphere::UpdateUpperBound(int theUpper)
{
    ((::Bnd_HArray1OfSphere*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Bnd_HArray1OfSphere::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Bnd_HArray1OfSphere*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::Bnd_HArray1OfSphere::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::Bnd_HArray1OfSphere*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::Bnd_HArray1OfSphere::IsDeletable()
{
    bool _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfSphere();
}

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfSphere(theLower, theUpper);
}

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(int theLower, int theUpper, Macad::Occt::Bnd_Sphere^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfSphere(theLower, theUpper, *(::Bnd_Sphere*)theValue->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Bnd_HArray1OfSphere(*(::Bnd_Sphere*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Bnd_HArray1OfSphere^ Macad::Occt::Bnd_HArray1OfSphere::CreateDowncasted(::Bnd_HArray1OfSphere* instance)
{
    return gcnew Macad::Occt::Bnd_HArray1OfSphere( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Sphere^>^ Macad::Occt::Bnd_HArray1OfSphere::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Sphere^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Bnd_HArray1OfSphere::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Bnd_Sphere^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfSphere::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Bnd_HArray1OfSphere::Iterator::More()
{
    bool _result = ((::Bnd_HArray1OfSphere::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Bnd_HArray1OfSphere::Iterator::Next()
{
    ((::Bnd_HArray1OfSphere::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::Iterator::Value()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = (::Bnd_Sphere)((::Bnd_HArray1OfSphere::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::Iterator::ChangeValue()
{
    ::Bnd_Sphere* _result = new ::Bnd_Sphere();
    *_result = ((::Bnd_HArray1OfSphere::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}



//---------------------------------------------------------------------
//  Class  Bnd_Box
//---------------------------------------------------------------------

Macad::Occt::Bnd_Box::Bnd_Box()
    : Macad::Occt::BaseClass<::Bnd_Box>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Box();
}

Macad::Occt::Bnd_Box::Bnd_Box(Macad::Occt::Pnt theMin, Macad::Occt::Pnt theMax)
    : Macad::Occt::BaseClass<::Bnd_Box>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theMin = &theMin;
    pin_ptr<Macad::Occt::Pnt> pp_theMax = &theMax;
    _NativeInstance = new ::Bnd_Box(*(gp_Pnt*)pp_theMin, *(gp_Pnt*)pp_theMax);
}

void Macad::Occt::Bnd_Box::SetWhole()
{
    ((::Bnd_Box*)_NativeInstance)->SetWhole();
}

void Macad::Occt::Bnd_Box::SetVoid()
{
    ((::Bnd_Box*)_NativeInstance)->SetVoid();
}

void Macad::Occt::Bnd_Box::Set(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Bnd_Box*)_NativeInstance)->Set(*(gp_Pnt*)pp_P);
}

void Macad::Occt::Bnd_Box::Set(Macad::Occt::Pnt P, Macad::Occt::Dir D)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Dir> pp_D = &D;
    ((::Bnd_Box*)_NativeInstance)->Set(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_D);
}

void Macad::Occt::Bnd_Box::Update(double aXmin, double aYmin, double aZmin, double aXmax, double aYmax, double aZmax)
{
    ((::Bnd_Box*)_NativeInstance)->Update(aXmin, aYmin, aZmin, aXmax, aYmax, aZmax);
}

void Macad::Occt::Bnd_Box::Update(double X, double Y, double Z)
{
    ((::Bnd_Box*)_NativeInstance)->Update(X, Y, Z);
}

double Macad::Occt::Bnd_Box::GetGap()
{
    double _result = ((::Bnd_Box*)_NativeInstance)->GetGap();
    return _result;
}

void Macad::Occt::Bnd_Box::SetGap(double Tol)
{
    ((::Bnd_Box*)_NativeInstance)->SetGap(Tol);
}

void Macad::Occt::Bnd_Box::Enlarge(double Tol)
{
    ((::Bnd_Box*)_NativeInstance)->Enlarge(Tol);
}

void Macad::Occt::Bnd_Box::Get(double% theXmin, double% theYmin, double% theZmin, double% theXmax, double% theYmax, double% theZmax)
{
    pin_ptr<double> pp_theXmin = &theXmin;
    pin_ptr<double> pp_theYmin = &theYmin;
    pin_ptr<double> pp_theZmin = &theZmin;
    pin_ptr<double> pp_theXmax = &theXmax;
    pin_ptr<double> pp_theYmax = &theYmax;
    pin_ptr<double> pp_theZmax = &theZmax;
    ((::Bnd_Box*)_NativeInstance)->Get(*(double*)pp_theXmin, *(double*)pp_theYmin, *(double*)pp_theZmin, *(double*)pp_theXmax, *(double*)pp_theYmax, *(double*)pp_theZmax);
}

double Macad::Occt::Bnd_Box::GetXMin()
{
    double _result = ((::Bnd_Box*)_NativeInstance)->GetXMin();
    return _result;
}

double Macad::Occt::Bnd_Box::GetXMax()
{
    double _result = ((::Bnd_Box*)_NativeInstance)->GetXMax();
    return _result;
}

double Macad::Occt::Bnd_Box::GetYMin()
{
    double _result = ((::Bnd_Box*)_NativeInstance)->GetYMin();
    return _result;
}

double Macad::Occt::Bnd_Box::GetYMax()
{
    double _result = ((::Bnd_Box*)_NativeInstance)->GetYMax();
    return _result;
}

double Macad::Occt::Bnd_Box::GetZMin()
{
    double _result = ((::Bnd_Box*)_NativeInstance)->GetZMin();
    return _result;
}

double Macad::Occt::Bnd_Box::GetZMax()
{
    double _result = ((::Bnd_Box*)_NativeInstance)->GetZMax();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::Bnd_Box::CornerMin()
{
    ::gp_Pnt _nativeResult = ((::Bnd_Box*)_NativeInstance)->CornerMin();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::Bnd_Box::CornerMax()
{
    ::gp_Pnt _nativeResult = ((::Bnd_Box*)_NativeInstance)->CornerMax();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Bnd_Box::OpenXmin()
{
    ((::Bnd_Box*)_NativeInstance)->OpenXmin();
}

void Macad::Occt::Bnd_Box::OpenXmax()
{
    ((::Bnd_Box*)_NativeInstance)->OpenXmax();
}

void Macad::Occt::Bnd_Box::OpenYmin()
{
    ((::Bnd_Box*)_NativeInstance)->OpenYmin();
}

void Macad::Occt::Bnd_Box::OpenYmax()
{
    ((::Bnd_Box*)_NativeInstance)->OpenYmax();
}

void Macad::Occt::Bnd_Box::OpenZmin()
{
    ((::Bnd_Box*)_NativeInstance)->OpenZmin();
}

void Macad::Occt::Bnd_Box::OpenZmax()
{
    ((::Bnd_Box*)_NativeInstance)->OpenZmax();
}

bool Macad::Occt::Bnd_Box::IsOpen()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpen();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOpenXmin()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenXmin();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOpenXmax()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenXmax();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOpenYmin()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenYmin();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOpenYmax()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenYmax();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOpenZmin()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenZmin();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOpenZmax()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenZmax();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsWhole()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsWhole();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsVoid()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsVoid();
    return _result;
}

bool Macad::Occt::Bnd_Box::IsXThin(double tol)
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsXThin(tol);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsYThin(double tol)
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsYThin(tol);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsZThin(double tol)
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsZThin(tol);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsThin(double tol)
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsThin(tol);
    return _result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Box::Transformed(Macad::Occt::Trsf T)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    pin_ptr<Macad::Occt::Trsf> pp_T = &T;
    *_result = ((::Bnd_Box*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::Bnd_Box::Add(Macad::Occt::Bnd_Box^ Other)
{
    ((::Bnd_Box*)_NativeInstance)->Add(*(::Bnd_Box*)Other->NativeInstance);
}

void Macad::Occt::Bnd_Box::Add(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Bnd_Box*)_NativeInstance)->Add(*(gp_Pnt*)pp_P);
}

void Macad::Occt::Bnd_Box::Add(Macad::Occt::Pnt P, Macad::Occt::Dir D)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Dir> pp_D = &D;
    ((::Bnd_Box*)_NativeInstance)->Add(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_D);
}

void Macad::Occt::Bnd_Box::Add(Macad::Occt::Dir D)
{
    pin_ptr<Macad::Occt::Dir> pp_D = &D;
    ((::Bnd_Box*)_NativeInstance)->Add(*(gp_Dir*)pp_D);
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_P);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::gp_Lin^ L)
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(::gp_Lin*)L->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Pln P)
{
    pin_ptr<Macad::Occt::Pln> pp_P = &P;
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pln*)pp_P);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Bnd_Box^ Other)
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(::Bnd_Box*)Other->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T)
{
    pin_ptr<Macad::Occt::Trsf> pp_T = &T;
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(::Bnd_Box*)Other->NativeInstance, *(gp_Trsf*)pp_T);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Trsf T1, Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T2)
{
    pin_ptr<Macad::Occt::Trsf> pp_T1 = &T1;
    pin_ptr<Macad::Occt::Trsf> pp_T2 = &T2;
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Trsf*)pp_T1, *(::Bnd_Box*)Other->NativeInstance, *(gp_Trsf*)pp_T2);
    return _result;
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Dir D)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Dir> pp_D = &D;
    bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Dir*)pp_D);
    return _result;
}

bool Macad::Occt::Bnd_Box::Contains(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    bool _result = ((::Bnd_Box*)_NativeInstance)->Contains(*(gp_Pnt*)pp_theP);
    return _result;
}

bool Macad::Occt::Bnd_Box::Intersects(Macad::Occt::Bnd_Box^ theOther)
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->Intersects(*(::Bnd_Box*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Bnd_Box::Distance(Macad::Occt::Bnd_Box^ Other)
{
    double _result = ((::Bnd_Box*)_NativeInstance)->Distance(*(::Bnd_Box*)Other->NativeInstance);
    return _result;
}

void Macad::Occt::Bnd_Box::Dump()
{
    ((::Bnd_Box*)_NativeInstance)->Dump();
}

double Macad::Occt::Bnd_Box::SquareExtent()
{
    double _result = ((::Bnd_Box*)_NativeInstance)->SquareExtent();
    return _result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Box::FinitePart()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Bnd_Box*)_NativeInstance)->FinitePart();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

bool Macad::Occt::Bnd_Box::HasFinitePart()
{
    bool _result = ((::Bnd_Box*)_NativeInstance)->HasFinitePart();
    return _result;
}

void Macad::Occt::Bnd_Box::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Bnd_Box*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Bnd_Box::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Bnd_Box*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Bnd_Box2d
//---------------------------------------------------------------------

Macad::Occt::Bnd_Box2d::Bnd_Box2d()
    : Macad::Occt::BaseClass<::Bnd_Box2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Box2d();
}

void Macad::Occt::Bnd_Box2d::SetWhole()
{
    ((::Bnd_Box2d*)_NativeInstance)->SetWhole();
}

void Macad::Occt::Bnd_Box2d::SetVoid()
{
    ((::Bnd_Box2d*)_NativeInstance)->SetVoid();
}

void Macad::Occt::Bnd_Box2d::Set(Macad::Occt::Pnt2d thePnt)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
    ((::Bnd_Box2d*)_NativeInstance)->Set(*(gp_Pnt2d*)pp_thePnt);
}

void Macad::Occt::Bnd_Box2d::Set(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
    pin_ptr<Macad::Occt::Dir2d> pp_theDir = &theDir;
    ((::Bnd_Box2d*)_NativeInstance)->Set(*(gp_Pnt2d*)pp_thePnt, *(gp_Dir2d*)pp_theDir);
}

void Macad::Occt::Bnd_Box2d::Update(double aXmin, double aYmin, double aXmax, double aYmax)
{
    ((::Bnd_Box2d*)_NativeInstance)->Update(aXmin, aYmin, aXmax, aYmax);
}

void Macad::Occt::Bnd_Box2d::Update(double X, double Y)
{
    ((::Bnd_Box2d*)_NativeInstance)->Update(X, Y);
}

double Macad::Occt::Bnd_Box2d::GetGap()
{
    double _result = ((::Bnd_Box2d*)_NativeInstance)->GetGap();
    return _result;
}

void Macad::Occt::Bnd_Box2d::SetGap(double Tol)
{
    ((::Bnd_Box2d*)_NativeInstance)->SetGap(Tol);
}

void Macad::Occt::Bnd_Box2d::Enlarge(double theTol)
{
    ((::Bnd_Box2d*)_NativeInstance)->Enlarge(theTol);
}

void Macad::Occt::Bnd_Box2d::Get(double% aXmin, double% aYmin, double% aXmax, double% aYmax)
{
    pin_ptr<double> pp_aXmin = &aXmin;
    pin_ptr<double> pp_aYmin = &aYmin;
    pin_ptr<double> pp_aXmax = &aXmax;
    pin_ptr<double> pp_aYmax = &aYmax;
    ((::Bnd_Box2d*)_NativeInstance)->Get(*(double*)pp_aXmin, *(double*)pp_aYmin, *(double*)pp_aXmax, *(double*)pp_aYmax);
}

double Macad::Occt::Bnd_Box2d::GetXMin()
{
    double _result = ((::Bnd_Box2d*)_NativeInstance)->GetXMin();
    return _result;
}

double Macad::Occt::Bnd_Box2d::GetXMax()
{
    double _result = ((::Bnd_Box2d*)_NativeInstance)->GetXMax();
    return _result;
}

double Macad::Occt::Bnd_Box2d::GetYMin()
{
    double _result = ((::Bnd_Box2d*)_NativeInstance)->GetYMin();
    return _result;
}

double Macad::Occt::Bnd_Box2d::GetYMax()
{
    double _result = ((::Bnd_Box2d*)_NativeInstance)->GetYMax();
    return _result;
}

void Macad::Occt::Bnd_Box2d::OpenXmin()
{
    ((::Bnd_Box2d*)_NativeInstance)->OpenXmin();
}

void Macad::Occt::Bnd_Box2d::OpenXmax()
{
    ((::Bnd_Box2d*)_NativeInstance)->OpenXmax();
}

void Macad::Occt::Bnd_Box2d::OpenYmin()
{
    ((::Bnd_Box2d*)_NativeInstance)->OpenYmin();
}

void Macad::Occt::Bnd_Box2d::OpenYmax()
{
    ((::Bnd_Box2d*)_NativeInstance)->OpenYmax();
}

bool Macad::Occt::Bnd_Box2d::IsOpenXmin()
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOpenXmin();
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsOpenXmax()
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOpenXmax();
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsOpenYmin()
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOpenYmin();
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsOpenYmax()
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOpenYmax();
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsWhole()
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsWhole();
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsVoid()
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsVoid();
    return _result;
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Box2d::Transformed(Macad::Occt::Trsf2d T)
{
    ::Bnd_Box2d* _result = new ::Bnd_Box2d();
    pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
    *_result = ((::Bnd_Box2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

void Macad::Occt::Bnd_Box2d::Add(Macad::Occt::Bnd_Box2d^ Other)
{
    ((::Bnd_Box2d*)_NativeInstance)->Add(*(::Bnd_Box2d*)Other->NativeInstance);
}

void Macad::Occt::Bnd_Box2d::Add(Macad::Occt::Pnt2d thePnt)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
    ((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt);
}

void Macad::Occt::Bnd_Box2d::Add(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
    pin_ptr<Macad::Occt::Dir2d> pp_theDir = &theDir;
    ((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt, *(gp_Dir2d*)pp_theDir);
}

void Macad::Occt::Bnd_Box2d::Add(Macad::Occt::Dir2d D)
{
    pin_ptr<Macad::Occt::Dir2d> pp_D = &D;
    ((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Dir2d*)pp_D);
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Pnt2d P)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(gp_Pnt2d*)pp_P);
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::gp_Lin2d^ theL)
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(::gp_Lin2d*)theL->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Pnt2d theP0, Macad::Occt::Pnt2d theP1)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP0 = &theP0;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(gp_Pnt2d*)pp_theP0, *(gp_Pnt2d*)pp_theP1);
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Bnd_Box2d^ Other)
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(::Bnd_Box2d*)Other->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_Box2d::Contains(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->Contains(*(gp_Pnt2d*)pp_theP);
    return _result;
}

bool Macad::Occt::Bnd_Box2d::Intersects(Macad::Occt::Bnd_Box2d^ theOther)
{
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->Intersects(*(::Bnd_Box2d*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Bnd_Box2d::Distance(Macad::Occt::Bnd_Box2d^ theOther)
{
    double _result = ((::Bnd_Box2d*)_NativeInstance)->Distance(*(::Bnd_Box2d*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Bnd_Box2d^ theOther, Macad::Occt::Trsf2d theTrsf)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_theTrsf = &theTrsf;
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(::Bnd_Box2d*)theOther->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
    return _result;
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Trsf2d T1, Macad::Occt::Bnd_Box2d^ Other, Macad::Occt::Trsf2d T2)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_T1 = &T1;
    pin_ptr<Macad::Occt::Trsf2d> pp_T2 = &T2;
    bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(gp_Trsf2d*)pp_T1, *(::Bnd_Box2d*)Other->NativeInstance, *(gp_Trsf2d*)pp_T2);
    return _result;
}

void Macad::Occt::Bnd_Box2d::Dump()
{
    ((::Bnd_Box2d*)_NativeInstance)->Dump();
}

double Macad::Occt::Bnd_Box2d::SquareExtent()
{
    double _result = ((::Bnd_Box2d*)_NativeInstance)->SquareExtent();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Bnd_Sphere
//---------------------------------------------------------------------

Macad::Occt::Bnd_Sphere::Bnd_Sphere()
    : Macad::Occt::BaseClass<::Bnd_Sphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Sphere();
}

Macad::Occt::Bnd_Sphere::Bnd_Sphere(Macad::Occt::XYZ theCntr, double theRad, int theU, int theV)
    : Macad::Occt::BaseClass<::Bnd_Sphere>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::XYZ> pp_theCntr = &theCntr;
    _NativeInstance = new ::Bnd_Sphere(*(gp_XYZ*)pp_theCntr, theRad, theU, theV);
}

int Macad::Occt::Bnd_Sphere::U()
{
    int _result = ((::Bnd_Sphere*)_NativeInstance)->U();
    return _result;
}

int Macad::Occt::Bnd_Sphere::V()
{
    int _result = ((::Bnd_Sphere*)_NativeInstance)->V();
    return _result;
}

bool Macad::Occt::Bnd_Sphere::IsValid()
{
    bool _result = ((::Bnd_Sphere*)_NativeInstance)->IsValid();
    return _result;
}

void Macad::Occt::Bnd_Sphere::SetValid(bool isValid)
{
    ((::Bnd_Sphere*)_NativeInstance)->SetValid(isValid);
}

Macad::Occt::XYZ Macad::Occt::Bnd_Sphere::Center()
{
    ::gp_XYZ _nativeResult = ((::Bnd_Sphere*)_NativeInstance)->Center();
    return Macad::Occt::XYZ(_nativeResult);
}

double Macad::Occt::Bnd_Sphere::Radius()
{
    double _result = ((::Bnd_Sphere*)_NativeInstance)->Radius();
    return _result;
}

void Macad::Occt::Bnd_Sphere::Distances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax)
{
    pin_ptr<Macad::Occt::XYZ> pp_theXYZ = &theXYZ;
    pin_ptr<double> pp_theMin = &theMin;
    pin_ptr<double> pp_theMax = &theMax;
    ((::Bnd_Sphere*)_NativeInstance)->Distances(*(gp_XYZ*)pp_theXYZ, *(double*)pp_theMin, *(double*)pp_theMax);
}

void Macad::Occt::Bnd_Sphere::SquareDistances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax)
{
    pin_ptr<Macad::Occt::XYZ> pp_theXYZ = &theXYZ;
    pin_ptr<double> pp_theMin = &theMin;
    pin_ptr<double> pp_theMax = &theMax;
    ((::Bnd_Sphere*)_NativeInstance)->SquareDistances(*(gp_XYZ*)pp_theXYZ, *(double*)pp_theMin, *(double*)pp_theMax);
}

bool Macad::Occt::Bnd_Sphere::Project(Macad::Occt::XYZ theNode, Macad::Occt::XYZ% theProjNode, double% theDist, bool% theInside)
{
    pin_ptr<Macad::Occt::XYZ> pp_theNode = &theNode;
    pin_ptr<Macad::Occt::XYZ> pp_theProjNode = &theProjNode;
    pin_ptr<double> pp_theDist = &theDist;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::Bnd_Sphere*)_NativeInstance)->Project(*(gp_XYZ*)pp_theNode, *(gp_XYZ*)pp_theProjNode, *(double*)pp_theDist, *(bool*)pp_theInside);
    return _result;
}

double Macad::Occt::Bnd_Sphere::Distance(Macad::Occt::XYZ theNode)
{
    pin_ptr<Macad::Occt::XYZ> pp_theNode = &theNode;
    double _result = ((::Bnd_Sphere*)_NativeInstance)->Distance(*(gp_XYZ*)pp_theNode);
    return _result;
}

double Macad::Occt::Bnd_Sphere::SquareDistance(Macad::Occt::XYZ theNode)
{
    pin_ptr<Macad::Occt::XYZ> pp_theNode = &theNode;
    double _result = ((::Bnd_Sphere*)_NativeInstance)->SquareDistance(*(gp_XYZ*)pp_theNode);
    return _result;
}

void Macad::Occt::Bnd_Sphere::Add(Macad::Occt::Bnd_Sphere^ theOther)
{
    ((::Bnd_Sphere*)_NativeInstance)->Add(*(::Bnd_Sphere*)theOther->NativeInstance);
}

bool Macad::Occt::Bnd_Sphere::IsOut(Macad::Occt::Bnd_Sphere^ theOther)
{
    bool _result = ((::Bnd_Sphere*)_NativeInstance)->IsOut(*(::Bnd_Sphere*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_Sphere::IsOut(Macad::Occt::XYZ thePnt, double% theMaxDist)
{
    pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
    pin_ptr<double> pp_theMaxDist = &theMaxDist;
    bool _result = ((::Bnd_Sphere*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_thePnt, *(double*)pp_theMaxDist);
    return _result;
}

double Macad::Occt::Bnd_Sphere::SquareExtent()
{
    double _result = ((::Bnd_Sphere*)_NativeInstance)->SquareExtent();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Bnd_BoundSortBox
//---------------------------------------------------------------------

Macad::Occt::Bnd_BoundSortBox::Bnd_BoundSortBox()
    : Macad::Occt::BaseClass<::Bnd_BoundSortBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_BoundSortBox();
}

void Macad::Occt::Bnd_BoundSortBox::Initialize(Macad::Occt::Bnd_HArray1OfBox^ theSetOfBoxes)
{
    ((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(Handle(::Bnd_HArray1OfBox)(theSetOfBoxes->NativeInstance));
}

void Macad::Occt::Bnd_BoundSortBox::Initialize(Macad::Occt::Bnd_Box^ theEnclosingBox, Macad::Occt::Bnd_HArray1OfBox^ theSetOfBoxes)
{
    ((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(*(::Bnd_Box*)theEnclosingBox->NativeInstance, Handle(::Bnd_HArray1OfBox)(theSetOfBoxes->NativeInstance));
}

void Macad::Occt::Bnd_BoundSortBox::Initialize(Macad::Occt::Bnd_Box^ theEnclosingBox, int theNbBoxes)
{
    ((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(*(::Bnd_Box*)theEnclosingBox->NativeInstance, theNbBoxes);
}

void Macad::Occt::Bnd_BoundSortBox::Add(Macad::Occt::Bnd_Box^ theBox, int theIndex)
{
    ((::Bnd_BoundSortBox*)_NativeInstance)->Add(*(::Bnd_Box*)theBox->NativeInstance, theIndex);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::Bnd_BoundSortBox::Compare(Macad::Occt::Bnd_Box^ theBox)
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = (::TColStd_ListOfInteger)((::Bnd_BoundSortBox*)_NativeInstance)->Compare(*(::Bnd_Box*)theBox->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::Bnd_BoundSortBox::Compare(Macad::Occt::Pln thePlane)
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    *_result = (::TColStd_ListOfInteger)((::Bnd_BoundSortBox*)_NativeInstance)->Compare(*(gp_Pln*)pp_thePlane);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}



//---------------------------------------------------------------------
//  Class  Bnd_OBB
//---------------------------------------------------------------------

Macad::Occt::Bnd_OBB::Bnd_OBB()
    : Macad::Occt::BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_OBB();
}

Macad::Occt::Bnd_OBB::Bnd_OBB(Macad::Occt::Pnt theCenter, Macad::Occt::Dir theXDirection, Macad::Occt::Dir theYDirection, Macad::Occt::Dir theZDirection, double theHXSize, double theHYSize, double theHZSize)
    : Macad::Occt::BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<Macad::Occt::Dir> pp_theXDirection = &theXDirection;
    pin_ptr<Macad::Occt::Dir> pp_theYDirection = &theYDirection;
    pin_ptr<Macad::Occt::Dir> pp_theZDirection = &theZDirection;
    _NativeInstance = new ::Bnd_OBB(*(gp_Pnt*)pp_theCenter, *(gp_Dir*)pp_theXDirection, *(gp_Dir*)pp_theYDirection, *(gp_Dir*)pp_theZDirection, theHXSize, theHYSize, theHZSize);
}

Macad::Occt::Bnd_OBB::Bnd_OBB(Macad::Occt::Bnd_Box^ theBox)
    : Macad::Occt::BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_OBB(*(::Bnd_Box*)theBox->NativeInstance);
}

void Macad::Occt::Bnd_OBB::ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances, bool theIsOptimal)
{
    ((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, (::TColStd_Array1OfReal*)theListOfTolerances->NativeInstance, theIsOptimal);
}

void Macad::Occt::Bnd_OBB::ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances)
{
    ((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, (::TColStd_Array1OfReal*)theListOfTolerances->NativeInstance, false);
}

void Macad::Occt::Bnd_OBB::ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints)
{
    ((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, nullptr, false);
}

void Macad::Occt::Bnd_OBB::SetCenter(Macad::Occt::Pnt theCenter)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    ((::Bnd_OBB*)_NativeInstance)->SetCenter(*(gp_Pnt*)pp_theCenter);
}

void Macad::Occt::Bnd_OBB::SetXComponent(Macad::Occt::Dir theXDirection, double theHXSize)
{
    pin_ptr<Macad::Occt::Dir> pp_theXDirection = &theXDirection;
    ((::Bnd_OBB*)_NativeInstance)->SetXComponent(*(gp_Dir*)pp_theXDirection, theHXSize);
}

void Macad::Occt::Bnd_OBB::SetYComponent(Macad::Occt::Dir theYDirection, double theHYSize)
{
    pin_ptr<Macad::Occt::Dir> pp_theYDirection = &theYDirection;
    ((::Bnd_OBB*)_NativeInstance)->SetYComponent(*(gp_Dir*)pp_theYDirection, theHYSize);
}

void Macad::Occt::Bnd_OBB::SetZComponent(Macad::Occt::Dir theZDirection, double theHZSize)
{
    pin_ptr<Macad::Occt::Dir> pp_theZDirection = &theZDirection;
    ((::Bnd_OBB*)_NativeInstance)->SetZComponent(*(gp_Dir*)pp_theZDirection, theHZSize);
}

Macad::Occt::Ax3 Macad::Occt::Bnd_OBB::Position()
{
    ::gp_Ax3 _nativeResult = ((::Bnd_OBB*)_NativeInstance)->Position();
    return Macad::Occt::Ax3(_nativeResult);
}

Macad::Occt::XYZ Macad::Occt::Bnd_OBB::Center()
{
    ::gp_XYZ _nativeResult = ((::Bnd_OBB*)_NativeInstance)->Center();
    return Macad::Occt::XYZ(_nativeResult);
}

Macad::Occt::XYZ Macad::Occt::Bnd_OBB::XDirection()
{
    ::gp_XYZ _nativeResult = ((::Bnd_OBB*)_NativeInstance)->XDirection();
    return Macad::Occt::XYZ(_nativeResult);
}

Macad::Occt::XYZ Macad::Occt::Bnd_OBB::YDirection()
{
    ::gp_XYZ _nativeResult = ((::Bnd_OBB*)_NativeInstance)->YDirection();
    return Macad::Occt::XYZ(_nativeResult);
}

Macad::Occt::XYZ Macad::Occt::Bnd_OBB::ZDirection()
{
    ::gp_XYZ _nativeResult = ((::Bnd_OBB*)_NativeInstance)->ZDirection();
    return Macad::Occt::XYZ(_nativeResult);
}

double Macad::Occt::Bnd_OBB::XHSize()
{
    double _result = ((::Bnd_OBB*)_NativeInstance)->XHSize();
    return _result;
}

double Macad::Occt::Bnd_OBB::YHSize()
{
    double _result = ((::Bnd_OBB*)_NativeInstance)->YHSize();
    return _result;
}

double Macad::Occt::Bnd_OBB::ZHSize()
{
    double _result = ((::Bnd_OBB*)_NativeInstance)->ZHSize();
    return _result;
}

bool Macad::Occt::Bnd_OBB::IsVoid()
{
    bool _result = ((::Bnd_OBB*)_NativeInstance)->IsVoid();
    return _result;
}

void Macad::Occt::Bnd_OBB::SetVoid()
{
    ((::Bnd_OBB*)_NativeInstance)->SetVoid();
}

void Macad::Occt::Bnd_OBB::SetAABox(bool theFlag)
{
    pin_ptr<bool> pp_theFlag = &theFlag;
    ((::Bnd_OBB*)_NativeInstance)->SetAABox(*(bool*)pp_theFlag);
}

bool Macad::Occt::Bnd_OBB::IsAABox()
{
    bool _result = ((::Bnd_OBB*)_NativeInstance)->IsAABox();
    return _result;
}

void Macad::Occt::Bnd_OBB::Enlarge(double theGapAdd)
{
    ((::Bnd_OBB*)_NativeInstance)->Enlarge(theGapAdd);
}

bool Macad::Occt::Bnd_OBB::GetVertex(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    bool _result = ((::Bnd_OBB*)_NativeInstance)->GetVertex((gp_Pnt*)pp_theP);
    return _result;
}

double Macad::Occt::Bnd_OBB::SquareExtent()
{
    double _result = ((::Bnd_OBB*)_NativeInstance)->SquareExtent();
    return _result;
}

bool Macad::Occt::Bnd_OBB::IsOut(Macad::Occt::Bnd_OBB^ theOther)
{
    bool _result = ((::Bnd_OBB*)_NativeInstance)->IsOut(*(::Bnd_OBB*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_OBB::IsOut(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    bool _result = ((::Bnd_OBB*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_theP);
    return _result;
}

bool Macad::Occt::Bnd_OBB::Contains(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    bool _result = ((::Bnd_OBB*)_NativeInstance)->Contains(*(gp_Pnt*)pp_theP);
    return _result;
}

bool Macad::Occt::Bnd_OBB::Intersects(Macad::Occt::Bnd_OBB^ theOther)
{
    bool _result = ((::Bnd_OBB*)_NativeInstance)->Intersects(*(::Bnd_OBB*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_OBB::IsCompletelyInside(Macad::Occt::Bnd_OBB^ theOther)
{
    bool _result = ((::Bnd_OBB*)_NativeInstance)->IsCompletelyInside(*(::Bnd_OBB*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::Bnd_OBB::Add(Macad::Occt::Bnd_OBB^ theOther)
{
    ((::Bnd_OBB*)_NativeInstance)->Add(*(::Bnd_OBB*)theOther->NativeInstance);
}

void Macad::Occt::Bnd_OBB::Add(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::Bnd_OBB*)_NativeInstance)->Add(*(gp_Pnt*)pp_theP);
}

void Macad::Occt::Bnd_OBB::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Bnd_OBB*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Bnd_OBB::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Bnd_OBB*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Bnd_Range
//---------------------------------------------------------------------

Macad::Occt::Bnd_Range::Bnd_Range()
    : Macad::Occt::BaseClass<::Bnd_Range>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Range();
}

Macad::Occt::Bnd_Range::Bnd_Range(double theMin, double theMax)
    : Macad::Occt::BaseClass<::Bnd_Range>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Range(theMin, theMax);
}

void Macad::Occt::Bnd_Range::Common(Macad::Occt::Bnd_Range^ theOther)
{
    ((::Bnd_Range*)_NativeInstance)->Common(*(::Bnd_Range*)theOther->NativeInstance);
}

bool Macad::Occt::Bnd_Range::Union(Macad::Occt::Bnd_Range^ theOther)
{
    bool _result = ((::Bnd_Range*)_NativeInstance)->Union(*(::Bnd_Range*)theOther->NativeInstance);
    return _result;
}

Macad::Occt::Bnd_Range::IntersectStatus Macad::Occt::Bnd_Range::IsIntersected(double theVal, double thePeriod)
{
    ::Bnd_Range::IntersectStatus _result = ((::Bnd_Range*)_NativeInstance)->IsIntersected(theVal, thePeriod);
    return (Macad::Occt::Bnd_Range::IntersectStatus)_result;
}

Macad::Occt::Bnd_Range::IntersectStatus Macad::Occt::Bnd_Range::IsIntersected(double theVal)
{
    ::Bnd_Range::IntersectStatus _result = ((::Bnd_Range*)_NativeInstance)->IsIntersected(theVal, 0.);
    return (Macad::Occt::Bnd_Range::IntersectStatus)_result;
}

void Macad::Occt::Bnd_Range::Add(double theParameter)
{
    ((::Bnd_Range*)_NativeInstance)->Add(theParameter);
}

void Macad::Occt::Bnd_Range::Add(Macad::Occt::Bnd_Range^ theRange)
{
    ((::Bnd_Range*)_NativeInstance)->Add(*(::Bnd_Range*)theRange->NativeInstance);
}

bool Macad::Occt::Bnd_Range::GetMin(double% thePar)
{
    pin_ptr<double> pp_thePar = &thePar;
    bool _result = ((::Bnd_Range*)_NativeInstance)->GetMin(*(double*)pp_thePar);
    return _result;
}

bool Macad::Occt::Bnd_Range::GetMax(double% thePar)
{
    pin_ptr<double> pp_thePar = &thePar;
    bool _result = ((::Bnd_Range*)_NativeInstance)->GetMax(*(double*)pp_thePar);
    return _result;
}

bool Macad::Occt::Bnd_Range::GetBounds(double% theFirstPar, double% theLastPar)
{
    pin_ptr<double> pp_theFirstPar = &theFirstPar;
    pin_ptr<double> pp_theLastPar = &theLastPar;
    bool _result = ((::Bnd_Range*)_NativeInstance)->GetBounds(*(double*)pp_theFirstPar, *(double*)pp_theLastPar);
    return _result;
}

bool Macad::Occt::Bnd_Range::GetIntermediatePoint(double theLambda, double% theParameter)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    bool _result = ((::Bnd_Range*)_NativeInstance)->GetIntermediatePoint(theLambda, *(double*)pp_theParameter);
    return _result;
}

double Macad::Occt::Bnd_Range::Delta()
{
    double _result = ((::Bnd_Range*)_NativeInstance)->Delta();
    return _result;
}

bool Macad::Occt::Bnd_Range::IsVoid()
{
    bool _result = ((::Bnd_Range*)_NativeInstance)->IsVoid();
    return _result;
}

void Macad::Occt::Bnd_Range::SetVoid()
{
    ((::Bnd_Range*)_NativeInstance)->SetVoid();
}

void Macad::Occt::Bnd_Range::Enlarge(double theDelta)
{
    ((::Bnd_Range*)_NativeInstance)->Enlarge(theDelta);
}

Macad::Occt::Bnd_Range^ Macad::Occt::Bnd_Range::Shifted(double theVal)
{
    ::Bnd_Range* _result = new ::Bnd_Range();
    *_result = ((::Bnd_Range*)_NativeInstance)->Shifted(theVal);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Range(_result);
}

void Macad::Occt::Bnd_Range::Shift(double theVal)
{
    ((::Bnd_Range*)_NativeInstance)->Shift(theVal);
}

void Macad::Occt::Bnd_Range::TrimFrom(double theValLower)
{
    ((::Bnd_Range*)_NativeInstance)->TrimFrom(theValLower);
}

void Macad::Occt::Bnd_Range::TrimTo(double theValUpper)
{
    ((::Bnd_Range*)_NativeInstance)->TrimTo(theValUpper);
}

bool Macad::Occt::Bnd_Range::IsOut(double theValue)
{
    bool _result = ((::Bnd_Range*)_NativeInstance)->IsOut(theValue);
    return _result;
}

bool Macad::Occt::Bnd_Range::IsOut(Macad::Occt::Bnd_Range^ theRange)
{
    bool _result = ((::Bnd_Range*)_NativeInstance)->IsOut(*(::Bnd_Range*)theRange->NativeInstance);
    return _result;
}

bool Macad::Occt::Bnd_Range::Contains(double theValue)
{
    bool _result = ((::Bnd_Range*)_NativeInstance)->Contains(theValue);
    return _result;
}

bool Macad::Occt::Bnd_Range::Intersects(Macad::Occt::Bnd_Range^ theRange)
{
    bool _result = ((::Bnd_Range*)_NativeInstance)->Intersects(*(::Bnd_Range*)theRange->NativeInstance);
    return _result;
}

void Macad::Occt::Bnd_Range::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Bnd_Range*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Bnd_Range::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Bnd_Range*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Bnd_Tools
//---------------------------------------------------------------------

Macad::Occt::Bnd_Tools::Bnd_Tools()
    : Macad::Occt::BaseClass<::Bnd_Tools>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Bnd_Tools();
}


