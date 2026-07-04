// Generated wrapper code for package Bnd

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox
//---------------------------------------------------------------------
public ref class Bnd_Array1OfBox sealed
    : public Macad::Occt::BaseClass<::Bnd_Array1OfBox>
    , public IIndexEnumerable<Macad::Occt::Bnd_Box^>
{

#ifdef Include_Bnd_Array1OfBox_h
public:
    Include_Bnd_Array1OfBox_h
#endif

public:
    Bnd_Array1OfBox(::Bnd_Array1OfBox* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfBox>( nativeInstance, true )
    {}

    Bnd_Array1OfBox(::Bnd_Array1OfBox& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfBox>( &nativeInstance, false )
    {}

    property ::Bnd_Array1OfBox* NativeInstance
    {
        ::Bnd_Array1OfBox* get()
        {
            return static_cast<::Bnd_Array1OfBox*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_Array1OfBox::Iterator>
    {

#ifdef Include_Bnd_Array1OfBox_Iterator_h
    public:
        Include_Bnd_Array1OfBox_Iterator_h
#endif

    public:
        Iterator(::Bnd_Array1OfBox::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfBox::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_Array1OfBox::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfBox::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_Array1OfBox::Iterator* NativeInstance
        {
            ::Bnd_Array1OfBox::Iterator* get()
            {
                return static_cast<::Bnd_Array1OfBox::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::Bnd_Array1OfBox^ theList);
        bool More();
        void Initialize(Macad::Occt::Bnd_Array1OfBox^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::Bnd_Box^ Value();
        Macad::Occt::Bnd_Box^ ChangeValue();
    }; // class Iterator

    Bnd_Array1OfBox();
    Bnd_Array1OfBox(int theLower, int theUpper);
    Bnd_Array1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Bnd_Array1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper);
    Bnd_Array1OfBox(long long unsigned int theSize);
    void Init(Macad::Occt::Bnd_Box^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_Array1OfBox^ Assign(Macad::Occt::Bnd_Array1OfBox^ theOther);
    Macad::Occt::Bnd_Array1OfBox^ CopyValues(Macad::Occt::Bnd_Array1OfBox^ theOther);
    Macad::Occt::Bnd_Array1OfBox^ Move(Macad::Occt::Bnd_Array1OfBox^ theOther);
    Macad::Occt::Bnd_Box^ First();
    Macad::Occt::Bnd_Box^ ChangeFirst();
    Macad::Occt::Bnd_Box^ Last();
    Macad::Occt::Bnd_Box^ ChangeLast();
    virtual Macad::Occt::Bnd_Box^ Value(int theIndex);
    Macad::Occt::Bnd_Box^ ChangeValue(int theIndex);
    Macad::Occt::Bnd_Box^ At(long long unsigned int theIndex);
    Macad::Occt::Bnd_Box^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_Array1OfBox

//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox2d
//---------------------------------------------------------------------
public ref class Bnd_Array1OfBox2d sealed
    : public Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>
    , public IIndexEnumerable<Macad::Occt::Bnd_Box2d^>
{

#ifdef Include_Bnd_Array1OfBox2d_h
public:
    Include_Bnd_Array1OfBox2d_h
#endif

public:
    Bnd_Array1OfBox2d(::Bnd_Array1OfBox2d* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>( nativeInstance, true )
    {}

    Bnd_Array1OfBox2d(::Bnd_Array1OfBox2d& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>( &nativeInstance, false )
    {}

    property ::Bnd_Array1OfBox2d* NativeInstance
    {
        ::Bnd_Array1OfBox2d* get()
        {
            return static_cast<::Bnd_Array1OfBox2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_Array1OfBox2d::Iterator>
    {

#ifdef Include_Bnd_Array1OfBox2d_Iterator_h
    public:
        Include_Bnd_Array1OfBox2d_Iterator_h
#endif

    public:
        Iterator(::Bnd_Array1OfBox2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_Array1OfBox2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_Array1OfBox2d::Iterator* NativeInstance
        {
            ::Bnd_Array1OfBox2d::Iterator* get()
            {
                return static_cast<::Bnd_Array1OfBox2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::Bnd_Array1OfBox2d^ theList);
        bool More();
        void Initialize(Macad::Occt::Bnd_Array1OfBox2d^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::Bnd_Box2d^ Value();
        Macad::Occt::Bnd_Box2d^ ChangeValue();
    }; // class Iterator

    Bnd_Array1OfBox2d();
    Bnd_Array1OfBox2d(int theLower, int theUpper);
    Bnd_Array1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Bnd_Array1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper);
    Bnd_Array1OfBox2d(long long unsigned int theSize);
    void Init(Macad::Occt::Bnd_Box2d^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_Array1OfBox2d^ Assign(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
    Macad::Occt::Bnd_Array1OfBox2d^ CopyValues(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
    Macad::Occt::Bnd_Array1OfBox2d^ Move(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
    Macad::Occt::Bnd_Box2d^ First();
    Macad::Occt::Bnd_Box2d^ ChangeFirst();
    Macad::Occt::Bnd_Box2d^ Last();
    Macad::Occt::Bnd_Box2d^ ChangeLast();
    virtual Macad::Occt::Bnd_Box2d^ Value(int theIndex);
    Macad::Occt::Bnd_Box2d^ ChangeValue(int theIndex);
    Macad::Occt::Bnd_Box2d^ At(long long unsigned int theIndex);
    Macad::Occt::Bnd_Box2d^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_Array1OfBox2d

//---------------------------------------------------------------------
//  Class  Bnd_Array1OfSphere
//---------------------------------------------------------------------
public ref class Bnd_Array1OfSphere sealed
    : public Macad::Occt::BaseClass<::Bnd_Array1OfSphere>
    , public IIndexEnumerable<Macad::Occt::Bnd_Sphere^>
{

#ifdef Include_Bnd_Array1OfSphere_h
public:
    Include_Bnd_Array1OfSphere_h
#endif

public:
    Bnd_Array1OfSphere(::Bnd_Array1OfSphere* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>( nativeInstance, true )
    {}

    Bnd_Array1OfSphere(::Bnd_Array1OfSphere& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>( &nativeInstance, false )
    {}

    property ::Bnd_Array1OfSphere* NativeInstance
    {
        ::Bnd_Array1OfSphere* get()
        {
            return static_cast<::Bnd_Array1OfSphere*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_Array1OfSphere::Iterator>
    {

#ifdef Include_Bnd_Array1OfSphere_Iterator_h
    public:
        Include_Bnd_Array1OfSphere_Iterator_h
#endif

    public:
        Iterator(::Bnd_Array1OfSphere::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfSphere::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_Array1OfSphere::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfSphere::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_Array1OfSphere::Iterator* NativeInstance
        {
            ::Bnd_Array1OfSphere::Iterator* get()
            {
                return static_cast<::Bnd_Array1OfSphere::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::Bnd_Array1OfSphere^ theList);
        bool More();
        void Initialize(Macad::Occt::Bnd_Array1OfSphere^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::Bnd_Sphere^ Value();
        Macad::Occt::Bnd_Sphere^ ChangeValue();
    }; // class Iterator

    Bnd_Array1OfSphere();
    Bnd_Array1OfSphere(int theLower, int theUpper);
    Bnd_Array1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Bnd_Array1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper);
    Bnd_Array1OfSphere(long long unsigned int theSize);
    void Init(Macad::Occt::Bnd_Sphere^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_Array1OfSphere^ Assign(Macad::Occt::Bnd_Array1OfSphere^ theOther);
    Macad::Occt::Bnd_Array1OfSphere^ CopyValues(Macad::Occt::Bnd_Array1OfSphere^ theOther);
    Macad::Occt::Bnd_Array1OfSphere^ Move(Macad::Occt::Bnd_Array1OfSphere^ theOther);
    Macad::Occt::Bnd_Sphere^ First();
    Macad::Occt::Bnd_Sphere^ ChangeFirst();
    Macad::Occt::Bnd_Sphere^ Last();
    Macad::Occt::Bnd_Sphere^ ChangeLast();
    virtual Macad::Occt::Bnd_Sphere^ Value(int theIndex);
    Macad::Occt::Bnd_Sphere^ ChangeValue(int theIndex);
    Macad::Occt::Bnd_Sphere^ At(long long unsigned int theIndex);
    Macad::Occt::Bnd_Sphere^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Sphere^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_Array1OfSphere

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfBox sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Bnd_Box^>
{

#ifdef Include_Bnd_HArray1OfBox_h
public:
    Include_Bnd_HArray1OfBox_h
#endif

public:
    Bnd_HArray1OfBox(::Bnd_HArray1OfBox* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Bnd_HArray1OfBox(::Bnd_HArray1OfBox& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Bnd_HArray1OfBox* NativeInstance
    {
        ::Bnd_HArray1OfBox* get()
        {
            return static_cast<::Bnd_HArray1OfBox*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_HArray1OfBox::Iterator>
    {

#ifdef Include_Bnd_HArray1OfBox_Iterator_h
    public:
        Include_Bnd_HArray1OfBox_Iterator_h
#endif

    public:
        Iterator(::Bnd_HArray1OfBox::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfBox::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_HArray1OfBox::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfBox::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_HArray1OfBox::Iterator* NativeInstance
        {
            ::Bnd_HArray1OfBox::Iterator* get()
            {
                return static_cast<::Bnd_HArray1OfBox::Iterator*>(_NativeInstance);
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
        Macad::Occt::Bnd_Box^ Value();
        Macad::Occt::Bnd_Box^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::Bnd_Box^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    Macad::Occt::Bnd_Box^ First();
    Macad::Occt::Bnd_Box^ ChangeFirst();
    Macad::Occt::Bnd_Box^ Last();
    Macad::Occt::Bnd_Box^ ChangeLast();
    virtual Macad::Occt::Bnd_Box^ Value(int theIndex);
    Macad::Occt::Bnd_Box^ ChangeValue(int theIndex);
    Macad::Occt::Bnd_Box^ At(long long unsigned int theIndex);
    Macad::Occt::Bnd_Box^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    Bnd_HArray1OfBox();
    Bnd_HArray1OfBox(int theLower, int theUpper);
    Bnd_HArray1OfBox(int theLower, int theUpper, Macad::Occt::Bnd_Box^ theValue);
    Bnd_HArray1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void Bnd_HArray1OfBox(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::Bnd_HArray1OfBox^ CreateDowncasted(::Bnd_HArray1OfBox* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_HArray1OfBox

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox2d
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfBox2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Bnd_Box2d^>
{

#ifdef Include_Bnd_HArray1OfBox2d_h
public:
    Include_Bnd_HArray1OfBox2d_h
#endif

public:
    Bnd_HArray1OfBox2d(::Bnd_HArray1OfBox2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Bnd_HArray1OfBox2d(::Bnd_HArray1OfBox2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Bnd_HArray1OfBox2d* NativeInstance
    {
        ::Bnd_HArray1OfBox2d* get()
        {
            return static_cast<::Bnd_HArray1OfBox2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_HArray1OfBox2d::Iterator>
    {

#ifdef Include_Bnd_HArray1OfBox2d_Iterator_h
    public:
        Include_Bnd_HArray1OfBox2d_Iterator_h
#endif

    public:
        Iterator(::Bnd_HArray1OfBox2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfBox2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_HArray1OfBox2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfBox2d::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_HArray1OfBox2d::Iterator* NativeInstance
        {
            ::Bnd_HArray1OfBox2d::Iterator* get()
            {
                return static_cast<::Bnd_HArray1OfBox2d::Iterator*>(_NativeInstance);
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
        Macad::Occt::Bnd_Box2d^ Value();
        Macad::Occt::Bnd_Box2d^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::Bnd_Box2d^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    Macad::Occt::Bnd_Box2d^ First();
    Macad::Occt::Bnd_Box2d^ ChangeFirst();
    Macad::Occt::Bnd_Box2d^ Last();
    Macad::Occt::Bnd_Box2d^ ChangeLast();
    virtual Macad::Occt::Bnd_Box2d^ Value(int theIndex);
    Macad::Occt::Bnd_Box2d^ ChangeValue(int theIndex);
    Macad::Occt::Bnd_Box2d^ At(long long unsigned int theIndex);
    Macad::Occt::Bnd_Box2d^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    Bnd_HArray1OfBox2d();
    Bnd_HArray1OfBox2d(int theLower, int theUpper);
    Bnd_HArray1OfBox2d(int theLower, int theUpper, Macad::Occt::Bnd_Box2d^ theValue);
    Bnd_HArray1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void Bnd_HArray1OfBox2d(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::Bnd_HArray1OfBox2d^ CreateDowncasted(::Bnd_HArray1OfBox2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_HArray1OfBox2d

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfSphere
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfSphere sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Bnd_Sphere^>
{

#ifdef Include_Bnd_HArray1OfSphere_h
public:
    Include_Bnd_HArray1OfSphere_h
#endif

public:
    Bnd_HArray1OfSphere(::Bnd_HArray1OfSphere* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Bnd_HArray1OfSphere(::Bnd_HArray1OfSphere& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Bnd_HArray1OfSphere* NativeInstance
    {
        ::Bnd_HArray1OfSphere* get()
        {
            return static_cast<::Bnd_HArray1OfSphere*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_HArray1OfSphere::Iterator>
    {

#ifdef Include_Bnd_HArray1OfSphere_Iterator_h
    public:
        Include_Bnd_HArray1OfSphere_Iterator_h
#endif

    public:
        Iterator(::Bnd_HArray1OfSphere::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfSphere::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_HArray1OfSphere::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfSphere::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_HArray1OfSphere::Iterator* NativeInstance
        {
            ::Bnd_HArray1OfSphere::Iterator* get()
            {
                return static_cast<::Bnd_HArray1OfSphere::Iterator*>(_NativeInstance);
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
        Macad::Occt::Bnd_Sphere^ Value();
        Macad::Occt::Bnd_Sphere^ ChangeValue();
    }; // class Iterator

    void Init(Macad::Occt::Bnd_Sphere^ theValue);
    long long unsigned int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Assign(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type CopyValues(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_HArray1<TI_0>::Array1Type Move(NCollection_HArray1<TI_0>::Array1Type theOther, ) */
    Macad::Occt::Bnd_Sphere^ First();
    Macad::Occt::Bnd_Sphere^ ChangeFirst();
    Macad::Occt::Bnd_Sphere^ Last();
    Macad::Occt::Bnd_Sphere^ ChangeLast();
    virtual Macad::Occt::Bnd_Sphere^ Value(int theIndex);
    Macad::Occt::Bnd_Sphere^ ChangeValue(int theIndex);
    Macad::Occt::Bnd_Sphere^ At(long long unsigned int theIndex);
    Macad::Occt::Bnd_Sphere^ ChangeAt(long long unsigned int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    void Resize(long long unsigned int theSize, bool theToCopyData);
    bool IsDeletable();
    Bnd_HArray1OfSphere();
    Bnd_HArray1OfSphere(int theLower, int theUpper);
    Bnd_HArray1OfSphere(int theLower, int theUpper, Macad::Occt::Bnd_Sphere^ theValue);
    Bnd_HArray1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    /* Method skipped due to unknown mapping: void Bnd_HArray1OfSphere(Array1Type theOther, ) */
    /* Method skipped due to unknown mapping: Array1Type Array1() */
    /* Method skipped due to unknown mapping: Array1Type ChangeArray1() */
    static Macad::Occt::Bnd_HArray1OfSphere^ CreateDowncasted(::Bnd_HArray1OfSphere* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Sphere^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_HArray1OfSphere

//---------------------------------------------------------------------
//  Class  Bnd_Box
//---------------------------------------------------------------------
/// <summary>
/// Describes a bounding box in 3D space.
/// A bounding box is parallel to the axes of the coordinates
/// system. If it is finite, it is defined by the three intervals:
/// -   [ Xmin,Xmax ],
/// -   [ Ymin,Ymax ],
/// -   [ Zmin,Zmax ].
/// A bounding box may be infinite (i.e. open) in one or more
/// directions. It is said to be:
/// -   OpenXmin if it is infinite on the negative side of the   "X Direction";
/// -   OpenXmax if it is infinite on the positive side of the "X Direction";
/// -   OpenYmin if it is infinite on the negative side of the   "Y Direction";
/// -   OpenYmax if it is infinite on the positive side of the "Y Direction";
/// -   OpenZmin if it is infinite on the negative side of the   "Z Direction";
/// -   OpenZmax if it is infinite on the positive side of the "Z Direction";
/// -   WholeSpace if it is infinite in all six directions. In this
/// case, any point of the space is inside the box;
/// -   Void if it is empty. In this case, there is no point included in the box.
/// A bounding box is defined by:
/// -   six bounds (Xmin, Xmax, Ymin, Ymax, Zmin and
/// Zmax) which limit the bounding box if it is finite,
/// -   eight flags (OpenXmin, OpenXmax, OpenYmin,
/// OpenYmax, OpenZmin, OpenZmax,
/// WholeSpace and Void) which describe the
/// bounding box if it is infinite or empty, and
/// -   a gap, which is included on both sides in any direction
/// when consulting the finite bounds of the box.
/// </summary>
public ref class Bnd_Box sealed
    : public Macad::Occt::BaseClass<::Bnd_Box>
{

#ifdef Include_Bnd_Box_h
public:
    Include_Bnd_Box_h
#endif

public:
    Bnd_Box(::Bnd_Box* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Box>( nativeInstance, true )
    {}

    Bnd_Box(::Bnd_Box& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Box>( &nativeInstance, false )
    {}

    property ::Bnd_Box* NativeInstance
    {
        ::Bnd_Box* get()
        {
            return static_cast<::Bnd_Box*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  MaskFlags
    //---------------------------------------------------------------------
    /// <summary>
    /// Bit flags.
    /// </summary>
    enum class MaskFlags
    {
        VoidMask = 1,
        XminMask = 2,
        XmaxMask = 4,
        YminMask = 8,
        YmaxMask = 16,
        ZminMask = 32,
        ZmaxMask = 64,
        WholeMask = 126
    }; // enum  class MaskFlags

    /// <summary>
    /// Creates an empty Box.
    /// The constructed box is qualified Void. Its gap is null.
    /// </summary>
    Bnd_Box();
    /// <summary>
    /// Creates a bounding box, it contains:
    /// -   minimum/maximum point of bounding box,
    /// The constructed box is qualified Void. Its gap is null.
    /// </summary>
    Bnd_Box(Macad::Occt::Pnt theMin, Macad::Occt::Pnt theMax);
    /// <summary>
    /// Sets this bounding box so that it covers the whole of 3D space.
    /// It is infinitely long in all directions.
    /// </summary>
    void SetWhole();
    /// <summary>
    /// Sets this bounding box so that it is empty. All points are outside a void box.
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Sets this bounding box so that it bounds
    /// -   the point P. This involves first setting this bounding box
    /// to be void and then adding the point P.
    /// </summary>
    void Set(Macad::Occt::Pnt P);
    /// <summary>
    /// Sets this bounding box so that it bounds
    /// the half-line defined by point P and direction D, i.e. all
    /// points M defined by M=P+u*D, where u is greater than
    /// or equal to 0, are inside the bounding volume. This
    /// involves first setting this box to be void and then adding the half-line.
    /// </summary>
    void Set(Macad::Occt::Pnt P, Macad::Occt::Dir D);
    /// <summary>
    /// Enlarges this bounding box, if required, so that it
    /// contains at least:
    /// -   interval [ aXmin,aXmax ] in the "X Direction",
    /// -   interval [ aYmin,aYmax ] in the "Y Direction",
    /// -   interval [ aZmin,aZmax ] in the "Z Direction";
    /// </summary>
    void Update(double aXmin, double aYmin, double aZmin, double aXmax, double aYmax, double aZmax);
    /// <summary>
    /// Adds a point of coordinates (X,Y,Z) to this bounding box.
    /// </summary>
    void Update(double X, double Y, double Z);
    /// <summary>
    /// Returns the gap of this bounding box.
    /// </summary>
    double GetGap();
    /// <summary>
    /// Set the gap of this bounding box to abs(Tol).
    /// </summary>
    void SetGap(double Tol);
    /// <summary>
    /// Enlarges the box with a tolerance value.
    /// (minvalues-std::abs(<tol>) and maxvalues+std::abs(<tol>))
    /// This means that the minimum values of its X, Y and Z
    /// intervals of definition, when they are finite, are reduced by
    /// the absolute value of Tol, while the maximum values are
    /// increased by the same amount.
    /// </summary>
    void Enlarge(double Tol);
    /// <summary>
    /// Returns the bounds of this bounding box. The gap is included.
    /// If this bounding box is infinite (i.e. "open"), returned values
    /// may be equal to +/- Precision::Infinite().
    /// Standard_ConstructionError exception will be thrown if the box is void.
    /// if IsVoid()
    /// </summary>
    void Get(double% theXmin, double% theYmin, double% theZmin, double% theXmax, double% theYmax, double% theZmax);
    /* Method skipped due to unknown mapping: Limits Get() */
    /// <summary>
    /// Returns the Xmin value (IsOpenXmin() ? -Precision::Infinite() : Xmin - GetGap()).
    /// </summary>
    double GetXMin();
    /// <summary>
    /// Returns the Xmax value (IsOpenXmax() ? Precision::Infinite() : Xmax + GetGap()).
    /// </summary>
    double GetXMax();
    /// <summary>
    /// Returns the Ymin value (IsOpenYmin() ? -Precision::Infinite() : Ymin - GetGap()).
    /// </summary>
    double GetYMin();
    /// <summary>
    /// Returns the Ymax value (IsOpenYmax() ? Precision::Infinite() : Ymax + GetGap()).
    /// </summary>
    double GetYMax();
    /// <summary>
    /// Returns the Zmin value (IsOpenZmin() ? -Precision::Infinite() : Zmin - GetGap()).
    /// </summary>
    double GetZMin();
    /// <summary>
    /// Returns the Zmax value (IsOpenZmax() ? Precision::Infinite() : Zmax + GetGap()).
    /// </summary>
    double GetZMax();
    /// <summary>
    /// Returns the lower corner of this bounding box. The gap is included.
    /// If this bounding box is infinite (i.e. "open"), returned values
    /// may be equal to +/- Precision::Infinite().
    /// Standard_ConstructionError exception will be thrown if the box is void.
    /// if IsVoid()
    /// </summary>
    Macad::Occt::Pnt CornerMin();
    /// <summary>
    /// Returns the upper corner of this bounding box. The gap is included.
    /// If this bounding box is infinite (i.e. "open"), returned values
    /// may be equal to +/- Precision::Infinite().
    /// Standard_ConstructionError exception will be thrown if the box is void.
    /// if IsVoid()
    /// </summary>
    Macad::Occt::Pnt CornerMax();
    /* Method skipped due to unknown mapping: optional<gp_Pnt> Center() */
    /// <summary>
    /// The Box will be infinitely long in the Xmin
    /// direction.
    /// </summary>
    void OpenXmin();
    /// <summary>
    /// The Box will be infinitely long in the Xmax
    /// direction.
    /// </summary>
    void OpenXmax();
    /// <summary>
    /// The Box will be infinitely long in the Ymin
    /// direction.
    /// </summary>
    void OpenYmin();
    /// <summary>
    /// The Box will be infinitely long in the Ymax
    /// direction.
    /// </summary>
    void OpenYmax();
    /// <summary>
    /// The Box will be infinitely long in the Zmin
    /// direction.
    /// </summary>
    void OpenZmin();
    /// <summary>
    /// The Box will be infinitely long in the Zmax
    /// direction.
    /// </summary>
    void OpenZmax();
    /// <summary>
    /// Returns true if this bounding box has at least one open direction.
    /// </summary>
    bool IsOpen();
    /// <summary>
    /// Returns true if this bounding box is open in the Xmin direction.
    /// </summary>
    bool IsOpenXmin();
    /// <summary>
    /// Returns true if this bounding box is open in the Xmax direction.
    /// </summary>
    bool IsOpenXmax();
    /// <summary>
    /// Returns true if this bounding box is open in the Ymin direction.
    /// </summary>
    bool IsOpenYmin();
    /// <summary>
    /// Returns true if this bounding box is open in the Ymax direction.
    /// </summary>
    bool IsOpenYmax();
    /// <summary>
    /// Returns true if this bounding box is open in the Zmin direction.
    /// </summary>
    bool IsOpenZmin();
    /// <summary>
    /// Returns true if this bounding box is open in the Zmax direction.
    /// </summary>
    bool IsOpenZmax();
    /// <summary>
    /// Returns true if this bounding box is infinite in all 6 directions (WholeSpace flag).
    /// </summary>
    bool IsWhole();
    /// <summary>
    /// Returns true if this bounding box is empty (Void flag).
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// true if xmax-xmin < tol.
    /// </summary>
    bool IsXThin(double tol);
    /// <summary>
    /// true if ymax-ymin < tol.
    /// </summary>
    bool IsYThin(double tol);
    /// <summary>
    /// true if zmax-zmin < tol.
    /// </summary>
    bool IsZThin(double tol);
    /// <summary>
    /// Returns true if IsXThin, IsYThin and IsZThin are all true,
    /// i.e. if the box is thin in all three dimensions.
    /// </summary>
    bool IsThin(double tol);
    /// <summary>
    /// Returns a bounding box which is the result of applying the
    /// transformation T to this bounding box.
    /// Warning
    /// Applying a geometric transformation (for example, a
    /// rotation) to a bounding box generally increases its
    /// dimensions. This is not optimal for algorithms which use it.
    /// </summary>
    Macad::Occt::Bnd_Box^ Transformed(Macad::Occt::Trsf T);
    /// <summary>
    /// Adds the box <Other> to <me>.
    /// </summary>
    void Add(Macad::Occt::Bnd_Box^ Other);
    /// <summary>
    /// Adds a Pnt to the box.
    /// </summary>
    void Add(Macad::Occt::Pnt P);
    /// <summary>
    /// Extends <me> from the Pnt <P> in the direction <D>.
    /// </summary>
    void Add(Macad::Occt::Pnt P, Macad::Occt::Dir D);
    /// <summary>
    /// Extends the Box in the given Direction, i.e. adds
    /// an half-line. The box may become infinite in
    /// 1,2 or 3 directions.
    /// </summary>
    void Add(Macad::Occt::Dir D);
    /// <summary>
    /// Returns True if the Pnt is out the box.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt P);
    /// <summary>
    /// Returns False if the line intersects the box.
    /// </summary>
    bool IsOut(Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// Returns False if the plane intersects the box.
    /// </summary>
    bool IsOut(Macad::Occt::Pln P);
    /// <summary>
    /// Returns False if the <Box> intersects or is inside <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Box^ Other);
    /// <summary>
    /// Returns False if the transformed <Box> intersects
    /// or is inside <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns False if the transformed <Box> intersects
    /// or is inside the transformed box <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Trsf T1, Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T2);
    /// <summary>
    /// Returns False if the flat band lying between two parallel
    /// lines represented by their reference points <P1>, <P2> and
    /// direction <D> intersects the box.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Dir D);
    /// <summary>
    /// Returns True if the point is inside or on the boundary of this box.
    /// </summary>
    bool Contains(Macad::Occt::Pnt theP);
    /// <summary>
    /// Returns True if the other box intersects or is inside this box.
    /// </summary>
    bool Intersects(Macad::Occt::Bnd_Box^ theOther);
    /// <summary>
    /// Computes the minimum distance between two boxes.
    /// </summary>
    double Distance(Macad::Occt::Bnd_Box^ Other);
    void Dump();
    /// <summary>
    /// Computes the squared diagonal of me.
    /// </summary>
    double SquareExtent();
    /// <summary>
    /// Returns a finite part of an infinite bounding box (returns self if this is already finite
    /// box). This can be a Void box in case if its sides has been defined as infinite (Open) without
    /// adding any finite points. WARNING! This method relies on Open flags, the infinite points added
    /// using Add() method will be returned as is.
    /// </summary>
    Macad::Occt::Bnd_Box^ FinitePart();
    /// <summary>
    /// Returns TRUE if this box has finite part.
    /// </summary>
    bool HasFinitePart();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /* Method skipped due to unknown mapping: bool InitFromJson(stringstream theSStream, int theStreamPos, ) */
}; // class Bnd_Box

//---------------------------------------------------------------------
//  Class  Bnd_Box2d
//---------------------------------------------------------------------
/// <summary>
/// Describes a bounding box in 2D space.
/// A bounding box is parallel to the axes of the coordinates
/// system. If it is finite, it is defined by the two intervals:
/// -   [ Xmin,Xmax ], and
/// -   [ Ymin,Ymax ].
/// A bounding box may be infinite (i.e. open) in one or more
/// directions. It is said to be:
/// -   OpenXmin if it is infinite on the negative side of the   "X Direction";
/// -   OpenXmax if it is infinite on the positive side of the   "X Direction";
/// -   OpenYmin if it is infinite on the negative side of the   "Y Direction";
/// -   OpenYmax if it is infinite on the positive side of the   "Y Direction";
/// -   WholeSpace if it is infinite in all four directions. In
/// this case, any point of the space is inside the box;
/// -   Void if it is empty. In this case, there is no point included in the box.
/// A bounding box is defined by four bounds (Xmin, Xmax, Ymin and Ymax) which
/// limit the bounding box if it is finite, six flags (OpenXmin, OpenXmax, OpenYmin,
/// OpenYmax, WholeSpace and Void) which describe the bounding box if it is infinite or empty, and
/// -   a gap, which is included on both sides in any direction when consulting the finite bounds of
/// the box.
/// </summary>
public ref class Bnd_Box2d sealed
    : public Macad::Occt::BaseClass<::Bnd_Box2d>
{

#ifdef Include_Bnd_Box2d_h
public:
    Include_Bnd_Box2d_h
#endif

public:
    Bnd_Box2d(::Bnd_Box2d* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Box2d>( nativeInstance, true )
    {}

    Bnd_Box2d(::Bnd_Box2d& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Box2d>( &nativeInstance, false )
    {}

    property ::Bnd_Box2d* NativeInstance
    {
        ::Bnd_Box2d* get()
        {
            return static_cast<::Bnd_Box2d*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  MaskFlags
    //---------------------------------------------------------------------
    /// <summary>
    /// Bit flags.
    /// </summary>
    enum class MaskFlags
    {
        VoidMask = 1,
        XminMask = 2,
        XmaxMask = 4,
        YminMask = 8,
        YmaxMask = 16,
        WholeMask = 30
    }; // enum  class MaskFlags

    Bnd_Box2d();
    /// <summary>
    /// Sets this bounding box so that it covers the whole 2D
    /// space, i.e. it is infinite in all directions.
    /// </summary>
    void SetWhole();
    /// <summary>
    /// Sets this 2D bounding box so that it is empty. All points are outside a void box.
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Sets this 2D bounding box so that it bounds
    /// the point P. This involves first setting this bounding box
    /// to be void and then adding the point PThe rectangle bounds the point <P>.
    /// </summary>
    void Set(Macad::Occt::Pnt2d thePnt);
    /// <summary>
    /// Sets this 2D bounding box so that it bounds
    /// the half-line defined by point P and direction D, i.e. all
    /// points M defined by M=P+u*D, where u is greater than
    /// or equal to 0, are inside the bounding area. This involves
    /// first setting this 2D box to be void and then adding the half-line.
    /// </summary>
    void Set(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir);
    /// <summary>
    /// Enlarges this 2D bounding box, if required, so that it
    /// contains at least:
    /// -   interval [ aXmin,aXmax ] in the "X Direction",
    /// -   interval [ aYmin,aYmax ] in the "Y Direction"
    /// </summary>
    void Update(double aXmin, double aYmin, double aXmax, double aYmax);
    /// <summary>
    /// Adds a point of coordinates (X,Y) to this bounding box.
    /// </summary>
    void Update(double X, double Y);
    /// <summary>
    /// Returns the gap of this 2D bounding box.
    /// </summary>
    double GetGap();
    /// <summary>
    /// Set the gap of this 2D bounding box to abs(Tol).
    /// </summary>
    void SetGap(double Tol);
    /// <summary>
    /// Enlarges the box with a tolerance value.
    /// This means that the minimum values of its X and Y
    /// intervals of definition, when they are finite, are reduced by
    /// the absolute value of Tol, while the maximum values are
    /// increased by the same amount.
    /// </summary>
    void Enlarge(double theTol);
    /// <summary>
    /// Returns the bounds of this 2D bounding box.
    /// The gap is included. If this bounding box is infinite (i.e. "open"), returned values
    /// may be equal to +/- Precision::Infinite().
    /// if IsVoid()
    /// </summary>
    void Get(double% aXmin, double% aYmin, double% aXmax, double% aYmax);
    /* Method skipped due to unknown mapping: Limits Get() */
    /// <summary>
    /// Returns the Xmin value (IsOpenXmin() ? -Precision::Infinite() : Xmin - GetGap()).
    /// </summary>
    double GetXMin();
    /// <summary>
    /// Returns the Xmax value (IsOpenXmax() ? Precision::Infinite() : Xmax + GetGap()).
    /// </summary>
    double GetXMax();
    /// <summary>
    /// Returns the Ymin value (IsOpenYmin() ? -Precision::Infinite() : Ymin - GetGap()).
    /// </summary>
    double GetYMin();
    /// <summary>
    /// Returns the Ymax value (IsOpenYmax() ? Precision::Infinite() : Ymax + GetGap()).
    /// </summary>
    double GetYMax();
    /* Method skipped due to unknown mapping: optional<gp_Pnt2d> Center() */
    /// <summary>
    /// The Box will be infinitely long in the Xmin direction.
    /// </summary>
    void OpenXmin();
    /// <summary>
    /// The Box will be infinitely long in the Xmax direction.
    /// </summary>
    void OpenXmax();
    /// <summary>
    /// The Box will be infinitely long in the Ymin direction.
    /// </summary>
    void OpenYmin();
    /// <summary>
    /// The Box will be infinitely long in the Ymax direction.
    /// </summary>
    void OpenYmax();
    /// <summary>
    /// Returns true if this bounding box is open in the Xmin direction.
    /// </summary>
    bool IsOpenXmin();
    /// <summary>
    /// Returns true if this bounding box is open in the Xmax direction.
    /// </summary>
    bool IsOpenXmax();
    /// <summary>
    /// Returns true if this bounding box is open in the Ymin direction.
    /// </summary>
    bool IsOpenYmin();
    /// <summary>
    /// Returns true if this bounding box is open in the Ymax direction.
    /// </summary>
    bool IsOpenYmax();
    /// <summary>
    /// Returns true if this bounding box is infinite in all 4
    /// directions (Whole Space flag).
    /// </summary>
    bool IsWhole();
    /// <summary>
    /// Returns true if this 2D bounding box is empty (Void flag).
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Returns a bounding box which is the result of applying the
    /// transformation T to this bounding box.
    /// Warning
    /// Applying a geometric transformation (for example, a
    /// rotation) to a bounding box generally increases its
    /// dimensions. This is not optimal for algorithms which use it.
    /// </summary>
    Macad::Occt::Bnd_Box2d^ Transformed(Macad::Occt::Trsf2d T);
    /// <summary>
    /// Adds the 2d box <Other> to <me>.
    /// </summary>
    void Add(Macad::Occt::Bnd_Box2d^ Other);
    /// <summary>
    /// Adds the 2d point.
    /// </summary>
    void Add(Macad::Occt::Pnt2d thePnt);
    /// <summary>
    /// Extends bounding box from thePnt in the direction theDir.
    /// </summary>
    void Add(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir);
    /// <summary>
    /// Extends the Box in the given Direction, i.e. adds
    /// a half-line. The box may become infinite in 1 or 2
    /// directions.
    /// </summary>
    void Add(Macad::Occt::Dir2d D);
    /// <summary>
    /// Returns True if the 2d pnt <P> is out <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt2d P);
    /// <summary>
    /// Returns True if the line doesn't intersect the box.
    /// </summary>
    bool IsOut(Macad::Occt::gp_Lin2d^ theL);
    /// <summary>
    /// Returns True if the segment doesn't intersect the box.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt2d theP0, Macad::Occt::Pnt2d theP1);
    /// <summary>
    /// Returns True if <Box2d> is out <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Box2d^ Other);
    /// <summary>
    /// Returns True if the 2d point is inside or on the boundary of this box.
    /// </summary>
    bool Contains(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Returns True if the other 2d box intersects or is inside this box.
    /// </summary>
    bool Intersects(Macad::Occt::Bnd_Box2d^ theOther);
    /// <summary>
    /// Computes the minimum distance between two 2D boxes.
    /// </summary>
    double Distance(Macad::Occt::Bnd_Box2d^ theOther);
    /// <summary>
    /// Returns True if transformed <Box2d> is out <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Box2d^ theOther, Macad::Occt::Trsf2d theTrsf);
    /// <summary>
    /// Compares a transformed bounding with a transformed
    /// bounding. The default implementation is to make a copy
    /// of <me> and <Other>, to transform them and to test.
    /// </summary>
    bool IsOut(Macad::Occt::Trsf2d T1, Macad::Occt::Bnd_Box2d^ Other, Macad::Occt::Trsf2d T2);
    void Dump();
    /// <summary>
    /// Computes the squared diagonal of me.
    /// </summary>
    double SquareExtent();
}; // class Bnd_Box2d

//---------------------------------------------------------------------
//  Class  Bnd_Sphere
//---------------------------------------------------------------------
/// <summary>
/// This class represents a bounding sphere of a geometric entity
/// (triangle, segment of line or whatever else).
/// </summary>
public ref class Bnd_Sphere sealed
    : public Macad::Occt::BaseClass<::Bnd_Sphere>
{

#ifdef Include_Bnd_Sphere_h
public:
    Include_Bnd_Sphere_h
#endif

public:
    Bnd_Sphere(::Bnd_Sphere* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Sphere>( nativeInstance, true )
    {}

    Bnd_Sphere(::Bnd_Sphere& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Sphere>( &nativeInstance, false )
    {}

    property ::Bnd_Sphere* NativeInstance
    {
        ::Bnd_Sphere* get()
        {
            return static_cast<::Bnd_Sphere*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    Bnd_Sphere();
    /// <summary>
    /// Constructor of a definite sphere
    /// </summary>
    Bnd_Sphere(Macad::Occt::XYZ theCntr, double theRad, int theU, int theV);
    /// <summary>
    /// Returns the U parameter on shape
    /// </summary>
    int U();
    /// <summary>
    /// Returns the V parameter on shape
    /// </summary>
    int V();
    /// <summary>
    /// Returns validity status, indicating that this
    /// sphere corresponds to a real entity
    /// </summary>
    bool IsValid();
    void SetValid(bool isValid);
    /// <summary>
    /// Returns center of sphere object
    /// </summary>
    Macad::Occt::XYZ Center();
    /// <summary>
    /// Returns the radius value
    /// </summary>
    double Radius();
    /// <summary>
    /// Calculate and return minimal and maximal distance to sphere.
    /// NOTE: This function is tightly optimized; any modifications
    /// may affect performance!
    /// </summary>
    void Distances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax);
    /// <summary>
    /// Calculate and return minimal and maximal distance to sphere.
    /// NOTE: This function is tightly optimized; any modifications
    /// may affect performance!
    /// </summary>
    void SquareDistances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax);
    /// <summary>
    /// Projects a point on entity.
    /// Returns true if success
    /// </summary>
    bool Project(Macad::Occt::XYZ theNode, Macad::Occt::XYZ% theProjNode, double% theDist, bool% theInside);
    double Distance(Macad::Occt::XYZ theNode);
    double SquareDistance(Macad::Occt::XYZ theNode);
    void Add(Macad::Occt::Bnd_Sphere^ theOther);
    bool IsOut(Macad::Occt::Bnd_Sphere^ theOther);
    bool IsOut(Macad::Occt::XYZ thePnt, double% theMaxDist);
    double SquareExtent();
}; // class Bnd_Sphere

//---------------------------------------------------------------------
//  Class  Bnd_BoundSortBox
//---------------------------------------------------------------------
/// <summary>
/// A tool to compare a bounding box or a plane with a set of
/// bounding boxes. It sorts the set of bounding boxes to give
/// the list of boxes which intersect the element being compared.
/// The boxes being sorted generally bound a set of shapes,
/// while the box being compared bounds a shape to be
/// compared. The resulting list of intersecting boxes therefore
/// gives the list of items which potentially intersect the shape to be compared.
/// How to use this class:
/// - Create an instance of this class.
/// - Initialize it with the set of boxes to be sorted using one of the
/// Initialize() methods.
/// - Call the Compare() method with the box or plane to be compared.
/// Compare() will return the list of indices of the boxes which intersect
/// the box or plane passed as argument.
/// </summary>
public ref class Bnd_BoundSortBox sealed
    : public Macad::Occt::BaseClass<::Bnd_BoundSortBox>
{

#ifdef Include_Bnd_BoundSortBox_h
public:
    Include_Bnd_BoundSortBox_h
#endif

public:
    Bnd_BoundSortBox(::Bnd_BoundSortBox* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_BoundSortBox>( nativeInstance, true )
    {}

    Bnd_BoundSortBox(::Bnd_BoundSortBox& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_BoundSortBox>( &nativeInstance, false )
    {}

    property ::Bnd_BoundSortBox* NativeInstance
    {
        ::Bnd_BoundSortBox* get()
        {
            return static_cast<::Bnd_BoundSortBox*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty comparison algorithm for bounding boxes.
    /// The bounding boxes are then defined using the Initialize function.
    /// </summary>
    Bnd_BoundSortBox();
    /// <summary>
    /// Initializes this comparison algorithm with the set of boxes.
    /// </summary>
    /// <param name="theSetOfBoxes">
    /// The set of bounding boxes to be used by this algorithm.
    /// </param>
    void Initialize(Macad::Occt::Bnd_HArray1OfBox^ theSetOfBoxes);
    /// <summary>
    /// Initializes this comparison algorithm with the set of boxes and the bounding box
    /// that encloses all those boxes. This version of initialization can be used if complete
    /// box is known in advance to avoid calculating it again inside the algorithm.
    /// </summary>
    /// <param name="theEnclosingBox">
    /// The bounding box that contains all the boxes in @p theSetOfBoxes.
    /// </param>
    /// <param name="theSetOfBoxes">
    /// The set of bounding boxes to be used by this algorithm.
    /// </param>
    void Initialize(Macad::Occt::Bnd_Box^ theEnclosingBox, Macad::Occt::Bnd_HArray1OfBox^ theSetOfBoxes);
    /// <summary>
    /// Initializes this comparison algorithm with the bounding box that encloses all the boxes
    /// that will be used by this algorithm. and the expected number of those boxes.
    /// Boxes to be considered can then be added using the Add() method.
    /// </summary>
    /// <param name="theEnclosingBox">
    /// The bounding box that contains all the boxes to be sorted.
    /// </param>
    /// <param name="theNbComponents">
    /// The number of components to be added.
    /// </param>
    void Initialize(Macad::Occt::Bnd_Box^ theEnclosingBox, int theNbBoxes);
    /// <summary>
    /// Adds the bounding box theBox at position boxIndex in the internal array of boxes
    /// to be sorted by this comparison algorithm. This function is used only in
    /// conjunction with the Initialize(const Bnd_Box&, const int) method.
    /// Exceptions:
    /// - Standard_OutOfRange if boxIndex is not in the range [ 1,nbComponents ] where
    /// nbComponents is the maximum number of bounding boxes declared for this algorithm at
    /// initialization.
    /// - Standard_MultiplyDefined if a box already exists at position @p theIndex in the
    /// internal array of boxes.
    /// </summary>
    /// <param name="theBox">
    /// The bounding box to be added.
    /// </param>
    /// <param name="theIndex">
    /// The index of the bounding box in the internal array where the box
    /// will be added. The index is 1-based.
    /// </param>
    void Add(Macad::Occt::Bnd_Box^ theBox, int theIndex);
    /// <summary>
    /// Compares the bounding box theBox, with the set of bounding boxes provided to this
    /// algorithm at initialization, and returns the list of indices of bounding boxes
    /// that intersect the @p theBox or are inside it.
    /// The indices correspond to the indices of the bounding boxes in the array provided
    /// to this algorithm at initialization.
    /// </summary>
    /// <param name="theBox">
    /// The bounding box to be compared.
    /// </param>
    /// <returns>
    /// The list of indices of bounding boxes that intersect the bounding box theBox
    /// or are inside it.
    /// </returns>
    Macad::Occt::TColStd_ListOfInteger^ Compare(Macad::Occt::Bnd_Box^ theBox);
    /// <summary>
    /// Compares the plane @p thePlane with the set of bounding boxes provided to this
    /// algorithm at initialization, and returns the list of indices of bounding boxes
    /// that intersect the @p thePlane.
    /// The indices correspond to the indices of the bounding boxes in the array provided
    /// to this algorithm at initialization.
    /// </summary>
    /// <param name="thePlane">
    /// The plane to be compared.
    /// </param>
    /// <returns>
    /// The list of indices of bounding boxes that intersect the plane thePlane.
    /// </returns>
    Macad::Occt::TColStd_ListOfInteger^ Compare(Macad::Occt::Pln thePlane);
}; // class Bnd_BoundSortBox

//---------------------------------------------------------------------
//  Class  Bnd_OBB
//---------------------------------------------------------------------
/// <summary>
/// The class describes the Oriented Bounding Box (OBB),
/// much tighter enclosing volume for the shape than the
/// Axis Aligned Bounding Box (AABB).
/// The OBB is defined by a center of the box, the axes and the halves
/// of its three dimensions.
/// The OBB can be used more effectively than AABB as a rejection mechanism
/// for non-interfering objects.
/// </summary>
public ref class Bnd_OBB sealed
    : public Macad::Occt::BaseClass<::Bnd_OBB>
{

#ifdef Include_Bnd_OBB_h
public:
    Include_Bnd_OBB_h
#endif

public:
    Bnd_OBB(::Bnd_OBB* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_OBB>( nativeInstance, true )
    {}

    Bnd_OBB(::Bnd_OBB& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_OBB>( &nativeInstance, false )
    {}

    property ::Bnd_OBB* NativeInstance
    {
        ::Bnd_OBB* get()
        {
            return static_cast<::Bnd_OBB*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    Bnd_OBB();
    /// <summary>
    /// Constructor taking all defining parameters
    /// </summary>
    Bnd_OBB(Macad::Occt::Pnt theCenter, Macad::Occt::Dir theXDirection, Macad::Occt::Dir theYDirection, Macad::Occt::Dir theZDirection, double theHXSize, double theHYSize, double theHZSize);
    /// <summary>
    /// Constructor to create OBB from AABB.
    /// </summary>
    Bnd_OBB(Macad::Occt::Bnd_Box^ theBox);
    /// <summary>
    /// Creates new OBB covering every point in theListOfPoints.
    /// Tolerance of every such point is set by *theListOfTolerances array.
    /// If this array is not void (not null-pointer) then the resulted Bnd_OBB
    /// will be enlarged using tolerances of points lying on the box surface.
    /// <theIsOptimal> flag defines the mode in which the OBB will be built.
    /// Constructing Optimal box takes more time, but the resulting box is usually
    /// more tight. In case of construction of Optimal OBB more possible
    /// axes are checked.
    /// </summary>
    void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances, bool theIsOptimal);
    /// <summary>
    /// Creates new OBB covering every point in theListOfPoints.
    /// Tolerance of every such point is set by *theListOfTolerances array.
    /// If this array is not void (not null-pointer) then the resulted Bnd_OBB
    /// will be enlarged using tolerances of points lying on the box surface.
    /// <theIsOptimal> flag defines the mode in which the OBB will be built.
    /// Constructing Optimal box takes more time, but the resulting box is usually
    /// more tight. In case of construction of Optimal OBB more possible
    /// axes are checked.
    /// </summary>
    void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances);
    /// <summary>
    /// Creates new OBB covering every point in theListOfPoints.
    /// Tolerance of every such point is set by *theListOfTolerances array.
    /// If this array is not void (not null-pointer) then the resulted Bnd_OBB
    /// will be enlarged using tolerances of points lying on the box surface.
    /// <theIsOptimal> flag defines the mode in which the OBB will be built.
    /// Constructing Optimal box takes more time, but the resulting box is usually
    /// more tight. In case of construction of Optimal OBB more possible
    /// axes are checked.
    /// </summary>
    void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints);
    /// <summary>
    /// Sets the center of OBB
    /// </summary>
    void SetCenter(Macad::Occt::Pnt theCenter);
    /// <summary>
    /// Sets the X component of OBB - direction and size
    /// </summary>
    void SetXComponent(Macad::Occt::Dir theXDirection, double theHXSize);
    /// <summary>
    /// Sets the Y component of OBB - direction and size
    /// </summary>
    void SetYComponent(Macad::Occt::Dir theYDirection, double theHYSize);
    /// <summary>
    /// Sets the Z component of OBB - direction and size
    /// </summary>
    void SetZComponent(Macad::Occt::Dir theZDirection, double theHZSize);
    /// <summary>
    /// Returns the local coordinates system of this oriented box.
    /// So that applying it to axis-aligned box ((-XHSize, -YHSize, -ZHSize), (XHSize, YHSize,
    /// ZHSize)) will produce this oriented box.
    /// </summary>
    /// @code
    /// gp_Trsf aLoc;
    /// aLoc.SetTransformation (theOBB.Position(), gp::XOY());
    /// @endcode
    Macad::Occt::Ax3 Position();
    /// <summary>
    /// Returns the center of OBB
    /// </summary>
    Macad::Occt::XYZ Center();
    /// <summary>
    /// Returns the X Direction of OBB
    /// </summary>
    Macad::Occt::XYZ XDirection();
    /// <summary>
    /// Returns the Y Direction of OBB
    /// </summary>
    Macad::Occt::XYZ YDirection();
    /// <summary>
    /// Returns the Z Direction of OBB
    /// </summary>
    Macad::Occt::XYZ ZDirection();
    /// <summary>
    /// Returns the X Dimension of OBB
    /// </summary>
    double XHSize();
    /// <summary>
    /// Returns the Y Dimension of OBB
    /// </summary>
    double YHSize();
    /// <summary>
    /// Returns the Z Dimension of OBB
    /// </summary>
    double ZHSize();
    /* Method skipped due to unknown mapping: HalfSizes GetHalfSizes() */
    /// <summary>
    /// Checks if the box is empty.
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Clears this box
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Sets the flag for axes aligned box
    /// </summary>
    void SetAABox(bool theFlag);
    /// <summary>
    /// Returns TRUE if the box is axes aligned
    /// </summary>
    bool IsAABox();
    /// <summary>
    /// Enlarges the box with the given value
    /// </summary>
    void Enlarge(double theGapAdd);
    /// <summary>
    /// Returns the array of vertices in <this>.
    /// The local coordinate of the vertex depending on the
    /// index of the array are follow:
    /// Index == 0: (-XHSize(), -YHSize(), -ZHSize())
    /// Index == 1: ( XHSize(), -YHSize(), -ZHSize())
    /// Index == 2: (-XHSize(),  YHSize(), -ZHSize())
    /// Index == 3: ( XHSize(),  YHSize(), -ZHSize())
    /// Index == 4: (-XHSize(), -YHSize(),  ZHSize())
    /// Index == 5: ( XHSize(), -YHSize(),  ZHSize())
    /// Index == 6: (-XHSize(),  YHSize(),  ZHSize())
    /// Index == 7: ( XHSize(),  YHSize(),  ZHSize()).
    /// </summary>
    bool GetVertex(Macad::Occt::Pnt theP);
    /// <summary>
    /// Returns square diagonal of this box
    /// </summary>
    double SquareExtent();
    /// <summary>
    /// Check if the box do not interfere the other box.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_OBB^ theOther);
    /// <summary>
    /// Check if the point is inside of <this>.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt theP);
    /// <summary>
    /// Returns True if the point is inside or on the boundary of this OBB.
    /// </summary>
    bool Contains(Macad::Occt::Pnt theP);
    /// <summary>
    /// Returns True if the other OBB intersects or is inside this OBB.
    /// </summary>
    bool Intersects(Macad::Occt::Bnd_OBB^ theOther);
    /// <summary>
    /// Check if the theOther is completely inside *this.
    /// </summary>
    bool IsCompletelyInside(Macad::Occt::Bnd_OBB^ theOther);
    /// <summary>
    /// Rebuilds this in order to include all previous objects
    /// (which it was created from) and theOther.
    /// </summary>
    void Add(Macad::Occt::Bnd_OBB^ theOther);
    /// <summary>
    /// Rebuilds this in order to include all previous objects
    /// (which it was created from) and theP.
    /// </summary>
    void Add(Macad::Occt::Pnt theP);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Bnd_OBB

//---------------------------------------------------------------------
//  Class  Bnd_Range
//---------------------------------------------------------------------
/// <summary>
/// This class describes a range in 1D space restricted
/// by two real values.
/// A range can be void indicating there is no point included in the range.
/// </summary>
public ref class Bnd_Range sealed
    : public Macad::Occt::BaseClass<::Bnd_Range>
{

#ifdef Include_Bnd_Range_h
public:
    Include_Bnd_Range_h
#endif

public:
    Bnd_Range(::Bnd_Range* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Range>( nativeInstance, true )
    {}

    Bnd_Range(::Bnd_Range& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Range>( &nativeInstance, false )
    {}

    property ::Bnd_Range* NativeInstance
    {
        ::Bnd_Range* get()
        {
            return static_cast<::Bnd_Range*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  IntersectStatus
    //---------------------------------------------------------------------
    /// <summary>
    /// Status of intersection check with a periodic value.
    /// </summary>
    /// @sa IsIntersected()
    enum class IntersectStatus
    {
        Out = 0,
        In = 1,
        Boundary = 2
    }; // enum  class IntersectStatus

    /// <summary>
    /// Default constructor. Creates VOID range.
    /// </summary>
    Bnd_Range();
    /// <summary>
    /// Constructor. Never creates VOID range.
    /// </summary>
    Bnd_Range(double theMin, double theMax);
    /// <summary>
    /// Replaces <this> with common-part of <this> and theOther
    /// </summary>
    void Common(Macad::Occt::Bnd_Range^ theOther);
    /// <summary>
    /// Joins *this and theOther to one interval.
    /// Replaces *this to the result.
    /// Returns false if the operation cannot be done (e.g.
    /// input arguments are empty or separated).
    /// </summary>
    /// @sa use method ::Add() to merge two ranges unconditionally
    bool Union(Macad::Occt::Bnd_Range^ theOther);
    /* Method skipped due to unknown mapping: void Split(double theVal, NCollection_List<Bnd_Range> theList, double thePeriod, ) */
    /* Method skipped due to unknown mapping: void Split(double theVal, NCollection_List<Bnd_Range> theList, double thePeriod, ) */
    /// <summary>
    /// Checks if <this> intersects values like
    /// theVal+k*thePeriod, where k is an integer number (k = 0, +/-1, +/-2, ...).
    /// 
    /// ATTENTION!!!
    /// If (myFirst == myLast) then this function will return only either Out or Boundary.
    /// </summary>
    Macad::Occt::Bnd_Range::IntersectStatus IsIntersected(double theVal, double thePeriod);
    /// <summary>
    /// Checks if <this> intersects values like
    /// theVal+k*thePeriod, where k is an integer number (k = 0, +/-1, +/-2, ...).
    /// 
    /// ATTENTION!!!
    /// If (myFirst == myLast) then this function will return only either Out or Boundary.
    /// </summary>
    Macad::Occt::Bnd_Range::IntersectStatus IsIntersected(double theVal);
    /// <summary>
    /// Extends <this> to include theParameter
    /// </summary>
    void Add(double theParameter);
    /// <summary>
    /// Extends this range to include both ranges.
    /// </summary>
    /// @sa use method ::Union() to check if two ranges overlap method merging
    void Add(Macad::Occt::Bnd_Range^ theRange);
    /// <summary>
    /// Obtain MIN boundary of <this>.
    /// If <this> is VOID the method returns false.
    /// </summary>
    bool GetMin(double% thePar);
    /// <summary>
    /// Obtain MAX boundary of <this>.
    /// If <this> is VOID the method returns false.
    /// </summary>
    bool GetMax(double% thePar);
    /// <summary>
    /// Obtain first and last boundary of <this>.
    /// If <this> is VOID the method returns false.
    /// </summary>
    bool GetBounds(double% theFirstPar, double% theLastPar);
    /* Method skipped due to unknown mapping: optional<Bnd_Range::Bounds> Get() */
    /// <summary>
    /// Obtain theParameter satisfied to the equation
    /// (theParameter-MIN)/(MAX-MIN) == theLambda.
    /// *  theLambda == 0 --> MIN boundary will be returned;
    /// *  theLambda == 0.5 --> Middle point will be returned;
    /// *  theLambda == 1 --> MAX boundary will be returned;
    /// *  theLambda < 0 --> the value less than MIN will be returned;
    /// *  theLambda > 1 --> the value greater than MAX will be returned.
    /// If <this> is VOID the method returns false.
    /// </summary>
    bool GetIntermediatePoint(double theLambda, double% theParameter);
    /* Method skipped due to unknown mapping: optional<double> Center() */
    /// <summary>
    /// Returns range value (MAX-MIN). Returns negative value for VOID range.
    /// </summary>
    double Delta();
    /// <summary>
    /// Is <this> initialized.
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Initializes <this> by default parameters. Makes <this> VOID.
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Extends this to the given value (in both side)
    /// </summary>
    void Enlarge(double theDelta);
    /// <summary>
    /// Returns the copy of <*this> shifted by theVal
    /// </summary>
    Macad::Occt::Bnd_Range^ Shifted(double theVal);
    /// <summary>
    /// Shifts <*this> by theVal
    /// </summary>
    void Shift(double theVal);
    /// <summary>
    /// Trims the First value in range by the given lower limit.
    /// Marks range as Void if the given Lower value is greater than range Max.
    /// </summary>
    void TrimFrom(double theValLower);
    /// <summary>
    /// Trim the Last value in range by the given Upper limit.
    /// Marks range as Void if the given Upper value is smaller than range Max.
    /// </summary>
    void TrimTo(double theValUpper);
    /// <summary>
    /// Returns True if the value is out of this range.
    /// </summary>
    bool IsOut(double theValue);
    /// <summary>
    /// Returns True if the given range is out of this range.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Range^ theRange);
    /// <summary>
    /// Returns True if the value is within this range.
    /// </summary>
    bool Contains(double theValue);
    /// <summary>
    /// Returns True if the given range intersects (overlaps with) this range.
    /// </summary>
    bool Intersects(Macad::Occt::Bnd_Range^ theRange);
    /* Method skipped due to unknown mapping: optional<double> Min() */
    /* Method skipped due to unknown mapping: optional<double> Max() */
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Bnd_Range

//---------------------------------------------------------------------
//  Class  Bnd_Tools
//---------------------------------------------------------------------
/// <summary>
/// Defines a set of static methods operating with bounding boxes
/// </summary>
public ref class Bnd_Tools sealed
    : public Macad::Occt::BaseClass<::Bnd_Tools>
{

#ifdef Include_Bnd_Tools_h
public:
    Include_Bnd_Tools_h
#endif

public:
    Bnd_Tools(::Bnd_Tools* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Tools>( nativeInstance, true )
    {}

    Bnd_Tools(::Bnd_Tools& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Tools>( &nativeInstance, false )
    {}

    property ::Bnd_Tools* NativeInstance
    {
        ::Bnd_Tools* get()
        {
            return static_cast<::Bnd_Tools*>(_NativeInstance);
        }
    }

public:
    Bnd_Tools();
    /* Method skipped due to unknown mapping: BVH_Box<double, 2> Bnd2BVH(Bnd_Box2d theBox, ) */
    /* Method skipped due to unknown mapping: Graphic3d_BndBox3d Bnd2BVH(Bnd_Box theBox, ) */
}; // class Bnd_Tools

}; // namespace Occt
}; // namespace Macad
