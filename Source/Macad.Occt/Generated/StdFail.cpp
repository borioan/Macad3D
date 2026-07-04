// Generated wrapper code for package StdFail

#include "OcctPCH.h"
#include "StdFail.h"

using namespace System::Runtime::InteropServices; // for class Marshal



//---------------------------------------------------------------------
//  Class  StdFail_NotDone
//---------------------------------------------------------------------

Macad::Occt::StdFail_NotDone::StdFail_NotDone(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::StdFail_NotDone(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_NotDone::StdFail_NotDone()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::StdFail_NotDone("");
}

Macad::Occt::StdFail_NotDone::StdFail_NotDone(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::StdFail_NotDone(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::StdFail_NotDone::ExceptionType()
{
    Standard_CString _result = ((::StdFail_NotDone*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  StdFail_InfiniteSolutions
//---------------------------------------------------------------------

Macad::Occt::StdFail_InfiniteSolutions::StdFail_InfiniteSolutions(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::StdFail_InfiniteSolutions(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_InfiniteSolutions::StdFail_InfiniteSolutions()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::StdFail_InfiniteSolutions("");
}

Macad::Occt::StdFail_InfiniteSolutions::StdFail_InfiniteSolutions(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::StdFail_InfiniteSolutions(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::StdFail_InfiniteSolutions::ExceptionType()
{
    Standard_CString _result = ((::StdFail_InfiniteSolutions*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  StdFail_Undefined
//---------------------------------------------------------------------

Macad::Occt::StdFail_Undefined::StdFail_Undefined(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::StdFail_Undefined(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_Undefined::StdFail_Undefined()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::StdFail_Undefined("");
}

Macad::Occt::StdFail_Undefined::StdFail_Undefined(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::StdFail_Undefined(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::StdFail_Undefined::ExceptionType()
{
    Standard_CString _result = ((::StdFail_Undefined*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  StdFail_UndefinedDerivative
//---------------------------------------------------------------------

Macad::Occt::StdFail_UndefinedDerivative::StdFail_UndefinedDerivative(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::StdFail_UndefinedDerivative(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_UndefinedDerivative::StdFail_UndefinedDerivative()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::StdFail_UndefinedDerivative("");
}

Macad::Occt::StdFail_UndefinedDerivative::StdFail_UndefinedDerivative(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::StdFail_UndefinedDerivative(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::StdFail_UndefinedDerivative::ExceptionType()
{
    Standard_CString _result = ((::StdFail_UndefinedDerivative*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  StdFail_UndefinedValue
//---------------------------------------------------------------------

Macad::Occt::StdFail_UndefinedValue::StdFail_UndefinedValue(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::StdFail_UndefinedValue(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_UndefinedValue::StdFail_UndefinedValue()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::StdFail_UndefinedValue("");
}

Macad::Occt::StdFail_UndefinedValue::StdFail_UndefinedValue(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::StdFail_UndefinedValue(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::StdFail_UndefinedValue::ExceptionType()
{
    Standard_CString _result = ((::StdFail_UndefinedValue*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}


