// Generated wrapper code for package Standard

#include "OcctPCH.h"
#include "Standard.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TCollection.h"
#include "StdFail.h"
#include "Quantity.h"
#include "gp.h"
#include "Geom2d.h"
#include "GProp.h"
#include "Geom.h"
#include "TopoDS.h"
#include "BRepExtrema.h"
#include "V3d.h"
#include "Prs3d.h"
#include "Aspect.h"
#include "Graphic3d.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  Standard_DumpValue
//---------------------------------------------------------------------

Macad::Occt::Standard_DumpValue::Standard_DumpValue()
    : Macad::Occt::BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_DumpValue();
}

Macad::Occt::Standard_DumpValue::Standard_DumpValue(Macad::Occt::TCollection_AsciiString^ theValue, int theStartPos)
    : Macad::Occt::BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_DumpValue(*(::TCollection_AsciiString*)theValue->NativeInstance, theStartPos);
}



//---------------------------------------------------------------------
//  Class  Standard_UUID
//---------------------------------------------------------------------

Macad::Occt::Standard_UUID::Standard_UUID()
    : Macad::Occt::BaseClass<::Standard_UUID>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_UUID();
}



//---------------------------------------------------------------------
//  Class  Standard
//---------------------------------------------------------------------

Macad::Occt::Standard::Standard()
    : Macad::Occt::BaseClass<::Standard>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard();
}

Macad::Occt::Standard::AllocatorType Macad::Occt::Standard::GetAllocatorType()
{
    ::Standard::AllocatorType _result = ::Standard::GetAllocatorType();
    return (Macad::Occt::Standard::AllocatorType)_result;
}

System::IntPtr Macad::Occt::Standard::Allocate(long long unsigned int theSize)
{
    void* _result = ::Standard::Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::Standard::AllocateOptimal(long long unsigned int theSize)
{
    void* _result = ::Standard::AllocateOptimal(theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::Standard::Free(System::IntPtr thePtr)
{
    ::Standard::Free(thePtr.ToPointer());
}

System::IntPtr Macad::Occt::Standard::Reallocate(System::IntPtr theStorage, long long unsigned int theNewSize)
{
    void* _result = ::Standard::Reallocate(theStorage.ToPointer(), theNewSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::Standard::AllocateAligned(long long unsigned int theSize, long long unsigned int theAlign)
{
    void* _result = ::Standard::AllocateAligned(theSize, theAlign);
    return System::IntPtr(_result);
}

void Macad::Occt::Standard::FreeAligned(System::IntPtr thePtrAligned)
{
    ::Standard::FreeAligned(thePtrAligned.ToPointer());
}

int Macad::Occt::Standard::Purge()
{
    int _result = ::Standard::Purge();
    return _result;
}

bool Macad::Occt::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces, System::IntPtr theContext, int theNbTopSkip)
{
    pin_ptr<char> pp_theBuffer = &theBuffer;
    bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, theContext.ToPointer(), theNbTopSkip);
    return _result;
}

bool Macad::Occt::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces, System::IntPtr theContext)
{
    pin_ptr<char> pp_theBuffer = &theBuffer;
    bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, theContext.ToPointer(), 0);
    return _result;
}

bool Macad::Occt::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces)
{
    pin_ptr<char> pp_theBuffer = &theBuffer;
    bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, nullptr, 0);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_Failure
//---------------------------------------------------------------------

Macad::Occt::Standard_Failure::Standard_Failure()
    : Macad::Occt::BaseClass<::Standard_Failure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_Failure();
}

