// Generated wrapper code for package TopoDS

#include "OcctPCH.h"
#include "TopoDS.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopLoc.h"
#include "TopAbs.h"
#include "BRep.h"


//---------------------------------------------------------------------
//  Class  TopoDS_Shape
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Shape::TopoDS_Shape()
    : Macad::Occt::BaseClass<::TopoDS_Shape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Shape();
}

bool Macad::Occt::TopoDS_Shape::IsNull()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsNull();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Nullify()
{
    ((::TopoDS_Shape*)_NativeInstance)->Nullify();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopoDS_Shape::Location()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopoDS_Shape*)_NativeInstance)->Location();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::TopoDS_Shape::Location(Macad::Occt::TopLoc_Location^ theLoc, bool theRaiseExc)
{
    ((::TopoDS_Shape*)_NativeInstance)->Location(*(::TopLoc_Location*)theLoc->NativeInstance, theRaiseExc);
}

void Macad::Occt::TopoDS_Shape::Location(Macad::Occt::TopLoc_Location^ theLoc)
{
    ((::TopoDS_Shape*)_NativeInstance)->Location(*(::TopLoc_Location*)theLoc->NativeInstance, false);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::Located(Macad::Occt::TopLoc_Location^ theLoc, bool theRaiseExc)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Located(*(::TopLoc_Location*)theLoc->NativeInstance, theRaiseExc);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::Located(Macad::Occt::TopLoc_Location^ theLoc)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Located(*(::TopLoc_Location*)theLoc->NativeInstance, false);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopAbs_Orientation Macad::Occt::TopoDS_Shape::Orientation()
{
    ::TopAbs_Orientation _result = ((::TopoDS_Shape*)_NativeInstance)->Orientation();
    return (Macad::Occt::TopAbs_Orientation)_result;
}

void Macad::Occt::TopoDS_Shape::Orientation(Macad::Occt::TopAbs_Orientation theOrient)
{
    ((::TopoDS_Shape*)_NativeInstance)->Orientation((::TopAbs_Orientation)theOrient);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::Oriented(Macad::Occt::TopAbs_Orientation theOrient)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Oriented((::TopAbs_Orientation)theOrient);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_Shape::TShape()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_Shape*)_NativeInstance)->TShape();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::TopoDS_Shape::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_Shape*)_NativeInstance)->ShapeType();
    return (Macad::Occt::TopAbs_ShapeEnum)_result;
}

bool Macad::Occt::TopoDS_Shape::Free()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Free();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Free(bool theIsFree)
{
    ((::TopoDS_Shape*)_NativeInstance)->Free(theIsFree);
}

bool Macad::Occt::TopoDS_Shape::Locked()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Locked();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Locked(bool theIsLocked)
{
    ((::TopoDS_Shape*)_NativeInstance)->Locked(theIsLocked);
}

bool Macad::Occt::TopoDS_Shape::Modified()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Modified();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Modified(bool theIsModified)
{
    ((::TopoDS_Shape*)_NativeInstance)->Modified(theIsModified);
}

bool Macad::Occt::TopoDS_Shape::Checked()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Checked();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Checked(bool theIsChecked)
{
    ((::TopoDS_Shape*)_NativeInstance)->Checked(theIsChecked);
}

bool Macad::Occt::TopoDS_Shape::Orientable()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Orientable();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Orientable(bool theIsOrientable)
{
    ((::TopoDS_Shape*)_NativeInstance)->Orientable(theIsOrientable);
}

bool Macad::Occt::TopoDS_Shape::Closed()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Closed();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Closed(bool theIsClosed)
{
    ((::TopoDS_Shape*)_NativeInstance)->Closed(theIsClosed);
}

bool Macad::Occt::TopoDS_Shape::Infinite()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Infinite();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Infinite(bool theIsInfinite)
{
    ((::TopoDS_Shape*)_NativeInstance)->Infinite(theIsInfinite);
}

bool Macad::Occt::TopoDS_Shape::Convex()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Convex();
    return _result;
}

void Macad::Occt::TopoDS_Shape::Convex(bool theIsConvex)
{
    ((::TopoDS_Shape*)_NativeInstance)->Convex(theIsConvex);
}

void Macad::Occt::TopoDS_Shape::Move(Macad::Occt::TopLoc_Location^ thePosition, bool theRaiseExc)
{
    ((::TopoDS_Shape*)_NativeInstance)->Move(*(::TopLoc_Location*)thePosition->NativeInstance, theRaiseExc);
}

