// Generated wrapper code for package Aspect

#include "OcctPCH.h"
#include "Aspect.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Quantity.h"
#include "Graphic3d.h"
#include "V3d.h"
#include "gp.h"
#include "WNT.h"
#include "TCollection.h"
#include "Image.h"
#include "AIS.h"


//---------------------------------------------------------------------
//  Class  Aspect_SequenceOfColor
//---------------------------------------------------------------------

int Macad::Occt::Aspect_SequenceOfColor::Length()
{
    int _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Length();
    return _result;
}

long long unsigned int Macad::Occt::Aspect_SequenceOfColor::Size()
{
    long long unsigned int _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::Aspect_SequenceOfColor::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

Macad::Occt::Aspect_SequenceOfColor::Aspect_SequenceOfColor()
    : Macad::Occt::BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SequenceOfColor();
}

Macad::Occt::Aspect_SequenceOfColor::Aspect_SequenceOfColor(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SequenceOfColor(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Aspect_SequenceOfColor::Lower()
{
    int _result = ::Aspect_SequenceOfColor::Lower();
    return _result;
}

int Macad::Occt::Aspect_SequenceOfColor::Upper()
{
    int _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Aspect_SequenceOfColor::IsEmpty()
{
    bool _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Aspect_SequenceOfColor::Reverse()
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Reverse();
}

void Macad::Occt::Aspect_SequenceOfColor::Exchange(long long unsigned int I, long long unsigned int J)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Aspect_SequenceOfColor::Exchange(int I, int J)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Aspect_SequenceOfColor::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Aspect_SequenceOfColor::Clear()
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Clear(nullptr);
}

Macad::Occt::Aspect_SequenceOfColor^ Macad::Occt::Aspect_SequenceOfColor::Assign(Macad::Occt::Aspect_SequenceOfColor^ theOther)
{
    ::Aspect_SequenceOfColor* _result = new ::Aspect_SequenceOfColor();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Assign(*(::Aspect_SequenceOfColor*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_SequenceOfColor(_result);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(Macad::Occt::Aspect_SequenceOfColor::Iterator^ thePosition)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(*(::Aspect_SequenceOfColor::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(long long unsigned int theIndex)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(int theIndex)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(int theFromIndex, int theToIndex)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Aspect_SequenceOfColor::Append(Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Append(*(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Append(Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Append(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Prepend(Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Prepend(*(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Prepend(Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Prepend(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertBefore(long long unsigned int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertBefore(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertBefore(long long unsigned int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertBefore(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(Macad::Occt::Aspect_SequenceOfColor::Iterator^ thePosition, Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(*(::Aspect_SequenceOfColor::Iterator*)thePosition->NativeInstance, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(long long unsigned int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(long long unsigned int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Split(long long unsigned int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Split(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Split(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Split(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::First()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeFirst()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Last()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeLast()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Value(long long unsigned int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Value(int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeValue(long long unsigned int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeValue(int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Aspect_SequenceOfColor::SetValue(long long unsigned int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::SetValue(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::At(long long unsigned int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->At(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeAt(long long unsigned int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

System::Collections::Generic::IEnumerator<Macad::Occt::Quantity_Color^>^ Macad::Occt::Aspect_SequenceOfColor::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Quantity_Color^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Aspect_SequenceOfColor::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Quantity_Color^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Aspect_SequenceOfColor::Iterator
//---------------------------------------------------------------------

Macad::Occt::Aspect_SequenceOfColor::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Aspect_SequenceOfColor::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SequenceOfColor::Iterator();
}

Macad::Occt::Aspect_SequenceOfColor::Iterator::Iterator(Macad::Occt::Aspect_SequenceOfColor^ theSeq, bool isStart)
    : Macad::Occt::BaseClass<::Aspect_SequenceOfColor::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SequenceOfColor::Iterator(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance, isStart);
}

Macad::Occt::Aspect_SequenceOfColor::Iterator::Iterator(Macad::Occt::Aspect_SequenceOfColor^ theSeq)
    : Macad::Occt::BaseClass<::Aspect_SequenceOfColor::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SequenceOfColor::Iterator(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance, true);
}

bool Macad::Occt::Aspect_SequenceOfColor::Iterator::More()
{
    bool _result = ((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Aspect_SequenceOfColor::Iterator::Next()
{
    ((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Iterator::Value()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Iterator::ChangeValue()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

bool Macad::Occt::Aspect_SequenceOfColor::Iterator::IsEqual(Macad::Occt::Aspect_SequenceOfColor::Iterator^ theOther)
{
    bool _result = ((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->IsEqual(*(::Aspect_SequenceOfColor::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Aspect_SequenceOfColor::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Aspect_SequenceOfColor::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Aspect_TouchMap
//---------------------------------------------------------------------

long long unsigned int Macad::Occt::Aspect_TouchMap::NbBuckets()
{
    long long unsigned int _result = ((::Aspect_TouchMap*)_NativeInstance)->NbBuckets();
    return _result;
}

int Macad::Occt::Aspect_TouchMap::Extent()
{
    int _result = ((::Aspect_TouchMap*)_NativeInstance)->Extent();
    return _result;
}

int Macad::Occt::Aspect_TouchMap::Length()
{
    int _result = ((::Aspect_TouchMap*)_NativeInstance)->Length();
    return _result;
}

long long unsigned int Macad::Occt::Aspect_TouchMap::Size()
{
    long long unsigned int _result = ((::Aspect_TouchMap*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::Aspect_TouchMap::IsEmpty()
{
    bool _result = ((::Aspect_TouchMap*)_NativeInstance)->IsEmpty();
    return _result;
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::Aspect_TouchMap::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::Aspect_TouchMap*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

Macad::Occt::Aspect_TouchMap::Aspect_TouchMap()
    : Macad::Occt::BaseClass<::Aspect_TouchMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap();
}

Macad::Occt::Aspect_TouchMap::Aspect_TouchMap(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Aspect_TouchMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::Aspect_TouchMap::Aspect_TouchMap(long long unsigned int theNbBuckets)
    : Macad::Occt::BaseClass<::Aspect_TouchMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap(theNbBuckets, nullptr);
}

Macad::Occt::Aspect_TouchMap::Aspect_TouchMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Aspect_TouchMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::Aspect_TouchMap::Aspect_TouchMap(int theNbBuckets)
    : Macad::Occt::BaseClass<::Aspect_TouchMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap(theNbBuckets, nullptr);
}

void Macad::Occt::Aspect_TouchMap::Exchange(Macad::Occt::Aspect_TouchMap^ theOther)
{
    ((::Aspect_TouchMap*)_NativeInstance)->Exchange(*(::Aspect_TouchMap*)theOther->NativeInstance);
}

Macad::Occt::Aspect_TouchMap^ Macad::Occt::Aspect_TouchMap::Assign(Macad::Occt::Aspect_TouchMap^ theOther)
{
    ::Aspect_TouchMap* _result = new ::Aspect_TouchMap();
    *_result = ((::Aspect_TouchMap*)_NativeInstance)->Assign(*(::Aspect_TouchMap*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TouchMap(_result);
}

void Macad::Occt::Aspect_TouchMap::ReSize(long long unsigned int N)
{
    ((::Aspect_TouchMap*)_NativeInstance)->ReSize(N);
}

void Macad::Occt::Aspect_TouchMap::ReSize(int N)
{
    ((::Aspect_TouchMap*)_NativeInstance)->ReSize(N);
}

int Macad::Occt::Aspect_TouchMap::Add(long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    int _result = ((::Aspect_TouchMap*)_NativeInstance)->Add(*(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::TryBound(long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    *_result = ((::Aspect_TouchMap*)_NativeInstance)->TryBound(*(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

bool Macad::Occt::Aspect_TouchMap::TryBind(long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    bool _result = ((::Aspect_TouchMap*)_NativeInstance)->TryBind(*(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
    return _result;
}

bool Macad::Occt::Aspect_TouchMap::Bind(long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    bool _result = ((::Aspect_TouchMap*)_NativeInstance)->Bind(*(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::Bound(long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    ::Aspect_Touch* _result = ((::Aspect_TouchMap*)_NativeInstance)->Bound(*(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

bool Macad::Occt::Aspect_TouchMap::Contains(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    bool _result = ((::Aspect_TouchMap*)_NativeInstance)->Contains(*(long long unsigned int*)pp_theKey1);
    return _result;
}

void Macad::Occt::Aspect_TouchMap::Substitute(long long unsigned int theIndex, long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    ((::Aspect_TouchMap*)_NativeInstance)->Substitute(theIndex, *(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_TouchMap::Substitute(int theIndex, long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    ((::Aspect_TouchMap*)_NativeInstance)->Substitute(theIndex, *(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_TouchMap::Swap(long long unsigned int theIndex1, long long unsigned int theIndex2)
{
    ((::Aspect_TouchMap*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::Aspect_TouchMap::Swap(int theIndex1, int theIndex2)
{
    ((::Aspect_TouchMap*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::Aspect_TouchMap::RemoveLast()
{
    ((::Aspect_TouchMap*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::Aspect_TouchMap::RemoveFromIndex(long long unsigned int theIndex)
{
    ((::Aspect_TouchMap*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::Aspect_TouchMap::RemoveFromIndex(int theIndex)
{
    ((::Aspect_TouchMap*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::Aspect_TouchMap::RemoveKey(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    ((::Aspect_TouchMap*)_NativeInstance)->RemoveKey(*(long long unsigned int*)pp_theKey1);
}

long long unsigned int Macad::Occt::Aspect_TouchMap::FindKey(long long unsigned int theIndex)
{
    long long unsigned int _result = ((::Aspect_TouchMap*)_NativeInstance)->FindKey(theIndex);
    return _result;
}

long long unsigned int Macad::Occt::Aspect_TouchMap::FindKey(int theIndex)
{
    long long unsigned int _result = ((::Aspect_TouchMap*)_NativeInstance)->FindKey(theIndex);
    return _result;
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::FindFromIndex(long long unsigned int theIndex)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    *_result = (::Aspect_Touch)((::Aspect_TouchMap*)_NativeInstance)->FindFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::FindFromIndex(int theIndex)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    *_result = (::Aspect_Touch)((::Aspect_TouchMap*)_NativeInstance)->FindFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::ChangeFromIndex(long long unsigned int theIndex)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    *_result = ((::Aspect_TouchMap*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::ChangeFromIndex(int theIndex)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    *_result = ((::Aspect_TouchMap*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

int Macad::Occt::Aspect_TouchMap::FindIndex(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    int _result = ((::Aspect_TouchMap*)_NativeInstance)->FindIndex(*(long long unsigned int*)pp_theKey1);
    return _result;
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::FindFromKey(long long unsigned int theKey1)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    *_result = (::Aspect_Touch)((::Aspect_TouchMap*)_NativeInstance)->FindFromKey(*(long long unsigned int*)pp_theKey1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::ChangeFromKey(long long unsigned int theKey1)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    *_result = ((::Aspect_TouchMap*)_NativeInstance)->ChangeFromKey(*(long long unsigned int*)pp_theKey1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::Seek(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    const ::Aspect_Touch* _result = ((::Aspect_TouchMap*)_NativeInstance)->Seek(*(long long unsigned int*)pp_theKey1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch((::Aspect_Touch*)_result);
}

Macad::Occt::Aspect_Touch^ Macad::Occt::Aspect_TouchMap::ChangeSeek(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    ::Aspect_Touch* _result = ((::Aspect_TouchMap*)_NativeInstance)->ChangeSeek(*(long long unsigned int*)pp_theKey1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Touch(_result);
}

bool Macad::Occt::Aspect_TouchMap::FindFromKey(long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theValue)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    bool _result = ((::Aspect_TouchMap*)_NativeInstance)->FindFromKey(*(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theValue->NativeInstance);
    return _result;
}

void Macad::Occt::Aspect_TouchMap::Clear(bool doReleaseMemory)
{
    ((::Aspect_TouchMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Aspect_TouchMap::Clear()
{
    ((::Aspect_TouchMap*)_NativeInstance)->Clear(false);
}

void Macad::Occt::Aspect_TouchMap::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Aspect_TouchMap*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}



//---------------------------------------------------------------------
//  Class  Aspect_TouchMap::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Aspect_XRAnalogActionData
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRAnalogActionData::Aspect_XRAnalogActionData()
    : Macad::Occt::BaseClass<::Aspect_XRAnalogActionData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRAnalogActionData();
}

bool Macad::Occt::Aspect_XRAnalogActionData::IsChanged()
{
    bool _result = ((::Aspect_XRAnalogActionData*)_NativeInstance)->IsChanged();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Aspect_XRDigitalActionData
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRDigitalActionData::Aspect_XRDigitalActionData()
    : Macad::Occt::BaseClass<::Aspect_XRDigitalActionData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRDigitalActionData();
}



//---------------------------------------------------------------------
//  Class  Aspect_XRHapticActionData
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRHapticActionData::Aspect_XRHapticActionData()
    : Macad::Occt::BaseClass<::Aspect_XRHapticActionData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRHapticActionData();
}

bool Macad::Occt::Aspect_XRHapticActionData::IsValid()
{
    bool _result = ((::Aspect_XRHapticActionData*)_NativeInstance)->IsValid();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePose
//---------------------------------------------------------------------

Macad::Occt::Aspect_TrackedDevicePose::Aspect_TrackedDevicePose()
    : Macad::Occt::BaseClass<::Aspect_TrackedDevicePose>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TrackedDevicePose();
}



//---------------------------------------------------------------------
//  Class  Aspect_XRPoseActionData
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRPoseActionData::Aspect_XRPoseActionData()
    : Macad::Occt::BaseClass<::Aspect_XRPoseActionData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRPoseActionData();
}



//---------------------------------------------------------------------
//  Class  Aspect_ScrollDelta
//---------------------------------------------------------------------

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta()
    : Macad::Occt::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta();
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(Macad::Occt::Graphic3d_Vec2i^ thePnt, double theValue, unsigned int theFlags)
    : Macad::Occt::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, theValue, theFlags);
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(Macad::Occt::Graphic3d_Vec2i^ thePnt, double theValue)
    : Macad::Occt::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, theValue, Aspect_VKeyFlags_NONE);
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(double theValue, unsigned int theFlags)
    : Macad::Occt::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta(theValue, theFlags);
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(double theValue)
    : Macad::Occt::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta(theValue, Aspect_VKeyFlags_NONE);
}

bool Macad::Occt::Aspect_ScrollDelta::HasPoint()
{
    bool _result = ((::Aspect_ScrollDelta*)_NativeInstance)->HasPoint();
    return _result;
}

void Macad::Occt::Aspect_ScrollDelta::ResetPoint()
{
    ((::Aspect_ScrollDelta*)_NativeInstance)->ResetPoint();
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectFillAreaDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_AspectFillAreaDefinitionError("");
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Aspect_AspectFillAreaDefinitionError::ExceptionType()
{
    Standard_CString _result = ((::Aspect_AspectFillAreaDefinitionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectLineDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Aspect_AspectLineDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_AspectLineDefinitionError("");
}

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Aspect_AspectLineDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Aspect_AspectLineDefinitionError::ExceptionType()
{
    Standard_CString _result = ((::Aspect_AspectLineDefinitionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectMarkerDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Aspect_AspectMarkerDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_AspectMarkerDefinitionError("");
}

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Aspect_AspectMarkerDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Aspect_AspectMarkerDefinitionError::ExceptionType()
{
    Standard_CString _result = ((::Aspect_AspectMarkerDefinitionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_Background
//---------------------------------------------------------------------

Macad::Occt::Aspect_Background::Aspect_Background()
    : Macad::Occt::BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Background();
}

Macad::Occt::Aspect_Background::Aspect_Background(Macad::Occt::Quantity_Color^ AColor)
    : Macad::Occt::BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Background(*(::Quantity_Color*)AColor->NativeInstance);
}

void Macad::Occt::Aspect_Background::SetColor(Macad::Occt::Quantity_Color^ AColor)
{
    ((::Aspect_Background*)_NativeInstance)->SetColor(*(::Quantity_Color*)AColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_Background::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_Background*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Aspect_Background::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Background*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Aspect_Background::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Background*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Aspect_Grid
//---------------------------------------------------------------------

void Macad::Occt::Aspect_Grid::SetXOrigin(double anOrigin)
{
    ((::Aspect_Grid*)_NativeInstance)->SetXOrigin(anOrigin);
}

void Macad::Occt::Aspect_Grid::SetYOrigin(double anOrigin)
{
    ((::Aspect_Grid*)_NativeInstance)->SetYOrigin(anOrigin);
}

void Macad::Occt::Aspect_Grid::SetRotationAngle(double anAngle)
{
    ((::Aspect_Grid*)_NativeInstance)->SetRotationAngle(anAngle);
}

void Macad::Occt::Aspect_Grid::Rotate(double anAngle)
{
    ((::Aspect_Grid*)_NativeInstance)->Rotate(anAngle);
}

void Macad::Occt::Aspect_Grid::Translate(double aDx, double aDy)
{
    ((::Aspect_Grid*)_NativeInstance)->Translate(aDx, aDy);
}

void Macad::Occt::Aspect_Grid::SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor)
{
    ((::Aspect_Grid*)_NativeInstance)->SetColors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void Macad::Occt::Aspect_Grid::Hit(double X, double Y, double% gridX, double% gridY)
{
    pin_ptr<double> pp_gridX = &gridX;
    pin_ptr<double> pp_gridY = &gridY;
    ((::Aspect_Grid*)_NativeInstance)->Hit(X, Y, *(double*)pp_gridX, *(double*)pp_gridY);
}

void Macad::Occt::Aspect_Grid::Compute(double X, double Y, double% gridX, double% gridY)
{
    pin_ptr<double> pp_gridX = &gridX;
    pin_ptr<double> pp_gridY = &gridY;
    ((::Aspect_Grid*)_NativeInstance)->Compute(X, Y, *(double*)pp_gridX, *(double*)pp_gridY);
}

void Macad::Occt::Aspect_Grid::Activate()
{
    ((::Aspect_Grid*)_NativeInstance)->Activate();
}

void Macad::Occt::Aspect_Grid::Deactivate()
{
    ((::Aspect_Grid*)_NativeInstance)->Deactivate();
}

double Macad::Occt::Aspect_Grid::XOrigin()
{
    double _result = ((::Aspect_Grid*)_NativeInstance)->XOrigin();
    return _result;
}

double Macad::Occt::Aspect_Grid::YOrigin()
{
    double _result = ((::Aspect_Grid*)_NativeInstance)->YOrigin();
    return _result;
}

double Macad::Occt::Aspect_Grid::RotationAngle()
{
    double _result = ((::Aspect_Grid*)_NativeInstance)->RotationAngle();
    return _result;
}

bool Macad::Occt::Aspect_Grid::IsActive()
{
    bool _result = ((::Aspect_Grid*)_NativeInstance)->IsActive();
    return _result;
}

void Macad::Occt::Aspect_Grid::Colors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor)
{
    ((::Aspect_Grid*)_NativeInstance)->Colors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void Macad::Occt::Aspect_Grid::SetDrawMode(Macad::Occt::Aspect_GridDrawMode aDrawMode)
{
    ((::Aspect_Grid*)_NativeInstance)->SetDrawMode((::Aspect_GridDrawMode)aDrawMode);
}

Macad::Occt::Aspect_GridDrawMode Macad::Occt::Aspect_Grid::DrawMode()
{
    ::Aspect_GridDrawMode _result = ((::Aspect_Grid*)_NativeInstance)->DrawMode();
    return (Macad::Occt::Aspect_GridDrawMode)_result;
}

void Macad::Occt::Aspect_Grid::Display()
{
    ((::Aspect_Grid*)_NativeInstance)->Display();
}

void Macad::Occt::Aspect_Grid::Erase()
{
    ((::Aspect_Grid*)_NativeInstance)->Erase();
}

bool Macad::Occt::Aspect_Grid::IsDisplayed()
{
    bool _result = ((::Aspect_Grid*)_NativeInstance)->IsDisplayed();
    return _result;
}

void Macad::Occt::Aspect_Grid::Init()
{
    ((::Aspect_Grid*)_NativeInstance)->Init();
}

void Macad::Occt::Aspect_Grid::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Grid*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Aspect_Grid::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Grid*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Aspect_Grid^ Macad::Occt::Aspect_Grid::CreateDowncasted(::Aspect_Grid* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Aspect_CircularGrid)))
        return Macad::Occt::Aspect_CircularGrid::CreateDowncasted((::Aspect_CircularGrid*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_RectangularGrid)))
        return Macad::Occt::Aspect_RectangularGrid::CreateDowncasted((::Aspect_RectangularGrid*)instance);
    
    return gcnew Macad::Occt::Aspect_Grid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_CircularGrid
//---------------------------------------------------------------------

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin, double aRotationAngle)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_CircularGrid::SetRadiusStep(double aStep)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetRadiusStep(aStep);
}

void Macad::Occt::Aspect_CircularGrid::SetDivisionNumber(int aNumber)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetDivisionNumber(aNumber);
}

void Macad::Occt::Aspect_CircularGrid::SetGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetGridValues(XOrigin, YOrigin, RadiusStep, DivisionNumber, RotationAngle);
}

void Macad::Occt::Aspect_CircularGrid::Compute(double X, double Y, double% gridX, double% gridY)
{
    pin_ptr<double> pp_gridX = &gridX;
    pin_ptr<double> pp_gridY = &gridY;
    ((::Aspect_CircularGrid*)_NativeInstance)->Compute(X, Y, *(double*)pp_gridX, *(double*)pp_gridY);
}

double Macad::Occt::Aspect_CircularGrid::RadiusStep()
{
    double _result = ((::Aspect_CircularGrid*)_NativeInstance)->RadiusStep();
    return _result;
}

int Macad::Occt::Aspect_CircularGrid::DivisionNumber()
{
    int _result = ((::Aspect_CircularGrid*)_NativeInstance)->DivisionNumber();
    return _result;
}

void Macad::Occt::Aspect_CircularGrid::SetRadius(double theRadius)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetRadius(theRadius);
}

double Macad::Occt::Aspect_CircularGrid::Radius()
{
    double _result = ((::Aspect_CircularGrid*)_NativeInstance)->Radius();
    return _result;
}

void Macad::Occt::Aspect_CircularGrid::SetZOffset(double theOffset)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetZOffset(theOffset);
}

double Macad::Occt::Aspect_CircularGrid::ZOffset()
{
    double _result = ((::Aspect_CircularGrid*)_NativeInstance)->ZOffset();
    return _result;
}

void Macad::Occt::Aspect_CircularGrid::SetArcRange(double theStart, double theEnd)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetArcRange(theStart, theEnd);
}

double Macad::Occt::Aspect_CircularGrid::AngleStart()
{
    double _result = ((::Aspect_CircularGrid*)_NativeInstance)->AngleStart();
    return _result;
}

double Macad::Occt::Aspect_CircularGrid::AngleEnd()
{
    double _result = ((::Aspect_CircularGrid*)_NativeInstance)->AngleEnd();
    return _result;
}

bool Macad::Occt::Aspect_CircularGrid::IsArc()
{
    bool _result = ((::Aspect_CircularGrid*)_NativeInstance)->IsArc();
    return _result;
}

void Macad::Occt::Aspect_CircularGrid::Init()
{
    ((::Aspect_CircularGrid*)_NativeInstance)->Init();
}

void Macad::Occt::Aspect_CircularGrid::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_CircularGrid*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Aspect_CircularGrid::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_CircularGrid*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Aspect_CircularGrid^ Macad::Occt::Aspect_CircularGrid::CreateDowncasted(::Aspect_CircularGrid* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::V3d_CircularGrid)))
        return Macad::Occt::V3d_CircularGrid::CreateDowncasted((::V3d_CircularGrid*)instance);
    
    return gcnew Macad::Occt::Aspect_CircularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_DisplayConnectionDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_DisplayConnectionDefinitionError("");
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Aspect_DisplayConnectionDefinitionError::ExceptionType()
{
    Standard_CString _result = ((::Aspect_DisplayConnectionDefinitionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_GenId
//---------------------------------------------------------------------

Macad::Occt::Aspect_GenId::Aspect_GenId()
    : Macad::Occt::BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GenId();
}

Macad::Occt::Aspect_GenId::Aspect_GenId(int theLow, int theUpper)
    : Macad::Occt::BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GenId(theLow, theUpper);
}

void Macad::Occt::Aspect_GenId::Free()
{
    ((::Aspect_GenId*)_NativeInstance)->Free();
}

void Macad::Occt::Aspect_GenId::Free(int theId)
{
    ((::Aspect_GenId*)_NativeInstance)->Free(theId);
}

bool Macad::Occt::Aspect_GenId::HasFree()
{
    bool _result = ((::Aspect_GenId*)_NativeInstance)->HasFree();
    return _result;
}

int Macad::Occt::Aspect_GenId::Available()
{
    int _result = ((::Aspect_GenId*)_NativeInstance)->Available();
    return _result;
}

int Macad::Occt::Aspect_GenId::Lower()
{
    int _result = ((::Aspect_GenId*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Aspect_GenId::Next()
{
    int _result = ((::Aspect_GenId*)_NativeInstance)->Next();
    return _result;
}

bool Macad::Occt::Aspect_GenId::Next(int% theId)
{
    pin_ptr<int> pp_theId = &theId;
    bool _result = ((::Aspect_GenId*)_NativeInstance)->Next(*(int*)pp_theId);
    return _result;
}

int Macad::Occt::Aspect_GenId::Upper()
{
    int _result = ((::Aspect_GenId*)_NativeInstance)->Upper();
    return _result;
}

void Macad::Occt::Aspect_GenId::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_GenId*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Aspect_GenId::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_GenId*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Aspect_GradientBackground
//---------------------------------------------------------------------

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground()
    : Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GradientBackground();
}

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theMethod)
    : Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GradientBackground(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theMethod);
}

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2)
    : Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GradientBackground(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, Aspect_GradientFillMethod_Horizontal);
}

void Macad::Occt::Aspect_GradientBackground::SetColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theMethod)
{
    ((::Aspect_GradientBackground*)_NativeInstance)->SetColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theMethod);
}

void Macad::Occt::Aspect_GradientBackground::SetColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2)
{
    ((::Aspect_GradientBackground*)_NativeInstance)->SetColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, Aspect_GradientFillMethod_Horizontal);
}

void Macad::Occt::Aspect_GradientBackground::Colors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2)
{
    ((::Aspect_GradientBackground*)_NativeInstance)->Colors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance);
}

Macad::Occt::Aspect_GradientFillMethod Macad::Occt::Aspect_GradientBackground::BgGradientFillMethod()
{
    ::Aspect_GradientFillMethod _result = ((::Aspect_GradientBackground*)_NativeInstance)->BgGradientFillMethod();
    return (Macad::Occt::Aspect_GradientFillMethod)_result;
}

void Macad::Occt::Aspect_GradientBackground::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_GradientBackground*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Aspect_GradientBackground::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_GradientBackground*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Aspect_GraphicDeviceDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GraphicDeviceDefinitionError("");
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Aspect_GraphicDeviceDefinitionError::ExceptionType()
{
    Standard_CString _result = ((::Aspect_GraphicDeviceDefinitionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_GridParams
//---------------------------------------------------------------------

Macad::Occt::Aspect_GridParams::Aspect_GridParams()
    : Macad::Occt::BaseClass<::Aspect_GridParams>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GridParams();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_GridParams::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_GridParams*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Aspect_GridParams::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::Aspect_GridParams::Origin()
{
    ::gp_Pnt _nativeResult = ((::Aspect_GridParams*)_NativeInstance)->Origin();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Aspect_GridParams::SetOrigin(Macad::Occt::Pnt theOrigin)
{
    pin_ptr<Macad::Occt::Pnt> pp_theOrigin = &theOrigin;
    ((::Aspect_GridParams*)_NativeInstance)->SetOrigin(*(gp_Pnt*)pp_theOrigin);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_GridParams::AccentColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_GridParams*)_NativeInstance)->AccentColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Aspect_GridParams::SetAccentColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetAccentColor(*(::Quantity_Color*)theColor->NativeInstance);
}

double Macad::Occt::Aspect_GridParams::AccentScaleX()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->AccentScaleX();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetAccentScaleX(double theScale)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetAccentScaleX(theScale);
}

double Macad::Occt::Aspect_GridParams::AccentScaleY()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->AccentScaleY();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetAccentScaleY(double theScale)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetAccentScaleY(theScale);
}

double Macad::Occt::Aspect_GridParams::AccentAngularScale()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->AccentAngularScale();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetAccentAngularScale(double theScale)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetAccentAngularScale(theScale);
}

double Macad::Occt::Aspect_GridParams::Scale()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->Scale();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetScale(double theScale)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetScale(theScale);
}

double Macad::Occt::Aspect_GridParams::ScaleY()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->ScaleY();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetScaleY(double theScaleY)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetScaleY(theScaleY);
}

double Macad::Occt::Aspect_GridParams::EffectiveScaleY()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->EffectiveScaleY();
    return _result;
}

double Macad::Occt::Aspect_GridParams::LineThickness()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->LineThickness();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetLineThickness(double theThickness)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetLineThickness(theThickness);
}

double Macad::Occt::Aspect_GridParams::RotationAngle()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->RotationAngle();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetRotationAngle(double theAngle)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetRotationAngle(theAngle);
}

int Macad::Occt::Aspect_GridParams::AngularDivisions()
{
    int _result = ((::Aspect_GridParams*)_NativeInstance)->AngularDivisions();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetAngularDivisions(int theDivisions)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetAngularDivisions(theDivisions);
}

bool Macad::Occt::Aspect_GridParams::IsCircular()
{
    bool _result = ((::Aspect_GridParams*)_NativeInstance)->IsCircular();
    return _result;
}

double Macad::Occt::Aspect_GridParams::SizeX()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->SizeX();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetSizeX(double theSize)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetSizeX(theSize);
}

double Macad::Occt::Aspect_GridParams::SizeY()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->SizeY();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetSizeY(double theSize)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetSizeY(theSize);
}

double Macad::Occt::Aspect_GridParams::Radius()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->Radius();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetRadius(double theRadius)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetRadius(theRadius);
}

double Macad::Occt::Aspect_GridParams::ZOffset()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->ZOffset();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetZOffset(double theOffset)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetZOffset(theOffset);
}

double Macad::Occt::Aspect_GridParams::AngleStart()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->AngleStart();
    return _result;
}

double Macad::Occt::Aspect_GridParams::AngleEnd()
{
    double _result = ((::Aspect_GridParams*)_NativeInstance)->AngleEnd();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetArcRange(double theStart, double theEnd)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetArcRange(theStart, theEnd);
}

bool Macad::Occt::Aspect_GridParams::IsBounded()
{
    bool _result = ((::Aspect_GridParams*)_NativeInstance)->IsBounded();
    return _result;
}

bool Macad::Occt::Aspect_GridParams::IsArc()
{
    bool _result = ((::Aspect_GridParams*)_NativeInstance)->IsArc();
    return _result;
}

Macad::Occt::Aspect_GridDrawMode Macad::Occt::Aspect_GridParams::DrawMode()
{
    ::Aspect_GridDrawMode _result = ((::Aspect_GridParams*)_NativeInstance)->DrawMode();
    return (Macad::Occt::Aspect_GridDrawMode)_result;
}

void Macad::Occt::Aspect_GridParams::SetDrawMode(Macad::Occt::Aspect_GridDrawMode theMode)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetDrawMode((::Aspect_GridDrawMode)theMode);
}

bool Macad::Occt::Aspect_GridParams::IsBackground()
{
    bool _result = ((::Aspect_GridParams*)_NativeInstance)->IsBackground();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetIsBackground(bool theIsBackground)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetIsBackground(theIsBackground);
}

bool Macad::Occt::Aspect_GridParams::IsDrawAxis()
{
    bool _result = ((::Aspect_GridParams*)_NativeInstance)->IsDrawAxis();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetIsDrawAxis(bool theIsDrawAxis)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetIsDrawAxis(theIsDrawAxis);
}

bool Macad::Occt::Aspect_GridParams::IsViewAdaptive()
{
    bool _result = ((::Aspect_GridParams*)_NativeInstance)->IsViewAdaptive();
    return _result;
}

void Macad::Occt::Aspect_GridParams::SetIsViewAdaptive(bool theIsViewAdaptive)
{
    ((::Aspect_GridParams*)_NativeInstance)->SetIsViewAdaptive(theIsViewAdaptive);
}



//---------------------------------------------------------------------
//  Class  Aspect_IdentDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Aspect_IdentDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_IdentDefinitionError("");
}

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Aspect_IdentDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Aspect_IdentDefinitionError::ExceptionType()
{
    Standard_CString _result = ((::Aspect_IdentDefinitionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_Window
//---------------------------------------------------------------------

bool Macad::Occt::Aspect_Window::IsVirtual()
{
    bool _result = ((::Aspect_Window*)_NativeInstance)->IsVirtual();
    return _result;
}

void Macad::Occt::Aspect_Window::SetVirtual(bool theVirtual)
{
    ((::Aspect_Window*)_NativeInstance)->SetVirtual(theVirtual);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Aspect_Window::TopLeft()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Aspect_Window::Dimensions()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Aspect_Background^ Macad::Occt::Aspect_Window::Background()
{
    ::Aspect_Background* _result = new ::Aspect_Background();
    *_result = ((::Aspect_Window*)_NativeInstance)->Background();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Background(_result);
}

Macad::Occt::Aspect_FillMethod Macad::Occt::Aspect_Window::BackgroundFillMethod()
{
    ::Aspect_FillMethod _result = ((::Aspect_Window*)_NativeInstance)->BackgroundFillMethod();
    return (Macad::Occt::Aspect_FillMethod)_result;
}

Macad::Occt::Aspect_GradientBackground^ Macad::Occt::Aspect_Window::GradientBackground()
{
    ::Aspect_GradientBackground* _result = new ::Aspect_GradientBackground();
    *_result = ((::Aspect_Window*)_NativeInstance)->GradientBackground();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_GradientBackground(_result);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Aspect_Background^ theBack)
{
    ((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Aspect_Background*)theBack->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Aspect_GradientBackground^ theBackground)
{
    ((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Aspect_GradientBackground*)theBackground->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Quantity_Color^ theFirstColor, Macad::Occt::Quantity_Color^ theSecondColor, Macad::Occt::Aspect_GradientFillMethod theFillMethod)
{
    ((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Quantity_Color*)theFirstColor->NativeInstance, *(::Quantity_Color*)theSecondColor->NativeInstance, (::Aspect_GradientFillMethod)theFillMethod);
}

bool Macad::Occt::Aspect_Window::IsMapped()
{
    bool _result = ((::Aspect_Window*)_NativeInstance)->IsMapped();
    return _result;
}

void Macad::Occt::Aspect_Window::Map()
{
    ((::Aspect_Window*)_NativeInstance)->Map();
}

void Macad::Occt::Aspect_Window::Unmap()
{
    ((::Aspect_Window*)_NativeInstance)->Unmap();
}

Macad::Occt::Aspect_TypeOfResize Macad::Occt::Aspect_Window::DoResize()
{
    ::Aspect_TypeOfResize _result = ((::Aspect_Window*)_NativeInstance)->DoResize();
    return (Macad::Occt::Aspect_TypeOfResize)_result;
}

bool Macad::Occt::Aspect_Window::DoMapping()
{
    bool _result = ((::Aspect_Window*)_NativeInstance)->DoMapping();
    return _result;
}

double Macad::Occt::Aspect_Window::Ratio()
{
    double _result = ((::Aspect_Window*)_NativeInstance)->Ratio();
    return _result;
}

void Macad::Occt::Aspect_Window::Position(int% X1, int% Y1, int% X2, int% Y2)
{
    pin_ptr<int> pp_X1 = &X1;
    pin_ptr<int> pp_Y1 = &Y1;
    pin_ptr<int> pp_X2 = &X2;
    pin_ptr<int> pp_Y2 = &Y2;
    ((::Aspect_Window*)_NativeInstance)->Position(*(int*)pp_X1, *(int*)pp_Y1, *(int*)pp_X2, *(int*)pp_Y2);
}

void Macad::Occt::Aspect_Window::Size(int% Width, int% Height)
{
    pin_ptr<int> pp_Width = &Width;
    pin_ptr<int> pp_Height = &Height;
    ((::Aspect_Window*)_NativeInstance)->Size(*(int*)pp_Width, *(int*)pp_Height);
}

System::IntPtr Macad::Occt::Aspect_Window::NativeHandle()
{
    void* _result = ((::Aspect_Window*)_NativeInstance)->NativeHandle();
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::Aspect_Window::NativeParentHandle()
{
    void* _result = ((::Aspect_Window*)_NativeInstance)->NativeParentHandle();
    return System::IntPtr(_result);
}

void Macad::Occt::Aspect_Window::SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle)
{
    ((::Aspect_Window*)_NativeInstance)->SetTitle(*(::TCollection_AsciiString*)theTitle->NativeInstance);
}

double Macad::Occt::Aspect_Window::DevicePixelRatio()
{
    double _result = ((::Aspect_Window*)_NativeInstance)->DevicePixelRatio();
    return _result;
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Aspect_Window::ConvertPointToBacking(Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Aspect_Window::ConvertPointFromBacking(Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Aspect_Window::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Window*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Aspect_Window::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Window*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Aspect_Window^ Macad::Occt::Aspect_Window::CreateDowncasted(::Aspect_Window* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::WNT_Window)))
        return Macad::Occt::WNT_Window::CreateDowncasted((::WNT_Window*)instance);
    
    return gcnew Macad::Occt::Aspect_Window( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRAction
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRAction::Aspect_XRAction(Macad::Occt::TCollection_AsciiString^ theId, Macad::Occt::Aspect_XRActionType theType)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_XRAction(*(::TCollection_AsciiString*)theId->NativeInstance, (::Aspect_XRActionType)theType);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_XRAction::Id()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Aspect_XRAction*)_NativeInstance)->Id();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Aspect_XRActionType Macad::Occt::Aspect_XRAction::Type()
{
    ::Aspect_XRActionType _result = ((::Aspect_XRAction*)_NativeInstance)->Type();
    return (Macad::Occt::Aspect_XRActionType)_result;
}

bool Macad::Occt::Aspect_XRAction::IsValid()
{
    bool _result = ((::Aspect_XRAction*)_NativeInstance)->IsValid();
    return _result;
}

long long unsigned int Macad::Occt::Aspect_XRAction::RawHandle()
{
    long long unsigned int _result = ((::Aspect_XRAction*)_NativeInstance)->RawHandle();
    return _result;
}

void Macad::Occt::Aspect_XRAction::SetRawHandle(long long unsigned int theHande)
{
    ((::Aspect_XRAction*)_NativeInstance)->SetRawHandle(theHande);
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRAction::CreateDowncasted(::Aspect_XRAction* instance)
{
    return gcnew Macad::Occt::Aspect_XRAction( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRActionSet
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRActionSet::Aspect_XRActionSet(Macad::Occt::TCollection_AsciiString^ theId)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_XRActionSet(*(::TCollection_AsciiString*)theId->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_XRActionSet::Id()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Aspect_XRActionSet*)_NativeInstance)->Id();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

long long unsigned int Macad::Occt::Aspect_XRActionSet::RawHandle()
{
    long long unsigned int _result = ((::Aspect_XRActionSet*)_NativeInstance)->RawHandle();
    return _result;
}

void Macad::Occt::Aspect_XRActionSet::SetRawHandle(long long unsigned int theHande)
{
    ((::Aspect_XRActionSet*)_NativeInstance)->SetRawHandle(theHande);
}

void Macad::Occt::Aspect_XRActionSet::AddAction(Macad::Occt::Aspect_XRAction^ theAction)
{
    ((::Aspect_XRActionSet*)_NativeInstance)->AddAction(Handle(::Aspect_XRAction)(theAction->NativeInstance));
}

Macad::Occt::Aspect_XRActionSet^ Macad::Occt::Aspect_XRActionSet::CreateDowncasted(::Aspect_XRActionSet* instance)
{
    return gcnew Macad::Occt::Aspect_XRActionSet( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRSession
//---------------------------------------------------------------------

bool Macad::Occt::Aspect_XRSession::IsOpen()
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->IsOpen();
    return _result;
}

bool Macad::Occt::Aspect_XRSession::Open()
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->Open();
    return _result;
}

void Macad::Occt::Aspect_XRSession::Close()
{
    ((::Aspect_XRSession*)_NativeInstance)->Close();
}

bool Macad::Occt::Aspect_XRSession::WaitPoses()
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->WaitPoses();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Aspect_XRSession::RecommendedViewport()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Aspect_XRSession::HasProjectionFrustums()
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->HasProjectionFrustums();
    return _result;
}

void Macad::Occt::Aspect_XRSession::ProcessEvents()
{
    ((::Aspect_XRSession*)_NativeInstance)->ProcessEvents();
}

bool Macad::Occt::Aspect_XRSession::SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye)
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->SubmitEye(theTexture.ToPointer(), (::Aspect_GraphicsLibrary)theGraphicsLib, (::Aspect_ColorSpace)theColorSpace, (::Aspect_Eye)theEye);
    return _result;
}

double Macad::Occt::Aspect_XRSession::UnitFactor()
{
    double _result = ((::Aspect_XRSession*)_NativeInstance)->UnitFactor();
    return _result;
}

void Macad::Occt::Aspect_XRSession::SetUnitFactor(double theFactor)
{
    ((::Aspect_XRSession*)_NativeInstance)->SetUnitFactor(theFactor);
}

double Macad::Occt::Aspect_XRSession::Aspect()
{
    double _result = ((::Aspect_XRSession*)_NativeInstance)->Aspect();
    return _result;
}

double Macad::Occt::Aspect_XRSession::FieldOfView()
{
    double _result = ((::Aspect_XRSession*)_NativeInstance)->FieldOfView();
    return _result;
}

double Macad::Occt::Aspect_XRSession::IOD()
{
    double _result = ((::Aspect_XRSession*)_NativeInstance)->IOD();
    return _result;
}

float Macad::Occt::Aspect_XRSession::DisplayFrequency()
{
    float _result = ((::Aspect_XRSession*)_NativeInstance)->DisplayFrequency();
    return _result;
}

Macad::Occt::Trsf Macad::Occt::Aspect_XRSession::HeadPose()
{
    ::gp_Trsf _nativeResult = ((::Aspect_XRSession*)_NativeInstance)->HeadPose();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Trsf Macad::Occt::Aspect_XRSession::LeftHandPose()
{
    ::gp_Trsf _nativeResult = ((::Aspect_XRSession*)_NativeInstance)->LeftHandPose();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Trsf Macad::Occt::Aspect_XRSession::RightHandPose()
{
    ::gp_Trsf _nativeResult = ((::Aspect_XRSession*)_NativeInstance)->RightHandPose();
    return Macad::Occt::Trsf(_nativeResult);
}

bool Macad::Occt::Aspect_XRSession::HasTrackedPose(int theDevice)
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->HasTrackedPose(theDevice);
    return _result;
}

int Macad::Occt::Aspect_XRSession::NamedTrackedDevice(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice)
{
    int _result = ((::Aspect_XRSession*)_NativeInstance)->NamedTrackedDevice((::Aspect_XRTrackedDeviceRole)theDevice);
    return _result;
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Aspect_XRSession::LoadRenderModel(int theDevice, Macad::Occt::Image_Texture^ theTexture)
{
    Handle(::Image_Texture) h_theTexture = theTexture->NativeInstance;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ((::Aspect_XRSession*)_NativeInstance)->LoadRenderModel(theDevice, h_theTexture);
    theTexture->NativeInstance = h_theTexture.get();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Aspect_XRSession::LoadRenderModel(int theDevice, bool theToApplyUnitFactor, Macad::Occt::Image_Texture^ theTexture)
{
    Handle(::Image_Texture) h_theTexture = theTexture->NativeInstance;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ((::Aspect_XRSession*)_NativeInstance)->LoadRenderModel(theDevice, theToApplyUnitFactor, h_theTexture);
    theTexture->NativeInstance = h_theTexture.get();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

Macad::Occt::Aspect_XRDigitalActionData^ Macad::Occt::Aspect_XRSession::GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction)
{
    ::Aspect_XRDigitalActionData* _result = new ::Aspect_XRDigitalActionData();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->GetDigitalActionData(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRDigitalActionData(_result);
}

Macad::Occt::Aspect_XRAnalogActionData^ Macad::Occt::Aspect_XRSession::GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction)
{
    ::Aspect_XRAnalogActionData* _result = new ::Aspect_XRAnalogActionData();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->GetAnalogActionData(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRAnalogActionData(_result);
}

Macad::Occt::Aspect_XRPoseActionData^ Macad::Occt::Aspect_XRSession::GetPoseActionDataForNextFrame(Macad::Occt::Aspect_XRAction^ theAction)
{
    ::Aspect_XRPoseActionData* _result = new ::Aspect_XRPoseActionData();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->GetPoseActionDataForNextFrame(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRPoseActionData(_result);
}

void Macad::Occt::Aspect_XRSession::TriggerHapticVibrationAction(Macad::Occt::Aspect_XRAction^ theAction, Macad::Occt::Aspect_XRHapticActionData^ theParams)
{
    ((::Aspect_XRSession*)_NativeInstance)->TriggerHapticVibrationAction(Handle(::Aspect_XRAction)(theAction->NativeInstance), *(::Aspect_XRHapticActionData*)theParams->NativeInstance);
}

void Macad::Occt::Aspect_XRSession::AbortHapticVibrationAction(Macad::Occt::Aspect_XRAction^ theAction)
{
    ((::Aspect_XRSession*)_NativeInstance)->AbortHapticVibrationAction(Handle(::Aspect_XRAction)(theAction->NativeInstance));
}

Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin Macad::Occt::Aspect_XRSession::TrackingOrigin()
{
    ::Aspect_XRSession::TrackingUniverseOrigin _result = ((::Aspect_XRSession*)_NativeInstance)->TrackingOrigin();
    return (Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin)_result;
}

void Macad::Occt::Aspect_XRSession::SetTrackingOrigin(Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin theOrigin)
{
    ((::Aspect_XRSession*)_NativeInstance)->SetTrackingOrigin((::Aspect_XRSession::TrackingUniverseOrigin)theOrigin);
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRSession::GenericAction(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice, Macad::Occt::Aspect_XRGenericAction theAction)
{
    Handle(::Aspect_XRAction) _result = ((::Aspect_XRSession*)_NativeInstance)->GenericAction((::Aspect_XRTrackedDeviceRole)theDevice, (::Aspect_XRGenericAction)theAction);
    return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRAction::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_XRSession::GetString(Macad::Occt::Aspect_XRSession::InfoString theInfo)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->GetString((::Aspect_XRSession::InfoString)theInfo);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Aspect_XRSession^ Macad::Occt::Aspect_XRSession::CreateDowncasted(::Aspect_XRSession* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Aspect_OpenVRSession)))
        return Macad::Occt::Aspect_OpenVRSession::CreateDowncasted((::Aspect_OpenVRSession*)instance);
    
    return gcnew Macad::Occt::Aspect_XRSession( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_OpenVRSession
//---------------------------------------------------------------------

Macad::Occt::Aspect_OpenVRSession::Aspect_OpenVRSession()
    : Macad::Occt::Aspect_XRSession(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_OpenVRSession();
}

bool Macad::Occt::Aspect_OpenVRSession::IsHmdPresent()
{
    bool _result = ::Aspect_OpenVRSession::IsHmdPresent();
    return _result;
}

bool Macad::Occt::Aspect_OpenVRSession::IsOpen()
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->IsOpen();
    return _result;
}

bool Macad::Occt::Aspect_OpenVRSession::Open()
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->Open();
    return _result;
}

void Macad::Occt::Aspect_OpenVRSession::Close()
{
    ((::Aspect_OpenVRSession*)_NativeInstance)->Close();
}

bool Macad::Occt::Aspect_OpenVRSession::WaitPoses()
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->WaitPoses();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Aspect_OpenVRSession::RecommendedViewport()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Aspect_OpenVRSession::HasProjectionFrustums()
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->HasProjectionFrustums();
    return _result;
}

void Macad::Occt::Aspect_OpenVRSession::ProcessEvents()
{
    ((::Aspect_OpenVRSession*)_NativeInstance)->ProcessEvents();
}

bool Macad::Occt::Aspect_OpenVRSession::SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye)
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->SubmitEye(theTexture.ToPointer(), (::Aspect_GraphicsLibrary)theGraphicsLib, (::Aspect_ColorSpace)theColorSpace, (::Aspect_Eye)theEye);
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_OpenVRSession::GetString(Macad::Occt::Aspect_XRSession::InfoString theInfo)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetString((::Aspect_XRSession::InfoString)theInfo);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

int Macad::Occt::Aspect_OpenVRSession::NamedTrackedDevice(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice)
{
    int _result = ((::Aspect_OpenVRSession*)_NativeInstance)->NamedTrackedDevice((::Aspect_XRTrackedDeviceRole)theDevice);
    return _result;
}

Macad::Occt::Aspect_XRDigitalActionData^ Macad::Occt::Aspect_OpenVRSession::GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction)
{
    ::Aspect_XRDigitalActionData* _result = new ::Aspect_XRDigitalActionData();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetDigitalActionData(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRDigitalActionData(_result);
}

Macad::Occt::Aspect_XRAnalogActionData^ Macad::Occt::Aspect_OpenVRSession::GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction)
{
    ::Aspect_XRAnalogActionData* _result = new ::Aspect_XRAnalogActionData();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetAnalogActionData(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRAnalogActionData(_result);
}

Macad::Occt::Aspect_XRPoseActionData^ Macad::Occt::Aspect_OpenVRSession::GetPoseActionDataForNextFrame(Macad::Occt::Aspect_XRAction^ theAction)
{
    ::Aspect_XRPoseActionData* _result = new ::Aspect_XRPoseActionData();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetPoseActionDataForNextFrame(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRPoseActionData(_result);
}

void Macad::Occt::Aspect_OpenVRSession::SetTrackingOrigin(Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin theOrigin)
{
    ((::Aspect_OpenVRSession*)_NativeInstance)->SetTrackingOrigin((::Aspect_XRSession::TrackingUniverseOrigin)theOrigin);
}

Macad::Occt::Aspect_OpenVRSession^ Macad::Occt::Aspect_OpenVRSession::CreateDowncasted(::Aspect_OpenVRSession* instance)
{
    return gcnew Macad::Occt::Aspect_OpenVRSession( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_RectangularGrid
//---------------------------------------------------------------------

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle, double aRotationAngle)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep)
    : Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_RectangularGrid::SetXStep(double aStep)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetXStep(aStep);
}

void Macad::Occt::Aspect_RectangularGrid::SetYStep(double aStep)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetYStep(aStep);
}

void Macad::Occt::Aspect_RectangularGrid::SetAngle(double anAngle1, double anAngle2)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetAngle(anAngle1, anAngle2);
}

void Macad::Occt::Aspect_RectangularGrid::SetGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetGridValues(XOrigin, YOrigin, XStep, YStep, RotationAngle);
}

void Macad::Occt::Aspect_RectangularGrid::Compute(double X, double Y, double% gridX, double% gridY)
{
    pin_ptr<double> pp_gridX = &gridX;
    pin_ptr<double> pp_gridY = &gridY;
    ((::Aspect_RectangularGrid*)_NativeInstance)->Compute(X, Y, *(double*)pp_gridX, *(double*)pp_gridY);
}

double Macad::Occt::Aspect_RectangularGrid::XStep()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->XStep();
    return _result;
}

double Macad::Occt::Aspect_RectangularGrid::YStep()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->YStep();
    return _result;
}

double Macad::Occt::Aspect_RectangularGrid::FirstAngle()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->FirstAngle();
    return _result;
}

double Macad::Occt::Aspect_RectangularGrid::SecondAngle()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->SecondAngle();
    return _result;
}

void Macad::Occt::Aspect_RectangularGrid::SetSizeX(double theSize)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetSizeX(theSize);
}

double Macad::Occt::Aspect_RectangularGrid::SizeX()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->SizeX();
    return _result;
}

void Macad::Occt::Aspect_RectangularGrid::SetSizeY(double theSize)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetSizeY(theSize);
}

double Macad::Occt::Aspect_RectangularGrid::SizeY()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->SizeY();
    return _result;
}

void Macad::Occt::Aspect_RectangularGrid::SetZOffset(double theOffset)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetZOffset(theOffset);
}

double Macad::Occt::Aspect_RectangularGrid::ZOffset()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->ZOffset();
    return _result;
}

void Macad::Occt::Aspect_RectangularGrid::Init()
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->Init();
}

void Macad::Occt::Aspect_RectangularGrid::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_RectangularGrid*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Aspect_RectangularGrid::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_RectangularGrid*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Aspect_RectangularGrid^ Macad::Occt::Aspect_RectangularGrid::CreateDowncasted(::Aspect_RectangularGrid* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::V3d_RectangularGrid)))
        return Macad::Occt::V3d_RectangularGrid::CreateDowncasted((::V3d_RectangularGrid*)instance);
    
    return gcnew Macad::Occt::Aspect_RectangularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_SkydomeBackground
//---------------------------------------------------------------------

Macad::Occt::Aspect_SkydomeBackground::Aspect_SkydomeBackground()
    : Macad::Occt::BaseClass<::Aspect_SkydomeBackground>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SkydomeBackground();
}

Macad::Occt::Aspect_SkydomeBackground::Aspect_SkydomeBackground(Macad::Occt::Dir theSunDirection, float theCloudiness, float theTime, float theFogginess, int theSize)
    : Macad::Occt::BaseClass<::Aspect_SkydomeBackground>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Dir> pp_theSunDirection = &theSunDirection;
    _NativeInstance = new ::Aspect_SkydomeBackground(*(gp_Dir*)pp_theSunDirection, theCloudiness, theTime, theFogginess, theSize);
}

Macad::Occt::Dir Macad::Occt::Aspect_SkydomeBackground::SunDirection()
{
    ::gp_Dir _nativeResult = ((::Aspect_SkydomeBackground*)_NativeInstance)->SunDirection();
    return Macad::Occt::Dir(_nativeResult);
}

float Macad::Occt::Aspect_SkydomeBackground::Cloudiness()
{
    float _result = ((::Aspect_SkydomeBackground*)_NativeInstance)->Cloudiness();
    return _result;
}

float Macad::Occt::Aspect_SkydomeBackground::TimeParameter()
{
    float _result = ((::Aspect_SkydomeBackground*)_NativeInstance)->TimeParameter();
    return _result;
}

float Macad::Occt::Aspect_SkydomeBackground::Fogginess()
{
    float _result = ((::Aspect_SkydomeBackground*)_NativeInstance)->Fogginess();
    return _result;
}

int Macad::Occt::Aspect_SkydomeBackground::Size()
{
    int _result = ((::Aspect_SkydomeBackground*)_NativeInstance)->Size();
    return _result;
}

void Macad::Occt::Aspect_SkydomeBackground::SetSunDirection(Macad::Occt::Dir theSunDirection)
{
    pin_ptr<Macad::Occt::Dir> pp_theSunDirection = &theSunDirection;
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetSunDirection(*(gp_Dir*)pp_theSunDirection);
}

void Macad::Occt::Aspect_SkydomeBackground::SetCloudiness(float theCloudiness)
{
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetCloudiness(theCloudiness);
}

void Macad::Occt::Aspect_SkydomeBackground::SetTimeParameter(float theTime)
{
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetTimeParameter(theTime);
}

void Macad::Occt::Aspect_SkydomeBackground::SetFogginess(float theFogginess)
{
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetFogginess(theFogginess);
}

void Macad::Occt::Aspect_SkydomeBackground::SetSize(int theSize)
{
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetSize(theSize);
}

void Macad::Occt::Aspect_SkydomeBackground::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_SkydomeBackground*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Aspect_SkydomeBackground::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_SkydomeBackground*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Aspect_Touch
//---------------------------------------------------------------------

Macad::Occt::Aspect_Touch::Aspect_Touch()
    : Macad::Occt::BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Touch();
}

Macad::Occt::Aspect_Touch::Aspect_Touch(Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theIsPreciseDevice)
    : Macad::Occt::BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Touch(*(::Graphic3d_Vec2d*)thePnt->NativeInstance, theIsPreciseDevice);
}

Macad::Occt::Aspect_Touch::Aspect_Touch(double theX, double theY, bool theIsPreciseDevice)
    : Macad::Occt::BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Touch(theX, theY, theIsPreciseDevice);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Aspect_Touch::Delta()
{
    throw gcnew System::NotImplementedException();
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Aspect_WindowDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_WindowDefinitionError("");
}

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Aspect_WindowDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Aspect_WindowDefinitionError::ExceptionType()
{
    Standard_CString _result = ((::Aspect_WindowDefinitionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowError
//---------------------------------------------------------------------

Macad::Occt::Aspect_WindowError::Aspect_WindowError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Aspect_WindowError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_WindowError::Aspect_WindowError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_WindowError("");
}

Macad::Occt::Aspect_WindowError::Aspect_WindowError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Aspect_WindowError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Aspect_WindowError::ExceptionType()
{
    Standard_CString _result = ((::Aspect_WindowError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowInputListener
//---------------------------------------------------------------------

double Macad::Occt::Aspect_WindowInputListener::EventTime()
{
    double _result = ((::Aspect_WindowInputListener*)_NativeInstance)->EventTime();
    return _result;
}

void Macad::Occt::Aspect_WindowInputListener::ProcessExpose()
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessExpose();
}

void Macad::Occt::Aspect_WindowInputListener::ProcessConfigure(bool theIsResized)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessConfigure(theIsResized);
}

void Macad::Occt::Aspect_WindowInputListener::ProcessInput()
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessInput();
}

void Macad::Occt::Aspect_WindowInputListener::ProcessFocus(bool theIsActivated)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessFocus(theIsActivated);
}

void Macad::Occt::Aspect_WindowInputListener::ProcessClose()
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessClose();
}

void Macad::Occt::Aspect_WindowInputListener::KeyDown(unsigned int theKey, double theTime, double thePressure)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->KeyDown(theKey, theTime, thePressure);
}

void Macad::Occt::Aspect_WindowInputListener::KeyDown(unsigned int theKey, double theTime)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->KeyDown(theKey, theTime, 1.);
}

void Macad::Occt::Aspect_WindowInputListener::KeyUp(unsigned int theKey, double theTime)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->KeyUp(theKey, theTime);
}

void Macad::Occt::Aspect_WindowInputListener::KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->KeyFromAxis(theNegative, thePositive, theTime, thePressure);
}

bool Macad::Occt::Aspect_WindowInputListener::UpdateMouseScroll(Macad::Occt::Aspect_ScrollDelta^ theDelta)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMouseScroll(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
    return _result;
}

bool Macad::Occt::Aspect_WindowInputListener::UpdateMouseButtons(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMouseButtons(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
    return _result;
}

bool Macad::Occt::Aspect_WindowInputListener::UpdateMousePosition(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMousePosition(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
    return _result;
}

bool Macad::Occt::Aspect_WindowInputListener::PressMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->PressMouseButton(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsEmulated);
    return _result;
}

bool Macad::Occt::Aspect_WindowInputListener::ReleaseMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->ReleaseMouseButton(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsEmulated);
    return _result;
}

unsigned int Macad::Occt::Aspect_WindowInputListener::PressedMouseButtons()
{
    unsigned int _result = ((::Aspect_WindowInputListener*)_NativeInstance)->PressedMouseButtons();
    return _result;
}

unsigned int Macad::Occt::Aspect_WindowInputListener::LastMouseFlags()
{
    unsigned int _result = ((::Aspect_WindowInputListener*)_NativeInstance)->LastMouseFlags();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Aspect_WindowInputListener::LastMousePosition()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Aspect_WindowInputListener::HasTouchPoints()
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->HasTouchPoints();
    return _result;
}

Macad::Occt::Aspect_TouchMap^ Macad::Occt::Aspect_WindowInputListener::TouchPoints()
{
    ::Aspect_TouchMap* _result = new ::Aspect_TouchMap();
    *_result = (::Aspect_TouchMap)((::Aspect_WindowInputListener*)_NativeInstance)->TouchPoints();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TouchMap(_result);
}

void Macad::Occt::Aspect_WindowInputListener::AddTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theClearBefore)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, theClearBefore);
}

void Macad::Occt::Aspect_WindowInputListener::AddTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, false);
}

bool Macad::Occt::Aspect_WindowInputListener::RemoveTouchPoint(long long unsigned int theId, bool theClearSelectPnts)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->RemoveTouchPoint(theId, theClearSelectPnts);
    return _result;
}

bool Macad::Occt::Aspect_WindowInputListener::RemoveTouchPoint(long long unsigned int theId)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->RemoveTouchPoint(theId, false);
    return _result;
}

void Macad::Occt::Aspect_WindowInputListener::UpdateTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance);
}

float Macad::Occt::Aspect_WindowInputListener::Get3dMouseTranslationScale()
{
    float _result = ((::Aspect_WindowInputListener*)_NativeInstance)->Get3dMouseTranslationScale();
    return _result;
}

void Macad::Occt::Aspect_WindowInputListener::Set3dMouseTranslationScale(float theScale)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMouseTranslationScale(theScale);
}

float Macad::Occt::Aspect_WindowInputListener::Get3dMouseRotationScale()
{
    float _result = ((::Aspect_WindowInputListener*)_NativeInstance)->Get3dMouseRotationScale();
    return _result;
}

void Macad::Occt::Aspect_WindowInputListener::Set3dMouseRotationScale(float theScale)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMouseRotationScale(theScale);
}

bool Macad::Occt::Aspect_WindowInputListener::To3dMousePreciseInput()
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->To3dMousePreciseInput();
    return _result;
}

void Macad::Occt::Aspect_WindowInputListener::Set3dMousePreciseInput(bool theIsQuadric)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMousePreciseInput(theIsQuadric);
}