Macad::Occt::Standard_Failure::Standard_Failure(System::String^ theMessage)
    : Macad::Occt::BaseClass<::Standard_Failure>(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_Failure(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_Failure::Standard_Failure(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::BaseClass<::Standard_Failure>(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_Failure(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_Failure::what()
{
    Standard_CString _result = ((::Standard_Failure*)_NativeInstance)->what();
    return gcnew System::String(_result);
}

System::String^ Macad::Occt::Standard_Failure::GetMessageString()
{
    Standard_CString _result = ((::Standard_Failure*)_NativeInstance)->GetMessageString();
    return gcnew System::String(_result);
}

System::String^ Macad::Occt::Standard_Failure::ExceptionType()
{
    Standard_CString _result = ((::Standard_Failure*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}

System::String^ Macad::Occt::Standard_Failure::GetStackString()
{
    Standard_CString _result = ((::Standard_Failure*)_NativeInstance)->GetStackString();
    return gcnew System::String(_result);
}

void Macad::Occt::Standard_Failure::Print(System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ((::Standard_Failure*)_NativeInstance)->Print(oss_theStream);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

int Macad::Occt::Standard_Failure::DefaultStackTraceLength()
{
    int _result = ::Standard_Failure::DefaultStackTraceLength();
    return _result;
}

void Macad::Occt::Standard_Failure::SetDefaultStackTraceLength(int theNbStackTraces)
{
    ::Standard_Failure::SetDefaultStackTraceLength(theNbStackTraces);
}



//---------------------------------------------------------------------
//  Class  Standard_DomainError
//---------------------------------------------------------------------

Macad::Occt::Standard_DomainError::Standard_DomainError(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_DomainError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_DomainError::Standard_DomainError()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_DomainError("");
}

Macad::Occt::Standard_DomainError::Standard_DomainError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_DomainError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_DomainError::ExceptionType()
{
    Standard_CString _result = ((::Standard_DomainError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_ConstructionError
//---------------------------------------------------------------------

Macad::Occt::Standard_ConstructionError::Standard_ConstructionError(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_ConstructionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_ConstructionError::Standard_ConstructionError()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ConstructionError("");
}

Macad::Occt::Standard_ConstructionError::Standard_ConstructionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_ConstructionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_ConstructionError::ExceptionType()
{
    Standard_CString _result = ((::Standard_ConstructionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_RangeError
//---------------------------------------------------------------------

Macad::Occt::Standard_RangeError::Standard_RangeError(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_RangeError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_RangeError::Standard_RangeError()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_RangeError("");
}

Macad::Occt::Standard_RangeError::Standard_RangeError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_RangeError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_RangeError::ExceptionType()
{
    Standard_CString _result = ((::Standard_RangeError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_OutOfRange
//---------------------------------------------------------------------

Macad::Occt::Standard_OutOfRange::Standard_OutOfRange(System::String^ theMessage)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_OutOfRange(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_OutOfRange::Standard_OutOfRange()
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_OutOfRange("");
}

Macad::Occt::Standard_OutOfRange::Standard_OutOfRange(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_OutOfRange(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_OutOfRange::ExceptionType()
{
    Standard_CString _result = ((::Standard_OutOfRange*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_DimensionError
//---------------------------------------------------------------------

Macad::Occt::Standard_DimensionError::Standard_DimensionError(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_DimensionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_DimensionError::Standard_DimensionError()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_DimensionError("");
}

Macad::Occt::Standard_DimensionError::Standard_DimensionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_DimensionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_DimensionError::ExceptionType()
{
    Standard_CString _result = ((::Standard_DimensionError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_DimensionMismatch
//---------------------------------------------------------------------

Macad::Occt::Standard_DimensionMismatch::Standard_DimensionMismatch(System::String^ theMessage)
    : Macad::Occt::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_DimensionMismatch(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_DimensionMismatch::Standard_DimensionMismatch()
    : Macad::Occt::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_DimensionMismatch("");
}

Macad::Occt::Standard_DimensionMismatch::Standard_DimensionMismatch(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_DimensionMismatch(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_DimensionMismatch::ExceptionType()
{
    Standard_CString _result = ((::Standard_DimensionMismatch*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_ProgramError
//---------------------------------------------------------------------

Macad::Occt::Standard_ProgramError::Standard_ProgramError(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_ProgramError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_ProgramError::Standard_ProgramError()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ProgramError("");
}

Macad::Occt::Standard_ProgramError::Standard_ProgramError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_ProgramError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_ProgramError::ExceptionType()
{
    Standard_CString _result = ((::Standard_ProgramError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_OutOfMemory
//---------------------------------------------------------------------

Macad::Occt::Standard_OutOfMemory::Standard_OutOfMemory(System::String^ theMessage)
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_OutOfMemory(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_OutOfMemory::Standard_OutOfMemory()
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_OutOfMemory(nullptr);
}

System::String^ Macad::Occt::Standard_OutOfMemory::what()
{
    Standard_CString _result = ((::Standard_OutOfMemory*)_NativeInstance)->what();
    return gcnew System::String(_result);
}

System::String^ Macad::Occt::Standard_OutOfMemory::ExceptionType()
{
    Standard_CString _result = ((::Standard_OutOfMemory*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}

void Macad::Occt::Standard_OutOfMemory::SetMessageString(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ((::Standard_OutOfMemory*)_NativeInstance)->SetMessageString(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}



//---------------------------------------------------------------------
//  Class  Standard_NotImplemented
//---------------------------------------------------------------------

Macad::Occt::Standard_NotImplemented::Standard_NotImplemented(System::String^ theMessage)
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_NotImplemented(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NotImplemented::Standard_NotImplemented()
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_NotImplemented("");
}

Macad::Occt::Standard_NotImplemented::Standard_NotImplemented(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_NotImplemented(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_NotImplemented::ExceptionType()
{
    Standard_CString _result = ((::Standard_NotImplemented*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_Persistent
//---------------------------------------------------------------------

Macad::Occt::Standard_Persistent::Standard_Persistent()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_Persistent();
}

Macad::Occt::Standard_Persistent^ Macad::Occt::Standard_Persistent::CreateDowncasted(::Standard_Persistent* instance)
{
    return gcnew Macad::Occt::Standard_Persistent( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_NoSuchObject
//---------------------------------------------------------------------

Macad::Occt::Standard_NoSuchObject::Standard_NoSuchObject(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_NoSuchObject(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NoSuchObject::Standard_NoSuchObject()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_NoSuchObject("");
}

Macad::Occt::Standard_NoSuchObject::Standard_NoSuchObject(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_NoSuchObject(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_NoSuchObject::ExceptionType()
{
    Standard_CString _result = ((::Standard_NoSuchObject*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_TypeMismatch
//---------------------------------------------------------------------

Macad::Occt::Standard_TypeMismatch::Standard_TypeMismatch(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_TypeMismatch(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_TypeMismatch::Standard_TypeMismatch()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_TypeMismatch("");
}

Macad::Occt::Standard_TypeMismatch::Standard_TypeMismatch(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_TypeMismatch(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_TypeMismatch::ExceptionType()
{
    Standard_CString _result = ((::Standard_TypeMismatch*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_Dump
//---------------------------------------------------------------------

Macad::Occt::Standard_Dump::Standard_Dump()
    : Macad::Occt::BaseClass<::Standard_Dump>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_Dump();
}

bool Macad::Occt::Standard_Dump::HasChildKey(Macad::Occt::TCollection_AsciiString^ theSourceValue)
{
    bool _result = ::Standard_Dump::HasChildKey(*(::TCollection_AsciiString*)theSourceValue->NativeInstance);
    return _result;
}

System::String^ Macad::Occt::Standard_Dump::JsonKeyToString(Macad::Occt::Standard_JsonKey theKey)
{
    Standard_CString _result = ::Standard_Dump::JsonKeyToString((::Standard_JsonKey)theKey);
    return gcnew System::String(_result);
}

int Macad::Occt::Standard_Dump::JsonKeyLength(Macad::Occt::Standard_JsonKey theKey)
{
    int _result = ::Standard_Dump::JsonKeyLength((::Standard_JsonKey)theKey);
    return _result;
}

void Macad::Occt::Standard_Dump::AddValuesSeparator(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ::Standard_Dump::AddValuesSeparator(oss_theOStream);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerPrefix()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerPrefix();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer, bool isShortInfo)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerInfo(Handle(::Standard_Transient)(thePointer->NativeInstance), isShortInfo);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerInfo(Handle(::Standard_Transient)(thePointer->NativeInstance), true);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(System::IntPtr thePointer, bool isShortInfo)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerInfo(thePointer.ToPointer(), isShortInfo);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(System::IntPtr thePointer)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerInfo(thePointer.ToPointer(), true);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Standard_Dump::DumpKeyToClass(System::IO::TextWriter^ theOStream, Macad::Occt::TCollection_AsciiString^ theKey, Macad::Occt::TCollection_AsciiString^ theField)
{
    std::ostringstream oss_theOStream;
    ::Standard_Dump::DumpKeyToClass(oss_theOStream, *(::TCollection_AsciiString*)theKey->NativeInstance, *(::TCollection_AsciiString*)theField->NativeInstance);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Standard_Dump::DumpCharacterValues(System::IO::TextWriter^ theOStream, int theCount)
{
    std::ostringstream oss_theOStream;
    ::Standard_Dump::DumpCharacterValues(oss_theOStream, theCount);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Standard_Dump::DumpRealValues(System::IO::TextWriter^ theOStream, int theCount)
{
    std::ostringstream oss_theOStream;
    ::Standard_Dump::DumpRealValues(oss_theOStream, theCount);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::Standard_Dump::ProcessStreamName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos)
{
    pin_ptr<int> pp_theStreamPos = &theStreamPos;
    bool _result = ::Standard_Dump::ProcessStreamName(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, *(int*)pp_theStreamPos);
    return _result;
}

bool Macad::Occt::Standard_Dump::ProcessFieldName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos)
{
    pin_ptr<int> pp_theStreamPos = &theStreamPos;
    bool _result = ::Standard_Dump::ProcessFieldName(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, *(int*)pp_theStreamPos);
    return _result;
}

bool Macad::Occt::Standard_Dump::InitRealValues(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, int theCount)
{
    pin_ptr<int> pp_theStreamPos = &theStreamPos;
    bool _result = ::Standard_Dump::InitRealValues(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(int*)pp_theStreamPos, theCount);
    return _result;
}

bool Macad::Occt::Standard_Dump::InitValue(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, Macad::Occt::TCollection_AsciiString^ theValue)
{
    pin_ptr<int> pp_theStreamPos = &theStreamPos;
    bool _result = ::Standard_Dump::InitValue(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(int*)pp_theStreamPos, *(::TCollection_AsciiString*)theValue->NativeInstance);
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::DumpFieldToName(Macad::Occt::TCollection_AsciiString^ theField)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::DumpFieldToName(*(::TCollection_AsciiString*)theField->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_AbortiveTransaction
//---------------------------------------------------------------------

Macad::Occt::Standard_AbortiveTransaction::Standard_AbortiveTransaction(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_AbortiveTransaction(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_AbortiveTransaction::Standard_AbortiveTransaction()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_AbortiveTransaction("");
}

Macad::Occt::Standard_AbortiveTransaction::Standard_AbortiveTransaction(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_AbortiveTransaction(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_AbortiveTransaction::ExceptionType()
{
    Standard_CString _result = ((::Standard_AbortiveTransaction*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_Condition
//---------------------------------------------------------------------

Macad::Occt::Standard_Condition::Standard_Condition(bool theIsSet)
    : Macad::Occt::BaseClass<::Standard_Condition>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_Condition(theIsSet);
}

Macad::Occt::Standard_Condition::Standard_Condition()
    : Macad::Occt::BaseClass<::Standard_Condition>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_Condition(false);
}

void Macad::Occt::Standard_Condition::Set()
{
    ((::Standard_Condition*)_NativeInstance)->Set();
}

void Macad::Occt::Standard_Condition::Reset()
{
    ((::Standard_Condition*)_NativeInstance)->Reset();
}

void Macad::Occt::Standard_Condition::Wait()
{
    ((::Standard_Condition*)_NativeInstance)->Wait();
}

bool Macad::Occt::Standard_Condition::Wait(int theTimeMilliseconds)
{
    bool _result = ((::Standard_Condition*)_NativeInstance)->Wait(theTimeMilliseconds);
    return _result;
}

bool Macad::Occt::Standard_Condition::Check()
{
    bool _result = ((::Standard_Condition*)_NativeInstance)->Check();
    return _result;
}

bool Macad::Occt::Standard_Condition::CheckReset()
{
    bool _result = ((::Standard_Condition*)_NativeInstance)->CheckReset();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_CStringHasher
//---------------------------------------------------------------------

Macad::Occt::Standard_CStringHasher::Standard_CStringHasher()
    : Macad::Occt::BaseClass<::Standard_CStringHasher>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_CStringHasher();
}



//---------------------------------------------------------------------
//  Class  Standard_NumericError
//---------------------------------------------------------------------

Macad::Occt::Standard_NumericError::Standard_NumericError(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_NumericError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NumericError::Standard_NumericError()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_NumericError("");
}

Macad::Occt::Standard_NumericError::Standard_NumericError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_NumericError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_NumericError::ExceptionType()
{
    Standard_CString _result = ((::Standard_NumericError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_DivideByZero
//---------------------------------------------------------------------

Macad::Occt::Standard_DivideByZero::Standard_DivideByZero(System::String^ theMessage)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_DivideByZero(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_DivideByZero::Standard_DivideByZero()
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_DivideByZero("");
}

Macad::Occt::Standard_DivideByZero::Standard_DivideByZero(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_DivideByZero(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_DivideByZero::ExceptionType()
{
    Standard_CString _result = ((::Standard_DivideByZero*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_Overflow
//---------------------------------------------------------------------

Macad::Occt::Standard_Overflow::Standard_Overflow(System::String^ theMessage)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_Overflow(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_Overflow::Standard_Overflow()
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_Overflow("");
}

Macad::Occt::Standard_Overflow::Standard_Overflow(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_Overflow(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_Overflow::ExceptionType()
{
    Standard_CString _result = ((::Standard_Overflow*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_Underflow
//---------------------------------------------------------------------

Macad::Occt::Standard_Underflow::Standard_Underflow(System::String^ theMessage)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_Underflow(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_Underflow::Standard_Underflow()
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_Underflow("");
}

Macad::Occt::Standard_Underflow::Standard_Underflow(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_Underflow(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_Underflow::ExceptionType()
{
    Standard_CString _result = ((::Standard_Underflow*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_ErrorHandler
//---------------------------------------------------------------------

Macad::Occt::Standard_ErrorHandler::Standard_ErrorHandler()
    : Macad::Occt::BaseClass<::Standard_ErrorHandler>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ErrorHandler();
}

void Macad::Occt::Standard_ErrorHandler::Destroy()
{
    ((::Standard_ErrorHandler*)_NativeInstance)->Destroy();
}

void Macad::Occt::Standard_ErrorHandler::Raise()
{
    ((::Standard_ErrorHandler*)_NativeInstance)->Raise();
}

bool Macad::Occt::Standard_ErrorHandler::IsInTryBlock()
{
    bool _result = ::Standard_ErrorHandler::IsInTryBlock();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_ErrorHandler::Callback
//---------------------------------------------------------------------

void Macad::Occt::Standard_ErrorHandler::Callback::RegisterCallback()
{
    ((::Standard_ErrorHandler::Callback*)_NativeInstance)->RegisterCallback();
}

void Macad::Occt::Standard_ErrorHandler::Callback::UnregisterCallback()
{
    ((::Standard_ErrorHandler::Callback*)_NativeInstance)->UnregisterCallback();
}

void Macad::Occt::Standard_ErrorHandler::Callback::DestroyCallback()
{
    ((::Standard_ErrorHandler::Callback*)_NativeInstance)->DestroyCallback();
}



//---------------------------------------------------------------------
//  Class  Standard_GUID
//---------------------------------------------------------------------

Macad::Occt::Standard_GUID::Standard_GUID()
    : Macad::Occt::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_GUID();
}

Macad::Occt::Standard_GUID::Standard_GUID(System::String^ aGuid)
    : Macad::Occt::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<const wchar_t> pp_aGuid = PtrToStringChars(aGuid);
    _NativeInstance = new ::Standard_GUID((const char16_t*)pp_aGuid);
}

Macad::Occt::Standard_GUID::Standard_GUID(Macad::Occt::Standard_UUID^ theUUID)
    : Macad::Occt::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_GUID(*(::Standard_UUID*)theUUID->NativeInstance);
}

void Macad::Occt::Standard_GUID::ToCString(char aStrGuid)
{
    pin_ptr<char> pp_aStrGuid = &aStrGuid;
    ((::Standard_GUID*)_NativeInstance)->ToCString((char*)pp_aStrGuid);
}

Macad::Occt::Standard_UUID^ Macad::Occt::Standard_GUID::ToUUID()
{
    ::Standard_UUID* _result = new ::Standard_UUID();
    *_result = ((::Standard_GUID*)_NativeInstance)->ToUUID();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Standard_UUID(_result);
}

bool Macad::Occt::Standard_GUID::IsSame(Macad::Occt::Standard_GUID^ uid)
{
    bool _result = ((::Standard_GUID*)_NativeInstance)->IsSame(*(::Standard_GUID*)uid->NativeInstance);
    return _result;
}

bool Macad::Occt::Standard_GUID::IsNotSame(Macad::Occt::Standard_GUID^ uid)
{
    bool _result = ((::Standard_GUID*)_NativeInstance)->IsNotSame(*(::Standard_GUID*)uid->NativeInstance);
    return _result;
}

void Macad::Occt::Standard_GUID::Assign(Macad::Occt::Standard_GUID^ uid)
{
    ((::Standard_GUID*)_NativeInstance)->Assign(*(::Standard_GUID*)uid->NativeInstance);
}

void Macad::Occt::Standard_GUID::Assign(Macad::Occt::Standard_UUID^ uid)
{
    ((::Standard_GUID*)_NativeInstance)->Assign(*(::Standard_UUID*)uid->NativeInstance);
}

void Macad::Occt::Standard_GUID::ShallowDump(System::IO::TextWriter^ aStream)
{
    std::ostringstream oss_aStream;
    ((::Standard_GUID*)_NativeInstance)->ShallowDump(oss_aStream);
    aStream->Write(gcnew System::String(oss_aStream.str().c_str()));
}

bool Macad::Occt::Standard_GUID::CheckGUIDFormat(System::String^ aGuid)
{
    const char* sz_aGuid = (char*)(void*)Marshal::StringToHGlobalAnsi(aGuid);
    bool _result = ::Standard_GUID::CheckGUIDFormat(sz_aGuid);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aGuid);
    return _result;
}

int Macad::Occt::Standard_GUID::GetHashCode()
{
    return std::hash<::Standard_GUID>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Standard_ImmutableObject
//---------------------------------------------------------------------

Macad::Occt::Standard_ImmutableObject::Standard_ImmutableObject(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_ImmutableObject(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_ImmutableObject::Standard_ImmutableObject()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ImmutableObject("");
}

Macad::Occt::Standard_ImmutableObject::Standard_ImmutableObject(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_ImmutableObject(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_ImmutableObject::ExceptionType()
{
    Standard_CString _result = ((::Standard_ImmutableObject*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_LicenseError
//---------------------------------------------------------------------

Macad::Occt::Standard_LicenseError::Standard_LicenseError(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_LicenseError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_LicenseError::Standard_LicenseError()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_LicenseError("");
}

Macad::Occt::Standard_LicenseError::Standard_LicenseError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_LicenseError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_LicenseError::ExceptionType()
{
    Standard_CString _result = ((::Standard_LicenseError*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_LicenseNotFound
//---------------------------------------------------------------------

Macad::Occt::Standard_LicenseNotFound::Standard_LicenseNotFound(System::String^ theMessage)
    : Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_LicenseNotFound(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_LicenseNotFound::Standard_LicenseNotFound()
    : Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_LicenseNotFound("");
}

Macad::Occt::Standard_LicenseNotFound::Standard_LicenseNotFound(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_LicenseNotFound(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_LicenseNotFound::ExceptionType()
{
    Standard_CString _result = ((::Standard_LicenseNotFound*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_MMgrRoot
//---------------------------------------------------------------------

Macad::Occt::Standard_MMgrRoot::Standard_MMgrRoot()
    : Macad::Occt::BaseClass<::Standard_MMgrRoot>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

System::IntPtr Macad::Occt::Standard_MMgrRoot::Allocate(long long unsigned int theSize)
{
    void* _result = ((::Standard_MMgrRoot*)_NativeInstance)->Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::Standard_MMgrRoot::Reallocate(System::IntPtr thePtr, long long unsigned int theSize)
{
    void* _result = ((::Standard_MMgrRoot*)_NativeInstance)->Reallocate(thePtr.ToPointer(), theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::Standard_MMgrRoot::Free(System::IntPtr thePtr)
{
    ((::Standard_MMgrRoot*)_NativeInstance)->Free(thePtr.ToPointer());
}

int Macad::Occt::Standard_MMgrRoot::Purge(bool isDestroyed)
{
    int _result = ((::Standard_MMgrRoot*)_NativeInstance)->Purge(isDestroyed);
    return _result;
}

int Macad::Occt::Standard_MMgrRoot::Purge()
{
    int _result = ((::Standard_MMgrRoot*)_NativeInstance)->Purge(false);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_MultiplyDefined
//---------------------------------------------------------------------

Macad::Occt::Standard_MultiplyDefined::Standard_MultiplyDefined(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_MultiplyDefined(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_MultiplyDefined::Standard_MultiplyDefined()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_MultiplyDefined("");
}

Macad::Occt::Standard_MultiplyDefined::Standard_MultiplyDefined(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_MultiplyDefined(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_MultiplyDefined::ExceptionType()
{
    Standard_CString _result = ((::Standard_MultiplyDefined*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_NegativeValue
//---------------------------------------------------------------------

Macad::Occt::Standard_NegativeValue::Standard_NegativeValue(System::String^ theMessage)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_NegativeValue(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NegativeValue::Standard_NegativeValue()
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_NegativeValue("");
}

Macad::Occt::Standard_NegativeValue::Standard_NegativeValue(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_NegativeValue(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_NegativeValue::ExceptionType()
{
    Standard_CString _result = ((::Standard_NegativeValue*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_NoMoreObject
//---------------------------------------------------------------------

Macad::Occt::Standard_NoMoreObject::Standard_NoMoreObject(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_NoMoreObject(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NoMoreObject::Standard_NoMoreObject()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_NoMoreObject("");
}

Macad::Occt::Standard_NoMoreObject::Standard_NoMoreObject(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_NoMoreObject(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_NoMoreObject::ExceptionType()
{
    Standard_CString _result = ((::Standard_NoMoreObject*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_NullObject
//---------------------------------------------------------------------

Macad::Occt::Standard_NullObject::Standard_NullObject(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_NullObject(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NullObject::Standard_NullObject()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_NullObject("");
}

Macad::Occt::Standard_NullObject::Standard_NullObject(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_NullObject(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_NullObject::ExceptionType()
{
    Standard_CString _result = ((::Standard_NullObject*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_NullValue
//---------------------------------------------------------------------

Macad::Occt::Standard_NullValue::Standard_NullValue(System::String^ theMessage)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::Standard_NullValue(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NullValue::Standard_NullValue()
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_NullValue("");
}

Macad::Occt::Standard_NullValue::Standard_NullValue(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::Standard_NullValue(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::Standard_NullValue::ExceptionType()
{
    Standard_CString _result = ((::Standard_NullValue*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_ReadBuffer
//---------------------------------------------------------------------

Macad::Occt::Standard_ReadBuffer::Standard_ReadBuffer(long long int theDataLen, long long unsigned int theChunkLen, bool theIsPartialPayload)
    : Macad::Occt::BaseClass<::Standard_ReadBuffer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ReadBuffer(theDataLen, theChunkLen, theIsPartialPayload);
}

Macad::Occt::Standard_ReadBuffer::Standard_ReadBuffer(long long int theDataLen, long long unsigned int theChunkLen)
    : Macad::Occt::BaseClass<::Standard_ReadBuffer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ReadBuffer(theDataLen, theChunkLen, false);
}

void Macad::Occt::Standard_ReadBuffer::Init(long long int theDataLen, long long unsigned int theChunkLen, bool theIsPartialPayload)
{
    ((::Standard_ReadBuffer*)_NativeInstance)->Init(theDataLen, theChunkLen, theIsPartialPayload);
}

void Macad::Occt::Standard_ReadBuffer::Init(long long int theDataLen, long long unsigned int theChunkLen)
{
    ((::Standard_ReadBuffer*)_NativeInstance)->Init(theDataLen, theChunkLen, false);
}

bool Macad::Occt::Standard_ReadBuffer::IsDone()
{
    bool _result = ((::Standard_ReadBuffer*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_ReadLineBuffer
//---------------------------------------------------------------------

Macad::Occt::Standard_ReadLineBuffer::Standard_ReadLineBuffer(long long unsigned int theMaxBufferSizeBytes)
    : Macad::Occt::BaseClass<::Standard_ReadLineBuffer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ReadLineBuffer(theMaxBufferSizeBytes);
}

void Macad::Occt::Standard_ReadLineBuffer::Clear()
{
    ((::Standard_ReadLineBuffer*)_NativeInstance)->Clear();
}

bool Macad::Occt::Standard_ReadLineBuffer::IsMultilineMode()
{
    bool _result = ((::Standard_ReadLineBuffer*)_NativeInstance)->IsMultilineMode();
    return _result;
}

bool Macad::Occt::Standard_ReadLineBuffer::ToPutGapInMultiline()
{
    bool _result = ((::Standard_ReadLineBuffer*)_NativeInstance)->ToPutGapInMultiline();
    return _result;
}

void Macad::Occt::Standard_ReadLineBuffer::SetMultilineMode(bool theMultilineMode, bool theToPutGap)
{
    ((::Standard_ReadLineBuffer*)_NativeInstance)->SetMultilineMode(theMultilineMode, theToPutGap);
}

void Macad::Occt::Standard_ReadLineBuffer::SetMultilineMode(bool theMultilineMode)
{
    ((::Standard_ReadLineBuffer*)_NativeInstance)->SetMultilineMode(theMultilineMode, true);
}