void Macad::Occt::TopoDS_Shape::Move(Macad::Occt::TopLoc_Location^ thePosition)
{
    ((::TopoDS_Shape*)_NativeInstance)->Move(*(::TopLoc_Location*)thePosition->NativeInstance, false);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::Moved(Macad::Occt::TopLoc_Location^ thePosition, bool theRaiseExc)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Moved(*(::TopLoc_Location*)thePosition->NativeInstance, theRaiseExc);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::Moved(Macad::Occt::TopLoc_Location^ thePosition)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Moved(*(::TopLoc_Location*)thePosition->NativeInstance, false);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopoDS_Shape::Reverse()
{
    ((::TopoDS_Shape*)_NativeInstance)->Reverse();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::Reversed()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopoDS_Shape::Complement()
{
    ((::TopoDS_Shape*)_NativeInstance)->Complement();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::Complemented()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Complemented();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopoDS_Shape::Compose(Macad::Occt::TopAbs_Orientation theOrient)
{
    ((::TopoDS_Shape*)_NativeInstance)->Compose((::TopAbs_Orientation)theOrient);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::Composed(Macad::Occt::TopAbs_Orientation theOrient)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Composed((::TopAbs_Orientation)theOrient);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopoDS_Shape::NbChildren()
{
    int _result = ((::TopoDS_Shape*)_NativeInstance)->NbChildren();
    return _result;
}

bool Macad::Occt::TopoDS_Shape::IsPartner(Macad::Occt::TopoDS_Shape^ theOther)
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsPartner(*(::TopoDS_Shape*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopoDS_Shape::IsSame(Macad::Occt::TopoDS_Shape^ theOther)
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsSame(*(::TopoDS_Shape*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopoDS_Shape::IsEqual(Macad::Occt::TopoDS_Shape^ theOther)
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsEqual(*(::TopoDS_Shape*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopoDS_Shape::IsNotEqual(Macad::Occt::TopoDS_Shape^ theOther)
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsNotEqual(*(::TopoDS_Shape*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopoDS_Shape::EmptyCopy()
{
    ((::TopoDS_Shape*)_NativeInstance)->EmptyCopy();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Shape::EmptyCopied()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->EmptyCopied();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopoDS_Shape::TShape(Macad::Occt::TopoDS_TShape^ theTShape)
{
    ((::TopoDS_Shape*)_NativeInstance)->TShape(Handle(::TopoDS_TShape)(theTShape->NativeInstance));
}

void Macad::Occt::TopoDS_Shape::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopoDS_Shape*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::TopoDS_Shape::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopoDS_Shape*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::TopoDS_Shape::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopoDS_Shape::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TopoDS_Shape^)obj)->NativeInstance);
    }
    return false;
}

int Macad::Occt::TopoDS_Shape::GetHashCode()
{
    return std::hash<::TopoDS_Shape>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_TShape
//---------------------------------------------------------------------

bool Macad::Occt::TopoDS_TShape::Free()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Free();
    return _result;
}

void Macad::Occt::TopoDS_TShape::Free(bool theIsFree)
{
    ((::TopoDS_TShape*)_NativeInstance)->Free(theIsFree);
}

bool Macad::Occt::TopoDS_TShape::Locked()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Locked();
    return _result;
}

void Macad::Occt::TopoDS_TShape::Locked(bool theIsLocked)
{
    ((::TopoDS_TShape*)_NativeInstance)->Locked(theIsLocked);
}

bool Macad::Occt::TopoDS_TShape::Modified()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Modified();
    return _result;
}

void Macad::Occt::TopoDS_TShape::Modified(bool theIsModified)
{
    ((::TopoDS_TShape*)_NativeInstance)->Modified(theIsModified);
}

bool Macad::Occt::TopoDS_TShape::Checked()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Checked();
    return _result;
}

void Macad::Occt::TopoDS_TShape::Checked(bool theIsChecked)
{
    ((::TopoDS_TShape*)_NativeInstance)->Checked(theIsChecked);
}

bool Macad::Occt::TopoDS_TShape::Orientable()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Orientable();
    return _result;
}

void Macad::Occt::TopoDS_TShape::Orientable(bool theIsOrientable)
{
    ((::TopoDS_TShape*)_NativeInstance)->Orientable(theIsOrientable);
}

bool Macad::Occt::TopoDS_TShape::Closed()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Closed();
    return _result;
}

void Macad::Occt::TopoDS_TShape::Closed(bool theIsClosed)
{
    ((::TopoDS_TShape*)_NativeInstance)->Closed(theIsClosed);
}

bool Macad::Occt::TopoDS_TShape::Infinite()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Infinite();
    return _result;
}

void Macad::Occt::TopoDS_TShape::Infinite(bool theIsInfinite)
{
    ((::TopoDS_TShape*)_NativeInstance)->Infinite(theIsInfinite);
}

bool Macad::Occt::TopoDS_TShape::Convex()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Convex();
    return _result;
}

void Macad::Occt::TopoDS_TShape::Convex(bool theIsConvex)
{
    ((::TopoDS_TShape*)_NativeInstance)->Convex(theIsConvex);
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::TopoDS_TShape::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TShape*)_NativeInstance)->ShapeType();
    return (Macad::Occt::TopAbs_ShapeEnum)_result;
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TShape::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TShape*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

