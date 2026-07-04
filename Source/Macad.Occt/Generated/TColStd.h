// Generated wrapper code for package TColStd

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TColStd_Array1OfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_Array1OfAsciiString sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString>
    , public IIndexEnumerable<Macad::Occt::TCollection_AsciiString^>
{

#ifdef Include_TColStd_Array1OfAsciiString_h
public:
    Include_TColStd_Array1OfAsciiString_h
#endif

public:
    TColStd_Array1OfAsciiString(::TColStd_Array1OfAsciiString* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString>( nativeInstance, true )
    {}

    TColStd_Array1OfAsciiString(::TColStd_Array1OfAsciiString& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfAsciiString* NativeInstance
    {
        ::TColStd_Array1OfAsciiString* get()
        {
            return static_cast<::TColStd_Array1OfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString::Iterator>
    {

#ifdef Include_TColStd_Array1OfAsciiString_Iterator_h
    public:
        Include_TColStd_Array1OfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfAsciiString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfAsciiString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_Array1OfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::TColStd_Array1OfAsciiString^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfAsciiString^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::TCollection_AsciiString^ Value();
        Macad::Occt::TCollection_AsciiString^ ChangeValue();
    }; // class Iterator

    TColStd_Array1OfAsciiString();
    TColStd_Array1OfAsciiString(int theLower, int theUpper);
    TColStd_Array1OfAsciiString(Macad::Occt::TCollection_AsciiString^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfAsciiString(Macad::Occt::TCollection_AsciiString^ theBegin, int theLower, int theUpper);
    TColStd_Array1OfAsciiString(long long unsigned int theSize);
    void Init(Macad::Occt::TCollection_AsciiString^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfAsciiString^ Assign(Macad::Occt::TColStd_Array1OfAsciiString^ theOther);
    Macad::Occt::TColStd_Array1OfAsciiString^ CopyValues(Macad::Occt::TColStd_Array1OfAsciiString^ theOther);
    Macad::Occt::TColStd_Array1OfAsciiString^ Move(Macad::Occt::TColStd_Array1OfAsciiString^ theOther);
    Macad::Occt::TCollection_AsciiString^ First();
    Macad::Occt::TCollection_AsciiString^ ChangeFirst();
    Macad::Occt::TCollection_AsciiString^ Last();
    Macad::Occt::TCollection_AsciiString^ ChangeLast();
    virtual Macad::Occt::TCollection_AsciiString^ Value(int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeValue(int theIndex);
    Macad::Occt::TCollection_AsciiString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_Array1OfBoolean sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfBoolean>
    , public IIndexEnumerable<bool>
{

#ifdef Include_TColStd_Array1OfBoolean_h
public:
    Include_TColStd_Array1OfBoolean_h
#endif

public:
    TColStd_Array1OfBoolean(::TColStd_Array1OfBoolean* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfBoolean>( nativeInstance, true )
    {}

    TColStd_Array1OfBoolean(::TColStd_Array1OfBoolean& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfBoolean>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfBoolean* NativeInstance
    {
        ::TColStd_Array1OfBoolean* get()
        {
            return static_cast<::TColStd_Array1OfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfBoolean::Iterator>
    {

#ifdef Include_TColStd_Array1OfBoolean_Iterator_h
    public:
        Include_TColStd_Array1OfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfBoolean::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfBoolean::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfBoolean::Iterator* NativeInstance
        {
            ::TColStd_Array1OfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
        property bool ChangeValue {
            bool get() {
                return ((::TColStd_Array1OfBoolean::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(bool value) {
                ((::TColStd_Array1OfBoolean::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        void Init(Macad::Occt::TColStd_Array1OfBoolean^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfBoolean^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        bool Value();
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfBoolean();
    TColStd_Array1OfBoolean(int theLower, int theUpper);
    TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper);
    TColStd_Array1OfBoolean(long long unsigned int theSize);
    void Init(bool theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfBoolean^ Assign(Macad::Occt::TColStd_Array1OfBoolean^ theOther);
    Macad::Occt::TColStd_Array1OfBoolean^ CopyValues(Macad::Occt::TColStd_Array1OfBoolean^ theOther);
    Macad::Occt::TColStd_Array1OfBoolean^ Move(Macad::Occt::TColStd_Array1OfBoolean^ theOther);
    bool First();
    bool Last();
    virtual bool Value(int theIndex);
    bool ChangeValue(int theIndex);
    bool At(long long unsigned int theIndex);
    bool ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, bool theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<bool>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfByte
//---------------------------------------------------------------------
public ref class TColStd_Array1OfByte sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfByte>
    , public IIndexEnumerable<unsigned char>
{

#ifdef Include_TColStd_Array1OfByte_h
public:
    Include_TColStd_Array1OfByte_h
#endif

public:
    TColStd_Array1OfByte(::TColStd_Array1OfByte* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfByte>( nativeInstance, true )
    {}

    TColStd_Array1OfByte(::TColStd_Array1OfByte& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfByte>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfByte* NativeInstance
    {
        ::TColStd_Array1OfByte* get()
        {
            return static_cast<::TColStd_Array1OfByte*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfByte::Iterator>
    {

#ifdef Include_TColStd_Array1OfByte_Iterator_h
    public:
        Include_TColStd_Array1OfByte_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfByte::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfByte::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfByte::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfByte::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfByte::Iterator* NativeInstance
        {
            ::TColStd_Array1OfByte::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfByte::Iterator*>(_NativeInstance);
            }
        }

    public:
        property unsigned char ChangeValue {
            unsigned char get() {
                return ((::TColStd_Array1OfByte::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(unsigned char value) {
                ((::TColStd_Array1OfByte::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        void Init(Macad::Occt::TColStd_Array1OfByte^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfByte^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        unsigned char Value();
    }; // class Iterator

    property unsigned char ChangeFirst {
        unsigned char get() {
            return ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeFirst();
        }
        void set(unsigned char value) {
            ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property unsigned char ChangeLast {
        unsigned char get() {
            return ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeLast();
        }
        void set(unsigned char value) {
            ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfByte();
    TColStd_Array1OfByte(int theLower, int theUpper);
    TColStd_Array1OfByte(unsigned char theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfByte(unsigned char theBegin, int theLower, int theUpper);
    TColStd_Array1OfByte(long long unsigned int theSize);
    void Init(unsigned char theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfByte^ Assign(Macad::Occt::TColStd_Array1OfByte^ theOther);
    Macad::Occt::TColStd_Array1OfByte^ CopyValues(Macad::Occt::TColStd_Array1OfByte^ theOther);
    Macad::Occt::TColStd_Array1OfByte^ Move(Macad::Occt::TColStd_Array1OfByte^ theOther);
    unsigned char First();
    unsigned char Last();
    virtual unsigned char Value(int theIndex);
    unsigned char ChangeValue(int theIndex);
    unsigned char At(long long unsigned int theIndex);
    unsigned char ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, unsigned char theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<unsigned char>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfByte

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_Array1OfCharacter sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfCharacter>
    , public IIndexEnumerable<char>
{

#ifdef Include_TColStd_Array1OfCharacter_h
public:
    Include_TColStd_Array1OfCharacter_h
#endif

public:
    TColStd_Array1OfCharacter(::TColStd_Array1OfCharacter* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfCharacter>( nativeInstance, true )
    {}

    TColStd_Array1OfCharacter(::TColStd_Array1OfCharacter& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfCharacter>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfCharacter* NativeInstance
    {
        ::TColStd_Array1OfCharacter* get()
        {
            return static_cast<::TColStd_Array1OfCharacter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfCharacter::Iterator>
    {

#ifdef Include_TColStd_Array1OfCharacter_Iterator_h
    public:
        Include_TColStd_Array1OfCharacter_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfCharacter::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfCharacter::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfCharacter::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfCharacter::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfCharacter::Iterator* NativeInstance
        {
            ::TColStd_Array1OfCharacter::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfCharacter::Iterator*>(_NativeInstance);
            }
        }

    public:
        property char ChangeValue {
            char get() {
                return ((::TColStd_Array1OfCharacter::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(char value) {
                ((::TColStd_Array1OfCharacter::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        void Init(Macad::Occt::TColStd_Array1OfCharacter^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfCharacter^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        char Value();
    }; // class Iterator

    property char ChangeFirst {
        char get() {
            return ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeFirst();
        }
        void set(char value) {
            ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property char ChangeLast {
        char get() {
            return ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeLast();
        }
        void set(char value) {
            ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfCharacter();
    TColStd_Array1OfCharacter(int theLower, int theUpper);
    TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper);
    TColStd_Array1OfCharacter(long long unsigned int theSize);
    void Init(char theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfCharacter^ Assign(Macad::Occt::TColStd_Array1OfCharacter^ theOther);
    Macad::Occt::TColStd_Array1OfCharacter^ CopyValues(Macad::Occt::TColStd_Array1OfCharacter^ theOther);
    Macad::Occt::TColStd_Array1OfCharacter^ Move(Macad::Occt::TColStd_Array1OfCharacter^ theOther);
    char First();
    char Last();
    virtual char Value(int theIndex);
    char ChangeValue(int theIndex);
    char At(long long unsigned int theIndex);
    char ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, char theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<char>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_Array1OfExtendedString sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString>
    , public IIndexEnumerable<Macad::Occt::TCollection_ExtendedString^>
{

#ifdef Include_TColStd_Array1OfExtendedString_h
public:
    Include_TColStd_Array1OfExtendedString_h
#endif

public:
    TColStd_Array1OfExtendedString(::TColStd_Array1OfExtendedString* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString>( nativeInstance, true )
    {}

    TColStd_Array1OfExtendedString(::TColStd_Array1OfExtendedString& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfExtendedString* NativeInstance
    {
        ::TColStd_Array1OfExtendedString* get()
        {
            return static_cast<::TColStd_Array1OfExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString::Iterator>
    {

#ifdef Include_TColStd_Array1OfExtendedString_Iterator_h
    public:
        Include_TColStd_Array1OfExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfExtendedString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfExtendedString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfExtendedString::Iterator* NativeInstance
        {
            ::TColStd_Array1OfExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::TColStd_Array1OfExtendedString^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfExtendedString^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::TCollection_ExtendedString^ Value();
        Macad::Occt::TCollection_ExtendedString^ ChangeValue();
    }; // class Iterator

    TColStd_Array1OfExtendedString();
    TColStd_Array1OfExtendedString(int theLower, int theUpper);
    TColStd_Array1OfExtendedString(Macad::Occt::TCollection_ExtendedString^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfExtendedString(Macad::Occt::TCollection_ExtendedString^ theBegin, int theLower, int theUpper);
    TColStd_Array1OfExtendedString(long long unsigned int theSize);
    void Init(Macad::Occt::TCollection_ExtendedString^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfExtendedString^ Assign(Macad::Occt::TColStd_Array1OfExtendedString^ theOther);
    Macad::Occt::TColStd_Array1OfExtendedString^ CopyValues(Macad::Occt::TColStd_Array1OfExtendedString^ theOther);
    Macad::Occt::TColStd_Array1OfExtendedString^ Move(Macad::Occt::TColStd_Array1OfExtendedString^ theOther);
    Macad::Occt::TCollection_ExtendedString^ First();
    Macad::Occt::TCollection_ExtendedString^ ChangeFirst();
    Macad::Occt::TCollection_ExtendedString^ Last();
    Macad::Occt::TCollection_ExtendedString^ ChangeLast();
    virtual Macad::Occt::TCollection_ExtendedString^ Value(int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeValue(int theIndex);
    Macad::Occt::TCollection_ExtendedString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_ExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array1OfInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfInteger>
    , public IIndexEnumerable<int>
{

#ifdef Include_TColStd_Array1OfInteger_h
public:
    Include_TColStd_Array1OfInteger_h
#endif

public:
    TColStd_Array1OfInteger(::TColStd_Array1OfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfInteger>( nativeInstance, true )
    {}

    TColStd_Array1OfInteger(::TColStd_Array1OfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfInteger* NativeInstance
    {
        ::TColStd_Array1OfInteger* get()
        {
            return static_cast<::TColStd_Array1OfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfInteger::Iterator>
    {

#ifdef Include_TColStd_Array1OfInteger_Iterator_h
    public:
        Include_TColStd_Array1OfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfInteger::Iterator* NativeInstance
        {
            ::TColStd_Array1OfInteger::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_Array1OfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_Array1OfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        void Init(Macad::Occt::TColStd_Array1OfInteger^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfInteger^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        int Value();
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfInteger();
    TColStd_Array1OfInteger(int theLower, int theUpper);
    TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper);
    TColStd_Array1OfInteger(long long unsigned int theSize);
    void Init(int theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfInteger^ Assign(Macad::Occt::TColStd_Array1OfInteger^ theOther);
    Macad::Occt::TColStd_Array1OfInteger^ CopyValues(Macad::Occt::TColStd_Array1OfInteger^ theOther);
    Macad::Occt::TColStd_Array1OfInteger^ Move(Macad::Occt::TColStd_Array1OfInteger^ theOther);
    int First();
    int Last();
    virtual int Value(int theIndex);
    int ChangeValue(int theIndex);
    int At(long long unsigned int theIndex);
    int ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, int theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_ListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_ListOfInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_ListOfInteger>
    , public IEnumerable<int>
{

#ifdef Include_TColStd_ListOfInteger_h
public:
    Include_TColStd_ListOfInteger_h
#endif

public:
    TColStd_ListOfInteger(::TColStd_ListOfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_ListOfInteger>( nativeInstance, true )
    {}

    TColStd_ListOfInteger(::TColStd_ListOfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_ListOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_ListOfInteger* NativeInstance
    {
        ::TColStd_ListOfInteger* get()
        {
            return static_cast<::TColStd_ListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<int, ::TColStd_ListOfInteger::Iterator>
    {

#ifdef Include_TColStd_ListOfInteger_Iterator_h
    public:
        Include_TColStd_ListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_ListOfInteger::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<int, ::TColStd_ListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_ListOfInteger::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<int, ::TColStd_ListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_ListOfInteger::Iterator* NativeInstance
        {
            ::TColStd_ListOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_ListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::NCollection_BaseList^ theList);
        bool More() override;
        void Next() override;
        int Value() override;
    }; // class Iterator

    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_ListOfInteger();
    TColStd_ListOfInteger(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /* Method skipped due to unknown mapping: void TColStd_ListOfInteger(initializer_list<int> theInitList, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_ListOfInteger(initializer_list<int> theInitList, NCollection_BaseAllocator theAllocator, ) */
    Macad::Occt::TColStd_ListOfInteger^ Assign(Macad::Occt::TColStd_ListOfInteger^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    int First();
    int Last();
    int Append(int theItem);
    void Append(int theItem, Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter);
    void Append(Macad::Occt::TColStd_ListOfInteger^ theOther);
    int Prepend(int theItem);
    void Prepend(Macad::Occt::TColStd_ListOfInteger^ theOther);
    void RemoveFirst();
    void Remove(Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter);
    int InsertBefore(int theItem, Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter);
    void InsertBefore(Macad::Occt::TColStd_ListOfInteger^ theOther, Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter);
    int InsertAfter(int theItem, Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter);
    void InsertAfter(Macad::Occt::TColStd_ListOfInteger^ theOther, Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter);
    void Reverse();
    void Exchange(Macad::Occt::TColStd_ListOfInteger^ theOther);
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_ListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array1OfListOfInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfListOfInteger>
    , public IIndexEnumerable<Macad::Occt::TColStd_ListOfInteger^>
{

#ifdef Include_TColStd_Array1OfListOfInteger_h
public:
    Include_TColStd_Array1OfListOfInteger_h
#endif

public:
    TColStd_Array1OfListOfInteger(::TColStd_Array1OfListOfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfListOfInteger>( nativeInstance, true )
    {}

    TColStd_Array1OfListOfInteger(::TColStd_Array1OfListOfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfListOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfListOfInteger* NativeInstance
    {
        ::TColStd_Array1OfListOfInteger* get()
        {
            return static_cast<::TColStd_Array1OfListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfListOfInteger::Iterator>
    {

#ifdef Include_TColStd_Array1OfListOfInteger_Iterator_h
    public:
        Include_TColStd_Array1OfListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfListOfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfListOfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfListOfInteger::Iterator* NativeInstance
        {
            ::TColStd_Array1OfListOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::TColStd_Array1OfListOfInteger^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfListOfInteger^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::TColStd_ListOfInteger^ Value();
        Macad::Occt::TColStd_ListOfInteger^ ChangeValue();
    }; // class Iterator

    TColStd_Array1OfListOfInteger();
    TColStd_Array1OfListOfInteger(int theLower, int theUpper);
    TColStd_Array1OfListOfInteger(Macad::Occt::TColStd_ListOfInteger^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfListOfInteger(Macad::Occt::TColStd_ListOfInteger^ theBegin, int theLower, int theUpper);
    TColStd_Array1OfListOfInteger(long long unsigned int theSize);
    void Init(Macad::Occt::TColStd_ListOfInteger^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfListOfInteger^ Assign(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther);
    Macad::Occt::TColStd_Array1OfListOfInteger^ CopyValues(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther);
    Macad::Occt::TColStd_Array1OfListOfInteger^ Move(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther);
    Macad::Occt::TColStd_ListOfInteger^ First();
    Macad::Occt::TColStd_ListOfInteger^ ChangeFirst();
    Macad::Occt::TColStd_ListOfInteger^ Last();
    Macad::Occt::TColStd_ListOfInteger^ ChangeLast();
    virtual Macad::Occt::TColStd_ListOfInteger^ Value(int theIndex);
    Macad::Occt::TColStd_ListOfInteger^ ChangeValue(int theIndex);
    Macad::Occt::TColStd_ListOfInteger^ At(long long unsigned int theIndex);
    Macad::Occt::TColStd_ListOfInteger^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::TColStd_ListOfInteger^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TColStd_ListOfInteger^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfReal
//---------------------------------------------------------------------
public ref class TColStd_Array1OfReal sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfReal>
    , public IIndexEnumerable<double>
{

#ifdef Include_TColStd_Array1OfReal_h
public:
    Include_TColStd_Array1OfReal_h
#endif

public:
    TColStd_Array1OfReal(::TColStd_Array1OfReal* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfReal>( nativeInstance, true )
    {}

    TColStd_Array1OfReal(::TColStd_Array1OfReal& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfReal>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfReal* NativeInstance
    {
        ::TColStd_Array1OfReal* get()
        {
            return static_cast<::TColStd_Array1OfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfReal::Iterator>
    {

#ifdef Include_TColStd_Array1OfReal_Iterator_h
    public:
        Include_TColStd_Array1OfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfReal::Iterator* NativeInstance
        {
            ::TColStd_Array1OfReal::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_Array1OfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_Array1OfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        void Init(Macad::Occt::TColStd_Array1OfReal^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfReal^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        double Value();
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfReal();
    TColStd_Array1OfReal(int theLower, int theUpper);
    TColStd_Array1OfReal(double theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfReal(double theBegin, int theLower, int theUpper);
    TColStd_Array1OfReal(long long unsigned int theSize);
    void Init(double theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfReal^ Assign(Macad::Occt::TColStd_Array1OfReal^ theOther);
    Macad::Occt::TColStd_Array1OfReal^ CopyValues(Macad::Occt::TColStd_Array1OfReal^ theOther);
    Macad::Occt::TColStd_Array1OfReal^ Move(Macad::Occt::TColStd_Array1OfReal^ theOther);
    double First();
    double Last();
    virtual double Value(int theIndex);
    double ChangeValue(int theIndex);
    double At(long long unsigned int theIndex);
    double ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, double theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfReal

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfTransient
//---------------------------------------------------------------------
public ref class TColStd_Array1OfTransient sealed
    : public Macad::Occt::BaseClass<::TColStd_Array1OfTransient>
    , public IIndexEnumerable<Macad::Occt::Standard_Transient^>
{

#ifdef Include_TColStd_Array1OfTransient_h
public:
    Include_TColStd_Array1OfTransient_h
#endif

public:
    TColStd_Array1OfTransient(::TColStd_Array1OfTransient* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfTransient>( nativeInstance, true )
    {}

    TColStd_Array1OfTransient(::TColStd_Array1OfTransient& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array1OfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfTransient* NativeInstance
    {
        ::TColStd_Array1OfTransient* get()
        {
            return static_cast<::TColStd_Array1OfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array1OfTransient::Iterator>
    {

#ifdef Include_TColStd_Array1OfTransient_Iterator_h
    public:
        Include_TColStd_Array1OfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array1OfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfTransient::Iterator* NativeInstance
        {
            ::TColStd_Array1OfTransient::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::TColStd_Array1OfTransient^ theList);
        bool More();
        void Initialize(Macad::Occt::TColStd_Array1OfTransient^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
    }; // class Iterator

    TColStd_Array1OfTransient();
    TColStd_Array1OfTransient(int theLower, int theUpper);
    TColStd_Array1OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theLower, int theUpper);
    TColStd_Array1OfTransient(long long unsigned int theSize);
    void Init(Macad::Occt::Standard_Transient^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColStd_Array1OfTransient^ Assign(Macad::Occt::TColStd_Array1OfTransient^ theOther);
    Macad::Occt::TColStd_Array1OfTransient^ CopyValues(Macad::Occt::TColStd_Array1OfTransient^ theOther);
    Macad::Occt::TColStd_Array1OfTransient^ Move(Macad::Occt::TColStd_Array1OfTransient^ theOther);
    Macad::Occt::Standard_Transient^ First();
    Macad::Occt::Standard_Transient^ ChangeFirst();
    Macad::Occt::Standard_Transient^ Last();
    Macad::Occt::Standard_Transient^ ChangeLast();
    virtual Macad::Occt::Standard_Transient^ Value(int theIndex);
    Macad::Occt::Standard_Transient^ ChangeValue(int theIndex);
    Macad::Occt::Standard_Transient^ At(long long unsigned int theIndex);
    Macad::Occt::Standard_Transient^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Standard_Transient^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_Array2OfBoolean sealed
    : public Macad::Occt::BaseClass<::TColStd_Array2OfBoolean>
{

#ifdef Include_TColStd_Array2OfBoolean_h
public:
    Include_TColStd_Array2OfBoolean_h
#endif

public:
    TColStd_Array2OfBoolean(::TColStd_Array2OfBoolean* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfBoolean>( nativeInstance, true )
    {}

    TColStd_Array2OfBoolean(::TColStd_Array2OfBoolean& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfBoolean>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfBoolean* NativeInstance
    {
        ::TColStd_Array2OfBoolean* get()
        {
            return static_cast<::TColStd_Array2OfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array2OfBoolean::Iterator>
    {

#ifdef Include_TColStd_Array2OfBoolean_Iterator_h
    public:
        Include_TColStd_Array2OfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfBoolean::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfBoolean::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfBoolean::Iterator* NativeInstance
        {
            ::TColStd_Array2OfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
        property bool ChangeValue {
            bool get() {
                return ((::TColStd_Array2OfBoolean::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(bool value) {
                ((::TColStd_Array2OfBoolean::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        bool Value();
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(bool theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    bool First();
    bool Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    TColStd_Array2OfBoolean();
    TColStd_Array2OfBoolean(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfBoolean(bool theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfBoolean(long long unsigned int theNbRows, long long unsigned int theNbCols);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    Macad::Occt::TColStd_Array2OfBoolean^ Assign(Macad::Occt::TColStd_Array2OfBoolean^ theOther);
    Macad::Occt::TColStd_Array2OfBoolean^ CopyValues(Macad::Occt::TColStd_Array2OfBoolean^ theOther);
    Macad::Occt::TColStd_Array2OfBoolean^ Move(Macad::Occt::TColStd_Array2OfBoolean^ theOther);
    bool Value(int theRow, int theCol);
    bool ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, bool theItem);
    bool At(long long unsigned int theRow, long long unsigned int theCol);
    bool ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
}; // class TColStd_Array2OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_Array2OfCharacter sealed
    : public Macad::Occt::BaseClass<::TColStd_Array2OfCharacter>
{

#ifdef Include_TColStd_Array2OfCharacter_h
public:
    Include_TColStd_Array2OfCharacter_h
#endif

public:
    TColStd_Array2OfCharacter(::TColStd_Array2OfCharacter* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfCharacter>( nativeInstance, true )
    {}

    TColStd_Array2OfCharacter(::TColStd_Array2OfCharacter& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfCharacter>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfCharacter* NativeInstance
    {
        ::TColStd_Array2OfCharacter* get()
        {
            return static_cast<::TColStd_Array2OfCharacter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array2OfCharacter::Iterator>
    {

#ifdef Include_TColStd_Array2OfCharacter_Iterator_h
    public:
        Include_TColStd_Array2OfCharacter_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfCharacter::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfCharacter::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfCharacter::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfCharacter::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfCharacter::Iterator* NativeInstance
        {
            ::TColStd_Array2OfCharacter::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfCharacter::Iterator*>(_NativeInstance);
            }
        }

    public:
        property char ChangeValue {
            char get() {
                return ((::TColStd_Array2OfCharacter::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(char value) {
                ((::TColStd_Array2OfCharacter::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        char Value();
    }; // class Iterator

    property char ChangeFirst {
        char get() {
            return ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeFirst();
        }
        void set(char value) {
            ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property char ChangeLast {
        char get() {
            return ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeLast();
        }
        void set(char value) {
            ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(char theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    char First();
    char Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    TColStd_Array2OfCharacter();
    TColStd_Array2OfCharacter(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfCharacter(char theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfCharacter(long long unsigned int theNbRows, long long unsigned int theNbCols);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    Macad::Occt::TColStd_Array2OfCharacter^ Assign(Macad::Occt::TColStd_Array2OfCharacter^ theOther);
    Macad::Occt::TColStd_Array2OfCharacter^ CopyValues(Macad::Occt::TColStd_Array2OfCharacter^ theOther);
    Macad::Occt::TColStd_Array2OfCharacter^ Move(Macad::Occt::TColStd_Array2OfCharacter^ theOther);
    char Value(int theRow, int theCol);
    char ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, char theItem);
    char At(long long unsigned int theRow, long long unsigned int theCol);
    char ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
}; // class TColStd_Array2OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array2OfInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_Array2OfInteger>
{

#ifdef Include_TColStd_Array2OfInteger_h
public:
    Include_TColStd_Array2OfInteger_h
#endif

public:
    TColStd_Array2OfInteger(::TColStd_Array2OfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfInteger>( nativeInstance, true )
    {}

    TColStd_Array2OfInteger(::TColStd_Array2OfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfInteger* NativeInstance
    {
        ::TColStd_Array2OfInteger* get()
        {
            return static_cast<::TColStd_Array2OfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array2OfInteger::Iterator>
    {

#ifdef Include_TColStd_Array2OfInteger_Iterator_h
    public:
        Include_TColStd_Array2OfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfInteger::Iterator* NativeInstance
        {
            ::TColStd_Array2OfInteger::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_Array2OfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_Array2OfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        int Value();
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(int theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    int First();
    int Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    TColStd_Array2OfInteger();
    TColStd_Array2OfInteger(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfInteger(int theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfInteger(long long unsigned int theNbRows, long long unsigned int theNbCols);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    Macad::Occt::TColStd_Array2OfInteger^ Assign(Macad::Occt::TColStd_Array2OfInteger^ theOther);
    Macad::Occt::TColStd_Array2OfInteger^ CopyValues(Macad::Occt::TColStd_Array2OfInteger^ theOther);
    Macad::Occt::TColStd_Array2OfInteger^ Move(Macad::Occt::TColStd_Array2OfInteger^ theOther);
    int Value(int theRow, int theCol);
    int ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, int theItem);
    int At(long long unsigned int theRow, long long unsigned int theCol);
    int ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
}; // class TColStd_Array2OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfReal
//---------------------------------------------------------------------
public ref class TColStd_Array2OfReal sealed
    : public Macad::Occt::BaseClass<::TColStd_Array2OfReal>
{

#ifdef Include_TColStd_Array2OfReal_h
public:
    Include_TColStd_Array2OfReal_h
#endif

public:
    TColStd_Array2OfReal(::TColStd_Array2OfReal* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfReal>( nativeInstance, true )
    {}

    TColStd_Array2OfReal(::TColStd_Array2OfReal& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfReal>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfReal* NativeInstance
    {
        ::TColStd_Array2OfReal* get()
        {
            return static_cast<::TColStd_Array2OfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array2OfReal::Iterator>
    {

#ifdef Include_TColStd_Array2OfReal_Iterator_h
    public:
        Include_TColStd_Array2OfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfReal::Iterator* NativeInstance
        {
            ::TColStd_Array2OfReal::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_Array2OfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_Array2OfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        double Value();
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(double theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    double First();
    double Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    TColStd_Array2OfReal();
    TColStd_Array2OfReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfReal(double theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfReal(long long unsigned int theNbRows, long long unsigned int theNbCols);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    Macad::Occt::TColStd_Array2OfReal^ Assign(Macad::Occt::TColStd_Array2OfReal^ theOther);
    Macad::Occt::TColStd_Array2OfReal^ CopyValues(Macad::Occt::TColStd_Array2OfReal^ theOther);
    Macad::Occt::TColStd_Array2OfReal^ Move(Macad::Occt::TColStd_Array2OfReal^ theOther);
    double Value(int theRow, int theCol);
    double ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, double theItem);
    double At(long long unsigned int theRow, long long unsigned int theCol);
    double ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
}; // class TColStd_Array2OfReal

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfTransient
//---------------------------------------------------------------------
public ref class TColStd_Array2OfTransient sealed
    : public Macad::Occt::BaseClass<::TColStd_Array2OfTransient>
{

#ifdef Include_TColStd_Array2OfTransient_h
public:
    Include_TColStd_Array2OfTransient_h
#endif

public:
    TColStd_Array2OfTransient(::TColStd_Array2OfTransient* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfTransient>( nativeInstance, true )
    {}

    TColStd_Array2OfTransient(::TColStd_Array2OfTransient& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_Array2OfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfTransient* NativeInstance
    {
        ::TColStd_Array2OfTransient* get()
        {
            return static_cast<::TColStd_Array2OfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_Array2OfTransient::Iterator>
    {

#ifdef Include_TColStd_Array2OfTransient_Iterator_h
    public:
        Include_TColStd_Array2OfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_Array2OfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfTransient::Iterator* NativeInstance
        {
            ::TColStd_Array2OfTransient::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::Standard_Transient^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Standard_Transient^ First();
    Macad::Occt::Standard_Transient^ ChangeFirst();
    Macad::Occt::Standard_Transient^ Last();
    Macad::Occt::Standard_Transient^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    TColStd_Array2OfTransient();
    TColStd_Array2OfTransient(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TColStd_Array2OfTransient(long long unsigned int theNbRows, long long unsigned int theNbCols);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    Macad::Occt::TColStd_Array2OfTransient^ Assign(Macad::Occt::TColStd_Array2OfTransient^ theOther);
    Macad::Occt::TColStd_Array2OfTransient^ CopyValues(Macad::Occt::TColStd_Array2OfTransient^ theOther);
    Macad::Occt::TColStd_Array2OfTransient^ Move(Macad::Occt::TColStd_Array2OfTransient^ theOther);
    Macad::Occt::Standard_Transient^ Value(int theRow, int theCol);
    Macad::Occt::Standard_Transient^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Standard_Transient^ theItem);
    Macad::Occt::Standard_Transient^ At(long long unsigned int theRow, long long unsigned int theCol);
    Macad::Occt::Standard_Transient^ ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
}; // class TColStd_Array2OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfAsciiStringInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfAsciiStringInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger>
{

#ifdef Include_TColStd_DataMapOfAsciiStringInteger_h
public:
    Include_TColStd_DataMapOfAsciiStringInteger_h
#endif

public:
    TColStd_DataMapOfAsciiStringInteger(::TColStd_DataMapOfAsciiStringInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger>( nativeInstance, true )
    {}

    TColStd_DataMapOfAsciiStringInteger(::TColStd_DataMapOfAsciiStringInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfAsciiStringInteger* NativeInstance
    {
        ::TColStd_DataMapOfAsciiStringInteger* get()
        {
            return static_cast<::TColStd_DataMapOfAsciiStringInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger::Iterator>
    {

#ifdef Include_TColStd_DataMapOfAsciiStringInteger_Iterator_h
    public:
        Include_TColStd_DataMapOfAsciiStringInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfAsciiStringInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfAsciiStringInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfAsciiStringInteger::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfAsciiStringInteger::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfAsciiStringInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theMap);
        bool More();
        void Next();
        int Value();
        Macad::Occt::TCollection_AsciiString^ Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_DataMapOfAsciiStringInteger();
    TColStd_DataMapOfAsciiStringInteger(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfAsciiStringInteger(long long unsigned int theNbBuckets);
    TColStd_DataMapOfAsciiStringInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfAsciiStringInteger(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfAsciiStringInteger(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfAsciiStringInteger(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfAsciiStringInteger(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfAsciiStringInteger(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfAsciiStringInteger(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: ItemsView Items() */
    void Exchange(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<TCollection_AsciiString> GetHasher() */
    Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ Assign(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Bind(Macad::Occt::TCollection_AsciiString^ theKey, int theItem);
    int Bound(Macad::Occt::TCollection_AsciiString^ theKey, int theItem);
    bool TryBind(Macad::Occt::TCollection_AsciiString^ theKey, int theItem);
    int TryBound(Macad::Occt::TCollection_AsciiString^ theKey, int theItem);
    bool IsBound(Macad::Occt::TCollection_AsciiString^ theKey);
    /* Method skipped due to unknown mapping: optional<std::pair<std::reference_wrapper<const TCollection_AsciiString>, std::reference_wrapper<const int>>> Contained(TCollection_AsciiString theKey, ) */
    bool UnBind(Macad::Occt::TCollection_AsciiString^ theKey);
    int Seek(Macad::Occt::TCollection_AsciiString^ theKey);
    int Find(Macad::Occt::TCollection_AsciiString^ theKey);
    bool Find(Macad::Occt::TCollection_AsciiString^ theKey, int% theValue);
    int ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey);
    int ChangeFind(Macad::Occt::TCollection_AsciiString^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
}; // class TColStd_DataMapOfAsciiStringInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger>
{

#ifdef Include_TColStd_DataMapOfIntegerInteger_h
public:
    Include_TColStd_DataMapOfIntegerInteger_h
#endif

public:
    TColStd_DataMapOfIntegerInteger(::TColStd_DataMapOfIntegerInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger>( nativeInstance, true )
    {}

    TColStd_DataMapOfIntegerInteger(::TColStd_DataMapOfIntegerInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfIntegerInteger* NativeInstance
    {
        ::TColStd_DataMapOfIntegerInteger* get()
        {
            return static_cast<::TColStd_DataMapOfIntegerInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger::Iterator>
    {

#ifdef Include_TColStd_DataMapOfIntegerInteger_Iterator_h
    public:
        Include_TColStd_DataMapOfIntegerInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfIntegerInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfIntegerInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfIntegerInteger::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfIntegerInteger::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfIntegerInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theMap);
        bool More();
        void Next();
        int Value();
        int Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_DataMapOfIntegerInteger();
    TColStd_DataMapOfIntegerInteger(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerInteger(long long unsigned int theNbBuckets);
    TColStd_DataMapOfIntegerInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerInteger(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerInteger(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerInteger(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: ItemsView Items() */
    void Exchange(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<int> GetHasher() */
    Macad::Occt::TColStd_DataMapOfIntegerInteger^ Assign(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Bind(int theKey, int theItem);
    int Bound(int theKey, int theItem);
    bool TryBind(int theKey, int theItem);
    int TryBound(int theKey, int theItem);
    bool IsBound(int theKey);
    /* Method skipped due to unknown mapping: optional<std::pair<std::reference_wrapper<const int>, std::reference_wrapper<const int>>> Contained(int theKey, ) */
    bool UnBind(int theKey);
    int Seek(int theKey);
    int Find(int theKey);
    bool Find(int theKey, int% theValue);
    int ChangeSeek(int theKey);
    int ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
}; // class TColStd_DataMapOfIntegerInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerListOfInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>
{

#ifdef Include_TColStd_DataMapOfIntegerListOfInteger_h
public:
    Include_TColStd_DataMapOfIntegerListOfInteger_h
#endif

public:
    TColStd_DataMapOfIntegerListOfInteger(::TColStd_DataMapOfIntegerListOfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>( nativeInstance, true )
    {}

    TColStd_DataMapOfIntegerListOfInteger(::TColStd_DataMapOfIntegerListOfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfIntegerListOfInteger* NativeInstance
    {
        ::TColStd_DataMapOfIntegerListOfInteger* get()
        {
            return static_cast<::TColStd_DataMapOfIntegerListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger::Iterator>
    {

#ifdef Include_TColStd_DataMapOfIntegerListOfInteger_Iterator_h
    public:
        Include_TColStd_DataMapOfIntegerListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfIntegerListOfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfIntegerListOfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfIntegerListOfInteger::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfIntegerListOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfIntegerListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theMap);
        bool More();
        void Next();
        Macad::Occt::TColStd_ListOfInteger^ Value();
        Macad::Occt::TColStd_ListOfInteger^ ChangeValue();
        int Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_DataMapOfIntegerListOfInteger();
    TColStd_DataMapOfIntegerListOfInteger(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerListOfInteger(long long unsigned int theNbBuckets);
    TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerListOfInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerListOfInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerListOfInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerListOfInteger(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerListOfInteger(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: ItemsView Items() */
    void Exchange(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<int> GetHasher() */
    Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ Assign(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Bind(int theKey, Macad::Occt::TColStd_ListOfInteger^ theItem);
    Macad::Occt::TColStd_ListOfInteger^ Bound(int theKey, Macad::Occt::TColStd_ListOfInteger^ theItem);
    bool TryBind(int theKey, Macad::Occt::TColStd_ListOfInteger^ theItem);
    Macad::Occt::TColStd_ListOfInteger^ TryBound(int theKey, Macad::Occt::TColStd_ListOfInteger^ theItem);
    bool IsBound(int theKey);
    /* Method skipped due to unknown mapping: optional<std::pair<std::reference_wrapper<const int>, std::reference_wrapper<const NCollection_List<int>>>> Contained(int theKey, ) */
    bool UnBind(int theKey);
    Macad::Occt::TColStd_ListOfInteger^ Seek(int theKey);
    Macad::Occt::TColStd_ListOfInteger^ Find(int theKey);
    bool Find(int theKey, Macad::Occt::TColStd_ListOfInteger^ theValue);
    Macad::Occt::TColStd_ListOfInteger^ ChangeSeek(int theKey);
    Macad::Occt::TColStd_ListOfInteger^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
}; // class TColStd_DataMapOfIntegerListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerReal
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerReal sealed
    : public Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal>
{

#ifdef Include_TColStd_DataMapOfIntegerReal_h
public:
    Include_TColStd_DataMapOfIntegerReal_h
#endif

public:
    TColStd_DataMapOfIntegerReal(::TColStd_DataMapOfIntegerReal* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal>( nativeInstance, true )
    {}

    TColStd_DataMapOfIntegerReal(::TColStd_DataMapOfIntegerReal& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfIntegerReal* NativeInstance
    {
        ::TColStd_DataMapOfIntegerReal* get()
        {
            return static_cast<::TColStd_DataMapOfIntegerReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal::Iterator>
    {

#ifdef Include_TColStd_DataMapOfIntegerReal_Iterator_h
    public:
        Include_TColStd_DataMapOfIntegerReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfIntegerReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfIntegerReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfIntegerReal::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfIntegerReal::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfIntegerReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TColStd_DataMapOfIntegerReal^ theMap);
        bool More();
        void Next();
        double Value();
        int Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_DataMapOfIntegerReal();
    TColStd_DataMapOfIntegerReal(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerReal(long long unsigned int theNbBuckets);
    TColStd_DataMapOfIntegerReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerReal(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerReal(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerReal(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerReal(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerReal(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerReal(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: ItemsView Items() */
    void Exchange(Macad::Occt::TColStd_DataMapOfIntegerReal^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<int> GetHasher() */
    Macad::Occt::TColStd_DataMapOfIntegerReal^ Assign(Macad::Occt::TColStd_DataMapOfIntegerReal^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Bind(int theKey, double theItem);
    double Bound(int theKey, double theItem);
    bool TryBind(int theKey, double theItem);
    double TryBound(int theKey, double theItem);
    bool IsBound(int theKey);
    /* Method skipped due to unknown mapping: optional<std::pair<std::reference_wrapper<const int>, std::reference_wrapper<const double>>> Contained(int theKey, ) */
    bool UnBind(int theKey);
    double Seek(int theKey);
    double Find(int theKey);
    bool Find(int theKey, double% theValue);
    double ChangeSeek(int theKey);
    double ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
}; // class TColStd_DataMapOfIntegerReal

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerTransient
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerTransient sealed
    : public Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient>
{

#ifdef Include_TColStd_DataMapOfIntegerTransient_h
public:
    Include_TColStd_DataMapOfIntegerTransient_h
#endif

public:
    TColStd_DataMapOfIntegerTransient(::TColStd_DataMapOfIntegerTransient* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient>( nativeInstance, true )
    {}

    TColStd_DataMapOfIntegerTransient(::TColStd_DataMapOfIntegerTransient& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfIntegerTransient* NativeInstance
    {
        ::TColStd_DataMapOfIntegerTransient* get()
        {
            return static_cast<::TColStd_DataMapOfIntegerTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient::Iterator>
    {

#ifdef Include_TColStd_DataMapOfIntegerTransient_Iterator_h
    public:
        Include_TColStd_DataMapOfIntegerTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfIntegerTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfIntegerTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfIntegerTransient::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfIntegerTransient::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfIntegerTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theMap);
        bool More();
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
        int Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_DataMapOfIntegerTransient();
    TColStd_DataMapOfIntegerTransient(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerTransient(long long unsigned int theNbBuckets);
    TColStd_DataMapOfIntegerTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerTransient(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerTransient(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerTransient(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerTransient(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerTransient(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfIntegerTransient(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: ItemsView Items() */
    void Exchange(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<int> GetHasher() */
    Macad::Occt::TColStd_DataMapOfIntegerTransient^ Assign(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Bind(int theKey, Macad::Occt::Standard_Transient^ theItem);
    Macad::Occt::Standard_Transient^ Bound(int theKey, Macad::Occt::Standard_Transient^ theItem);
    bool TryBind(int theKey, Macad::Occt::Standard_Transient^ theItem);
    Macad::Occt::Standard_Transient^ TryBound(int theKey, Macad::Occt::Standard_Transient^ theItem);
    bool IsBound(int theKey);
    /* Method skipped due to unknown mapping: optional<std::pair<std::reference_wrapper<const int>, std::reference_wrapper<const opencascade::handle<Standard_Transient>>>> Contained(int theKey, ) */
    bool UnBind(int theKey);
    Macad::Occt::Standard_Transient^ Seek(int theKey);
    Macad::Occt::Standard_Transient^ Find(int theKey);
    bool Find(int theKey, Macad::Occt::Standard_Transient^ theValue);
    Macad::Occt::Standard_Transient^ ChangeSeek(int theKey);
    Macad::Occt::Standard_Transient^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
}; // class TColStd_DataMapOfIntegerTransient

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfStringInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfStringInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger>
{

#ifdef Include_TColStd_DataMapOfStringInteger_h
public:
    Include_TColStd_DataMapOfStringInteger_h
#endif

public:
    TColStd_DataMapOfStringInteger(::TColStd_DataMapOfStringInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger>( nativeInstance, true )
    {}

    TColStd_DataMapOfStringInteger(::TColStd_DataMapOfStringInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfStringInteger* NativeInstance
    {
        ::TColStd_DataMapOfStringInteger* get()
        {
            return static_cast<::TColStd_DataMapOfStringInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger::Iterator>
    {

#ifdef Include_TColStd_DataMapOfStringInteger_Iterator_h
    public:
        Include_TColStd_DataMapOfStringInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfStringInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfStringInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfStringInteger::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfStringInteger::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfStringInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TColStd_DataMapOfStringInteger^ theMap);
        bool More();
        void Next();
        int Value();
        Macad::Occt::TCollection_ExtendedString^ Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_DataMapOfStringInteger();
    TColStd_DataMapOfStringInteger(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfStringInteger(long long unsigned int theNbBuckets);
    TColStd_DataMapOfStringInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfStringInteger(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfStringInteger(NCollection_DefaultHasher<TCollection_ExtendedString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfStringInteger(NCollection_DefaultHasher<TCollection_ExtendedString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfStringInteger(NCollection_DefaultHasher<TCollection_ExtendedString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfStringInteger(NCollection_DefaultHasher<TCollection_ExtendedString> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfStringInteger(NCollection_DefaultHasher<TCollection_ExtendedString> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: ItemsView Items() */
    void Exchange(Macad::Occt::TColStd_DataMapOfStringInteger^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<TCollection_ExtendedString> GetHasher() */
    Macad::Occt::TColStd_DataMapOfStringInteger^ Assign(Macad::Occt::TColStd_DataMapOfStringInteger^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Bind(Macad::Occt::TCollection_ExtendedString^ theKey, int theItem);
    int Bound(Macad::Occt::TCollection_ExtendedString^ theKey, int theItem);
    bool TryBind(Macad::Occt::TCollection_ExtendedString^ theKey, int theItem);
    int TryBound(Macad::Occt::TCollection_ExtendedString^ theKey, int theItem);
    bool IsBound(Macad::Occt::TCollection_ExtendedString^ theKey);
    /* Method skipped due to unknown mapping: optional<std::pair<std::reference_wrapper<const TCollection_ExtendedString>, std::reference_wrapper<const int>>> Contained(TCollection_ExtendedString theKey, ) */
    bool UnBind(Macad::Occt::TCollection_ExtendedString^ theKey);
    int Seek(Macad::Occt::TCollection_ExtendedString^ theKey);
    int Find(Macad::Occt::TCollection_ExtendedString^ theKey);
    bool Find(Macad::Occt::TCollection_ExtendedString^ theKey, int% theValue);
    int ChangeSeek(Macad::Occt::TCollection_ExtendedString^ theKey);
    int ChangeFind(Macad::Occt::TCollection_ExtendedString^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
}; // class TColStd_DataMapOfStringInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfTransientTransient
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfTransientTransient sealed
    : public Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient>
{

#ifdef Include_TColStd_DataMapOfTransientTransient_h
public:
    Include_TColStd_DataMapOfTransientTransient_h
#endif

public:
    TColStd_DataMapOfTransientTransient(::TColStd_DataMapOfTransientTransient* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient>( nativeInstance, true )
    {}

    TColStd_DataMapOfTransientTransient(::TColStd_DataMapOfTransientTransient& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfTransientTransient* NativeInstance
    {
        ::TColStd_DataMapOfTransientTransient* get()
        {
            return static_cast<::TColStd_DataMapOfTransientTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient::Iterator>
    {

#ifdef Include_TColStd_DataMapOfTransientTransient_Iterator_h
    public:
        Include_TColStd_DataMapOfTransientTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfTransientTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfTransientTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfTransientTransient::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfTransientTransient::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfTransientTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_DataMapOfTransientTransient^ theMap);
        bool More();
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
        Macad::Occt::Standard_Transient^ Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_DataMapOfTransientTransient();
    TColStd_DataMapOfTransientTransient(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfTransientTransient(long long unsigned int theNbBuckets);
    TColStd_DataMapOfTransientTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfTransientTransient(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfTransientTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfTransientTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfTransientTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfTransientTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_DataMapOfTransientTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: ItemsView Items() */
    void Exchange(Macad::Occt::TColStd_DataMapOfTransientTransient^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> GetHasher() */
    Macad::Occt::TColStd_DataMapOfTransientTransient^ Assign(Macad::Occt::TColStd_DataMapOfTransientTransient^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Bind(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theItem);
    Macad::Occt::Standard_Transient^ Bound(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theItem);
    bool TryBind(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theItem);
    Macad::Occt::Standard_Transient^ TryBound(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theItem);
    bool IsBound(Macad::Occt::Standard_Transient^ theKey);
    /* Method skipped due to unknown mapping: optional<std::pair<std::reference_wrapper<const opencascade::handle<Standard_Transient>>, std::reference_wrapper<const opencascade::handle<Standard_Transient>>>> Contained(Standard_Transient theKey, ) */
    bool UnBind(Macad::Occt::Standard_Transient^ theKey);
    Macad::Occt::Standard_Transient^ Seek(Macad::Occt::Standard_Transient^ theKey);
    Macad::Occt::Standard_Transient^ Find(Macad::Occt::Standard_Transient^ theKey);
    bool Find(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theValue);
    Macad::Occt::Standard_Transient^ ChangeSeek(Macad::Occt::Standard_Transient^ theKey);
    Macad::Occt::Standard_Transient^ ChangeFind(Macad::Occt::Standard_Transient^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
}; // class TColStd_DataMapOfTransientTransient

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfAsciiString sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TCollection_AsciiString^>
{

#ifdef Include_TColStd_HArray1OfAsciiString_h
public:
    Include_TColStd_HArray1OfAsciiString_h
#endif

public:
    TColStd_HArray1OfAsciiString(::TColStd_HArray1OfAsciiString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfAsciiString(::TColStd_HArray1OfAsciiString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfAsciiString* NativeInstance
    {
        ::TColStd_HArray1OfAsciiString* get()
        {
            return static_cast<::TColStd_HArray1OfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfAsciiString::Iterator>
    {

#ifdef Include_TColStd_HArray1OfAsciiString_Iterator_h
    public:
        Include_TColStd_HArray1OfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfAsciiString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfAsciiString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::TCollection_AsciiString^ Value();
        Macad::Occt::TCollection_AsciiString^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::TCollection_AsciiString^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    Macad::Occt::TCollection_AsciiString^ First();
    Macad::Occt::TCollection_AsciiString^ ChangeFirst();
    Macad::Occt::TCollection_AsciiString^ Last();
    Macad::Occt::TCollection_AsciiString^ ChangeLast();
    virtual Macad::Occt::TCollection_AsciiString^ Value(int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeValue(int theIndex);
    Macad::Occt::TCollection_AsciiString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfAsciiString();
    TColStd_HArray1OfAsciiString(int theLower, int theUpper);
    TColStd_HArray1OfAsciiString(int theLower, int theUpper, Macad::Occt::TCollection_AsciiString^ theValue);
    TColStd_HArray1OfAsciiString(Macad::Occt::TCollection_AsciiString^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfAsciiString(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfAsciiString^ CreateDowncasted(::TColStd_HArray1OfAsciiString* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfBoolean sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<bool>
{

#ifdef Include_TColStd_HArray1OfBoolean_h
public:
    Include_TColStd_HArray1OfBoolean_h
#endif

public:
    TColStd_HArray1OfBoolean(::TColStd_HArray1OfBoolean* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfBoolean(::TColStd_HArray1OfBoolean& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfBoolean* NativeInstance
    {
        ::TColStd_HArray1OfBoolean* get()
        {
            return static_cast<::TColStd_HArray1OfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfBoolean::Iterator>
    {

#ifdef Include_TColStd_HArray1OfBoolean_Iterator_h
    public:
        Include_TColStd_HArray1OfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfBoolean::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfBoolean::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfBoolean::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
        property bool ChangeValue {
            bool get() {
                return ((::TColStd_HArray1OfBoolean::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(bool value) {
                ((::TColStd_HArray1OfBoolean::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        bool Value();
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(bool theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    bool First();
    bool Last();
    virtual bool Value(int theIndex);
    bool ChangeValue(int theIndex);
    bool At(long long unsigned int theIndex);
    bool ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, bool theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfBoolean();
    TColStd_HArray1OfBoolean(int theLower, int theUpper);
    TColStd_HArray1OfBoolean(int theLower, int theUpper, bool theValue);
    TColStd_HArray1OfBoolean(bool theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfBoolean(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfBoolean^ CreateDowncasted(::TColStd_HArray1OfBoolean* instance);
    virtual System::Collections::Generic::IEnumerator<bool>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfByte
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfByte sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<unsigned char>
{

#ifdef Include_TColStd_HArray1OfByte_h
public:
    Include_TColStd_HArray1OfByte_h
#endif

public:
    TColStd_HArray1OfByte(::TColStd_HArray1OfByte* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfByte(::TColStd_HArray1OfByte& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfByte* NativeInstance
    {
        ::TColStd_HArray1OfByte* get()
        {
            return static_cast<::TColStd_HArray1OfByte*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfByte::Iterator>
    {

#ifdef Include_TColStd_HArray1OfByte_Iterator_h
    public:
        Include_TColStd_HArray1OfByte_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfByte::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfByte::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfByte::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfByte::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfByte::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfByte::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfByte::Iterator*>(_NativeInstance);
            }
        }

    public:
        property unsigned char ChangeValue {
            unsigned char get() {
                return ((::TColStd_HArray1OfByte::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(unsigned char value) {
                ((::TColStd_HArray1OfByte::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        unsigned char Value();
    }; // class Iterator

    property unsigned char ChangeFirst {
        unsigned char get() {
            return ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeFirst();
        }
        void set(unsigned char value) {
            ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property unsigned char ChangeLast {
        unsigned char get() {
            return ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeLast();
        }
        void set(unsigned char value) {
            ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(unsigned char theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    unsigned char First();
    unsigned char Last();
    virtual unsigned char Value(int theIndex);
    unsigned char ChangeValue(int theIndex);
    unsigned char At(long long unsigned int theIndex);
    unsigned char ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, unsigned char theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfByte();
    TColStd_HArray1OfByte(int theLower, int theUpper);
    TColStd_HArray1OfByte(int theLower, int theUpper, unsigned char theValue);
    TColStd_HArray1OfByte(unsigned char theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfByte(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfByte^ CreateDowncasted(::TColStd_HArray1OfByte* instance);
    virtual System::Collections::Generic::IEnumerator<unsigned char>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfByte

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfCharacter sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<char>
{

#ifdef Include_TColStd_HArray1OfCharacter_h
public:
    Include_TColStd_HArray1OfCharacter_h
#endif

public:
    TColStd_HArray1OfCharacter(::TColStd_HArray1OfCharacter* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfCharacter(::TColStd_HArray1OfCharacter& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfCharacter* NativeInstance
    {
        ::TColStd_HArray1OfCharacter* get()
        {
            return static_cast<::TColStd_HArray1OfCharacter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfCharacter::Iterator>
    {

#ifdef Include_TColStd_HArray1OfCharacter_Iterator_h
    public:
        Include_TColStd_HArray1OfCharacter_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfCharacter::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfCharacter::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfCharacter::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfCharacter::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfCharacter::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfCharacter::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfCharacter::Iterator*>(_NativeInstance);
            }
        }

    public:
        property char ChangeValue {
            char get() {
                return ((::TColStd_HArray1OfCharacter::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(char value) {
                ((::TColStd_HArray1OfCharacter::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        char Value();
    }; // class Iterator

    property char ChangeFirst {
        char get() {
            return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeFirst();
        }
        void set(char value) {
            ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property char ChangeLast {
        char get() {
            return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeLast();
        }
        void set(char value) {
            ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(char theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    char First();
    char Last();
    virtual char Value(int theIndex);
    char ChangeValue(int theIndex);
    char At(long long unsigned int theIndex);
    char ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, char theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfCharacter();
    TColStd_HArray1OfCharacter(int theLower, int theUpper);
    TColStd_HArray1OfCharacter(int theLower, int theUpper, char theValue);
    TColStd_HArray1OfCharacter(char theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfCharacter(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfCharacter^ CreateDowncasted(::TColStd_HArray1OfCharacter* instance);
    virtual System::Collections::Generic::IEnumerator<char>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfExtendedString sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TCollection_ExtendedString^>
{

#ifdef Include_TColStd_HArray1OfExtendedString_h
public:
    Include_TColStd_HArray1OfExtendedString_h
#endif

public:
    TColStd_HArray1OfExtendedString(::TColStd_HArray1OfExtendedString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfExtendedString(::TColStd_HArray1OfExtendedString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfExtendedString* NativeInstance
    {
        ::TColStd_HArray1OfExtendedString* get()
        {
            return static_cast<::TColStd_HArray1OfExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfExtendedString::Iterator>
    {

#ifdef Include_TColStd_HArray1OfExtendedString_Iterator_h
    public:
        Include_TColStd_HArray1OfExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfExtendedString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfExtendedString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfExtendedString::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::TCollection_ExtendedString^ Value();
        Macad::Occt::TCollection_ExtendedString^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::TCollection_ExtendedString^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    Macad::Occt::TCollection_ExtendedString^ First();
    Macad::Occt::TCollection_ExtendedString^ ChangeFirst();
    Macad::Occt::TCollection_ExtendedString^ Last();
    Macad::Occt::TCollection_ExtendedString^ ChangeLast();
    virtual Macad::Occt::TCollection_ExtendedString^ Value(int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeValue(int theIndex);
    Macad::Occt::TCollection_ExtendedString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfExtendedString();
    TColStd_HArray1OfExtendedString(int theLower, int theUpper);
    TColStd_HArray1OfExtendedString(int theLower, int theUpper, Macad::Occt::TCollection_ExtendedString^ theValue);
    TColStd_HArray1OfExtendedString(Macad::Occt::TCollection_ExtendedString^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfExtendedString(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfExtendedString^ CreateDowncasted(::TColStd_HArray1OfExtendedString* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_ExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfInteger sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<int>
{

#ifdef Include_TColStd_HArray1OfInteger_h
public:
    Include_TColStd_HArray1OfInteger_h
#endif

public:
    TColStd_HArray1OfInteger(::TColStd_HArray1OfInteger* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfInteger(::TColStd_HArray1OfInteger& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfInteger* NativeInstance
    {
        ::TColStd_HArray1OfInteger* get()
        {
            return static_cast<::TColStd_HArray1OfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfInteger::Iterator>
    {

#ifdef Include_TColStd_HArray1OfInteger_Iterator_h
    public:
        Include_TColStd_HArray1OfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfInteger::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfInteger::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_HArray1OfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_HArray1OfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        int Value();
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(int theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    int First();
    int Last();
    virtual int Value(int theIndex);
    int ChangeValue(int theIndex);
    int At(long long unsigned int theIndex);
    int ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, int theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfInteger();
    TColStd_HArray1OfInteger(int theLower, int theUpper);
    TColStd_HArray1OfInteger(int theLower, int theUpper, int theValue);
    TColStd_HArray1OfInteger(int theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfInteger(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfInteger^ CreateDowncasted(::TColStd_HArray1OfInteger* instance);
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfListOfInteger sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TColStd_ListOfInteger^>
{

#ifdef Include_TColStd_HArray1OfListOfInteger_h
public:
    Include_TColStd_HArray1OfListOfInteger_h
#endif

public:
    TColStd_HArray1OfListOfInteger(::TColStd_HArray1OfListOfInteger* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfListOfInteger(::TColStd_HArray1OfListOfInteger& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfListOfInteger* NativeInstance
    {
        ::TColStd_HArray1OfListOfInteger* get()
        {
            return static_cast<::TColStd_HArray1OfListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfListOfInteger::Iterator>
    {

#ifdef Include_TColStd_HArray1OfListOfInteger_Iterator_h
    public:
        Include_TColStd_HArray1OfListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfListOfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfListOfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfListOfInteger::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfListOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::TColStd_ListOfInteger^ Value();
        Macad::Occt::TColStd_ListOfInteger^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::TColStd_ListOfInteger^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    Macad::Occt::TColStd_ListOfInteger^ First();
    Macad::Occt::TColStd_ListOfInteger^ ChangeFirst();
    Macad::Occt::TColStd_ListOfInteger^ Last();
    Macad::Occt::TColStd_ListOfInteger^ ChangeLast();
    virtual Macad::Occt::TColStd_ListOfInteger^ Value(int theIndex);
    Macad::Occt::TColStd_ListOfInteger^ ChangeValue(int theIndex);
    Macad::Occt::TColStd_ListOfInteger^ At(long long unsigned int theIndex);
    Macad::Occt::TColStd_ListOfInteger^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::TColStd_ListOfInteger^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfListOfInteger();
    TColStd_HArray1OfListOfInteger(int theLower, int theUpper);
    TColStd_HArray1OfListOfInteger(int theLower, int theUpper, Macad::Occt::TColStd_ListOfInteger^ theValue);
    TColStd_HArray1OfListOfInteger(Macad::Occt::TColStd_ListOfInteger^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfListOfInteger(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfListOfInteger^ CreateDowncasted(::TColStd_HArray1OfListOfInteger* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TColStd_ListOfInteger^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfReal
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfReal sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<double>
{

#ifdef Include_TColStd_HArray1OfReal_h
public:
    Include_TColStd_HArray1OfReal_h
#endif

public:
    TColStd_HArray1OfReal(::TColStd_HArray1OfReal* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfReal(::TColStd_HArray1OfReal& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfReal* NativeInstance
    {
        ::TColStd_HArray1OfReal* get()
        {
            return static_cast<::TColStd_HArray1OfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfReal::Iterator>
    {

#ifdef Include_TColStd_HArray1OfReal_Iterator_h
    public:
        Include_TColStd_HArray1OfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfReal::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfReal::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_HArray1OfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_HArray1OfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        double Value();
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(double theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    double First();
    double Last();
    virtual double Value(int theIndex);
    double ChangeValue(int theIndex);
    double At(long long unsigned int theIndex);
    double ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, double theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfReal();
    TColStd_HArray1OfReal(int theLower, int theUpper);
    TColStd_HArray1OfReal(int theLower, int theUpper, double theValue);
    TColStd_HArray1OfReal(double theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfReal(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfReal^ CreateDowncasted(::TColStd_HArray1OfReal* instance);
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfReal

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfTransient
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfTransient sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Standard_Transient^>
{

#ifdef Include_TColStd_HArray1OfTransient_h
public:
    Include_TColStd_HArray1OfTransient_h
#endif

public:
    TColStd_HArray1OfTransient(::TColStd_HArray1OfTransient* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfTransient(::TColStd_HArray1OfTransient& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfTransient* NativeInstance
    {
        ::TColStd_HArray1OfTransient* get()
        {
            return static_cast<::TColStd_HArray1OfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray1OfTransient::Iterator>
    {

#ifdef Include_TColStd_HArray1OfTransient_Iterator_h
    public:
        Include_TColStd_HArray1OfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray1OfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfTransient::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfTransient::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::Standard_Transient^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    Macad::Occt::Standard_Transient^ First();
    Macad::Occt::Standard_Transient^ ChangeFirst();
    Macad::Occt::Standard_Transient^ Last();
    Macad::Occt::Standard_Transient^ ChangeLast();
    virtual Macad::Occt::Standard_Transient^ Value(int theIndex);
    Macad::Occt::Standard_Transient^ ChangeValue(int theIndex);
    Macad::Occt::Standard_Transient^ At(long long unsigned int theIndex);
    Macad::Occt::Standard_Transient^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    TColStd_HArray1OfTransient();
    TColStd_HArray1OfTransient(int theLower, int theUpper);
    TColStd_HArray1OfTransient(int theLower, int theUpper, Macad::Occt::Standard_Transient^ theValue);
    TColStd_HArray1OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfTransient(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::TColStd_HArray1OfTransient^ CreateDowncasted(::TColStd_HArray1OfTransient* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Standard_Transient^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfBoolean sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfBoolean_h
public:
    Include_TColStd_HArray2OfBoolean_h
#endif

public:
    TColStd_HArray2OfBoolean(::TColStd_HArray2OfBoolean* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfBoolean(::TColStd_HArray2OfBoolean& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfBoolean* NativeInstance
    {
        ::TColStd_HArray2OfBoolean* get()
        {
            return static_cast<::TColStd_HArray2OfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray2OfBoolean::Iterator>
    {

#ifdef Include_TColStd_HArray2OfBoolean_Iterator_h
    public:
        Include_TColStd_HArray2OfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfBoolean::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfBoolean::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfBoolean::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
        property bool ChangeValue {
            bool get() {
                return ((::TColStd_HArray2OfBoolean::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(bool value) {
                ((::TColStd_HArray2OfBoolean::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        bool Value();
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(bool theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    bool First();
    bool Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Assign(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type CopyValues(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Move(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    bool Value(int theRow, int theCol);
    bool ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, bool theItem);
    bool At(long long unsigned int theRow, long long unsigned int theCol);
    bool ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp, bool theValue);
    /* Method skipped due to unknown mapping: void TColStd_HArray2OfBoolean(Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: Array2Type Array2() */
    /* Method skipped due to unknown mapping: Array2Type ChangeArray2() */
    static Macad::Occt::TColStd_HArray2OfBoolean^ CreateDowncasted(::TColStd_HArray2OfBoolean* instance);
}; // class TColStd_HArray2OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfCharacter sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfCharacter_h
public:
    Include_TColStd_HArray2OfCharacter_h
#endif

public:
    TColStd_HArray2OfCharacter(::TColStd_HArray2OfCharacter* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfCharacter(::TColStd_HArray2OfCharacter& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfCharacter* NativeInstance
    {
        ::TColStd_HArray2OfCharacter* get()
        {
            return static_cast<::TColStd_HArray2OfCharacter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray2OfCharacter::Iterator>
    {

#ifdef Include_TColStd_HArray2OfCharacter_Iterator_h
    public:
        Include_TColStd_HArray2OfCharacter_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfCharacter::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfCharacter::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfCharacter::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfCharacter::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfCharacter::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfCharacter::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfCharacter::Iterator*>(_NativeInstance);
            }
        }

    public:
        property char ChangeValue {
            char get() {
                return ((::TColStd_HArray2OfCharacter::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(char value) {
                ((::TColStd_HArray2OfCharacter::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        char Value();
    }; // class Iterator

    property char ChangeFirst {
        char get() {
            return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeFirst();
        }
        void set(char value) {
            ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property char ChangeLast {
        char get() {
            return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeLast();
        }
        void set(char value) {
            ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(char theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    char First();
    char Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Assign(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type CopyValues(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Move(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    char Value(int theRow, int theCol);
    char ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, char theItem);
    char At(long long unsigned int theRow, long long unsigned int theCol);
    char ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp, char theValue);
    /* Method skipped due to unknown mapping: void TColStd_HArray2OfCharacter(Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: Array2Type Array2() */
    /* Method skipped due to unknown mapping: Array2Type ChangeArray2() */
    static Macad::Occt::TColStd_HArray2OfCharacter^ CreateDowncasted(::TColStd_HArray2OfCharacter* instance);
}; // class TColStd_HArray2OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfInteger sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfInteger_h
public:
    Include_TColStd_HArray2OfInteger_h
#endif

public:
    TColStd_HArray2OfInteger(::TColStd_HArray2OfInteger* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfInteger(::TColStd_HArray2OfInteger& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfInteger* NativeInstance
    {
        ::TColStd_HArray2OfInteger* get()
        {
            return static_cast<::TColStd_HArray2OfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray2OfInteger::Iterator>
    {

#ifdef Include_TColStd_HArray2OfInteger_Iterator_h
    public:
        Include_TColStd_HArray2OfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfInteger::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfInteger::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_HArray2OfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_HArray2OfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        int Value();
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(int theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    int First();
    int Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Assign(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type CopyValues(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Move(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    int Value(int theRow, int theCol);
    int ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, int theItem);
    int At(long long unsigned int theRow, long long unsigned int theCol);
    int ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp, int theValue);
    /* Method skipped due to unknown mapping: void TColStd_HArray2OfInteger(Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: Array2Type Array2() */
    /* Method skipped due to unknown mapping: Array2Type ChangeArray2() */
    static Macad::Occt::TColStd_HArray2OfInteger^ CreateDowncasted(::TColStd_HArray2OfInteger* instance);
}; // class TColStd_HArray2OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfReal
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfReal sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfReal_h
public:
    Include_TColStd_HArray2OfReal_h
#endif

public:
    TColStd_HArray2OfReal(::TColStd_HArray2OfReal* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfReal(::TColStd_HArray2OfReal& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfReal* NativeInstance
    {
        ::TColStd_HArray2OfReal* get()
        {
            return static_cast<::TColStd_HArray2OfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray2OfReal::Iterator>
    {

#ifdef Include_TColStd_HArray2OfReal_Iterator_h
    public:
        Include_TColStd_HArray2OfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfReal::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfReal::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_HArray2OfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_HArray2OfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        double Value();
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    void Init(double theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    double First();
    double Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Assign(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type CopyValues(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Move(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    double Value(int theRow, int theCol);
    double ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, double theItem);
    double At(long long unsigned int theRow, long long unsigned int theCol);
    double ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, double theValue);
    /* Method skipped due to unknown mapping: void TColStd_HArray2OfReal(Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: Array2Type Array2() */
    /* Method skipped due to unknown mapping: Array2Type ChangeArray2() */
    static Macad::Occt::TColStd_HArray2OfReal^ CreateDowncasted(::TColStd_HArray2OfReal* instance);
}; // class TColStd_HArray2OfReal

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfTransient
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfTransient sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfTransient_h
public:
    Include_TColStd_HArray2OfTransient_h
#endif

public:
    TColStd_HArray2OfTransient(::TColStd_HArray2OfTransient* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfTransient(::TColStd_HArray2OfTransient& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfTransient* NativeInstance
    {
        ::TColStd_HArray2OfTransient* get()
        {
            return static_cast<::TColStd_HArray2OfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HArray2OfTransient::Iterator>
    {

#ifdef Include_TColStd_HArray2OfTransient_Iterator_h
    public:
        Include_TColStd_HArray2OfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HArray2OfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfTransient::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfTransient::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        /* Method skipped due to unknown mapping: void Init(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        bool More();
        /* Method skipped due to unknown mapping: void Initialize(NCollection_HArray1<TI_0>::Array1Type theList, ) */
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::Standard_Transient^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Standard_Transient^ First();
    Macad::Occt::Standard_Transient^ ChangeFirst();
    Macad::Occt::Standard_Transient^ Last();
    Macad::Occt::Standard_Transient^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    long long unsigned int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    void UpdateLowerRow(int theLowerRow);
    void UpdateLowerCol(int theLowerCol);
    void UpdateUpperRow(int theUpperRow);
    void UpdateUpperCol(int theUpperCol);
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Assign(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type CopyValues(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray2<TI_0>::Array2Type Move(NCollection_HArray2<TI_0>::Array2Type theOther, ) */
    Macad::Occt::Standard_Transient^ Value(int theRow, int theCol);
    Macad::Occt::Standard_Transient^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Standard_Transient^ theItem);
    Macad::Occt::Standard_Transient^ At(long long unsigned int theRow, long long unsigned int theCol);
    Macad::Occt::Standard_Transient^ ChangeAt(long long unsigned int theRow, long long unsigned int theCol);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void ResizeWithTrim(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Resize(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    void ResizeWithTrim(long long unsigned int theNbRows, long long unsigned int theNbCols, bool theToCopyData);
    TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Standard_Transient^ theValue);
    /* Method skipped due to unknown mapping: void TColStd_HArray2OfTransient(Array2Type theOther, ) */
    /* Method skipped due to unknown mapping: Array2Type Array2() */
    /* Method skipped due to unknown mapping: Array2Type ChangeArray2() */
    static Macad::Occt::TColStd_HArray2OfTransient^ CreateDowncasted(::TColStd_HArray2OfTransient* instance);
}; // class TColStd_HArray2OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfAsciiString sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString>
    , public IIndexEnumerable<Macad::Occt::TCollection_AsciiString^>
{

#ifdef Include_TColStd_SequenceOfAsciiString_h
public:
    Include_TColStd_SequenceOfAsciiString_h
#endif

public:
    TColStd_SequenceOfAsciiString(::TColStd_SequenceOfAsciiString* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString>( nativeInstance, true )
    {}

    TColStd_SequenceOfAsciiString(::TColStd_SequenceOfAsciiString& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfAsciiString* NativeInstance
    {
        ::TColStd_SequenceOfAsciiString* get()
        {
            return static_cast<::TColStd_SequenceOfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString::Iterator>
    {

#ifdef Include_TColStd_SequenceOfAsciiString_Iterator_h
    public:
        Include_TColStd_SequenceOfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfAsciiString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfAsciiString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
        bool More();
        void Next();
        Macad::Occt::TCollection_AsciiString^ Value();
        Macad::Occt::TCollection_AsciiString^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_SequenceOfAsciiString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfAsciiString();
    TColStd_SequenceOfAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfAsciiString^ Assign(Macad::Occt::TColStd_SequenceOfAsciiString^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfAsciiString::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(Macad::Occt::TCollection_AsciiString^ theItem);
    void Append(Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
    void Prepend(Macad::Occt::TCollection_AsciiString^ theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
    void InsertAfter(Macad::Occt::TColStd_SequenceOfAsciiString::Iterator^ thePosition, Macad::Occt::TCollection_AsciiString^ theItem);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
    Macad::Occt::TCollection_AsciiString^ First();
    Macad::Occt::TCollection_AsciiString^ ChangeFirst();
    Macad::Occt::TCollection_AsciiString^ Last();
    Macad::Occt::TCollection_AsciiString^ ChangeLast();
    Macad::Occt::TCollection_AsciiString^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::TCollection_AsciiString^ Value(int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    Macad::Occt::TCollection_AsciiString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeAt(long long unsigned int theIndex);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfAsciiString sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TCollection_AsciiString^>
{

#ifdef Include_TColStd_HSequenceOfAsciiString_h
public:
    Include_TColStd_HSequenceOfAsciiString_h
#endif

public:
    TColStd_HSequenceOfAsciiString(::TColStd_HSequenceOfAsciiString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfAsciiString(::TColStd_HSequenceOfAsciiString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfAsciiString* NativeInstance
    {
        ::TColStd_HSequenceOfAsciiString* get()
        {
            return static_cast<::TColStd_HSequenceOfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HSequenceOfAsciiString::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfAsciiString_Iterator_h
    public:
        Include_TColStd_HSequenceOfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfAsciiString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfAsciiString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        bool More();
        void Next();
        Macad::Occt::TCollection_AsciiString^ Value();
        Macad::Occt::TCollection_AsciiString^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    /* Method skipped due to unknown mapping: NCollection_HSequence<TI_0>::SequenceType Assign(NCollection_HSequence<TI_0>::SequenceType theOther, ) */
    void Remove(Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Prepend(Macad::Occt::TCollection_AsciiString^ theItem);
    /* Method skipped due to unknown mapping: void Prepend(NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    /* Method skipped due to unknown mapping: void InsertBefore(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator^ thePosition, Macad::Occt::TCollection_AsciiString^ theItem);
    /* Method skipped due to unknown mapping: void InsertAfter(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    /* Method skipped due to unknown mapping: void Split(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void Split(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    Macad::Occt::TCollection_AsciiString^ First();
    Macad::Occt::TCollection_AsciiString^ ChangeFirst();
    Macad::Occt::TCollection_AsciiString^ Last();
    Macad::Occt::TCollection_AsciiString^ ChangeLast();
    Macad::Occt::TCollection_AsciiString^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::TCollection_AsciiString^ Value(int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    void SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
    Macad::Occt::TCollection_AsciiString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_AsciiString^ ChangeAt(long long unsigned int theIndex);
    TColStd_HSequenceOfAsciiString();
    /* Method skipped due to unknown mapping: void TColStd_HSequenceOfAsciiString(SequenceType theOther, ) */
    /* Method skipped due to unknown mapping: SequenceType Sequence() */
    /* Method skipped due to unknown mapping: SequenceType ChangeSequence() */
    void Append(Macad::Occt::TCollection_AsciiString^ theItem);
    /* Method skipped due to unknown mapping: void Append(SequenceType theSequence, ) */
    static Macad::Occt::TColStd_HSequenceOfAsciiString^ CreateDowncasted(::TColStd_HSequenceOfAsciiString* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfExtendedString sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString>
    , public IIndexEnumerable<Macad::Occt::TCollection_ExtendedString^>
{

#ifdef Include_TColStd_SequenceOfExtendedString_h
public:
    Include_TColStd_SequenceOfExtendedString_h
#endif

public:
    TColStd_SequenceOfExtendedString(::TColStd_SequenceOfExtendedString* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString>( nativeInstance, true )
    {}

    TColStd_SequenceOfExtendedString(::TColStd_SequenceOfExtendedString& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfExtendedString* NativeInstance
    {
        ::TColStd_SequenceOfExtendedString* get()
        {
            return static_cast<::TColStd_SequenceOfExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString::Iterator>
    {

#ifdef Include_TColStd_SequenceOfExtendedString_Iterator_h
    public:
        Include_TColStd_SequenceOfExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfExtendedString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfExtendedString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfExtendedString::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
        bool More();
        void Next();
        Macad::Occt::TCollection_ExtendedString^ Value();
        Macad::Occt::TCollection_ExtendedString^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_SequenceOfExtendedString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfExtendedString();
    TColStd_SequenceOfExtendedString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfExtendedString^ Assign(Macad::Occt::TColStd_SequenceOfExtendedString^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfExtendedString::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(Macad::Occt::TCollection_ExtendedString^ theItem);
    void Append(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    void Prepend(Macad::Occt::TCollection_ExtendedString^ theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    void InsertAfter(Macad::Occt::TColStd_SequenceOfExtendedString::Iterator^ thePosition, Macad::Occt::TCollection_ExtendedString^ theItem);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    Macad::Occt::TCollection_ExtendedString^ First();
    Macad::Occt::TCollection_ExtendedString^ ChangeFirst();
    Macad::Occt::TCollection_ExtendedString^ Last();
    Macad::Occt::TCollection_ExtendedString^ ChangeLast();
    Macad::Occt::TCollection_ExtendedString^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::TCollection_ExtendedString^ Value(int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    Macad::Occt::TCollection_ExtendedString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeAt(long long unsigned int theIndex);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_ExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfExtendedString sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TCollection_ExtendedString^>
{

#ifdef Include_TColStd_HSequenceOfExtendedString_h
public:
    Include_TColStd_HSequenceOfExtendedString_h
#endif

public:
    TColStd_HSequenceOfExtendedString(::TColStd_HSequenceOfExtendedString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfExtendedString(::TColStd_HSequenceOfExtendedString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfExtendedString* NativeInstance
    {
        ::TColStd_HSequenceOfExtendedString* get()
        {
            return static_cast<::TColStd_HSequenceOfExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HSequenceOfExtendedString::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfExtendedString_Iterator_h
    public:
        Include_TColStd_HSequenceOfExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfExtendedString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfExtendedString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfExtendedString::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        bool More();
        void Next();
        Macad::Occt::TCollection_ExtendedString^ Value();
        Macad::Occt::TCollection_ExtendedString^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    /* Method skipped due to unknown mapping: NCollection_HSequence<TI_0>::SequenceType Assign(NCollection_HSequence<TI_0>::SequenceType theOther, ) */
    void Remove(Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Prepend(Macad::Occt::TCollection_ExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void Prepend(NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void InsertBefore(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator^ thePosition, Macad::Occt::TCollection_ExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void InsertAfter(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void Split(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void Split(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    Macad::Occt::TCollection_ExtendedString^ First();
    Macad::Occt::TCollection_ExtendedString^ ChangeFirst();
    Macad::Occt::TCollection_ExtendedString^ Last();
    Macad::Occt::TCollection_ExtendedString^ ChangeLast();
    Macad::Occt::TCollection_ExtendedString^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::TCollection_ExtendedString^ Value(int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    void SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
    Macad::Occt::TCollection_ExtendedString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_ExtendedString^ ChangeAt(long long unsigned int theIndex);
    TColStd_HSequenceOfExtendedString();
    /* Method skipped due to unknown mapping: void TColStd_HSequenceOfExtendedString(SequenceType theOther, ) */
    /* Method skipped due to unknown mapping: SequenceType Sequence() */
    /* Method skipped due to unknown mapping: SequenceType ChangeSequence() */
    void Append(Macad::Occt::TCollection_ExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void Append(SequenceType theSequence, ) */
    static Macad::Occt::TColStd_HSequenceOfExtendedString^ CreateDowncasted(::TColStd_HSequenceOfExtendedString* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_ExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHAsciiString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfHAsciiString sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString>
    , public IIndexEnumerable<Macad::Occt::TCollection_HAsciiString^>
{

#ifdef Include_TColStd_SequenceOfHAsciiString_h
public:
    Include_TColStd_SequenceOfHAsciiString_h
#endif

public:
    TColStd_SequenceOfHAsciiString(::TColStd_SequenceOfHAsciiString* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString>( nativeInstance, true )
    {}

    TColStd_SequenceOfHAsciiString(::TColStd_SequenceOfHAsciiString& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfHAsciiString* NativeInstance
    {
        ::TColStd_SequenceOfHAsciiString* get()
        {
            return static_cast<::TColStd_SequenceOfHAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString::Iterator>
    {

#ifdef Include_TColStd_SequenceOfHAsciiString_Iterator_h
    public:
        Include_TColStd_SequenceOfHAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfHAsciiString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfHAsciiString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfHAsciiString::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfHAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfHAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
        bool More();
        void Next();
        Macad::Occt::TCollection_HAsciiString^ Value();
        Macad::Occt::TCollection_HAsciiString^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfHAsciiString();
    TColStd_SequenceOfHAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfHAsciiString^ Assign(Macad::Occt::TColStd_SequenceOfHAsciiString^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(Macad::Occt::TCollection_HAsciiString^ theItem);
    void Append(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
    void Prepend(Macad::Occt::TCollection_HAsciiString^ theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
    void InsertAfter(Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator^ thePosition, Macad::Occt::TCollection_HAsciiString^ theItem);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
    Macad::Occt::TCollection_HAsciiString^ First();
    Macad::Occt::TCollection_HAsciiString^ ChangeFirst();
    Macad::Occt::TCollection_HAsciiString^ Last();
    Macad::Occt::TCollection_HAsciiString^ ChangeLast();
    Macad::Occt::TCollection_HAsciiString^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::TCollection_HAsciiString^ Value(int theIndex);
    Macad::Occt::TCollection_HAsciiString^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::TCollection_HAsciiString^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    void SetValue(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    Macad::Occt::TCollection_HAsciiString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_HAsciiString^ ChangeAt(long long unsigned int theIndex);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_HAsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfHAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfHAsciiString sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TCollection_HAsciiString^>
{

#ifdef Include_TColStd_HSequenceOfHAsciiString_h
public:
    Include_TColStd_HSequenceOfHAsciiString_h
#endif

public:
    TColStd_HSequenceOfHAsciiString(::TColStd_HSequenceOfHAsciiString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfHAsciiString(::TColStd_HSequenceOfHAsciiString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfHAsciiString* NativeInstance
    {
        ::TColStd_HSequenceOfHAsciiString* get()
        {
            return static_cast<::TColStd_HSequenceOfHAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HSequenceOfHAsciiString::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfHAsciiString_Iterator_h
    public:
        Include_TColStd_HSequenceOfHAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfHAsciiString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfHAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfHAsciiString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfHAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfHAsciiString::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfHAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfHAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        bool More();
        void Next();
        Macad::Occt::TCollection_HAsciiString^ Value();
        Macad::Occt::TCollection_HAsciiString^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    /* Method skipped due to unknown mapping: NCollection_HSequence<TI_0>::SequenceType Assign(NCollection_HSequence<TI_0>::SequenceType theOther, ) */
    void Remove(Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Prepend(Macad::Occt::TCollection_HAsciiString^ theItem);
    /* Method skipped due to unknown mapping: void Prepend(NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    /* Method skipped due to unknown mapping: void InsertBefore(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator^ thePosition, Macad::Occt::TCollection_HAsciiString^ theItem);
    /* Method skipped due to unknown mapping: void InsertAfter(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    /* Method skipped due to unknown mapping: void Split(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void Split(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    Macad::Occt::TCollection_HAsciiString^ First();
    Macad::Occt::TCollection_HAsciiString^ ChangeFirst();
    Macad::Occt::TCollection_HAsciiString^ Last();
    Macad::Occt::TCollection_HAsciiString^ ChangeLast();
    Macad::Occt::TCollection_HAsciiString^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::TCollection_HAsciiString^ Value(int theIndex);
    Macad::Occt::TCollection_HAsciiString^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::TCollection_HAsciiString^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    void SetValue(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
    Macad::Occt::TCollection_HAsciiString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_HAsciiString^ ChangeAt(long long unsigned int theIndex);
    TColStd_HSequenceOfHAsciiString();
    /* Method skipped due to unknown mapping: void TColStd_HSequenceOfHAsciiString(SequenceType theOther, ) */
    /* Method skipped due to unknown mapping: SequenceType Sequence() */
    /* Method skipped due to unknown mapping: SequenceType ChangeSequence() */
    void Append(Macad::Occt::TCollection_HAsciiString^ theItem);
    /* Method skipped due to unknown mapping: void Append(SequenceType theSequence, ) */
    static Macad::Occt::TColStd_HSequenceOfHAsciiString^ CreateDowncasted(::TColStd_HSequenceOfHAsciiString* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_HAsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfHAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHExtendedString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfHExtendedString sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString>
    , public IIndexEnumerable<Macad::Occt::TCollection_HExtendedString^>
{

#ifdef Include_TColStd_SequenceOfHExtendedString_h
public:
    Include_TColStd_SequenceOfHExtendedString_h
#endif

public:
    TColStd_SequenceOfHExtendedString(::TColStd_SequenceOfHExtendedString* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString>( nativeInstance, true )
    {}

    TColStd_SequenceOfHExtendedString(::TColStd_SequenceOfHExtendedString& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfHExtendedString* NativeInstance
    {
        ::TColStd_SequenceOfHExtendedString* get()
        {
            return static_cast<::TColStd_SequenceOfHExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString::Iterator>
    {

#ifdef Include_TColStd_SequenceOfHExtendedString_Iterator_h
    public:
        Include_TColStd_SequenceOfHExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfHExtendedString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfHExtendedString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfHExtendedString::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfHExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfHExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
        bool More();
        void Next();
        Macad::Occt::TCollection_HExtendedString^ Value();
        Macad::Occt::TCollection_HExtendedString^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfHExtendedString();
    TColStd_SequenceOfHExtendedString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfHExtendedString^ Assign(Macad::Occt::TColStd_SequenceOfHExtendedString^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(Macad::Occt::TCollection_HExtendedString^ theItem);
    void Append(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
    void Prepend(Macad::Occt::TCollection_HExtendedString^ theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
    void InsertAfter(Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator^ thePosition, Macad::Occt::TCollection_HExtendedString^ theItem);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
    Macad::Occt::TCollection_HExtendedString^ First();
    Macad::Occt::TCollection_HExtendedString^ ChangeFirst();
    Macad::Occt::TCollection_HExtendedString^ Last();
    Macad::Occt::TCollection_HExtendedString^ ChangeLast();
    Macad::Occt::TCollection_HExtendedString^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::TCollection_HExtendedString^ Value(int theIndex);
    Macad::Occt::TCollection_HExtendedString^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::TCollection_HExtendedString^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    void SetValue(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    Macad::Occt::TCollection_HExtendedString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_HExtendedString^ ChangeAt(long long unsigned int theIndex);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_HExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfHExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfHExtendedString sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TCollection_HExtendedString^>
{

#ifdef Include_TColStd_HSequenceOfHExtendedString_h
public:
    Include_TColStd_HSequenceOfHExtendedString_h
#endif

public:
    TColStd_HSequenceOfHExtendedString(::TColStd_HSequenceOfHExtendedString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfHExtendedString(::TColStd_HSequenceOfHExtendedString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfHExtendedString* NativeInstance
    {
        ::TColStd_HSequenceOfHExtendedString* get()
        {
            return static_cast<::TColStd_HSequenceOfHExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HSequenceOfHExtendedString::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfHExtendedString_Iterator_h
    public:
        Include_TColStd_HSequenceOfHExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfHExtendedString::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfHExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfHExtendedString::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfHExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfHExtendedString::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfHExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfHExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        bool More();
        void Next();
        Macad::Occt::TCollection_HExtendedString^ Value();
        Macad::Occt::TCollection_HExtendedString^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    /* Method skipped due to unknown mapping: NCollection_HSequence<TI_0>::SequenceType Assign(NCollection_HSequence<TI_0>::SequenceType theOther, ) */
    void Remove(Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Prepend(Macad::Occt::TCollection_HExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void Prepend(NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void InsertBefore(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator^ thePosition, Macad::Occt::TCollection_HExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void InsertAfter(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void Split(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void Split(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    Macad::Occt::TCollection_HExtendedString^ First();
    Macad::Occt::TCollection_HExtendedString^ ChangeFirst();
    Macad::Occt::TCollection_HExtendedString^ Last();
    Macad::Occt::TCollection_HExtendedString^ ChangeLast();
    Macad::Occt::TCollection_HExtendedString^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::TCollection_HExtendedString^ Value(int theIndex);
    Macad::Occt::TCollection_HExtendedString^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::TCollection_HExtendedString^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    void SetValue(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
    Macad::Occt::TCollection_HExtendedString^ At(long long unsigned int theIndex);
    Macad::Occt::TCollection_HExtendedString^ ChangeAt(long long unsigned int theIndex);
    TColStd_HSequenceOfHExtendedString();
    /* Method skipped due to unknown mapping: void TColStd_HSequenceOfHExtendedString(SequenceType theOther, ) */
    /* Method skipped due to unknown mapping: SequenceType Sequence() */
    /* Method skipped due to unknown mapping: SequenceType ChangeSequence() */
    void Append(Macad::Occt::TCollection_HExtendedString^ theItem);
    /* Method skipped due to unknown mapping: void Append(SequenceType theSequence, ) */
    static Macad::Occt::TColStd_HSequenceOfHExtendedString^ CreateDowncasted(::TColStd_HSequenceOfHExtendedString* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_HExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfHExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfInteger
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfInteger>
    , public IIndexEnumerable<int>
{

#ifdef Include_TColStd_SequenceOfInteger_h
public:
    Include_TColStd_SequenceOfInteger_h
#endif

public:
    TColStd_SequenceOfInteger(::TColStd_SequenceOfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfInteger>( nativeInstance, true )
    {}

    TColStd_SequenceOfInteger(::TColStd_SequenceOfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfInteger* NativeInstance
    {
        ::TColStd_SequenceOfInteger* get()
        {
            return static_cast<::TColStd_SequenceOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfInteger::Iterator>
    {

#ifdef Include_TColStd_SequenceOfInteger_Iterator_h
    public:
        Include_TColStd_SequenceOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfInteger::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfInteger^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
        bool More();
        void Next();
        int Value();
        bool IsEqual(Macad::Occt::TColStd_SequenceOfInteger::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfInteger();
    TColStd_SequenceOfInteger(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfInteger^ Assign(Macad::Occt::TColStd_SequenceOfInteger^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfInteger::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(int theItem);
    void Append(Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
    void Prepend(int theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
    void InsertBefore(long long unsigned int theIndex, int theItem);
    void InsertBefore(int theIndex, int theItem);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
    void InsertAfter(Macad::Occt::TColStd_SequenceOfInteger::Iterator^ thePosition, int theItem);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
    void InsertAfter(long long unsigned int theIndex, int theItem);
    void InsertAfter(int theIndex, int theItem);
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
    int First();
    int Last();
    int Value(long long unsigned int theIndex);
    virtual int Value(int theIndex);
    int ChangeValue(long long unsigned int theIndex);
    int ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, int theItem);
    void SetValue(int theIndex, int theItem);
    int At(long long unsigned int theIndex);
    int ChangeAt(long long unsigned int theIndex);
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfInteger
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfInteger sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<int>
{

#ifdef Include_TColStd_HSequenceOfInteger_h
public:
    Include_TColStd_HSequenceOfInteger_h
#endif

public:
    TColStd_HSequenceOfInteger(::TColStd_HSequenceOfInteger* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfInteger(::TColStd_HSequenceOfInteger& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfInteger* NativeInstance
    {
        ::TColStd_HSequenceOfInteger* get()
        {
            return static_cast<::TColStd_HSequenceOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HSequenceOfInteger::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfInteger_Iterator_h
    public:
        Include_TColStd_HSequenceOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfInteger::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        bool More();
        void Next();
        int Value();
        bool IsEqual(Macad::Occt::TColStd_HSequenceOfInteger::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    /* Method skipped due to unknown mapping: NCollection_HSequence<TI_0>::SequenceType Assign(NCollection_HSequence<TI_0>::SequenceType theOther, ) */
    void Remove(Macad::Occt::TColStd_HSequenceOfInteger::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Prepend(int theItem);
    /* Method skipped due to unknown mapping: void Prepend(NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertBefore(long long unsigned int theIndex, int theItem);
    void InsertBefore(int theIndex, int theItem);
    /* Method skipped due to unknown mapping: void InsertBefore(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(Macad::Occt::TColStd_HSequenceOfInteger::Iterator^ thePosition, int theItem);
    /* Method skipped due to unknown mapping: void InsertAfter(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(long long unsigned int theIndex, int theItem);
    void InsertAfter(int theIndex, int theItem);
    /* Method skipped due to unknown mapping: void Split(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void Split(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    int First();
    int Last();
    int Value(long long unsigned int theIndex);
    virtual int Value(int theIndex);
    int ChangeValue(long long unsigned int theIndex);
    int ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, int theItem);
    void SetValue(int theIndex, int theItem);
    int At(long long unsigned int theIndex);
    int ChangeAt(long long unsigned int theIndex);
    TColStd_HSequenceOfInteger();
    /* Method skipped due to unknown mapping: void TColStd_HSequenceOfInteger(SequenceType theOther, ) */
    /* Method skipped due to unknown mapping: SequenceType Sequence() */
    /* Method skipped due to unknown mapping: SequenceType ChangeSequence() */
    void Append(int theItem);
    /* Method skipped due to unknown mapping: void Append(SequenceType theSequence, ) */
    static Macad::Occt::TColStd_HSequenceOfInteger^ CreateDowncasted(::TColStd_HSequenceOfInteger* instance);
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfReal
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfReal sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfReal>
    , public IIndexEnumerable<double>
{

#ifdef Include_TColStd_SequenceOfReal_h
public:
    Include_TColStd_SequenceOfReal_h
#endif

public:
    TColStd_SequenceOfReal(::TColStd_SequenceOfReal* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfReal>( nativeInstance, true )
    {}

    TColStd_SequenceOfReal(::TColStd_SequenceOfReal& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfReal>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfReal* NativeInstance
    {
        ::TColStd_SequenceOfReal* get()
        {
            return static_cast<::TColStd_SequenceOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfReal::Iterator>
    {

#ifdef Include_TColStd_SequenceOfReal_Iterator_h
    public:
        Include_TColStd_SequenceOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfReal::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfReal::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfReal^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfReal^ theSeq);
        bool More();
        void Next();
        double Value();
        bool IsEqual(Macad::Occt::TColStd_SequenceOfReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfReal();
    TColStd_SequenceOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfReal^ Assign(Macad::Occt::TColStd_SequenceOfReal^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfReal::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(double theItem);
    void Append(Macad::Occt::TColStd_SequenceOfReal^ theSeq);
    void Prepend(double theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfReal^ theSeq);
    void InsertBefore(long long unsigned int theIndex, double theItem);
    void InsertBefore(int theIndex, double theItem);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
    void InsertAfter(Macad::Occt::TColStd_SequenceOfReal::Iterator^ thePosition, double theItem);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
    void InsertAfter(long long unsigned int theIndex, double theItem);
    void InsertAfter(int theIndex, double theItem);
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
    double First();
    double Last();
    double Value(long long unsigned int theIndex);
    virtual double Value(int theIndex);
    double ChangeValue(long long unsigned int theIndex);
    double ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, double theItem);
    void SetValue(int theIndex, double theItem);
    double At(long long unsigned int theIndex);
    double ChangeAt(long long unsigned int theIndex);
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfReal

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfReal
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfReal sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<double>
{

#ifdef Include_TColStd_HSequenceOfReal_h
public:
    Include_TColStd_HSequenceOfReal_h
#endif

public:
    TColStd_HSequenceOfReal(::TColStd_HSequenceOfReal* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfReal(::TColStd_HSequenceOfReal& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfReal* NativeInstance
    {
        ::TColStd_HSequenceOfReal* get()
        {
            return static_cast<::TColStd_HSequenceOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HSequenceOfReal::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfReal_Iterator_h
    public:
        Include_TColStd_HSequenceOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfReal::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfReal::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        bool More();
        void Next();
        double Value();
        bool IsEqual(Macad::Occt::TColStd_HSequenceOfReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    /* Method skipped due to unknown mapping: NCollection_HSequence<TI_0>::SequenceType Assign(NCollection_HSequence<TI_0>::SequenceType theOther, ) */
    void Remove(Macad::Occt::TColStd_HSequenceOfReal::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Prepend(double theItem);
    /* Method skipped due to unknown mapping: void Prepend(NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertBefore(long long unsigned int theIndex, double theItem);
    void InsertBefore(int theIndex, double theItem);
    /* Method skipped due to unknown mapping: void InsertBefore(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(Macad::Occt::TColStd_HSequenceOfReal::Iterator^ thePosition, double theItem);
    /* Method skipped due to unknown mapping: void InsertAfter(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(long long unsigned int theIndex, double theItem);
    void InsertAfter(int theIndex, double theItem);
    /* Method skipped due to unknown mapping: void Split(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void Split(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    double First();
    double Last();
    double Value(long long unsigned int theIndex);
    virtual double Value(int theIndex);
    double ChangeValue(long long unsigned int theIndex);
    double ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, double theItem);
    void SetValue(int theIndex, double theItem);
    double At(long long unsigned int theIndex);
    double ChangeAt(long long unsigned int theIndex);
    TColStd_HSequenceOfReal();
    /* Method skipped due to unknown mapping: void TColStd_HSequenceOfReal(SequenceType theOther, ) */
    /* Method skipped due to unknown mapping: SequenceType Sequence() */
    /* Method skipped due to unknown mapping: SequenceType ChangeSequence() */
    void Append(double theItem);
    /* Method skipped due to unknown mapping: void Append(SequenceType theSequence, ) */
    static Macad::Occt::TColStd_HSequenceOfReal^ CreateDowncasted(::TColStd_HSequenceOfReal* instance);
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfReal

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfTransient
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfTransient sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfTransient>
    , public IIndexEnumerable<Macad::Occt::Standard_Transient^>
{

#ifdef Include_TColStd_SequenceOfTransient_h
public:
    Include_TColStd_SequenceOfTransient_h
#endif

public:
    TColStd_SequenceOfTransient(::TColStd_SequenceOfTransient* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfTransient>( nativeInstance, true )
    {}

    TColStd_SequenceOfTransient(::TColStd_SequenceOfTransient& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfTransient* NativeInstance
    {
        ::TColStd_SequenceOfTransient* get()
        {
            return static_cast<::TColStd_SequenceOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfTransient::Iterator>
    {

#ifdef Include_TColStd_SequenceOfTransient_Iterator_h
    public:
        Include_TColStd_SequenceOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfTransient::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfTransient^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
        bool More();
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_SequenceOfTransient::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfTransient();
    TColStd_SequenceOfTransient(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfTransient^ Assign(Macad::Occt::TColStd_SequenceOfTransient^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfTransient::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(Macad::Occt::Standard_Transient^ theItem);
    void Append(Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
    void Prepend(Macad::Occt::Standard_Transient^ theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
    void InsertAfter(Macad::Occt::TColStd_SequenceOfTransient::Iterator^ thePosition, Macad::Occt::Standard_Transient^ theItem);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
    Macad::Occt::Standard_Transient^ First();
    Macad::Occt::Standard_Transient^ ChangeFirst();
    Macad::Occt::Standard_Transient^ Last();
    Macad::Occt::Standard_Transient^ ChangeLast();
    Macad::Occt::Standard_Transient^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::Standard_Transient^ Value(int theIndex);
    Macad::Occt::Standard_Transient^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::Standard_Transient^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem);
    Macad::Occt::Standard_Transient^ At(long long unsigned int theIndex);
    Macad::Occt::Standard_Transient^ ChangeAt(long long unsigned int theIndex);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Standard_Transient^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfTransient
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfTransient sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Standard_Transient^>
{

#ifdef Include_TColStd_HSequenceOfTransient_h
public:
    Include_TColStd_HSequenceOfTransient_h
#endif

public:
    TColStd_HSequenceOfTransient(::TColStd_HSequenceOfTransient* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfTransient(::TColStd_HSequenceOfTransient& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfTransient* NativeInstance
    {
        ::TColStd_HSequenceOfTransient* get()
        {
            return static_cast<::TColStd_HSequenceOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_HSequenceOfTransient::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfTransient_Iterator_h
    public:
        Include_TColStd_HSequenceOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_HSequenceOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfTransient::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        /* Method skipped due to unknown mapping: void Iterator(NCollection_HSequence<TI_0>::SequenceType theSeq, bool isStart, ) */
        bool More();
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
        bool IsEqual(Macad::Occt::TColStd_HSequenceOfTransient::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    /* Method skipped due to unknown mapping: NCollection_HSequence<TI_0>::SequenceType Assign(NCollection_HSequence<TI_0>::SequenceType theOther, ) */
    void Remove(Macad::Occt::TColStd_HSequenceOfTransient::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Prepend(Macad::Occt::Standard_Transient^ theItem);
    /* Method skipped due to unknown mapping: void Prepend(NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Standard_Transient^ theItem);
    /* Method skipped due to unknown mapping: void InsertBefore(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(Macad::Occt::TColStd_HSequenceOfTransient::Iterator^ thePosition, Macad::Occt::Standard_Transient^ theItem);
    /* Method skipped due to unknown mapping: void InsertAfter(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::Standard_Transient^ theItem);
    /* Method skipped due to unknown mapping: void Split(long long unsigned int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    /* Method skipped due to unknown mapping: void Split(int theIndex, NCollection_HSequence<TI_0>::SequenceType theSeq, ) */
    Macad::Occt::Standard_Transient^ First();
    Macad::Occt::Standard_Transient^ ChangeFirst();
    Macad::Occt::Standard_Transient^ Last();
    Macad::Occt::Standard_Transient^ ChangeLast();
    Macad::Occt::Standard_Transient^ Value(long long unsigned int theIndex);
    virtual Macad::Occt::Standard_Transient^ Value(int theIndex);
    Macad::Occt::Standard_Transient^ ChangeValue(long long unsigned int theIndex);
    Macad::Occt::Standard_Transient^ ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, Macad::Occt::Standard_Transient^ theItem);
    void SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem);
    Macad::Occt::Standard_Transient^ At(long long unsigned int theIndex);
    Macad::Occt::Standard_Transient^ ChangeAt(long long unsigned int theIndex);
    TColStd_HSequenceOfTransient();
    /* Method skipped due to unknown mapping: void TColStd_HSequenceOfTransient(SequenceType theOther, ) */
    /* Method skipped due to unknown mapping: SequenceType Sequence() */
    /* Method skipped due to unknown mapping: SequenceType ChangeSequence() */
    void Append(Macad::Occt::Standard_Transient^ theItem);
    /* Method skipped due to unknown mapping: void Append(SequenceType theSequence, ) */
    static Macad::Occt::TColStd_HSequenceOfTransient^ CreateDowncasted(::TColStd_HSequenceOfTransient* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Standard_Transient^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_ListOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_ListOfAsciiString sealed
    : public Macad::Occt::BaseClass<::TColStd_ListOfAsciiString>
    , public IEnumerable<Macad::Occt::TCollection_AsciiString^>
{

#ifdef Include_TColStd_ListOfAsciiString_h
public:
    Include_TColStd_ListOfAsciiString_h
#endif

public:
    TColStd_ListOfAsciiString(::TColStd_ListOfAsciiString* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_ListOfAsciiString>( nativeInstance, true )
    {}

    TColStd_ListOfAsciiString(::TColStd_ListOfAsciiString& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_ListOfAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_ListOfAsciiString* NativeInstance
    {
        ::TColStd_ListOfAsciiString* get()
        {
            return static_cast<::TColStd_ListOfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TCollection_AsciiString^, ::TColStd_ListOfAsciiString::Iterator>
    {

#ifdef Include_TColStd_ListOfAsciiString_Iterator_h
    public:
        Include_TColStd_ListOfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_ListOfAsciiString::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TCollection_AsciiString^, ::TColStd_ListOfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_ListOfAsciiString::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TCollection_AsciiString^, ::TColStd_ListOfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_ListOfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_ListOfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_ListOfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::NCollection_BaseList^ theList);
        bool More() override;
        void Next() override;
        Macad::Occt::TCollection_AsciiString^ Value() override;
        Macad::Occt::TCollection_AsciiString^ ChangeValue();
    }; // class Iterator

    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_ListOfAsciiString();
    TColStd_ListOfAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /* Method skipped due to unknown mapping: void TColStd_ListOfAsciiString(initializer_list<TCollection_AsciiString> theInitList, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_ListOfAsciiString(initializer_list<TCollection_AsciiString> theInitList, NCollection_BaseAllocator theAllocator, ) */
    Macad::Occt::TColStd_ListOfAsciiString^ Assign(Macad::Occt::TColStd_ListOfAsciiString^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TCollection_AsciiString^ First();
    Macad::Occt::TCollection_AsciiString^ Last();
    Macad::Occt::TCollection_AsciiString^ Append(Macad::Occt::TCollection_AsciiString^ theItem);
    void Append(Macad::Occt::TCollection_AsciiString^ theItem, Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter);
    void Append(Macad::Occt::TColStd_ListOfAsciiString^ theOther);
    Macad::Occt::TCollection_AsciiString^ Prepend(Macad::Occt::TCollection_AsciiString^ theItem);
    void Prepend(Macad::Occt::TColStd_ListOfAsciiString^ theOther);
    void RemoveFirst();
    void Remove(Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter);
    Macad::Occt::TCollection_AsciiString^ InsertBefore(Macad::Occt::TCollection_AsciiString^ theItem, Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter);
    void InsertBefore(Macad::Occt::TColStd_ListOfAsciiString^ theOther, Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter);
    Macad::Occt::TCollection_AsciiString^ InsertAfter(Macad::Occt::TCollection_AsciiString^ theItem, Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter);
    void InsertAfter(Macad::Occt::TColStd_ListOfAsciiString^ theOther, Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter);
    void Reverse();
    void Exchange(Macad::Occt::TColStd_ListOfAsciiString^ theOther);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_ListOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_ListOfReal
//---------------------------------------------------------------------
public ref class TColStd_ListOfReal sealed
    : public Macad::Occt::BaseClass<::TColStd_ListOfReal>
    , public IEnumerable<double>
{

#ifdef Include_TColStd_ListOfReal_h
public:
    Include_TColStd_ListOfReal_h
#endif

public:
    TColStd_ListOfReal(::TColStd_ListOfReal* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_ListOfReal>( nativeInstance, true )
    {}

    TColStd_ListOfReal(::TColStd_ListOfReal& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_ListOfReal>( &nativeInstance, false )
    {}

    property ::TColStd_ListOfReal* NativeInstance
    {
        ::TColStd_ListOfReal* get()
        {
            return static_cast<::TColStd_ListOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<double, ::TColStd_ListOfReal::Iterator>
    {

#ifdef Include_TColStd_ListOfReal_Iterator_h
    public:
        Include_TColStd_ListOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_ListOfReal::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<double, ::TColStd_ListOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_ListOfReal::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<double, ::TColStd_ListOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_ListOfReal::Iterator* NativeInstance
        {
            ::TColStd_ListOfReal::Iterator* get()
            {
                return static_cast<::TColStd_ListOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::NCollection_BaseList^ theList);
        bool More() override;
        void Next() override;
        double Value() override;
    }; // class Iterator

    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_ListOfReal();
    TColStd_ListOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /* Method skipped due to unknown mapping: void TColStd_ListOfReal(initializer_list<double> theInitList, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_ListOfReal(initializer_list<double> theInitList, NCollection_BaseAllocator theAllocator, ) */
    Macad::Occt::TColStd_ListOfReal^ Assign(Macad::Occt::TColStd_ListOfReal^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    double First();
    double Last();
    double Append(double theItem);
    void Append(double theItem, Macad::Occt::TColStd_ListOfReal::Iterator^ theIter);
    void Append(Macad::Occt::TColStd_ListOfReal^ theOther);
    double Prepend(double theItem);
    void Prepend(Macad::Occt::TColStd_ListOfReal^ theOther);
    void RemoveFirst();
    void Remove(Macad::Occt::TColStd_ListOfReal::Iterator^ theIter);
    double InsertBefore(double theItem, Macad::Occt::TColStd_ListOfReal::Iterator^ theIter);
    void InsertBefore(Macad::Occt::TColStd_ListOfReal^ theOther, Macad::Occt::TColStd_ListOfReal::Iterator^ theIter);
    double InsertAfter(double theItem, Macad::Occt::TColStd_ListOfReal::Iterator^ theIter);
    void InsertAfter(Macad::Occt::TColStd_ListOfReal^ theOther, Macad::Occt::TColStd_ListOfReal::Iterator^ theIter);
    void Reverse();
    void Exchange(Macad::Occt::TColStd_ListOfReal^ theOther);
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_ListOfReal

//---------------------------------------------------------------------
//  Class  TColStd_ListOfTransient
//---------------------------------------------------------------------
public ref class TColStd_ListOfTransient sealed
    : public Macad::Occt::BaseClass<::TColStd_ListOfTransient>
{

#ifdef Include_TColStd_ListOfTransient_h
public:
    Include_TColStd_ListOfTransient_h
#endif

public:
    TColStd_ListOfTransient(::TColStd_ListOfTransient* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_ListOfTransient>( nativeInstance, true )
    {}

    TColStd_ListOfTransient(::TColStd_ListOfTransient& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_ListOfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_ListOfTransient* NativeInstance
    {
        ::TColStd_ListOfTransient* get()
        {
            return static_cast<::TColStd_ListOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_ListOfTransient::Iterator>
    {

#ifdef Include_TColStd_ListOfTransient_Iterator_h
    public:
        Include_TColStd_ListOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_ListOfTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_ListOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_ListOfTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_ListOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_ListOfTransient::Iterator* NativeInstance
        {
            ::TColStd_ListOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_ListOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::NCollection_BaseList^ theList);
        bool More();
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ ChangeValue();
    }; // class Iterator

    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_ListOfTransient();
    TColStd_ListOfTransient(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /* Method skipped due to unknown mapping: void TColStd_ListOfTransient(initializer_list<opencascade::handle<Standard_Transient>> theInitList, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_ListOfTransient(initializer_list<opencascade::handle<Standard_Transient>> theInitList, NCollection_BaseAllocator theAllocator, ) */
    Macad::Occt::TColStd_ListOfTransient^ Assign(Macad::Occt::TColStd_ListOfTransient^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Standard_Transient^ First();
    Macad::Occt::Standard_Transient^ Last();
    Macad::Occt::Standard_Transient^ Append(Macad::Occt::Standard_Transient^ theItem);
    void Append(Macad::Occt::Standard_Transient^ theItem, Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter);
    void Append(Macad::Occt::TColStd_ListOfTransient^ theOther);
    Macad::Occt::Standard_Transient^ Prepend(Macad::Occt::Standard_Transient^ theItem);
    void Prepend(Macad::Occt::TColStd_ListOfTransient^ theOther);
    void RemoveFirst();
    void Remove(Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter);
    Macad::Occt::Standard_Transient^ InsertBefore(Macad::Occt::Standard_Transient^ theItem, Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter);
    void InsertBefore(Macad::Occt::TColStd_ListOfTransient^ theOther, Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter);
    Macad::Occt::Standard_Transient^ InsertAfter(Macad::Occt::Standard_Transient^ theItem, Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter);
    void InsertAfter(Macad::Occt::TColStd_ListOfTransient^ theOther, Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter);
    void Reverse();
    void Exchange(Macad::Occt::TColStd_ListOfTransient^ theOther);
}; // class TColStd_ListOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_MapOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_MapOfAsciiString sealed
    : public Macad::Occt::BaseClass<::TColStd_MapOfAsciiString>
    , public IEnumerable<Macad::Occt::TCollection_AsciiString^>
{

#ifdef Include_TColStd_MapOfAsciiString_h
public:
    Include_TColStd_MapOfAsciiString_h
#endif

public:
    TColStd_MapOfAsciiString(::TColStd_MapOfAsciiString* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_MapOfAsciiString>( nativeInstance, true )
    {}

    TColStd_MapOfAsciiString(::TColStd_MapOfAsciiString& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_MapOfAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_MapOfAsciiString* NativeInstance
    {
        ::TColStd_MapOfAsciiString* get()
        {
            return static_cast<::TColStd_MapOfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TCollection_AsciiString^, ::TColStd_MapOfAsciiString::Iterator>
    {

#ifdef Include_TColStd_MapOfAsciiString_Iterator_h
    public:
        Include_TColStd_MapOfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_MapOfAsciiString::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TCollection_AsciiString^, ::TColStd_MapOfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_MapOfAsciiString::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TCollection_AsciiString^, ::TColStd_MapOfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_MapOfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_MapOfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_MapOfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_MapOfAsciiString^ theMap);
        bool More() override;
        void Next() override;
        Macad::Occt::TCollection_AsciiString^ Value() override;
        Macad::Occt::TCollection_AsciiString^ Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_MapOfAsciiString();
    TColStd_MapOfAsciiString(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfAsciiString(long long unsigned int theNbBuckets);
    TColStd_MapOfAsciiString(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfAsciiString(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_MapOfAsciiString(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfAsciiString(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfAsciiString(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfAsciiString(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfAsciiString(NCollection_DefaultHasher<TCollection_AsciiString> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    void Exchange(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<TCollection_AsciiString> GetHasher() */
    Macad::Occt::TColStd_MapOfAsciiString^ Assign(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Add(Macad::Occt::TCollection_AsciiString^ theKey);
    Macad::Occt::TCollection_AsciiString^ Added(Macad::Occt::TCollection_AsciiString^ theKey);
    bool Contains(Macad::Occt::TCollection_AsciiString^ theKey);
    /* Method skipped due to unknown mapping: optional<std::reference_wrapper<const TCollection_AsciiString>> Contained(TCollection_AsciiString theKey, ) */
    bool Remove(Macad::Occt::TCollection_AsciiString^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    bool IsEqual(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
    bool Contains(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
    void Union(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight);
    bool Unite(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
    bool HasIntersection(Macad::Occt::TColStd_MapOfAsciiString^ theMap);
    void Intersection(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight);
    bool Intersect(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
    void Subtraction(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight);
    bool Subtract(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
    void Difference(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight);
    bool Differ(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
    bool Equals(System::Object^ obj) override;
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_MapOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_MapOfInteger
//---------------------------------------------------------------------
public ref class TColStd_MapOfInteger sealed
    : public Macad::Occt::BaseClass<::TColStd_MapOfInteger>
    , public IEnumerable<int>
{

#ifdef Include_TColStd_MapOfInteger_h
public:
    Include_TColStd_MapOfInteger_h
#endif

public:
    TColStd_MapOfInteger(::TColStd_MapOfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_MapOfInteger>( nativeInstance, true )
    {}

    TColStd_MapOfInteger(::TColStd_MapOfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_MapOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_MapOfInteger* NativeInstance
    {
        ::TColStd_MapOfInteger* get()
        {
            return static_cast<::TColStd_MapOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<int, ::TColStd_MapOfInteger::Iterator>
    {

#ifdef Include_TColStd_MapOfInteger_Iterator_h
    public:
        Include_TColStd_MapOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_MapOfInteger::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<int, ::TColStd_MapOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_MapOfInteger::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<int, ::TColStd_MapOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_MapOfInteger::Iterator* NativeInstance
        {
            ::TColStd_MapOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_MapOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_MapOfInteger^ theMap);
        bool More() override;
        void Next() override;
        int Value() override;
        int Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_MapOfInteger();
    TColStd_MapOfInteger(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfInteger(long long unsigned int theNbBuckets);
    TColStd_MapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfInteger(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_MapOfInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfInteger(NCollection_DefaultHasher<int> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfInteger(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfInteger(NCollection_DefaultHasher<int> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    void Exchange(Macad::Occt::TColStd_MapOfInteger^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<int> GetHasher() */
    Macad::Occt::TColStd_MapOfInteger^ Assign(Macad::Occt::TColStd_MapOfInteger^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Add(int theKey);
    int Added(int theKey);
    bool Contains(int theKey);
    /* Method skipped due to unknown mapping: optional<std::reference_wrapper<const int>> Contained(int theKey, ) */
    bool Remove(int K);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    bool IsEqual(Macad::Occt::TColStd_MapOfInteger^ theOther);
    bool Contains(Macad::Occt::TColStd_MapOfInteger^ theOther);
    void Union(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight);
    bool Unite(Macad::Occt::TColStd_MapOfInteger^ theOther);
    bool HasIntersection(Macad::Occt::TColStd_MapOfInteger^ theMap);
    void Intersection(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight);
    bool Intersect(Macad::Occt::TColStd_MapOfInteger^ theOther);
    void Subtraction(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight);
    bool Subtract(Macad::Occt::TColStd_MapOfInteger^ theOther);
    void Difference(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight);
    bool Differ(Macad::Occt::TColStd_MapOfInteger^ theOther);
    bool Equals(System::Object^ obj) override;
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_MapOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_MapOfReal
//---------------------------------------------------------------------
public ref class TColStd_MapOfReal sealed
    : public Macad::Occt::BaseClass<::TColStd_MapOfReal>
    , public IEnumerable<double>
{

#ifdef Include_TColStd_MapOfReal_h
public:
    Include_TColStd_MapOfReal_h
#endif

public:
    TColStd_MapOfReal(::TColStd_MapOfReal* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_MapOfReal>( nativeInstance, true )
    {}

    TColStd_MapOfReal(::TColStd_MapOfReal& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_MapOfReal>( &nativeInstance, false )
    {}

    property ::TColStd_MapOfReal* NativeInstance
    {
        ::TColStd_MapOfReal* get()
        {
            return static_cast<::TColStd_MapOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<double, ::TColStd_MapOfReal::Iterator>
    {

#ifdef Include_TColStd_MapOfReal_Iterator_h
    public:
        Include_TColStd_MapOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_MapOfReal::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<double, ::TColStd_MapOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_MapOfReal::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<double, ::TColStd_MapOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_MapOfReal::Iterator* NativeInstance
        {
            ::TColStd_MapOfReal::Iterator* get()
            {
                return static_cast<::TColStd_MapOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_MapOfReal^ theMap);
        bool More() override;
        void Next() override;
        double Value() override;
        double Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_MapOfReal();
    TColStd_MapOfReal(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfReal(long long unsigned int theNbBuckets);
    TColStd_MapOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfReal(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_MapOfReal(NCollection_DefaultHasher<double> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfReal(NCollection_DefaultHasher<double> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfReal(NCollection_DefaultHasher<double> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfReal(NCollection_DefaultHasher<double> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfReal(NCollection_DefaultHasher<double> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    void Exchange(Macad::Occt::TColStd_MapOfReal^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<double> GetHasher() */
    Macad::Occt::TColStd_MapOfReal^ Assign(Macad::Occt::TColStd_MapOfReal^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Add(double theKey);
    double Added(double theKey);
    bool Contains(double theKey);
    /* Method skipped due to unknown mapping: optional<std::reference_wrapper<const double>> Contained(double theKey, ) */
    bool Remove(double K);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    bool IsEqual(Macad::Occt::TColStd_MapOfReal^ theOther);
    bool Contains(Macad::Occt::TColStd_MapOfReal^ theOther);
    void Union(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight);
    bool Unite(Macad::Occt::TColStd_MapOfReal^ theOther);
    bool HasIntersection(Macad::Occt::TColStd_MapOfReal^ theMap);
    void Intersection(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight);
    bool Intersect(Macad::Occt::TColStd_MapOfReal^ theOther);
    void Subtraction(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight);
    bool Subtract(Macad::Occt::TColStd_MapOfReal^ theOther);
    void Difference(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight);
    bool Differ(Macad::Occt::TColStd_MapOfReal^ theOther);
    bool Equals(System::Object^ obj) override;
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_MapOfReal

//---------------------------------------------------------------------
//  Class  TColStd_MapOfTransient
//---------------------------------------------------------------------
public ref class TColStd_MapOfTransient sealed
    : public Macad::Occt::BaseClass<::TColStd_MapOfTransient>
{

#ifdef Include_TColStd_MapOfTransient_h
public:
    Include_TColStd_MapOfTransient_h
#endif

public:
    TColStd_MapOfTransient(::TColStd_MapOfTransient* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_MapOfTransient>( nativeInstance, true )
    {}

    TColStd_MapOfTransient(::TColStd_MapOfTransient& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_MapOfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_MapOfTransient* NativeInstance
    {
        ::TColStd_MapOfTransient* get()
        {
            return static_cast<::TColStd_MapOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_MapOfTransient::Iterator>
    {

#ifdef Include_TColStd_MapOfTransient_Iterator_h
    public:
        Include_TColStd_MapOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_MapOfTransient::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_MapOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_MapOfTransient::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_MapOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_MapOfTransient::Iterator* NativeInstance
        {
            ::TColStd_MapOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_MapOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_MapOfTransient^ theMap);
        bool More();
        void Next();
        Macad::Occt::Standard_Transient^ Value();
        Macad::Occt::Standard_Transient^ Key();
    }; // class Iterator

    long long unsigned int NbBuckets();
    int Extent();
    int Length();
    long long unsigned int Size();
    bool IsEmpty();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_MapOfTransient();
    TColStd_MapOfTransient(long long unsigned int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfTransient(long long unsigned int theNbBuckets);
    TColStd_MapOfTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfTransient(int theNbBuckets);
    /* Method skipped due to unknown mapping: void TColStd_MapOfTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, long long unsigned int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void TColStd_MapOfTransient(NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> theHasher, int theNbBuckets, NCollection_BaseAllocator theAllocator, ) */
    void Exchange(Macad::Occt::TColStd_MapOfTransient^ theOther);
    /* Method skipped due to unknown mapping: NCollection_DefaultHasher<opencascade::handle<Standard_Transient>> GetHasher() */
    Macad::Occt::TColStd_MapOfTransient^ Assign(Macad::Occt::TColStd_MapOfTransient^ theOther);
    void ReSize(long long unsigned int N);
    void ReSize(int N);
    bool Add(Macad::Occt::Standard_Transient^ theKey);
    Macad::Occt::Standard_Transient^ Added(Macad::Occt::Standard_Transient^ theKey);
    bool Contains(Macad::Occt::Standard_Transient^ theKey);
    /* Method skipped due to unknown mapping: optional<std::reference_wrapper<const opencascade::handle<Standard_Transient>>> Contained(Standard_Transient theKey, ) */
    bool Remove(Macad::Occt::Standard_Transient^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    bool IsEqual(Macad::Occt::TColStd_MapOfTransient^ theOther);
    bool Contains(Macad::Occt::TColStd_MapOfTransient^ theOther);
    void Union(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight);
    bool Unite(Macad::Occt::TColStd_MapOfTransient^ theOther);
    bool HasIntersection(Macad::Occt::TColStd_MapOfTransient^ theMap);
    void Intersection(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight);
    bool Intersect(Macad::Occt::TColStd_MapOfTransient^ theOther);
    void Subtraction(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight);
    bool Subtract(Macad::Occt::TColStd_MapOfTransient^ theOther);
    void Difference(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight);
    bool Differ(Macad::Occt::TColStd_MapOfTransient^ theOther);
    bool Equals(System::Object^ obj) override;
}; // class TColStd_MapOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAddress
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfAddress sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfAddress>
{

#ifdef Include_TColStd_SequenceOfAddress_h
public:
    Include_TColStd_SequenceOfAddress_h
#endif

public:
    TColStd_SequenceOfAddress(::TColStd_SequenceOfAddress* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfAddress>( nativeInstance, true )
    {}

    TColStd_SequenceOfAddress(::TColStd_SequenceOfAddress& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfAddress>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfAddress* NativeInstance
    {
        ::TColStd_SequenceOfAddress* get()
        {
            return static_cast<::TColStd_SequenceOfAddress*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfAddress::Iterator>
    {

#ifdef Include_TColStd_SequenceOfAddress_Iterator_h
    public:
        Include_TColStd_SequenceOfAddress_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfAddress::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfAddress::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfAddress::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfAddress::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfAddress::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfAddress::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfAddress::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfAddress^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
        bool More();
        void Next();
        /* Method skipped due to unknown mapping: void * Value() */
        /* Method skipped due to unknown mapping: void * ChangeValue() */
        bool IsEqual(Macad::Occt::TColStd_SequenceOfAddress::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfAddress();
    TColStd_SequenceOfAddress(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfAddress^ Assign(Macad::Occt::TColStd_SequenceOfAddress^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfAddress::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    /* Method skipped due to unknown mapping: void Append(void * theItem, ) */
    void Append(Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
    /* Method skipped due to unknown mapping: void Prepend(void * theItem, ) */
    void Prepend(Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
    /* Method skipped due to unknown mapping: void InsertBefore(long long unsigned int theIndex, void * theItem, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, void * theItem, ) */
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
    /* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, void * theItem, ) */
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
    /* Method skipped due to unknown mapping: void InsertAfter(long long unsigned int theIndex, void * theItem, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, void * theItem, ) */
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfAddress^ theSeq);
    /* Method skipped due to unknown mapping: void * First() */
    /* Method skipped due to unknown mapping: void * ChangeFirst() */
    /* Method skipped due to unknown mapping: void * Last() */
    /* Method skipped due to unknown mapping: void * ChangeLast() */
    /* Method skipped due to unknown mapping: void * Value(long long unsigned int theIndex, ) */
    /* Method skipped due to unknown mapping: void * Value(int theIndex, ) */
    /* Method skipped due to unknown mapping: void * ChangeValue(long long unsigned int theIndex, ) */
    /* Method skipped due to unknown mapping: void * ChangeValue(int theIndex, ) */
    /* Method skipped due to unknown mapping: void SetValue(long long unsigned int theIndex, void * theItem, ) */
    /* Method skipped due to unknown mapping: void SetValue(int theIndex, void * theItem, ) */
    /* Method skipped due to unknown mapping: void * At(long long unsigned int theIndex, ) */
    /* Method skipped due to unknown mapping: void * ChangeAt(long long unsigned int theIndex, ) */
}; // class TColStd_SequenceOfAddress

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfBoolean
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfBoolean sealed
    : public Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean>
    , public IIndexEnumerable<bool>
{

#ifdef Include_TColStd_SequenceOfBoolean_h
public:
    Include_TColStd_SequenceOfBoolean_h
#endif

public:
    TColStd_SequenceOfBoolean(::TColStd_SequenceOfBoolean* nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean>( nativeInstance, true )
    {}

    TColStd_SequenceOfBoolean(::TColStd_SequenceOfBoolean& nativeInstance)
        : Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfBoolean* NativeInstance
    {
        ::TColStd_SequenceOfBoolean* get()
        {
            return static_cast<::TColStd_SequenceOfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean::Iterator>
    {

#ifdef Include_TColStd_SequenceOfBoolean_Iterator_h
    public:
        Include_TColStd_SequenceOfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfBoolean::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfBoolean::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfBoolean::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
        property bool ChangeValue {
            bool get() {
                return ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(bool value) {
                ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TColStd_SequenceOfBoolean^ theSeq, bool isStart);
        Iterator(Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
        bool More();
        void Next();
        bool Value();
        bool IsEqual(Macad::Occt::TColStd_SequenceOfBoolean::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    int Length();
    long long unsigned int Size();
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    TColStd_SequenceOfBoolean();
    TColStd_SequenceOfBoolean(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    static int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(long long unsigned int I, long long unsigned int J);
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TColStd_SequenceOfBoolean^ Assign(Macad::Occt::TColStd_SequenceOfBoolean^ theOther);
    void Remove(Macad::Occt::TColStd_SequenceOfBoolean::Iterator^ thePosition);
    void Remove(long long unsigned int theIndex);
    void Remove(int theIndex);
    void Remove(long long unsigned int theFromIndex, long long unsigned int theToIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(bool theItem);
    void Append(Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
    void Prepend(bool theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
    void InsertBefore(long long unsigned int theIndex, bool theItem);
    void InsertBefore(int theIndex, bool theItem);
    void InsertBefore(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
    void InsertAfter(Macad::Occt::TColStd_SequenceOfBoolean::Iterator^ thePosition, bool theItem);
    void InsertAfter(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
    void InsertAfter(long long unsigned int theIndex, bool theItem);
    void InsertAfter(int theIndex, bool theItem);
    void Split(long long unsigned int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
    void Split(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
    bool First();
    bool Last();
    bool Value(long long unsigned int theIndex);
    virtual bool Value(int theIndex);
    bool ChangeValue(long long unsigned int theIndex);
    bool ChangeValue(int theIndex);
    void SetValue(long long unsigned int theIndex, bool theItem);
    void SetValue(int theIndex, bool theItem);
    bool At(long long unsigned int theIndex);
    bool ChangeAt(long long unsigned int theIndex);
    virtual System::Collections::Generic::IEnumerator<bool>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HPackedMapOfInteger
//---------------------------------------------------------------------
/// <summary>
/// </summary>
/// @deprecated This Handle wrapper class is deprecated.
/// Use TColStd_PackedMapOfInteger directly instead.
public ref class TColStd_HPackedMapOfInteger sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HPackedMapOfInteger_h
public:
    Include_TColStd_HPackedMapOfInteger_h
#endif

public:
    TColStd_HPackedMapOfInteger(::TColStd_HPackedMapOfInteger* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColStd_HPackedMapOfInteger(::TColStd_HPackedMapOfInteger& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HPackedMapOfInteger* NativeInstance
    {
        ::TColStd_HPackedMapOfInteger* get()
        {
            return static_cast<::TColStd_HPackedMapOfInteger*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor of empty map.
    /// </summary>
    /// <param name="theNbBuckets">
    /// initial number of buckets
    /// </param>
    TColStd_HPackedMapOfInteger(int theNbBuckets);
    /// <summary>
    /// Constructor of empty map.
    /// </summary>
    /// <param name="theNbBuckets">
    /// initial number of buckets
    /// </param>
    TColStd_HPackedMapOfInteger();
    /* Method skipped due to unknown mapping: void TColStd_HPackedMapOfInteger(TColStd_PackedMapOfInteger theOther, ) */
    /* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger Map() */
    /* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger ChangeMap() */
    static Macad::Occt::TColStd_HPackedMapOfInteger^ CreateDowncasted(::TColStd_HPackedMapOfInteger* instance);
}; // class TColStd_HPackedMapOfInteger

}; // namespace Occt
}; // namespace Macad
