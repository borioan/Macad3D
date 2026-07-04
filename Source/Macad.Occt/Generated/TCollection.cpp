// Generated wrapper code for package TCollection

#include "OcctPCH.h"
#include "TCollection.h"

using namespace System::Runtime::InteropServices; // for class Marshal



//---------------------------------------------------------------------
//  Class  TCollection_ExtendedString
//---------------------------------------------------------------------

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString()
    : Macad::Occt::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString();
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(System::String^ theString)
    : Macad::Occt::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<const wchar_t> pp_theString = PtrToStringChars(theString);
    _NativeInstance = new ::TCollection_ExtendedString((const char16_t*)pp_theString);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(char theChar)
    : Macad::Occt::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(theChar);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(int theValue)
    : Macad::Occt::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(theValue);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(double theValue)
    : Macad::Occt::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(theValue);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ theString, bool theIsMultiByte)
    : Macad::Occt::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(*(::TCollection_AsciiString*)theString->NativeInstance, theIsMultiByte);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ theString)
    : Macad::Occt::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(*(::TCollection_AsciiString*)theString->NativeInstance, true);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(System::String^ theString, int theLength)
    : Macad::Occt::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<const wchar_t> pp_theString = PtrToStringChars(theString);
    _NativeInstance = new ::TCollection_ExtendedString((const char16_t*)pp_theString, theLength);
}

void Macad::Occt::TCollection_ExtendedString::AssignCat(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->AssignCat(*(::TCollection_ExtendedString*)theOther->NativeInstance);
}

void Macad::Occt::TCollection_ExtendedString::AssignCat(int theOther)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->AssignCat(theOther);
}

void Macad::Occt::TCollection_ExtendedString::AssignCat(char theChar)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->AssignCat(theChar);
}

void Macad::Occt::TCollection_ExtendedString::AssignCat(double theOther)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->AssignCat(theOther);
}