int Macad::Occt::TopoDS_TShape::NbChildren()
{
    int _result = ((::TopoDS_TShape*)_NativeInstance)->NbChildren();
    return _result;
}

void Macad::Occt::TopoDS_TShape::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopoDS_TShape*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::TopoDS_TShape::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopoDS_TShape*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TShape::CreateDowncasted(::TopoDS_TShape* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TVertex)))
        return Macad::Occt::TopoDS_TVertex::CreateDowncasted((::TopoDS_TVertex*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TEdge)))
        return Macad::Occt::TopoDS_TEdge::CreateDowncasted((::TopoDS_TEdge*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TWire)))
        return Macad::Occt::TopoDS_TWire::CreateDowncasted((::TopoDS_TWire*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TFace)))
        return Macad::Occt::TopoDS_TFace::CreateDowncasted((::TopoDS_TFace*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TShell)))
        return Macad::Occt::TopoDS_TShell::CreateDowncasted((::TopoDS_TShell*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TSolid)))
        return Macad::Occt::TopoDS_TSolid::CreateDowncasted((::TopoDS_TSolid*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TCompSolid)))
        return Macad::Occt::TopoDS_TCompSolid::CreateDowncasted((::TopoDS_TCompSolid*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TCompound)))
        return Macad::Occt::TopoDS_TCompound::CreateDowncasted((::TopoDS_TCompound*)instance);
    
    return gcnew Macad::Occt::TopoDS_TShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_Vertex
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Vertex::TopoDS_Vertex()
    : Macad::Occt::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Vertex();
}

int Macad::Occt::TopoDS_Vertex::GetHashCode()
{
    return std::hash<::TopoDS_Vertex>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Edge
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Edge::TopoDS_Edge()
    : Macad::Occt::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Edge();
}

int Macad::Occt::TopoDS_Edge::GetHashCode()
{
    return std::hash<::TopoDS_Edge>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Wire
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Wire::TopoDS_Wire()
    : Macad::Occt::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Wire();
}

int Macad::Occt::TopoDS_Wire::GetHashCode()
{
    return std::hash<::TopoDS_Wire>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Face
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Face::TopoDS_Face()
    : Macad::Occt::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Face();
}

int Macad::Occt::TopoDS_Face::GetHashCode()
{
    return std::hash<::TopoDS_Face>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Shell
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Shell::TopoDS_Shell()
    : Macad::Occt::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Shell();
}

int Macad::Occt::TopoDS_Shell::GetHashCode()
{
    return std::hash<::TopoDS_Shell>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Solid
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Solid::TopoDS_Solid()
    : Macad::Occt::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Solid();
}

int Macad::Occt::TopoDS_Solid::GetHashCode()
{
    return std::hash<::TopoDS_Solid>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_CompSolid
//---------------------------------------------------------------------

Macad::Occt::TopoDS_CompSolid::TopoDS_CompSolid()
    : Macad::Occt::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_CompSolid();
}

int Macad::Occt::TopoDS_CompSolid::GetHashCode()
{
    return std::hash<::TopoDS_CompSolid>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Compound
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Compound::TopoDS_Compound()
    : Macad::Occt::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Compound();
}

int Macad::Occt::TopoDS_Compound::GetHashCode()
{
    return std::hash<::TopoDS_Compound>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_HShape
//---------------------------------------------------------------------

Macad::Occt::TopoDS_HShape::TopoDS_HShape()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_HShape();
}

Macad::Occt::TopoDS_HShape::TopoDS_HShape(Macad::Occt::TopoDS_Shape^ aShape)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_HShape(*(::TopoDS_Shape*)aShape->NativeInstance);
}

