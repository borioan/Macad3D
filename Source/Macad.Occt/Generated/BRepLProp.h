// Generated wrapper code for package BRepLProp

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepLProp
//---------------------------------------------------------------------
/// <summary>
/// These global functions compute the degree of
/// continuity of a curve built by concatenation of two
/// edges at their junction point.
/// </summary>
public ref class BRepLProp sealed
    : public Macad::Occt::BaseClass<::BRepLProp>
{

#ifdef Include_BRepLProp_h
public:
    Include_BRepLProp_h
#endif

public:
    BRepLProp(::BRepLProp* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLProp>( nativeInstance, true )
    {}

    BRepLProp(::BRepLProp& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLProp>( &nativeInstance, false )
    {}

    property ::BRepLProp* NativeInstance
    {
        ::BRepLProp* get()
        {
            return static_cast<::BRepLProp*>(_NativeInstance);
        }
    }

public:
    BRepLProp();
    /// <summary>
    /// Computes the regularity at the junction between C1 and
    /// C2. The point u1 on C1 and the point u2 on C2 must be
    /// confused. tl and ta are the linear and angular
    /// tolerance used two compare the derivative.
    /// </summary>
    static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::BRepAdaptor_Curve^ C1, Macad::Occt::BRepAdaptor_Curve^ C2, double u1, double u2, double tl, double ta);
    /// <summary>
    /// The same as preceding but using the standard tolerances from package Precision.
    /// </summary>
    static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::BRepAdaptor_Curve^ C1, Macad::Occt::BRepAdaptor_Curve^ C2, double u1, double u2);
}; // class BRepLProp

//---------------------------------------------------------------------
//  Class  BRepLProp_SurfaceTool
//---------------------------------------------------------------------
public ref class BRepLProp_SurfaceTool sealed
    : public Macad::Occt::BaseClass<::BRepLProp_SurfaceTool>
{

#ifdef Include_BRepLProp_SurfaceTool_h
public:
    Include_BRepLProp_SurfaceTool_h
#endif

public:
    BRepLProp_SurfaceTool(::BRepLProp_SurfaceTool* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLProp_SurfaceTool>( nativeInstance, true )
    {}

    BRepLProp_SurfaceTool(::BRepLProp_SurfaceTool& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLProp_SurfaceTool>( &nativeInstance, false )
    {}

    property ::BRepLProp_SurfaceTool* NativeInstance
    {
        ::BRepLProp_SurfaceTool* get()
        {
            return static_cast<::BRepLProp_SurfaceTool*>(_NativeInstance);
        }
    }

public:
    BRepLProp_SurfaceTool();
    /// <summary>
    /// Computes the point <P> of parameter <U> and <V> on the
    /// Surface <S>.
    /// </summary>
    static void Value(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the point <P> and first derivative <D1*> of
    /// parameter <U> and <V> on the Surface <S>.
    /// </summary>
    static void D1(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes the point <P>, the first derivative <D1*> and second
    /// derivative <D2*> of parameter <U> and <V> on the Surface <S>.
    /// </summary>
    static void D2(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% DUV);
    static Macad::Occt::Vec DN(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, int IU, int IV);
    /// <summary>
    /// returns the order of continuity of the Surface <S>.
    /// returns 1 : first derivative only is computable
    /// returns 2 : first and second derivative only are computable.
    /// </summary>
    static int Continuity(Macad::Occt::BRepAdaptor_Surface^ S);
    /// <summary>
    /// returns the bounds of the Surface.
    /// </summary>
    static void Bounds(Macad::Occt::BRepAdaptor_Surface^ S, double% U1, double% V1, double% U2, double% V2);
}; // class BRepLProp_SurfaceTool

}; // namespace Occt
}; // namespace Macad
