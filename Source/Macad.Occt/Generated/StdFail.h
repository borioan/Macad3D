// Generated wrapper code for package StdFail

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  StdFail_NotDone
//---------------------------------------------------------------------
public ref class StdFail_NotDone sealed
    : public Macad::Occt::Standard_Failure
{

#ifdef Include_StdFail_NotDone_h
public:
    Include_StdFail_NotDone_h
#endif

public:
    StdFail_NotDone(::StdFail_NotDone* nativeInstance)
        : Macad::Occt::Standard_Failure( nativeInstance )
    {}

    StdFail_NotDone(::StdFail_NotDone& nativeInstance)
        : Macad::Occt::Standard_Failure( nativeInstance )
    {}

    property ::StdFail_NotDone* NativeInstance
    {
        ::StdFail_NotDone* get()
        {
            return static_cast<::StdFail_NotDone*>(_NativeInstance);
        }
    }

public:
    StdFail_NotDone(System::String^ theMessage);
    StdFail_NotDone();
    StdFail_NotDone(System::String^ theMessage, System::String^ theStackTrace);
    System::String^ ExceptionType();
}; // class StdFail_NotDone

//---------------------------------------------------------------------
//  Class  StdFail_InfiniteSolutions
//---------------------------------------------------------------------
public ref class StdFail_InfiniteSolutions sealed
    : public Macad::Occt::Standard_Failure
{

#ifdef Include_StdFail_InfiniteSolutions_h
public:
    Include_StdFail_InfiniteSolutions_h
#endif

public:
    StdFail_InfiniteSolutions(::StdFail_InfiniteSolutions* nativeInstance)
        : Macad::Occt::Standard_Failure( nativeInstance )
    {}

    StdFail_InfiniteSolutions(::StdFail_InfiniteSolutions& nativeInstance)
        : Macad::Occt::Standard_Failure( nativeInstance )
    {}

    property ::StdFail_InfiniteSolutions* NativeInstance
    {
        ::StdFail_InfiniteSolutions* get()
        {
            return static_cast<::StdFail_InfiniteSolutions*>(_NativeInstance);
        }
    }

public:
    StdFail_InfiniteSolutions(System::String^ theMessage);
    StdFail_InfiniteSolutions();
    StdFail_InfiniteSolutions(System::String^ theMessage, System::String^ theStackTrace);
    System::String^ ExceptionType();
}; // class StdFail_InfiniteSolutions

//---------------------------------------------------------------------
//  Class  StdFail_Undefined
//---------------------------------------------------------------------
public ref class StdFail_Undefined sealed
    : public Macad::Occt::Standard_Failure
{

#ifdef Include_StdFail_Undefined_h
public:
    Include_StdFail_Undefined_h
#endif

public:
    StdFail_Undefined(::StdFail_Undefined* nativeInstance)
        : Macad::Occt::Standard_Failure( nativeInstance )
    {}

    StdFail_Undefined(::StdFail_Undefined& nativeInstance)
        : Macad::Occt::Standard_Failure( nativeInstance )
    {}

    property ::StdFail_Undefined* NativeInstance
    {
        ::StdFail_Undefined* get()
        {
            return static_cast<::StdFail_Undefined*>(_NativeInstance);
        }
    }

public:
    StdFail_Undefined(System::String^ theMessage);
    StdFail_Undefined();
    StdFail_Undefined(System::String^ theMessage, System::String^ theStackTrace);
    System::String^ ExceptionType();
}; // class StdFail_Undefined

//---------------------------------------------------------------------
//  Class  StdFail_UndefinedDerivative
//---------------------------------------------------------------------
public ref class StdFail_UndefinedDerivative sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_StdFail_UndefinedDerivative_h
public:
    Include_StdFail_UndefinedDerivative_h
#endif

public:
    StdFail_UndefinedDerivative(::StdFail_UndefinedDerivative* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    StdFail_UndefinedDerivative(::StdFail_UndefinedDerivative& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::StdFail_UndefinedDerivative* NativeInstance
    {
        ::StdFail_UndefinedDerivative* get()
        {
            return static_cast<::StdFail_UndefinedDerivative*>(_NativeInstance);
        }
    }

public:
    StdFail_UndefinedDerivative(System::String^ theMessage);
    StdFail_UndefinedDerivative();
    StdFail_UndefinedDerivative(System::String^ theMessage, System::String^ theStackTrace);
    System::String^ ExceptionType();
}; // class StdFail_UndefinedDerivative

//---------------------------------------------------------------------
//  Class  StdFail_UndefinedValue
//---------------------------------------------------------------------
public ref class StdFail_UndefinedValue sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_StdFail_UndefinedValue_h
public:
    Include_StdFail_UndefinedValue_h
#endif

public:
    StdFail_UndefinedValue(::StdFail_UndefinedValue* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    StdFail_UndefinedValue(::StdFail_UndefinedValue& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::StdFail_UndefinedValue* NativeInstance
    {
        ::StdFail_UndefinedValue* get()
        {
            return static_cast<::StdFail_UndefinedValue*>(_NativeInstance);
        }
    }

public:
    StdFail_UndefinedValue(System::String^ theMessage);
    StdFail_UndefinedValue();
    StdFail_UndefinedValue(System::String^ theMessage, System::String^ theStackTrace);
    System::String^ ExceptionType();
}; // class StdFail_UndefinedValue

}; // namespace Occt
}; // namespace Macad