void Macad::Occt::TopoDS_HShape::Shape(Macad::Occt::TopoDS_Shape^ aShape)
{
    ((::TopoDS_HShape*)_NativeInstance)->Shape(*(::TopoDS_Shape*)aShape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_HShape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopoDS_HShape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_HShape::ChangeShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_HShape*)_NativeInstance)->ChangeShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_HShape^ Macad::Occt::TopoDS_HShape::CreateDowncasted(::TopoDS_HShape* instance)
{
    return gcnew Macad::Occt::TopoDS_HShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TVertex
//---------------------------------------------------------------------

Macad::Occt::TopoDS_TVertex^ Macad::Occt::TopoDS_TVertex::CreateDowncasted(::TopoDS_TVertex* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_TVertex)))
        return Macad::Occt::BRep_TVertex::CreateDowncasted((::BRep_TVertex*)instance);
    
    return gcnew Macad::Occt::TopoDS_TVertex( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TEdge
//---------------------------------------------------------------------

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TEdge::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TEdge*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_TEdge^ Macad::Occt::TopoDS_TEdge::CreateDowncasted(::TopoDS_TEdge* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_TEdge)))
        return Macad::Occt::BRep_TEdge::CreateDowncasted((::BRep_TEdge*)instance);
    
    return gcnew Macad::Occt::TopoDS_TEdge( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TWire
//---------------------------------------------------------------------

Macad::Occt::TopoDS_TWire::TopoDS_TWire()
    : Macad::Occt::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TWire();
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TWire::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TWire*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_TWire^ Macad::Occt::TopoDS_TWire::CreateDowncasted(::TopoDS_TWire* instance)
{
    return gcnew Macad::Occt::TopoDS_TWire( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TFace
//---------------------------------------------------------------------

Macad::Occt::TopoDS_TFace::TopoDS_TFace()
    : Macad::Occt::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TFace();
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TFace::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TFace*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_TFace^ Macad::Occt::TopoDS_TFace::CreateDowncasted(::TopoDS_TFace* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_TFace)))
        return Macad::Occt::BRep_TFace::CreateDowncasted((::BRep_TFace*)instance);
    
    return gcnew Macad::Occt::TopoDS_TFace( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TShell
//---------------------------------------------------------------------

Macad::Occt::TopoDS_TShell::TopoDS_TShell()
    : Macad::Occt::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TShell();
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TShell::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TShell*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_TShell^ Macad::Occt::TopoDS_TShell::CreateDowncasted(::TopoDS_TShell* instance)
{
    return gcnew Macad::Occt::TopoDS_TShell( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TSolid
//---------------------------------------------------------------------

Macad::Occt::TopoDS_TSolid::TopoDS_TSolid()
    : Macad::Occt::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TSolid();
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TSolid::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TSolid*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_TSolid^ Macad::Occt::TopoDS_TSolid::CreateDowncasted(::TopoDS_TSolid* instance)
{
    return gcnew Macad::Occt::TopoDS_TSolid( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TCompSolid
//---------------------------------------------------------------------

Macad::Occt::TopoDS_TCompSolid::TopoDS_TCompSolid()
    : Macad::Occt::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TCompSolid();
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TCompSolid::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TCompSolid*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_TCompSolid^ Macad::Occt::TopoDS_TCompSolid::CreateDowncasted(::TopoDS_TCompSolid* instance)
{
    return gcnew Macad::Occt::TopoDS_TCompSolid( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TCompound
//---------------------------------------------------------------------

Macad::Occt::TopoDS_TCompound::TopoDS_TCompound()
    : Macad::Occt::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TCompound();
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::TopoDS_TCompound::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TCompound*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_TCompound^ Macad::Occt::TopoDS_TCompound::CreateDowncasted(::TopoDS_TCompound* instance)
{
    return gcnew Macad::Occt::TopoDS_TCompound( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_Builder
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Builder::TopoDS_Builder()
    : Macad::Occt::BaseClass<::TopoDS_Builder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Builder();
}

void Macad::Occt::TopoDS_Builder::MakeWire(Macad::Occt::TopoDS_Wire^ W)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeWire(*(::TopoDS_Wire*)W->NativeInstance);
}

void Macad::Occt::TopoDS_Builder::MakeShell(Macad::Occt::TopoDS_Shell^ S)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeShell(*(::TopoDS_Shell*)S->NativeInstance);
}

void Macad::Occt::TopoDS_Builder::MakeSolid(Macad::Occt::TopoDS_Solid^ S)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeSolid(*(::TopoDS_Solid*)S->NativeInstance);
}

void Macad::Occt::TopoDS_Builder::MakeCompSolid(Macad::Occt::TopoDS_CompSolid^ C)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeCompSolid(*(::TopoDS_CompSolid*)C->NativeInstance);
}

void Macad::Occt::TopoDS_Builder::MakeCompound(Macad::Occt::TopoDS_Compound^ C)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeCompound(*(::TopoDS_Compound*)C->NativeInstance);
}

void Macad::Occt::TopoDS_Builder::Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ C)
{
    ((::TopoDS_Builder*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Shape*)C->NativeInstance);
}

void Macad::Occt::TopoDS_Builder::Remove(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ C)
{
    ((::TopoDS_Builder*)_NativeInstance)->Remove(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Shape*)C->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Iterator
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Iterator::TopoDS_Iterator()
    : Macad::Occt::BaseClass<::TopoDS_Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Iterator();
}

Macad::Occt::TopoDS_Iterator::TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S, bool cumOri, bool cumLoc)
    : Macad::Occt::BaseClass<::TopoDS_Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Iterator(*(::TopoDS_Shape*)S->NativeInstance, cumOri, cumLoc);
}

Macad::Occt::TopoDS_Iterator::TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S, bool cumOri)
    : Macad::Occt::BaseClass<::TopoDS_Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Iterator(*(::TopoDS_Shape*)S->NativeInstance, cumOri, true);
}