void Macad::Occt::TCollection_ExtendedString::AssignCat(System::String^ theString, int theLength)
{
    pin_ptr<const wchar_t> pp_theString = PtrToStringChars(theString);
    ((::TCollection_ExtendedString*)_NativeInstance)->AssignCat((const char16_t*)pp_theString, theLength);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Cat(System::String^ theOther, int theLength)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Cat((const char16_t*)pp_theOther, theLength);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Cat(System::String^ theOther)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Cat((const char16_t*)pp_theOther);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Cat(int theOther)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Cat(theOther);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Cat(double theOther)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Cat(theOther);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Cat(char theChar)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Cat(theChar);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Cat(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Cat(*(::TCollection_ExtendedString*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::TCollection_ExtendedString::Clear()
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Clear();
}

void Macad::Occt::TCollection_ExtendedString::Copy(System::String^ theString, int theLength)
{
    pin_ptr<const wchar_t> pp_theString = PtrToStringChars(theString);
    ((::TCollection_ExtendedString*)_NativeInstance)->Copy((const char16_t*)pp_theString, theLength);
}

void Macad::Occt::TCollection_ExtendedString::Copy(System::String^ theString)
{
    pin_ptr<const wchar_t> pp_theString = PtrToStringChars(theString);
    ((::TCollection_ExtendedString*)_NativeInstance)->Copy((const char16_t*)pp_theString);
}

void Macad::Occt::TCollection_ExtendedString::Copy(Macad::Occt::TCollection_ExtendedString^ theFromWhere)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Copy(*(::TCollection_ExtendedString*)theFromWhere->NativeInstance);
}

void Macad::Occt::TCollection_ExtendedString::Swap(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Swap(*(::TCollection_ExtendedString*)theOther->NativeInstance);
}

void Macad::Occt::TCollection_ExtendedString::Insert(int theWhere, System::String^ theWhat, int theLength)
{
    pin_ptr<const wchar_t> pp_theWhat = PtrToStringChars(theWhat);
    ((::TCollection_ExtendedString*)_NativeInstance)->Insert(theWhere, (const char16_t*)pp_theWhat, theLength);
}

void Macad::Occt::TCollection_ExtendedString::Insert(int theWhere, Macad::Occt::TCollection_ExtendedString^ theWhat)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Insert(theWhere, *(::TCollection_ExtendedString*)theWhat->NativeInstance);
}

bool Macad::Occt::TCollection_ExtendedString::IsEmpty()
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsEqual(System::String^ theOther, int theLength)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsEqual((const char16_t*)pp_theOther, theLength);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsEqual(System::String^ theOther)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsEqual((const char16_t*)pp_theOther);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsEqual(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsEqual(*(::TCollection_ExtendedString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsDifferent(System::String^ theOther, int theLength)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsDifferent((const char16_t*)pp_theOther, theLength);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsDifferent(System::String^ theOther)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsDifferent((const char16_t*)pp_theOther);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsDifferent(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsDifferent(*(::TCollection_ExtendedString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsLess(System::String^ theOther, int theLength)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsLess((const char16_t*)pp_theOther, theLength);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsLess(System::String^ theOther)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsLess((const char16_t*)pp_theOther);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsLess(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsLess(*(::TCollection_ExtendedString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsGreater(System::String^ theOther, int theLength)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsGreater((const char16_t*)pp_theOther, theLength);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsGreater(System::String^ theOther)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsGreater((const char16_t*)pp_theOther);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsGreater(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsGreater(*(::TCollection_ExtendedString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::StartsWith(System::String^ theStartString, int theLength)
{
    pin_ptr<const wchar_t> pp_theStartString = PtrToStringChars(theStartString);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->StartsWith((const char16_t*)pp_theStartString, theLength);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::StartsWith(System::String^ theStartString)
{
    pin_ptr<const wchar_t> pp_theStartString = PtrToStringChars(theStartString);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->StartsWith((const char16_t*)pp_theStartString);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::StartsWith(Macad::Occt::TCollection_ExtendedString^ theStartString)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->StartsWith(*(::TCollection_ExtendedString*)theStartString->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::EndsWith(System::String^ theEndString, int theLength)
{
    pin_ptr<const wchar_t> pp_theEndString = PtrToStringChars(theEndString);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->EndsWith((const char16_t*)pp_theEndString, theLength);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::EndsWith(System::String^ theEndString)
{
    pin_ptr<const wchar_t> pp_theEndString = PtrToStringChars(theEndString);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->EndsWith((const char16_t*)pp_theEndString);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::EndsWith(Macad::Occt::TCollection_ExtendedString^ theEndString)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->EndsWith(*(::TCollection_ExtendedString*)theEndString->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsAscii()
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsAscii();
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::Length()
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->Length();
    return _result;
}

void Macad::Occt::TCollection_ExtendedString::Print(System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ((::TCollection_ExtendedString*)_NativeInstance)->Print(oss_theStream);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void Macad::Occt::TCollection_ExtendedString::Remove(int theWhere, int theHowMany)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Remove(theWhere, theHowMany);
}

void Macad::Occt::TCollection_ExtendedString::Remove(int theWhere)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Remove(theWhere, 1);
}

int Macad::Occt::TCollection_ExtendedString::Search(System::String^ theWhat, int theLength)
{
    pin_ptr<const wchar_t> pp_theWhat = PtrToStringChars(theWhat);
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->Search((const char16_t*)pp_theWhat, theLength);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::Search(System::String^ theWhat)
{
    pin_ptr<const wchar_t> pp_theWhat = PtrToStringChars(theWhat);
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->Search((const char16_t*)pp_theWhat);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::Search(Macad::Occt::TCollection_ExtendedString^ theWhat)
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->Search(*(::TCollection_ExtendedString*)theWhat->NativeInstance);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::SearchFromEnd(System::String^ theWhat, int theLength)
{
    pin_ptr<const wchar_t> pp_theWhat = PtrToStringChars(theWhat);
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->SearchFromEnd((const char16_t*)pp_theWhat, theLength);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::SearchFromEnd(System::String^ theWhat)
{
    pin_ptr<const wchar_t> pp_theWhat = PtrToStringChars(theWhat);
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->SearchFromEnd((const char16_t*)pp_theWhat);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::SearchFromEnd(Macad::Occt::TCollection_ExtendedString^ theWhat)
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->SearchFromEnd(*(::TCollection_ExtendedString*)theWhat->NativeInstance);
    return _result;
}

void Macad::Occt::TCollection_ExtendedString::SetValue(int theWhere, System::String^ theWhat, int theLength)
{
    pin_ptr<const wchar_t> pp_theWhat = PtrToStringChars(theWhat);
    ((::TCollection_ExtendedString*)_NativeInstance)->SetValue(theWhere, (const char16_t*)pp_theWhat, theLength);
}

void Macad::Occt::TCollection_ExtendedString::SetValue(int theWhere, Macad::Occt::TCollection_ExtendedString^ theWhat)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->SetValue(theWhere, *(::TCollection_ExtendedString*)theWhat->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::SubString(int theFromIndex, int theToIndex)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->SubString(theFromIndex, theToIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Split(int theWhere)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Split(theWhere);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Token(System::String^ theSeparators, int theWhichOne)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    pin_ptr<const wchar_t> pp_theSeparators = PtrToStringChars(theSeparators);
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Token((const char16_t*)pp_theSeparators, theWhichOne);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Token(System::String^ theSeparators)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    pin_ptr<const wchar_t> pp_theSeparators = PtrToStringChars(theSeparators);
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Token((const char16_t*)pp_theSeparators, 1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

System::String^ Macad::Occt::TCollection_ExtendedString::ToExtString()
{
    const char16_t* _result = ((::TCollection_ExtendedString*)_NativeInstance)->ToExtString();
    return gcnew System::String((const wchar_t *)_result);
}

System::String^ Macad::Occt::TCollection_ExtendedString::ToWideString()
{
    const wchar_t* _result = ((::TCollection_ExtendedString*)_NativeInstance)->ToWideString();
    return gcnew System::String((const wchar_t *)_result);
}

void Macad::Occt::TCollection_ExtendedString::Trunc(int theHowMany)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Trunc(theHowMany);
}

long long unsigned int Macad::Occt::TCollection_ExtendedString::HashCode()
{
    long long unsigned int _result = ((::TCollection_ExtendedString*)_NativeInstance)->HashCode();
    return _result;
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::EmptyString()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)::TCollection_ExtendedString::EmptyString();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

bool Macad::Occt::TCollection_ExtendedString::IsEqual(Macad::Occt::TCollection_ExtendedString^ theString1, Macad::Occt::TCollection_ExtendedString^ theString2)
{
    bool _result = ::TCollection_ExtendedString::IsEqual(*(::TCollection_ExtendedString*)theString1->NativeInstance, *(::TCollection_ExtendedString*)theString2->NativeInstance);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::ToUTF8CString(char% theCString)
{
    pin_ptr<char> pp_theCString = &theCString;
    char* p_theCString = (char*)theCString;
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->ToUTF8CString(p_theCString);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::LengthOfCString()
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->LengthOfCString();
    return _result;
}

void Macad::Occt::TCollection_ExtendedString::LeftAdjust()
{
    ((::TCollection_ExtendedString*)_NativeInstance)->LeftAdjust();
}

void Macad::Occt::TCollection_ExtendedString::RightAdjust()
{
    ((::TCollection_ExtendedString*)_NativeInstance)->RightAdjust();
}

void Macad::Occt::TCollection_ExtendedString::Capitalize()
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Capitalize();
}

void Macad::Occt::TCollection_ExtendedString::Prepend(System::String^ theOther, int theLength)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    ((::TCollection_ExtendedString*)_NativeInstance)->Prepend((const char16_t*)pp_theOther, theLength);
}

void Macad::Occt::TCollection_ExtendedString::Prepend(System::String^ theOther)
{
    pin_ptr<const wchar_t> pp_theOther = PtrToStringChars(theOther);
    ((::TCollection_ExtendedString*)_NativeInstance)->Prepend((const char16_t*)pp_theOther);
}

void Macad::Occt::TCollection_ExtendedString::Prepend(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Prepend(*(::TCollection_ExtendedString*)theOther->NativeInstance);
}

int Macad::Occt::TCollection_ExtendedString::FirstLocationInSet(Macad::Occt::TCollection_ExtendedString^ theSet, int theFromIndex, int theToIndex)
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->FirstLocationInSet(*(::TCollection_ExtendedString*)theSet->NativeInstance, theFromIndex, theToIndex);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::FirstLocationNotInSet(Macad::Occt::TCollection_ExtendedString^ theSet, int theFromIndex, int theToIndex)
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->FirstLocationNotInSet(*(::TCollection_ExtendedString*)theSet->NativeInstance, theFromIndex, theToIndex);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::IntegerValue()
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->IntegerValue();
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsIntegerValue()
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsIntegerValue();
    return _result;
}

double Macad::Occt::TCollection_ExtendedString::RealValue()
{
    double _result = ((::TCollection_ExtendedString*)_NativeInstance)->RealValue();
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsRealValue(bool theToCheckFull)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsRealValue(theToCheckFull);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsRealValue()
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsRealValue(false);
    return _result;
}

bool Macad::Occt::TCollection_ExtendedString::IsSameString(Macad::Occt::TCollection_ExtendedString^ theOther, bool theIsCaseSensitive)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsSameString(*(::TCollection_ExtendedString*)theOther->NativeInstance, theIsCaseSensitive);
    return _result;
}

int Macad::Occt::TCollection_ExtendedString::GetHashCode()
{
    return std::hash<::TCollection_ExtendedString>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TCollection_AsciiString
//---------------------------------------------------------------------

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString()
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString();
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(System::String^ theMessage, int theLength)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::TCollection_AsciiString(sz_theMessage, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(int theLength, char theFiller)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(theLength, theFiller);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(int theValue)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(theValue);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(double theValue)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(theValue);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ theString, char theChar)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(*(::TCollection_AsciiString*)theString->NativeInstance, theChar);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::TCollection_AsciiString^ theOtherString)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(*(::TCollection_AsciiString*)theString->NativeInstance, *(::TCollection_AsciiString*)theOtherString->NativeInstance);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ theExtendedString, char theReplaceNonAscii)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(*(::TCollection_ExtendedString*)theExtendedString->NativeInstance, theReplaceNonAscii);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ theExtendedString)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(*(::TCollection_ExtendedString*)theExtendedString->NativeInstance, 0);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(System::String^ theStringUtf)
    : Macad::Occt::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<const wchar_t> pp_theStringUtf = PtrToStringChars(theStringUtf);
    _NativeInstance = new ::TCollection_AsciiString((const wchar_t*)pp_theStringUtf);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(char theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(theOther);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(int theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(theOther);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(double theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(theOther);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(Macad::Occt::TCollection_ExtendedString^ theOther, char theReplaceNonAscii)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(*(::TCollection_ExtendedString*)theOther->NativeInstance, theReplaceNonAscii);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(*(::TCollection_ExtendedString*)theOther->NativeInstance, 0);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(System::String^ theStringUtf)
{
    pin_ptr<const wchar_t> pp_theStringUtf = PtrToStringChars(theStringUtf);
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat((const wchar_t*)pp_theStringUtf);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(Macad::Occt::TCollection_AsciiString^ theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(*(::TCollection_AsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::Capitalize()
{
    ((::TCollection_AsciiString*)_NativeInstance)->Capitalize();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(System::String^ theString, int theLength)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(char theOther)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(theOther);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(int theOther)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(theOther);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(double theOther)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(theOther);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(Macad::Occt::TCollection_ExtendedString^ theOther, char theReplaceNonAscii)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(*(::TCollection_ExtendedString*)theOther->NativeInstance, theReplaceNonAscii);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(Macad::Occt::TCollection_ExtendedString^ theOther)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(*(::TCollection_ExtendedString*)theOther->NativeInstance, 0);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(System::String^ theStringUtf)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    pin_ptr<const wchar_t> pp_theStringUtf = PtrToStringChars(theStringUtf);
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat((const wchar_t*)pp_theStringUtf);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(Macad::Occt::TCollection_AsciiString^ theOther)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(*(::TCollection_AsciiString*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TCollection_AsciiString::Center(int theWidth, char theFiller)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Center(theWidth, theFiller);
}

void Macad::Occt::TCollection_AsciiString::ChangeAll(char theChar, char theNewChar, bool theCaseSensitive)
{
    ((::TCollection_AsciiString*)_NativeInstance)->ChangeAll(theChar, theNewChar, theCaseSensitive);
}

void Macad::Occt::TCollection_AsciiString::ChangeAll(char theChar, char theNewChar)
{
    ((::TCollection_AsciiString*)_NativeInstance)->ChangeAll(theChar, theNewChar, true);
}

void Macad::Occt::TCollection_AsciiString::Clear()
{
    ((::TCollection_AsciiString*)_NativeInstance)->Clear();
}

void Macad::Occt::TCollection_AsciiString::Copy(System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::TCollection_AsciiString*)_NativeInstance)->Copy(sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::TCollection_AsciiString::Copy(System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    ((::TCollection_AsciiString*)_NativeInstance)->Copy(sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
}

void Macad::Occt::TCollection_AsciiString::Copy(Macad::Occt::TCollection_AsciiString^ theFromWhere)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Copy(*(::TCollection_AsciiString*)theFromWhere->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::Swap(Macad::Occt::TCollection_AsciiString^ theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Swap(*(::TCollection_AsciiString*)theOther->NativeInstance);
}

int Macad::Occt::TCollection_AsciiString::FirstLocationInSet(System::String^ theSet, int theSetLength, int theFromIndex, int theToIndex)
{
    const char* sz_theSet = (char*)(void*)Marshal::StringToHGlobalAnsi(theSet);
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->FirstLocationInSet(sz_theSet, theSetLength, theFromIndex, theToIndex);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theSet);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::FirstLocationInSet(Macad::Occt::TCollection_AsciiString^ theSet, int theFromIndex, int theToIndex)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->FirstLocationInSet(*(::TCollection_AsciiString*)theSet->NativeInstance, theFromIndex, theToIndex);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::FirstLocationNotInSet(System::String^ theSet, int theSetLength, int theFromIndex, int theToIndex)
{
    const char* sz_theSet = (char*)(void*)Marshal::StringToHGlobalAnsi(theSet);
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->FirstLocationNotInSet(sz_theSet, theSetLength, theFromIndex, theToIndex);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theSet);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::FirstLocationNotInSet(Macad::Occt::TCollection_AsciiString^ theSet, int theFromIndex, int theToIndex)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->FirstLocationNotInSet(*(::TCollection_AsciiString*)theSet->NativeInstance, theFromIndex, theToIndex);
    return _result;
}

void Macad::Occt::TCollection_AsciiString::Insert(int theWhere, char theWhat)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Insert(theWhere, theWhat);
}

void Macad::Occt::TCollection_AsciiString::Insert(int theWhere, System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::TCollection_AsciiString*)_NativeInstance)->Insert(theWhere, sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::TCollection_AsciiString::Insert(int theWhere, Macad::Occt::TCollection_AsciiString^ theWhat)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Insert(theWhere, *(::TCollection_AsciiString*)theWhat->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::InsertAfter(int theIndex, System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::TCollection_AsciiString*)_NativeInstance)->InsertAfter(theIndex, sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::TCollection_AsciiString::InsertAfter(int theIndex, Macad::Occt::TCollection_AsciiString^ theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->InsertAfter(theIndex, *(::TCollection_AsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::InsertAfter(int theIndex, System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    ((::TCollection_AsciiString*)_NativeInstance)->InsertAfter(theIndex, sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
}

void Macad::Occt::TCollection_AsciiString::InsertBefore(int theIndex, System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::TCollection_AsciiString*)_NativeInstance)->InsertBefore(theIndex, sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::TCollection_AsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_AsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::InsertBefore(int theIndex, System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    ((::TCollection_AsciiString*)_NativeInstance)->InsertBefore(theIndex, sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
}

bool Macad::Occt::TCollection_AsciiString::IsEmpty()
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsEmpty();
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsEqual(Macad::Occt::TCollection_AsciiString^ theOther)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsEqual(*(::TCollection_AsciiString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsEqual(System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsEqual(sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsEqual(System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsEqual(sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsDifferent(Macad::Occt::TCollection_AsciiString^ theOther)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsDifferent(*(::TCollection_AsciiString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsDifferent(System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsDifferent(sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsDifferent(System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsDifferent(sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsLess(System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsLess(sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsLess(Macad::Occt::TCollection_AsciiString^ theOther)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsLess(*(::TCollection_AsciiString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsLess(System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsLess(sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsGreater(System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsGreater(sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsGreater(Macad::Occt::TCollection_AsciiString^ theOther)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsGreater(*(::TCollection_AsciiString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsGreater(System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsGreater(sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::StartsWith(System::String^ theStartString, int theStartLength)
{
    const char* sz_theStartString = (char*)(void*)Marshal::StringToHGlobalAnsi(theStartString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->StartsWith(sz_theStartString, theStartLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStartString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::StartsWith(Macad::Occt::TCollection_AsciiString^ theStartString)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->StartsWith(*(::TCollection_AsciiString*)theStartString->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::StartsWith(System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->StartsWith(sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::EndsWith(System::String^ theEndString, int theEndLength)
{
    const char* sz_theEndString = (char*)(void*)Marshal::StringToHGlobalAnsi(theEndString);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->EndsWith(sz_theEndString, theEndLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theEndString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::EndsWith(Macad::Occt::TCollection_AsciiString^ theEndString)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->EndsWith(*(::TCollection_AsciiString*)theEndString->NativeInstance);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::IntegerValue()
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->IntegerValue();
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsIntegerValue()
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsIntegerValue();
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsRealValue(bool theToCheckFull)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsRealValue(theToCheckFull);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsRealValue()
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsRealValue(false);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsAscii()
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsAscii();
    return _result;
}

void Macad::Occt::TCollection_AsciiString::LeftAdjust()
{
    ((::TCollection_AsciiString*)_NativeInstance)->LeftAdjust();
}

void Macad::Occt::TCollection_AsciiString::LeftJustify(int theWidth, char theFiller)
{
    ((::TCollection_AsciiString*)_NativeInstance)->LeftJustify(theWidth, theFiller);
}

int Macad::Occt::TCollection_AsciiString::Length()
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TCollection_AsciiString::Location(Macad::Occt::TCollection_AsciiString^ theOther, int theFromIndex, int theToIndex)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Location(*(::TCollection_AsciiString*)theOther->NativeInstance, theFromIndex, theToIndex);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::Location(int theN, char theC, int theFromIndex, int theToIndex)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Location(theN, theC, theFromIndex, theToIndex);
    return _result;
}

void Macad::Occt::TCollection_AsciiString::LowerCase()
{
    ((::TCollection_AsciiString*)_NativeInstance)->LowerCase();
}

void Macad::Occt::TCollection_AsciiString::Prepend(Macad::Occt::TCollection_AsciiString^ theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::Print(System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ((::TCollection_AsciiString*)_NativeInstance)->Print(oss_theStream);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

double Macad::Occt::TCollection_AsciiString::RealValue()
{
    double _result = ((::TCollection_AsciiString*)_NativeInstance)->RealValue();
    return _result;
}

void Macad::Occt::TCollection_AsciiString::RemoveAll(char theC, bool theCaseSensitive)
{
    ((::TCollection_AsciiString*)_NativeInstance)->RemoveAll(theC, theCaseSensitive);
}

void Macad::Occt::TCollection_AsciiString::RemoveAll(char theWhat)
{
    ((::TCollection_AsciiString*)_NativeInstance)->RemoveAll(theWhat);
}

void Macad::Occt::TCollection_AsciiString::Remove(int theWhere, int theHowMany)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Remove(theWhere, theHowMany);
}

void Macad::Occt::TCollection_AsciiString::Remove(int theWhere)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Remove(theWhere, 1);
}

void Macad::Occt::TCollection_AsciiString::RightAdjust()
{
    ((::TCollection_AsciiString*)_NativeInstance)->RightAdjust();
}

void Macad::Occt::TCollection_AsciiString::RightJustify(int theWidth, char theFiller)
{
    ((::TCollection_AsciiString*)_NativeInstance)->RightJustify(theWidth, theFiller);
}

int Macad::Occt::TCollection_AsciiString::Search(System::String^ theWhat, int theWhatLength)
{
    const char* sz_theWhat = (char*)(void*)Marshal::StringToHGlobalAnsi(theWhat);
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Search(sz_theWhat, theWhatLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theWhat);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::Search(Macad::Occt::TCollection_AsciiString^ theWhat)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Search(*(::TCollection_AsciiString*)theWhat->NativeInstance);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::Search(System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Search(sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::SearchFromEnd(System::String^ theWhat, int theWhatLength)
{
    const char* sz_theWhat = (char*)(void*)Marshal::StringToHGlobalAnsi(theWhat);
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->SearchFromEnd(sz_theWhat, theWhatLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theWhat);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::SearchFromEnd(Macad::Occt::TCollection_AsciiString^ theWhat)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->SearchFromEnd(*(::TCollection_AsciiString*)theWhat->NativeInstance);
    return _result;
}

int Macad::Occt::TCollection_AsciiString::SearchFromEnd(System::String^ theCString)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->SearchFromEnd(sz_theCString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

void Macad::Occt::TCollection_AsciiString::SetValue(int theWhere, char theWhat)
{
    ((::TCollection_AsciiString*)_NativeInstance)->SetValue(theWhere, theWhat);
}

void Macad::Occt::TCollection_AsciiString::SetValue(int theWhere, System::String^ theString, int theLength)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::TCollection_AsciiString*)_NativeInstance)->SetValue(theWhere, sz_theString, theLength);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::TCollection_AsciiString::SetValue(int theWhere, Macad::Occt::TCollection_AsciiString^ theWhat)
{
    ((::TCollection_AsciiString*)_NativeInstance)->SetValue(theWhere, *(::TCollection_AsciiString*)theWhat->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Split(int theWhere)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Split(theWhere);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::SubString(int theFromIndex, int theToIndex)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->SubString(theFromIndex, theToIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

System::String^ Macad::Occt::TCollection_AsciiString::ToCString()
{
    Standard_CString _result = ((::TCollection_AsciiString*)_NativeInstance)->ToCString();
    return gcnew System::String(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Token(System::String^ theSeparators, int theWhichOne)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    const char* sz_theSeparators = (char*)(void*)Marshal::StringToHGlobalAnsi(theSeparators);
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(sz_theSeparators, theWhichOne);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theSeparators);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Token(System::String^ theSeparators)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    const char* sz_theSeparators = (char*)(void*)Marshal::StringToHGlobalAnsi(theSeparators);
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(sz_theSeparators, 1);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theSeparators);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Token()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(" \t", 1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TCollection_AsciiString::Trunc(int theHowMany)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Trunc(theHowMany);
}

void Macad::Occt::TCollection_AsciiString::UpperCase()
{
    ((::TCollection_AsciiString*)_NativeInstance)->UpperCase();
}

int Macad::Occt::TCollection_AsciiString::UsefullLength()
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->UsefullLength();
    return _result;
}

char Macad::Occt::TCollection_AsciiString::Value(int theWhere)
{
    char _result = ((::TCollection_AsciiString*)_NativeInstance)->Value(theWhere);
    return _result;
}

long long unsigned int Macad::Occt::TCollection_AsciiString::HashCode()
{
    long long unsigned int _result = ((::TCollection_AsciiString*)_NativeInstance)->HashCode();
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::EmptyString()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)::TCollection_AsciiString::EmptyString();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::TCollection_AsciiString::IsEqual(Macad::Occt::TCollection_AsciiString^ string1, Macad::Occt::TCollection_AsciiString^ string2)
{
    bool _result = ::TCollection_AsciiString::IsEqual(*(::TCollection_AsciiString*)string1->NativeInstance, *(::TCollection_AsciiString*)string2->NativeInstance);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsSameString(System::String^ theString1, int theLength1, System::String^ theString2, int theLength2, bool theIsCaseSensitive)
{
    const char* sz_theString1 = (char*)(void*)Marshal::StringToHGlobalAnsi(theString1);
    const char* sz_theString2 = (char*)(void*)Marshal::StringToHGlobalAnsi(theString2);
    bool _result = ::TCollection_AsciiString::IsSameString(sz_theString1, theLength1, sz_theString2, theLength2, theIsCaseSensitive);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString1);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString2);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsSameString(Macad::Occt::TCollection_AsciiString^ theString1, Macad::Occt::TCollection_AsciiString^ theString2, bool theIsCaseSensitive)
{
    bool _result = ::TCollection_AsciiString::IsSameString(*(::TCollection_AsciiString*)theString1->NativeInstance, *(::TCollection_AsciiString*)theString2->NativeInstance, theIsCaseSensitive);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsSameString(Macad::Occt::TCollection_AsciiString^ theString1, System::String^ theCString, bool theIsCaseSensitive)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    bool _result = ::TCollection_AsciiString::IsSameString(*(::TCollection_AsciiString*)theString1->NativeInstance, sz_theCString, theIsCaseSensitive);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsSameString(System::String^ theCString, Macad::Occt::TCollection_AsciiString^ theString2, bool theIsCaseSensitive)
{
    const char* sz_theCString = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString);
    bool _result = ::TCollection_AsciiString::IsSameString(sz_theCString, *(::TCollection_AsciiString*)theString2->NativeInstance, theIsCaseSensitive);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::IsSameString(System::String^ theCString1, System::String^ theCString2, bool theIsCaseSensitive)
{
    const char* sz_theCString1 = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString1);
    const char* sz_theCString2 = (char*)(void*)Marshal::StringToHGlobalAnsi(theCString2);
    bool _result = ::TCollection_AsciiString::IsSameString(sz_theCString1, sz_theCString2, theIsCaseSensitive);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString1);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theCString2);
    return _result;
}

bool Macad::Occt::TCollection_AsciiString::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TCollection_AsciiString::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TCollection_AsciiString^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TCollection_HExtendedString
//---------------------------------------------------------------------

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HExtendedString();
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(System::String^ message)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<const wchar_t> pp_message = PtrToStringChars(message);
    NativeInstance = new ::TCollection_HExtendedString((const char16_t*)pp_message);
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(Macad::Occt::TCollection_ExtendedString^ aString)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HExtendedString(*(::TCollection_ExtendedString*)aString->NativeInstance);
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(Macad::Occt::TCollection_HAsciiString^ aString)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HExtendedString(Handle(::TCollection_HAsciiString)(aString->NativeInstance));
}

void Macad::Occt::TCollection_HExtendedString::AssignCat(Macad::Occt::TCollection_HExtendedString^ other)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->AssignCat(Handle(::TCollection_HExtendedString)(other->NativeInstance));
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::Cat(Macad::Occt::TCollection_HExtendedString^ other)
{
    Handle(::TCollection_HExtendedString) _result = ((::TCollection_HExtendedString*)_NativeInstance)->Cat(Handle(::TCollection_HExtendedString)(other->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

void Macad::Occt::TCollection_HExtendedString::Clear()
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Clear();
}

bool Macad::Occt::TCollection_HExtendedString::IsEmpty()
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::TCollection_HExtendedString::Insert(int where, Macad::Occt::TCollection_HExtendedString^ what)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Insert(where, Handle(::TCollection_HExtendedString)(what->NativeInstance));
}

bool Macad::Occt::TCollection_HExtendedString::IsLess(Macad::Occt::TCollection_HExtendedString^ other)
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsLess(Handle(::TCollection_HExtendedString)(other->NativeInstance));
    return _result;
}

bool Macad::Occt::TCollection_HExtendedString::IsGreater(Macad::Occt::TCollection_HExtendedString^ other)
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsGreater(Handle(::TCollection_HExtendedString)(other->NativeInstance));
    return _result;
}

bool Macad::Occt::TCollection_HExtendedString::IsAscii()
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsAscii();
    return _result;
}

int Macad::Occt::TCollection_HExtendedString::Length()
{
    int _result = ((::TCollection_HExtendedString*)_NativeInstance)->Length();
    return _result;
}

void Macad::Occt::TCollection_HExtendedString::Remove(int where, int ahowmany)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Remove(where, ahowmany);
}

void Macad::Occt::TCollection_HExtendedString::Remove(int where)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Remove(where, 1);
}

void Macad::Occt::TCollection_HExtendedString::SetValue(int where, Macad::Occt::TCollection_HExtendedString^ what)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->SetValue(where, Handle(::TCollection_HExtendedString)(what->NativeInstance));
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::Split(int where)
{
    Handle(::TCollection_HExtendedString) _result = ((::TCollection_HExtendedString*)_NativeInstance)->Split(where);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

int Macad::Occt::TCollection_HExtendedString::Search(Macad::Occt::TCollection_HExtendedString^ what)
{
    int _result = ((::TCollection_HExtendedString*)_NativeInstance)->Search(Handle(::TCollection_HExtendedString)(what->NativeInstance));
    return _result;
}

int Macad::Occt::TCollection_HExtendedString::SearchFromEnd(Macad::Occt::TCollection_HExtendedString^ what)
{
    int _result = ((::TCollection_HExtendedString*)_NativeInstance)->SearchFromEnd(Handle(::TCollection_HExtendedString)(what->NativeInstance));
    return _result;
}

System::String^ Macad::Occt::TCollection_HExtendedString::ToExtString()
{
    const char16_t* _result = ((::TCollection_HExtendedString*)_NativeInstance)->ToExtString();
    return gcnew System::String((const wchar_t *)_result);
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::Token(System::String^ separators, int whichone)
{
    pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
    Handle(::TCollection_HExtendedString) _result = ((::TCollection_HExtendedString*)_NativeInstance)->Token((const char16_t*)pp_separators, whichone);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::Token(System::String^ separators)
{
    pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
    Handle(::TCollection_HExtendedString) _result = ((::TCollection_HExtendedString*)_NativeInstance)->Token((const char16_t*)pp_separators, 1);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

void Macad::Occt::TCollection_HExtendedString::Trunc(int ahowmany)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Trunc(ahowmany);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_HExtendedString::String()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::TCollection_HExtendedString*)_NativeInstance)->String();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::TCollection_HExtendedString::Print(System::IO::TextWriter^ astream)
{
    std::ostringstream oss_astream;
    ((::TCollection_HExtendedString*)_NativeInstance)->Print(oss_astream);
    astream->Write(gcnew System::String(oss_astream.str().c_str()));
}

bool Macad::Occt::TCollection_HExtendedString::IsSameState(Macad::Occt::TCollection_HExtendedString^ other)
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsSameState(Handle(::TCollection_HExtendedString)(other->NativeInstance));
    return _result;
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::CreateDowncasted(::TCollection_HExtendedString* instance)
{
    return gcnew Macad::Occt::TCollection_HExtendedString( instance );
}



//---------------------------------------------------------------------
//  Class  TCollection_HAsciiString
//---------------------------------------------------------------------

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString();
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(System::String^ message)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
    NativeInstance = new ::TCollection_HAsciiString(sz_message);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(int length, char filler)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(length, filler);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(int value)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(value);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(double value)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(value);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(Macad::Occt::TCollection_AsciiString^ aString)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(*(::TCollection_AsciiString*)aString->NativeInstance);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(Macad::Occt::TCollection_HExtendedString^ aString, char replaceNonAscii)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(Handle(::TCollection_HExtendedString)(aString->NativeInstance), replaceNonAscii);
}

void Macad::Occt::TCollection_HAsciiString::AssignCat(System::String^ other)
{
    const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
    ((::TCollection_HAsciiString*)_NativeInstance)->AssignCat(sz_other);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
}

void Macad::Occt::TCollection_HAsciiString::AssignCat(Macad::Occt::TCollection_HAsciiString^ other)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->AssignCat(Handle(::TCollection_HAsciiString)(other->NativeInstance));
}

void Macad::Occt::TCollection_HAsciiString::Capitalize()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Capitalize();
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Cat(System::String^ other)
{
    const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Cat(sz_other);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Cat(Macad::Occt::TCollection_HAsciiString^ other)
{
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Cat(Handle(::TCollection_HAsciiString)(other->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void Macad::Occt::TCollection_HAsciiString::Center(int Width, char Filler)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Center(Width, Filler);
}

void Macad::Occt::TCollection_HAsciiString::ChangeAll(char aChar, char NewChar, bool CaseSensitive)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, CaseSensitive);
}

void Macad::Occt::TCollection_HAsciiString::ChangeAll(char aChar, char NewChar)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, true);
}

void Macad::Occt::TCollection_HAsciiString::Clear()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Clear();
}

int Macad::Occt::TCollection_HAsciiString::FirstLocationInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->FirstLocationInSet(Handle(::TCollection_HAsciiString)(Set->NativeInstance), FromIndex, ToIndex);
    return _result;
}

int Macad::Occt::TCollection_HAsciiString::FirstLocationNotInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->FirstLocationNotInSet(Handle(::TCollection_HAsciiString)(Set->NativeInstance), FromIndex, ToIndex);
    return _result;
}

void Macad::Occt::TCollection_HAsciiString::Insert(int where, char what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Insert(where, what);
}

void Macad::Occt::TCollection_HAsciiString::Insert(int where, Macad::Occt::TCollection_HAsciiString^ what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Insert(where, Handle(::TCollection_HAsciiString)(what->NativeInstance));
}

void Macad::Occt::TCollection_HAsciiString::InsertAfter(int Index, Macad::Occt::TCollection_HAsciiString^ other)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->InsertAfter(Index, Handle(::TCollection_HAsciiString)(other->NativeInstance));
}

void Macad::Occt::TCollection_HAsciiString::InsertBefore(int Index, Macad::Occt::TCollection_HAsciiString^ other)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->InsertBefore(Index, Handle(::TCollection_HAsciiString)(other->NativeInstance));
}

bool Macad::Occt::TCollection_HAsciiString::IsEmpty()
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsEmpty();
    return _result;
}

bool Macad::Occt::TCollection_HAsciiString::IsLess(Macad::Occt::TCollection_HAsciiString^ other)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsLess(Handle(::TCollection_HAsciiString)(other->NativeInstance));
    return _result;
}

bool Macad::Occt::TCollection_HAsciiString::IsGreater(Macad::Occt::TCollection_HAsciiString^ other)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsGreater(Handle(::TCollection_HAsciiString)(other->NativeInstance));
    return _result;
}

int Macad::Occt::TCollection_HAsciiString::IntegerValue()
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->IntegerValue();
    return _result;
}

bool Macad::Occt::TCollection_HAsciiString::IsIntegerValue()
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsIntegerValue();
    return _result;
}

bool Macad::Occt::TCollection_HAsciiString::IsRealValue()
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsRealValue();
    return _result;
}

bool Macad::Occt::TCollection_HAsciiString::IsAscii()
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsAscii();
    return _result;
}

bool Macad::Occt::TCollection_HAsciiString::IsDifferent(Macad::Occt::TCollection_HAsciiString^ S)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsDifferent(Handle(::TCollection_HAsciiString)(S->NativeInstance));
    return _result;
}

bool Macad::Occt::TCollection_HAsciiString::IsSameString(Macad::Occt::TCollection_HAsciiString^ S)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsSameString(Handle(::TCollection_HAsciiString)(S->NativeInstance));
    return _result;
}

bool Macad::Occt::TCollection_HAsciiString::IsSameString(Macad::Occt::TCollection_HAsciiString^ S, bool CaseSensitive)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsSameString(Handle(::TCollection_HAsciiString)(S->NativeInstance), CaseSensitive);
    return _result;
}

void Macad::Occt::TCollection_HAsciiString::LeftAdjust()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->LeftAdjust();
}

void Macad::Occt::TCollection_HAsciiString::LeftJustify(int Width, char Filler)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->LeftJustify(Width, Filler);
}

int Macad::Occt::TCollection_HAsciiString::Length()
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TCollection_HAsciiString::Location(Macad::Occt::TCollection_HAsciiString^ other, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Location(Handle(::TCollection_HAsciiString)(other->NativeInstance), FromIndex, ToIndex);
    return _result;
}

int Macad::Occt::TCollection_HAsciiString::Location(int N, char C, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Location(N, C, FromIndex, ToIndex);
    return _result;
}

void Macad::Occt::TCollection_HAsciiString::LowerCase()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->LowerCase();
}

void Macad::Occt::TCollection_HAsciiString::Prepend(Macad::Occt::TCollection_HAsciiString^ other)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Prepend(Handle(::TCollection_HAsciiString)(other->NativeInstance));
}

void Macad::Occt::TCollection_HAsciiString::Print(System::IO::TextWriter^ astream)
{
    std::ostringstream oss_astream;
    ((::TCollection_HAsciiString*)_NativeInstance)->Print(oss_astream);
    astream->Write(gcnew System::String(oss_astream.str().c_str()));
}

double Macad::Occt::TCollection_HAsciiString::RealValue()
{
    double _result = ((::TCollection_HAsciiString*)_NativeInstance)->RealValue();
    return _result;
}

void Macad::Occt::TCollection_HAsciiString::RemoveAll(char C, bool CaseSensitive)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->RemoveAll(C, CaseSensitive);
}

void Macad::Occt::TCollection_HAsciiString::RemoveAll(char what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->RemoveAll(what);
}

void Macad::Occt::TCollection_HAsciiString::Remove(int where, int ahowmany)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Remove(where, ahowmany);
}

void Macad::Occt::TCollection_HAsciiString::Remove(int where)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Remove(where, 1);
}

void Macad::Occt::TCollection_HAsciiString::RightAdjust()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->RightAdjust();
}

void Macad::Occt::TCollection_HAsciiString::RightJustify(int Width, char Filler)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->RightJustify(Width, Filler);
}

int Macad::Occt::TCollection_HAsciiString::Search(System::String^ what)
{
    const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Search(sz_what);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
    return _result;
}

int Macad::Occt::TCollection_HAsciiString::Search(Macad::Occt::TCollection_HAsciiString^ what)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Search(Handle(::TCollection_HAsciiString)(what->NativeInstance));
    return _result;
}

int Macad::Occt::TCollection_HAsciiString::SearchFromEnd(System::String^ what)
{
    const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->SearchFromEnd(sz_what);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
    return _result;
}

int Macad::Occt::TCollection_HAsciiString::SearchFromEnd(Macad::Occt::TCollection_HAsciiString^ what)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->SearchFromEnd(Handle(::TCollection_HAsciiString)(what->NativeInstance));
    return _result;
}

void Macad::Occt::TCollection_HAsciiString::SetValue(int where, char what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->SetValue(where, what);
}

void Macad::Occt::TCollection_HAsciiString::SetValue(int where, Macad::Occt::TCollection_HAsciiString^ what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->SetValue(where, Handle(::TCollection_HAsciiString)(what->NativeInstance));
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Split(int where)
{
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Split(where);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::SubString(int FromIndex, int ToIndex)
{
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->SubString(FromIndex, ToIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

System::String^ Macad::Occt::TCollection_HAsciiString::ToCString()
{
    Standard_CString _result = ((::TCollection_HAsciiString*)_NativeInstance)->ToCString();
    return gcnew System::String(_result);
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Token(System::String^ separators, int whichone)
{
    const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(sz_separators, whichone);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Token(System::String^ separators)
{
    const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(sz_separators, 1);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Token()
{
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(" \t", 1);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void Macad::Occt::TCollection_HAsciiString::Trunc(int ahowmany)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Trunc(ahowmany);
}

void Macad::Occt::TCollection_HAsciiString::UpperCase()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->UpperCase();
}

int Macad::Occt::TCollection_HAsciiString::UsefullLength()
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->UsefullLength();
    return _result;
}

char Macad::Occt::TCollection_HAsciiString::Value(int where)
{
    char _result = ((::TCollection_HAsciiString*)_NativeInstance)->Value(where);
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_HAsciiString::String()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TCollection_HAsciiString*)_NativeInstance)->String();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::TCollection_HAsciiString::IsSameState(Macad::Occt::TCollection_HAsciiString^ other)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsSameState(Handle(::TCollection_HAsciiString)(other->NativeInstance));
    return _result;
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::CreateDowncasted(::TCollection_HAsciiString* instance)
{
    return gcnew Macad::Occt::TCollection_HAsciiString( instance );
}



//---------------------------------------------------------------------
//  Class  TCollection
//---------------------------------------------------------------------

Macad::Occt::TCollection::TCollection()
    : Macad::Occt::BaseClass<::TCollection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection();
}

int Macad::Occt::TCollection::NextPrimeForMap(int I)
{
    int _result = ::TCollection::NextPrimeForMap(I);
    return _result;
}


