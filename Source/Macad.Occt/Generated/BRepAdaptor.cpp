// Generated wrapper code for package BRepAdaptor

#include "OcctPCH.h"
#include "BRepAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Adaptor3d.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"
#include "Geom.h"
#include "Adaptor2d.h"


//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve()
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve();
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(theLower, theUpper);
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, true);
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(long long unsigned int theSize)
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(theSize);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Init(Macad::Occt::BRepAdaptor_Curve^ theValue)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Init(*(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::BRepAdaptor_Array1OfCurve::Size()
{
    long long unsigned int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Length()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Array1OfCurve::IsEmpty()
{
    bool _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Lower()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Upper()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Assign(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Assign(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_Array1OfCurve::CopyValues(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->CopyValues(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Move(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Move(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::First()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->First();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeFirst()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeFirst();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Last()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Last();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeLast()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeLast();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Value(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Value(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeValue(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeValue(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::At(long long unsigned int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->At(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeAt(long long unsigned int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeAt(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::SetValue(int theIndex, Macad::Occt::BRepAdaptor_Curve^ theItem)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->SetValue(theIndex, *(::BRepAdaptor_Curve*)theItem->NativeInstance);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::UpdateLowerBound(int theLower)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::UpdateUpperBound(int theUpper)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::BRepAdaptor_Array1OfCurve::IsDeletable()
{
    bool _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepAdaptor_Curve^>^ Macad::Occt::BRepAdaptor_Array1OfCurve::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepAdaptor_Curve^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepAdaptor_Array1OfCurve::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepAdaptor_Curve^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve::Iterator
//---------------------------------------------------------------------

void Macad::Occt::BRepAdaptor_Array1OfCurve::Iterator::Init(Macad::Occt::BRepAdaptor_Array1OfCurve^ theList)
{
    ((::BRepAdaptor_Array1OfCurve::Iterator*)_NativeInstance)->Init(*(::BRepAdaptor_Array1OfCurve*)theList->NativeInstance);
}

bool Macad::Occt::BRepAdaptor_Array1OfCurve::Iterator::More()
{
    bool _result = ((::BRepAdaptor_Array1OfCurve::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Iterator::Initialize(Macad::Occt::BRepAdaptor_Array1OfCurve^ theList)
{
    ((::BRepAdaptor_Array1OfCurve::Iterator*)_NativeInstance)->Initialize(*(::BRepAdaptor_Array1OfCurve*)theList->NativeInstance);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Iterator::Next()
{
    ((::BRepAdaptor_Array1OfCurve::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Iterator::Value()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve::Iterator*)_NativeInstance)->Value();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Iterator::ChangeValue()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve::Iterator*)_NativeInstance)->ChangeValue();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve
//---------------------------------------------------------------------

void Macad::Occt::BRepAdaptor_HArray1OfCurve::Init(Macad::Occt::BRepAdaptor_Curve^ theValue)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Init(*(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

long long unsigned int Macad::Occt::BRepAdaptor_HArray1OfCurve::Size()
{
    long long unsigned int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Length()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::BRepAdaptor_HArray1OfCurve::IsEmpty()
{
    bool _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Lower()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Upper()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::First()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->First();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeFirst()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeFirst();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Last()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Last();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeLast()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeLast();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Value(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Value(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeValue(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeValue(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::At(long long unsigned int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->At(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeAt(long long unsigned int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeAt(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::SetValue(int theIndex, Macad::Occt::BRepAdaptor_Curve^ theItem)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->SetValue(theIndex, *(::BRepAdaptor_Curve*)theItem->NativeInstance);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::UpdateLowerBound(int theLower)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::UpdateUpperBound(int theUpper)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::Resize(long long unsigned int theSize, bool theToCopyData)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Resize(theSize, theToCopyData);
}

bool Macad::Occt::BRepAdaptor_HArray1OfCurve::IsDeletable()
{
    bool _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve();
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(theLower, theUpper);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(int theLower, int theUpper, Macad::Occt::BRepAdaptor_Curve^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(theLower, theUpper, *(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::CreateDowncasted(::BRepAdaptor_HArray1OfCurve* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_HArray1OfCurve( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepAdaptor_Curve^>^ Macad::Occt::BRepAdaptor_HArray1OfCurve::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepAdaptor_Curve^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepAdaptor_HArray1OfCurve::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepAdaptor_Curve^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::BRepAdaptor_HArray1OfCurve::Iterator::More()
{
    bool _result = ((::BRepAdaptor_HArray1OfCurve::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::Iterator::Next()
{
    ((::BRepAdaptor_HArray1OfCurve::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Iterator::Value()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve::Iterator*)_NativeInstance)->Value();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Iterator::ChangeValue()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve::Iterator*)_NativeInstance)->ChangeValue();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve()
    : Macad::Occt::GeomAdaptor_TransformedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve();
}

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve(Macad::Occt::TopoDS_Edge^ E)
    : Macad::Occt::GeomAdaptor_TransformedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve(*(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::GeomAdaptor_TransformedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_Curve::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepAdaptor_Curve::Reset()
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Reset();
}

void Macad::Occt::BRepAdaptor_Curve::Initialize(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepAdaptor_Curve::Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepAdaptor_Curve::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepAdaptor_Curve*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

double Macad::Occt::BRepAdaptor_Curve::Tolerance()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Tolerance();
    return _result;
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_Curve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Curve::CreateDowncasted(::BRepAdaptor_Curve* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_CompCurve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve()
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve();
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa);
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, false);
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa, First, Last, Tol);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_CompCurve::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepAdaptor_CompCurve::Initialize(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Initialize(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa);
}

void Macad::Occt::BRepAdaptor_CompCurve::Initialize(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Initialize(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa, First, Last, Tol);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepAdaptor_CompCurve::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepAdaptor_CompCurve*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

void Macad::Occt::BRepAdaptor_CompCurve::Edge(double U, Macad::Occt::TopoDS_Edge^ E, double% UonE)
{
    pin_ptr<double> pp_UonE = &UonE;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Edge(U, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_UonE);
}

double Macad::Occt::BRepAdaptor_CompCurve::FirstParameter()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::BRepAdaptor_CompCurve::LastParameter()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->LastParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_CompCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::BRepAdaptor_CompCurve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::BRepAdaptor_CompCurve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_CompCurve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsClosed()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsPeriodic()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double Macad::Occt::BRepAdaptor_CompCurve::Period()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Period();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepAdaptor_CompCurve::EvalD0(double theU)
{
    ::gp_Pnt _nativeResult = ((::BRepAdaptor_CompCurve*)_NativeInstance)->EvalD0(theU);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::BRepAdaptor_CompCurve::EvalDN(double theU, int theN)
{
    ::gp_Vec _nativeResult = ((::BRepAdaptor_CompCurve*)_NativeInstance)->EvalDN(theU, theN);
    return Macad::Occt::Vec(_nativeResult);
}

double Macad::Occt::BRepAdaptor_CompCurve::Resolution(double R3d)
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::BRepAdaptor_CompCurve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_CurveType)_result;
}

Macad::Occt::gp_Lin^ Macad::Occt::BRepAdaptor_CompCurve::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::BRepAdaptor_CompCurve::Circle()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::BRepAdaptor_CompCurve::Ellipse()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::BRepAdaptor_CompCurve::Hyperbola()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::BRepAdaptor_CompCurve::Parabola()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::BRepAdaptor_CompCurve::Degree()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Degree();
    return _result;
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsRational()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsRational();
    return _result;
}

int Macad::Occt::BRepAdaptor_CompCurve::NbPoles()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::BRepAdaptor_CompCurve::NbKnots()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbKnots();
    return _result;
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::BRepAdaptor_CompCurve::Bezier()
{
    Handle(::Geom_BezierCurve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::BRepAdaptor_CompCurve::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::BRepAdaptor_CompCurve^ Macad::Occt::BRepAdaptor_CompCurve::CreateDowncasted(::BRepAdaptor_CompCurve* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_CompCurve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve2d
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d()
    : Macad::Occt::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve2d();
}

Macad::Occt::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::BRepAdaptor_Curve2d::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::BRepAdaptor_Curve2d*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepAdaptor_Curve2d::Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Curve2d*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepAdaptor_Curve2d::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepAdaptor_Curve2d*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepAdaptor_Curve2d::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepAdaptor_Curve2d*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::BRepAdaptor_Curve2d^ Macad::Occt::BRepAdaptor_Curve2d::CreateDowncasted(::BRepAdaptor_Curve2d* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_Curve2d( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Surface
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface()
    : Macad::Occt::GeomAdaptor_TransformedSurface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface();
}

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface(Macad::Occt::TopoDS_Face^ F, bool R)
    : Macad::Occt::GeomAdaptor_TransformedSurface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface(*(::TopoDS_Face*)F->NativeInstance, R);
}

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface(Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::GeomAdaptor_TransformedSurface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface(*(::TopoDS_Face*)F->NativeInstance, true);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepAdaptor_Surface::Initialize(Macad::Occt::TopoDS_Face^ F, bool Restriction)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F->NativeInstance, Restriction);
}

void Macad::Occt::BRepAdaptor_Surface::Initialize(Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F->NativeInstance, true);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepAdaptor_Surface::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepAdaptor_Surface*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

double Macad::Occt::BRepAdaptor_Surface::Tolerance()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->Tolerance();
    return _result;
}

Macad::Occt::BRepAdaptor_Surface^ Macad::Occt::BRepAdaptor_Surface::CreateDowncasted(::BRepAdaptor_Surface* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_Surface( instance );
}