Macad::Occt::TopoDS_Iterator::TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S)
    : Macad::Occt::BaseClass<::TopoDS_Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Iterator(*(::TopoDS_Shape*)S->NativeInstance, true, true);
}

void Macad::Occt::TopoDS_Iterator::Initialize(Macad::Occt::TopoDS_Shape^ S, bool cumOri, bool cumLoc)
{
    ((::TopoDS_Iterator*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, cumOri, cumLoc);
}

void Macad::Occt::TopoDS_Iterator::Initialize(Macad::Occt::TopoDS_Shape^ S, bool cumOri)
{
    ((::TopoDS_Iterator*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, cumOri, true);
}

void Macad::Occt::TopoDS_Iterator::Initialize(Macad::Occt::TopoDS_Shape^ S)
{
    ((::TopoDS_Iterator*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, true, true);
}

bool Macad::Occt::TopoDS_Iterator::More()
{
    bool _result = ((::TopoDS_Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopoDS_Iterator::Next()
{
    ((::TopoDS_Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopoDS_Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopoDS_Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopoDS_FrozenShape
//---------------------------------------------------------------------

Macad::Occt::TopoDS_FrozenShape::TopoDS_FrozenShape(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::TopoDS_FrozenShape(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::TopoDS_FrozenShape::TopoDS_FrozenShape()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_FrozenShape("");
}

Macad::Occt::TopoDS_FrozenShape::TopoDS_FrozenShape(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::TopoDS_FrozenShape(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::TopoDS_FrozenShape::ExceptionType()
{
    Standard_CString _result = ((::TopoDS_FrozenShape*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  TopoDS_LockedShape
//---------------------------------------------------------------------

Macad::Occt::TopoDS_LockedShape::TopoDS_LockedShape(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::TopoDS_LockedShape(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::TopoDS_LockedShape::TopoDS_LockedShape()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_LockedShape("");
}

Macad::Occt::TopoDS_LockedShape::TopoDS_LockedShape(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::TopoDS_LockedShape(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::TopoDS_LockedShape::ExceptionType()
{
    Standard_CString _result = ((::TopoDS_LockedShape*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}



//---------------------------------------------------------------------
//  Class  TopoDS_UnCompatibleShapes
//---------------------------------------------------------------------

Macad::Occt::TopoDS_UnCompatibleShapes::TopoDS_UnCompatibleShapes(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    _NativeInstance = new ::TopoDS_UnCompatibleShapes(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::TopoDS_UnCompatibleShapes::TopoDS_UnCompatibleShapes()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_UnCompatibleShapes("");
}

Macad::Occt::TopoDS_UnCompatibleShapes::TopoDS_UnCompatibleShapes(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    _NativeInstance = new ::TopoDS_UnCompatibleShapes(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

System::String^ Macad::Occt::TopoDS_UnCompatibleShapes::ExceptionType()
{
    Standard_CString _result = ((::TopoDS_UnCompatibleShapes*)_NativeInstance)->ExceptionType();
    return gcnew System::String(_result);
}


