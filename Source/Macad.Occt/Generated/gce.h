// Generated wrapper code for package gce

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  gce_ErrorType
//---------------------------------------------------------------------
/// <summary>
/// Defines status codes returned by `gce` construction algorithms.
/// - `gce_Done`: construction completed successfully.
/// - `gce_ConfusedPoints`: two points are coincident.
/// - `gce_NegativeRadius`: a radius value is negative.
/// - `gce_ColinearPoints`: three points are collinear.
/// - `gce_IntersectionError`: intersection cannot be computed.
/// - `gce_NullAxis`: axis is undefined.
/// - `gce_NullAngle`: angle value is invalid (usually null).
/// - `gce_NullRadius`: radius is null.
/// - `gce_InvertAxis`: axis value is invalid.
/// - `gce_BadAngle`: angle value is invalid.
/// - `gce_InvertRadius`: radius values are inconsistent.
/// - `gce_NullFocusLength`: focal distance is null.
/// - `gce_NullVector`: vector is null.
/// - `gce_BadEquation`: coefficients of an equation are invalid.
/// </summary>
public enum class gce_ErrorType
{
    Done = 0,
    ConfusedPoints = 1,
    NegativeRadius = 2,
    ColinearPoints = 3,
    IntersectionError = 4,
    NullAxis = 5,
    NullAngle = 6,
    NullRadius = 7,
    InvertAxis = 8,
    BadAngle = 9,
    InvertRadius = 10,
    NullFocusLength = 11,
    NullVector = 12,
    BadEquation = 13
}; // enum  class gce_ErrorType

//---------------------------------------------------------------------
//  Class  gce_Root
//---------------------------------------------------------------------
/// <summary>
/// Provides common status services for all `gce` construction classes.
/// </summary>
public ref class gce_Root
    : public Macad::Occt::BaseClass<::gce_Root>
{

#ifdef Include_gce_Root_h
public:
    Include_gce_Root_h
#endif

protected:
    gce_Root(InitMode init)
        : Macad::Occt::BaseClass<::gce_Root>( init )
    {}

public:
    gce_Root(::gce_Root* nativeInstance)
        : Macad::Occt::BaseClass<::gce_Root>( nativeInstance, true )
    {}

    gce_Root(::gce_Root& nativeInstance)
        : Macad::Occt::BaseClass<::gce_Root>( &nativeInstance, false )
    {}

    property ::gce_Root* NativeInstance
    {
        ::gce_Root* get()
        {
            return static_cast<::gce_Root*>(_NativeInstance);
        }
    }

public:
    gce_Root();
    /// <summary>
    /// Returns true if the construction is successful.
    /// </summary>
    /// <returns>
    /// true if status is `gce_Done`
    /// </returns>
    bool IsDone();
    /// <summary>
    /// Returns true if the construction has failed.
    /// </summary>
    /// <returns>
    /// true if status is not `gce_Done`
    /// </returns>
    bool IsError();
    /// <summary>
    /// Returns the status of the construction:
    /// -   gce_Done, if the construction is successful, or
    /// -   another value of the gce_ErrorType enumeration
    /// indicating why the construction failed.
    /// </summary>
    /// <returns>
    /// construction status
    /// </returns>
    Macad::Occt::gce_ErrorType Status();
}; // class gce_Root

//---------------------------------------------------------------------
//  Class  gce_MakeCirc
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Circ`.
/// Supported constructions include:
/// - circle from axis and radius;
/// - circle coaxial to another one, through point or at signed offset;
/// - circle through three points;
/// - circle from center and normal/plane;
/// - circle from center and axis-defining point;
/// - circle from axis and radius.
/// </summary>
public ref class gce_MakeCirc sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCirc_h
public:
    Include_gce_MakeCirc_h
#endif

public:
    gce_MakeCirc(::gce_MakeCirc* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeCirc(::gce_MakeCirc& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeCirc* NativeInstance
    {
        ::gce_MakeCirc* get()
        {
            return static_cast<::gce_MakeCirc*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a circle from axis placement and radius.
    /// </summary>
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// <param name="in]">
    /// A2 local coordinate system
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCirc(Macad::Occt::Ax2 A2, double Radius);
    /// <summary>
    /// Creates a circle coaxial to input circle at signed distance.
    /// </summary>
    /// @note If `Dist` is positive, the result encloses `Circ`.
    /// @note If `Dist` is negative, the result is enclosed by `Circ`.
    /// <param name="in]">
    /// Circ source circle
    /// </param>
    /// <param name="in]">
    /// Dist signed distance
    /// </param>
    gce_MakeCirc(Macad::Occt::gp_Circ^ Circ, double Dist);
    /// <summary>
    /// Creates a circle coaxial to input circle and passing through a point.
    /// </summary>
    /// <param name="in]">
    /// Circ source circle
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    gce_MakeCirc(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt Point);
    /// <summary>
    /// Creates a circle passing through three points.
    /// </summary>
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    /// <param name="in]">
    /// P3 third point
    /// </param>
    gce_MakeCirc(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
    /// <summary>
    /// Creates a circle from center, plane normal and radius.
    /// </summary>
    /// <param name="in]">
    /// Center center point
    /// </param>
    /// <param name="in]">
    /// Norm input value
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Dir Norm, double Radius);
    /// <summary>
    /// Creates a circle from center, reference plane and radius.
    /// </summary>
    /// <param name="in]">
    /// Center center point
    /// </param>
    /// <param name="in]">
    /// Plane reference plane
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Pln Plane, double Radius);
    /// <summary>
    /// Creates a circle from center, axis-defining point and radius.
    /// </summary>
    /// <param name="in]">
    /// Center center point
    /// </param>
    /// <param name="in]">
    /// Ptaxis point defining axis direction
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Pnt Ptaxis, double Radius);
    /// <summary>
    /// Creates a circle from axis and radius.
    /// </summary>
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// <param name="in]">
    /// Axis axis definition
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCirc(Macad::Occt::Ax1 Axis, double Radius);
    /// <summary>
    /// Returns the constructed circle.
    /// Exceptions StdFail_NotDone if no circle is constructed.
    /// </summary>
    /// <returns>
    /// resulting circle
    /// </returns>
    Macad::Occt::gp_Circ^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Circ^ Operator();
}; // class gce_MakeCirc

//---------------------------------------------------------------------
//  Class  gce_MakeCirc2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Circ2d`.
/// Supported constructions include:
/// - circle from axis and radius;
/// - circle concentric to another one, through point or at signed offset;
/// - circle through three points;
/// - circle from center and radius;
/// - circle from center and one point.
/// </summary>
public ref class gce_MakeCirc2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCirc2d_h
public:
    Include_gce_MakeCirc2d_h
#endif

public:
    gce_MakeCirc2d(::gce_MakeCirc2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeCirc2d(::gce_MakeCirc2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeCirc2d* NativeInstance
    {
        ::gce_MakeCirc2d* get()
        {
            return static_cast<::gce_MakeCirc2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a circle from axis and radius.
    /// </summary>
    /// @note The location of `XAxis` is the circle center.
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// <param name="in]">
    /// XAxis axis placement
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeCirc2d(Macad::Occt::Ax2d XAxis, double Radius, bool Sense);
    /// <summary>
    /// Creates a circle from axis and radius.
    /// </summary>
    /// @note The location of `XAxis` is the circle center.
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// <param name="in]">
    /// XAxis axis placement
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeCirc2d(Macad::Occt::Ax2d XAxis, double Radius);
    /// <summary>
    /// Creates a circle from local coordinate system and radius.
    /// </summary>
    /// @note The location of `Axis` is the circle center.
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// <param name="in]">
    /// Axis axis definition
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCirc2d(Macad::Occt::Ax22d Axis, double Radius);
    /// <summary>
    /// Creates a circle concentric to input circle with signed offset.
    /// </summary>
    /// @note Result radius is `Abs(Circ.Radius() + Dist)`.
    /// <param name="in]">
    /// Circ source circle
    /// </param>
    /// <param name="in]">
    /// Dist signed distance
    /// </param>
    gce_MakeCirc2d(Macad::Occt::gp_Circ2d^ Circ, double Dist);
    /// <summary>
    /// Creates a circle concentric to input circle and passing through a point.
    /// </summary>
    /// <param name="in]">
    /// Circ source circle
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    gce_MakeCirc2d(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d Point);
    /// <summary>
    /// Creates a circle passing through three points.
    /// </summary>
    /// @note The local coordinate system of the result is derived
    /// from input points.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    /// <param name="in]">
    /// P3 third point
    /// </param>
    gce_MakeCirc2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, Macad::Occt::Pnt2d P3);
    /// <summary>
    /// Creates a circle from center and radius.
    /// </summary>
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// <param name="in]">
    /// Center center point
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeCirc2d(Macad::Occt::Pnt2d Center, double Radius, bool Sense);
    /// <summary>
    /// Creates a circle from center and radius.
    /// </summary>
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// <param name="in]">
    /// Center center point
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeCirc2d(Macad::Occt::Pnt2d Center, double Radius);
    /// <summary>
    /// Creates a circle from center and one point on circle.
    /// </summary>
    /// @note `Sense` controls result orientation.
    /// <param name="in]">
    /// Center center point
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeCirc2d(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point, bool Sense);
    /// <summary>
    /// Creates a circle from center and one point on circle.
    /// </summary>
    /// @note `Sense` controls result orientation.
    /// <param name="in]">
    /// Center center point
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeCirc2d(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point);
    /// <summary>
    /// Returns the constructed circle.
    /// Exceptions StdFail_NotDone if no circle is constructed.
    /// </summary>
    /// <returns>
    /// resulting circle
    /// </returns>
    Macad::Occt::gp_Circ2d^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Circ2d^ Operator();
}; // class gce_MakeCirc2d

//---------------------------------------------------------------------
//  Class  gce_MakeCone
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Cone`.
/// Supported constructions include:
/// - from axis placement, semi-angle and reference radius;
/// - cone coaxial to another cone, through a point or at signed offset;
/// - cone from four points;
/// - cone from axis and two points;
/// - cone from two axis points and two section radii.
/// </summary>
public ref class gce_MakeCone sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCone_h
public:
    Include_gce_MakeCone_h
#endif

public:
    gce_MakeCone(::gce_MakeCone* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeCone(::gce_MakeCone& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeCone* NativeInstance
    {
        ::gce_MakeCone* get()
        {
            return static_cast<::gce_MakeCone*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a cone from axis placement, semi-angle and reference radius.
    /// </summary>
    /// @note `A2` defines cone position and reference section plane.
    /// @note `Ang` is the cone semi-angle (radians), expected in ]0, PI/2[.
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// @note Construction fails with `gce_BadAngle` if
    /// `Ang <= gp::Resolution()` or `PI/2 - Ang <= gp::Resolution()`.
    /// <param name="in]">
    /// A2 local coordinate system
    /// </param>
    /// <param name="in]">
    /// Ang angle value
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCone(Macad::Occt::Ax2 A2, double Ang, double Radius);
    /// <summary>
    /// Creates a cone coaxial to input cone and passing through a point.
    /// </summary>
    /// @note Construction fails with `gce_NegativeRadius` when no non-negative
    /// solution radius can be found.
    /// <param name="in]">
    /// Cone source cone
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    gce_MakeCone(Macad::Occt::gp_Cone^ Cone, Macad::Occt::Pnt Point);
    /// <summary>
    /// Creates a cone coaxial to input cone at signed distance.
    /// </summary>
    /// @note Construction fails with `gce_NullAngle` if semi-angle cosine is
    /// numerically too small.
    /// @note Construction fails with `gce_NegativeRadius` if resulting radius is negative.
    /// <param name="in]">
    /// Cone source cone
    /// </param>
    /// <param name="in]">
    /// Dist signed distance
    /// </param>
    gce_MakeCone(Macad::Occt::gp_Cone^ Cone, double Dist);
    /// <summary>
    /// Creates a cone from four points.
    /// </summary>
    /// @note `P1` and `P2` define the axis direction.
    /// @note Distance from `P3` to that axis defines base radius.
    /// @note Distance from `P4` to that axis defines radius of section through `P4`.
    /// @note Construction fails with `gce_ConfusedPoints` if `P1`/`P2` or `P3`/`P4`
    /// are coincident.
    /// @note Construction fails with `gce_NullAngle` if section distances produce
    /// zero cone angle.
    /// @note Construction fails with `gce_NullRadius` for degenerate right-angle
    /// or zero-angle radius configuration.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    /// <param name="in]">
    /// P3 third point
    /// </param>
    /// <param name="in]">
    /// P4 fourth point
    /// </param>
    gce_MakeCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
    /// <summary>
    /// Creates a cone from axis and two points.
    /// </summary>
    /// @note Distance from `P1` to axis gives first section radius.
    /// @note Distance from `P2` to axis gives second section radius.
    /// @note Error status is propagated from the 4-point construction.
    /// <param name="in]">
    /// Axis axis definition
    /// </param>
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    gce_MakeCone(Macad::Occt::Ax1 Axis, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Creates a cone from line axis and two points.
    /// </summary>
    /// @note Distance from `P1` to axis gives first section radius.
    /// @note Distance from `P2` to axis gives second section radius.
    /// @note Error status is propagated from the 4-point construction.
    /// <param name="in]">
    /// Axis axis definition
    /// </param>
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    gce_MakeCone(Macad::Occt::gp_Lin^ Axis, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Creates a cone from two axis points and two section radii.
    /// </summary>
    /// @note The axis is the line passing through `P1` and `P2`.
    /// @note `R1` is section radius at `P1`, `R2` is section radius at `P2`.
    /// @note Construction fails with `gce_NullAxis` if `P1` and `P2` are coincident.
    /// @note Construction fails with `gce_NegativeRadius` if `R1` or `R2` is negative.
    /// @note Construction fails with `gce_NullAngle` for degenerate zero-angle
    /// or right-angle configurations.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    /// <param name="in]">
    /// R1 first radius value
    /// </param>
    /// <param name="in]">
    /// R2 second radius value
    /// </param>
    gce_MakeCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double R1, double R2);
    /// <summary>
    /// Returns the constructed cone.
    /// Exceptions StdFail_NotDone if no cone is constructed.
    /// </summary>
    /// <returns>
    /// resulting cone
    /// </returns>
    Macad::Occt::gp_Cone^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Cone^ Operator();
}; // class gce_MakeCone

//---------------------------------------------------------------------
//  Class  gce_MakeCylinder
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Cylinder`.
/// Supported constructions include:
/// - cylinder from axis placement and radius;
/// - cylinder coaxial to another, through point or at signed offset;
/// - cylinder from three points;
/// - cylinder from axis and radius;
/// - cylinder from circular base.
/// </summary>
public ref class gce_MakeCylinder sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCylinder_h
public:
    Include_gce_MakeCylinder_h
#endif

public:
    gce_MakeCylinder(::gce_MakeCylinder* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeCylinder(::gce_MakeCylinder& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeCylinder* NativeInstance
    {
        ::gce_MakeCylinder* get()
        {
            return static_cast<::gce_MakeCylinder*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a cylinder from axis placement and radius.
    /// </summary>
    /// @note Construction fails with `gce_NegativeRadius` if `Radius` is negative.
    /// <param name="in]">
    /// A2 local coordinate system
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCylinder(Macad::Occt::Ax2 A2, double Radius);
    /// <summary>
    /// Creates a cylinder coaxial to input cylinder and passing through a point.
    /// </summary>
    /// <param name="in]">
    /// Cyl source cylinder
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    gce_MakeCylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::Pnt Point);
    /// <summary>
    /// Creates a cylinder coaxial to input cylinder at signed distance.
    /// </summary>
    /// @note Construction fails with `gce_NegativeRadius` if resulting radius is negative.
    /// <param name="in]">
    /// Cyl source cylinder
    /// </param>
    /// <param name="in]">
    /// Dist signed distance
    /// </param>
    gce_MakeCylinder(Macad::Occt::gp_Cylinder^ Cyl, double Dist);
    /// <summary>
    /// Creates a cylinder from three points.
    /// </summary>
    /// @note Axis is defined by points `P1` and `P2`.
    /// @note Radius is the distance from `P3` to that axis.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    /// <param name="in]">
    /// P3 third point
    /// </param>
    gce_MakeCylinder(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
    /// <summary>
    /// Makes a Cylinder by its axis <Axis> and radius <Radius>.
    /// </summary>
    /// <param name="in]">
    /// Axis axis definition
    /// </param>
    /// <param name="in]">
    /// Radius radius value
    /// </param>
    gce_MakeCylinder(Macad::Occt::Ax1 Axis, double Radius);
    /// <summary>
    /// Creates a cylinder from circular base.
    /// </summary>
    /// @note The resulting cylinder axis equals the circle axis.
    /// @note This constructor succeeds for any valid `Circ`.
    /// <param name="in]">
    /// Circ source circle
    /// </param>
    gce_MakeCylinder(Macad::Occt::gp_Circ^ Circ);
    /// <summary>
    /// Returns the constructed cylinder.
    /// Exceptions StdFail_NotDone if no cylinder is constructed.
    /// </summary>
    /// <returns>
    /// resulting cylinder
    /// </returns>
    Macad::Occt::gp_Cylinder^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Cylinder^ Operator();
}; // class gce_MakeCylinder

//---------------------------------------------------------------------
//  Class  gce_MakeDir
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Dir`.
/// Supported constructions include:
/// - direction from vector or coordinate components;
/// - direction from two points.
/// </summary>
public ref class gce_MakeDir sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeDir_h
public:
    Include_gce_MakeDir_h
#endif

public:
    gce_MakeDir(::gce_MakeDir* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeDir(::gce_MakeDir& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeDir* NativeInstance
    {
        ::gce_MakeDir* get()
        {
            return static_cast<::gce_MakeDir*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Normalizes the vector V and creates a direction.
    /// </summary>
    /// @note Construction fails with `gce_NullVector` if
    /// `V.Magnitude() <= gp::Resolution()`.
    /// <param name="in]">
    /// V direction vector
    /// </param>
    gce_MakeDir(Macad::Occt::Vec V);
    /// <summary>
    /// Creates a direction from a coordinate vector.
    /// </summary>
    /// @note Construction fails with `gce_NullVector` if
    /// `Coord.Modulus() <= gp::Resolution()`.
    /// <param name="in]">
    /// Coord coordinate vector
    /// </param>
    gce_MakeDir(Macad::Occt::XYZ Coord);
    /// <summary>
    /// Creates a direction with its 3 cartesian coordinates.
    /// </summary>
    /// @note Construction fails with `gce_NullVector` if
    /// `Xv*Xv + Yv*Yv + Zv*Zv <= gp::Resolution()`.
    /// <param name="in]">
    /// Xv X coordinate value
    /// </param>
    /// <param name="in]">
    /// Yv Y coordinate value
    /// </param>
    /// <param name="in]">
    /// Zv Z coordinate value
    /// </param>
    gce_MakeDir(double Xv, double Yv, double Zv);
    /// <summary>
    /// Creates a direction from two points.
    /// </summary>
    /// @note Construction fails with `gce_ConfusedPoints` if points are coincident.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    gce_MakeDir(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Returns the constructed unit vector.
    /// Exceptions StdFail_NotDone if no unit vector is constructed.
    /// </summary>
    /// <returns>
    /// resulting direction
    /// </returns>
    Macad::Occt::Dir Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::Dir Operator();
}; // class gce_MakeDir

//---------------------------------------------------------------------
//  Class  gce_MakeDir2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Dir2d`.
/// Supported constructions include:
/// - direction from vector or coordinate components;
/// - direction from two points.
/// </summary>
public ref class gce_MakeDir2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeDir2d_h
public:
    Include_gce_MakeDir2d_h
#endif

public:
    gce_MakeDir2d(::gce_MakeDir2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeDir2d(::gce_MakeDir2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeDir2d* NativeInstance
    {
        ::gce_MakeDir2d* get()
        {
            return static_cast<::gce_MakeDir2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Normalizes the vector V and creates a direction.
    /// </summary>
    /// @note Construction fails with `gce_NullVector` if
    /// `V.Magnitude() <= gp::Resolution()`.
    /// <param name="in]">
    /// V direction vector
    /// </param>
    gce_MakeDir2d(Macad::Occt::Vec2d V);
    /// <summary>
    /// Creates a direction from a coordinate vector.
    /// </summary>
    /// @note Construction fails with `gce_NullVector` if
    /// `Coord.Modulus() <= gp::Resolution()`.
    /// <param name="in]">
    /// Coord coordinate vector
    /// </param>
    gce_MakeDir2d(Macad::Occt::XY Coord);
    /// <summary>
    /// Creates a direction with its two cartesian coordinates.
    /// </summary>
    /// @note Construction fails with `gce_NullVector` if
    /// `Xv*Xv + Yv*Yv <= gp::Resolution()`.
    /// <param name="in]">
    /// Xv X coordinate value
    /// </param>
    /// <param name="in]">
    /// Yv Y coordinate value
    /// </param>
    gce_MakeDir2d(double Xv, double Yv);
    /// <summary>
    /// Creates a direction from two points.
    /// </summary>
    /// @note Construction fails with `gce_ConfusedPoints` if points are coincident.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    gce_MakeDir2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    /// <summary>
    /// Returns the constructed unit vector.
    /// Exceptions StdFail_NotDone if no unit vector is constructed.
    /// </summary>
    /// <returns>
    /// resulting direction
    /// </returns>
    Macad::Occt::Dir2d Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::Dir2d Operator();
}; // class gce_MakeDir2d

//---------------------------------------------------------------------
//  Class  gce_MakeElips
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Elips`.
/// Supported constructions include:
/// - ellipse from local coordinate system and radii;
/// - ellipse from center and two points.
/// </summary>
public ref class gce_MakeElips sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeElips_h
public:
    Include_gce_MakeElips_h
#endif

public:
    gce_MakeElips(::gce_MakeElips* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeElips(::gce_MakeElips& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeElips* NativeInstance
    {
        ::gce_MakeElips* get()
        {
            return static_cast<::gce_MakeElips*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The major radius of the ellipse is on the "XAxis" and the
    /// minor radius is on the "YAxis" of the ellipse. The "XAxis"
    /// is defined with the "XDirection" of A2 and the "YAxis" is
    /// defined with the "YDirection" of A2.
    /// </summary>
    /// @note It is possible to create an ellipse with
    /// `MajorRadius == MinorRadius`.
    /// @note Construction fails with `gce_InvertRadius` if
    /// `MajorRadius < MinorRadius`.
    /// @note Construction fails with `gce_NegativeRadius` if
    /// `MinorRadius < 0.0`.
    /// <param name="in]">
    /// A2 local coordinate system
    /// </param>
    /// <param name="in]">
    /// MajorRadius major radius value
    /// </param>
    /// <param name="in]">
    /// MinorRadius minor radius value
    /// </param>
    gce_MakeElips(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Creates an ellipse from center and two points.
    /// </summary>
    /// @note `S1` defines major radius direction and value.
    /// @note Minor radius is computed as distance from `S2` to major axis.
    /// @note Construction fails with `gce_NullAxis` if `S1` and `Center` coincide.
    /// @note Construction fails with `gce_InvertAxis` when computed minor radius
    /// is null/greater than major radius, or when points are collinear.
    /// <param name="in]">
    /// S1 first point
    /// </param>
    /// <param name="in]">
    /// S2 second point
    /// </param>
    /// <param name="in]">
    /// Center center point
    /// </param>
    gce_MakeElips(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center);
    /// <summary>
    /// Returns the constructed ellipse.
    /// Exceptions StdFail_NotDone if no ellipse is constructed.
    /// </summary>
    /// <returns>
    /// resulting ellipse
    /// </returns>
    Macad::Occt::gp_Elips^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Elips^ Operator();
}; // class gce_MakeElips

//---------------------------------------------------------------------
//  Class  gce_MakeElips2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Elips2d`.
/// Supported constructions include:
/// - ellipse from major axis (or local 2D coordinate system) and radii;
/// - ellipse from center and two points.
/// </summary>
public ref class gce_MakeElips2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeElips2d_h
public:
    Include_gce_MakeElips2d_h
#endif

public:
    gce_MakeElips2d(::gce_MakeElips2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeElips2d(::gce_MakeElips2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeElips2d* NativeInstance
    {
        ::gce_MakeElips2d* get()
        {
            return static_cast<::gce_MakeElips2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an ellipse with the major axis, the major and the
    /// minor radius. The location of the MajorAxis is the center
    /// of the ellipse.
    /// The sense of parametrization is given by Sense.
    /// It is possible to create an ellipse with MajorRadius = MinorRadius.
    /// </summary>
    /// @note Construction fails with `gce_InvertRadius` if
    /// `MajorRadius < MinorRadius`.
    /// @note Construction fails with `gce_NegativeRadius` if
    /// `MajorRadius < 0.0`.
    /// <param name="in]">
    /// MajorAxis major axis placement
    /// </param>
    /// <param name="in]">
    /// MajorRadius major radius value
    /// </param>
    /// <param name="in]">
    /// MinorRadius minor radius value
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeElips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
    /// <summary>
    /// Creates an ellipse with the major axis, the major and the
    /// minor radius. The location of the MajorAxis is the center
    /// of the ellipse.
    /// The sense of parametrization is given by Sense.
    /// It is possible to create an ellipse with MajorRadius = MinorRadius.
    /// </summary>
    /// @note Construction fails with `gce_InvertRadius` if
    /// `MajorRadius < MinorRadius`.
    /// @note Construction fails with `gce_NegativeRadius` if
    /// `MajorRadius < 0.0`.
    /// <param name="in]">
    /// MajorAxis major axis placement
    /// </param>
    /// <param name="in]">
    /// MajorRadius major radius value
    /// </param>
    /// <param name="in]">
    /// MinorRadius minor radius value
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeElips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Axis defines the Xaxis and Yaxis of the ellipse which defines
    /// the origin and the sense of parametrization.
    /// Creates an ellipse with the AxisPlacement the major and the
    /// minor radius. The location of Axis is the center
    /// of the ellipse.
    /// It is possible to create an ellipse with MajorRadius = MinorRadius.
    /// </summary>
    /// @note Construction fails with `gce_InvertRadius` if
    /// `MajorRadius < MinorRadius`.
    /// @note Construction fails with `gce_NegativeRadius` if
    /// `MajorRadius < 0.0`.
    /// <param name="in]">
    /// A local coordinate system
    /// </param>
    /// <param name="in]">
    /// MajorRadius major radius value
    /// </param>
    /// <param name="in]">
    /// MinorRadius minor radius value
    /// </param>
    gce_MakeElips2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Creates an ellipse from center and two points.
    /// </summary>
    /// @note `S1` defines major radius direction and value.
    /// @note Minor radius is computed as distance from `S2` to major axis.
    /// @note Construction fails with `gce_NullAxis` when computed minor radius
    /// is null.
    /// @note Construction fails with `gce_InvertAxis` when computed minor radius
    /// exceeds major radius.
    /// <param name="in]">
    /// S1 first point
    /// </param>
    /// <param name="in]">
    /// S2 second point
    /// </param>
    /// <param name="in]">
    /// Center center point
    /// </param>
    gce_MakeElips2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center);
    /// <summary>
    /// Returns the constructed ellipse.
    /// Exceptions StdFail_NotDone if no ellipse is constructed.
    /// </summary>
    /// <returns>
    /// resulting ellipse
    /// </returns>
    Macad::Occt::gp_Elips2d^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Elips2d^ Operator();
}; // class gce_MakeElips2d

//---------------------------------------------------------------------
//  Class  gce_MakeHypr
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Hypr`.
/// Supported constructions include:
/// - hyperbola from center and two points (one on major axis);
/// - hyperbola from local coordinate system and radii.
/// 
/// ^YAxis
/// |
/// FirstConjugateBranch
/// |
/// Other            |                Main
/// --------------------- C ------------------------------>XAxis
/// Branch           |                Branch
/// |
/// |
/// SecondConjugateBranch
/// |
/// 
/// The local Cartesian coordinate system of the hyperbola is an
/// axis placement (two axes).
/// 
/// The "XDirection" and the "YDirection" of the axis placement
/// define the plane of the hyperbola.
/// 
/// The "Direction" of the axis placement defines the normal axis
/// to the hyperbola's plane.
/// 
/// The "XAxis" of the hyperbola ("Location", "XDirection") is the
/// major axis and the "YAxis" of the hyperbola ("Location",
/// "YDirection") is the minor axis.
/// 
/// </summary>
/// @note The major radius (on major axis) can be lower than the
/// minor radius (on minor axis).
public ref class gce_MakeHypr sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeHypr_h
public:
    Include_gce_MakeHypr_h
#endif

public:
    gce_MakeHypr(::gce_MakeHypr* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeHypr(::gce_MakeHypr& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeHypr* NativeInstance
    {
        ::gce_MakeHypr* get()
        {
            return static_cast<::gce_MakeHypr*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a hyperbola from a local coordinate system and radii.
    /// </summary>
    /// @note In the local coordinate system of `A2`, the equation is
    /// `X*X / (MajorRadius*MajorRadius) - Y*Y / (MinorRadius*MinorRadius) = 1.0`.
    /// @note Construction with `MajorRadius == MinorRadius` is valid.
    /// @note Construction fails with `gce_NegativeRadius` if
    /// `MajorRadius < 0.0` or `MinorRadius < 0.0`.
    /// <param name="in]">
    /// A2 local coordinate system
    /// </param>
    /// <param name="in]">
    /// MajorRadius major radius value
    /// </param>
    /// <param name="in]">
    /// MinorRadius minor radius value
    /// </param>
    gce_MakeHypr(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Creates a hyperbola from center and two points.
    /// </summary>
    /// @note `Center` is the hyperbola center, `Center`-`S1` defines the major axis,
    /// major radius is `Distance(Center, S1)`, and minor radius is distance from
    /// `S2` to this major axis.
    /// @note Construction fails with `gce_ConfusedPoints` if any two of `S1`, `S2`,
    /// and `Center` are coincident.
    /// @note Construction fails with `gce_ColinearPoints` if `S1`, `S2`, and `Center`
    /// are collinear.
    /// <param name="in]">
    /// S1 first point
    /// </param>
    /// <param name="in]">
    /// S2 second point
    /// </param>
    /// <param name="in]">
    /// Center center point
    /// </param>
    gce_MakeHypr(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center);
    /// <summary>
    /// Returns the constructed hyperbola.
    /// Exceptions StdFail_NotDone if no hyperbola is constructed.
    /// </summary>
    /// <returns>
    /// resulting hyperbola
    /// </returns>
    Macad::Occt::gp_Hypr^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Hypr^ Operator();
}; // class gce_MakeHypr

//---------------------------------------------------------------------
//  Class  gce_MakeHypr2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Hypr2d`.
/// Supported constructions include:
/// - hyperbola from center and two points (one on major axis);
/// - hyperbola from major axis and radii;
/// - hyperbola from local coordinate system and radii.
/// 
/// ^YAxis
/// |
/// FirstConjugateBranch
/// |
/// Other            |                Main
/// --------------------- C ------------------------------>XAxis
/// Branch           |                Branch
/// |
/// |
/// SecondConjugateBranch
/// |
/// 
/// An axis placement (one axis) is associated with the hyperbola.
/// This axis is the "XAxis" or major axis of the hyperbola.
/// It is the symmetry axis of the main branch.
/// The "YAxis" is normal to this axis and passes through its location point.
/// It is the minor axis.
/// 
/// The major radius is the distance between the Location point
/// of the hyperbola C and the vertex of the Main Branch (or the
/// Other branch). The minor radius is the distance between the
/// Location point of the hyperbola C and the vertex of the First
/// (or Second) Conjugate branch.
/// The major radius can be lower than the minor radius.
/// </summary>
public ref class gce_MakeHypr2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeHypr2d_h
public:
    Include_gce_MakeHypr2d_h
#endif

public:
    gce_MakeHypr2d(::gce_MakeHypr2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeHypr2d(::gce_MakeHypr2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeHypr2d* NativeInstance
    {
        ::gce_MakeHypr2d* get()
        {
            return static_cast<::gce_MakeHypr2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a hyperbola from center and two points.
    /// </summary>
    /// @note `Center` is the hyperbola center, `Center`-`S1` defines major axis,
    /// major radius is `Distance(Center, S1)`, and minor radius is distance
    /// from `S2` to this major axis.
    /// @note Construction fails with `gce_ConfusedPoints` if any two of `S1`, `S2`,
    /// and `Center` are coincident.
    /// @note Construction fails with `gce_ColinearPoints` if `S1`, `S2`, and `Center`
    /// are collinear.
    /// <param name="in]">
    /// S1 first point
    /// </param>
    /// <param name="in]">
    /// S2 second point
    /// </param>
    /// <param name="in]">
    /// Center center point
    /// </param>
    gce_MakeHypr2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center);
    /// <summary>
    /// Creates a hyperbola from major axis and radii.
    /// </summary>
    /// @note Center is located at `MajorAxis.Location()`.
    /// @note If `Sense` is `false`, the opposite direction of `MajorAxis` is used.
    /// @note Construction fails with `gce_NegativeRadius` if
    /// `MajorRadius < 0.0` or `MinorRadius < 0.0`.
    /// <param name="in]">
    /// MajorAxis major axis placement
    /// </param>
    /// <param name="in]">
    /// MajorRadius major radius value
    /// </param>
    /// <param name="in]">
    /// MinorRadius minor radius value
    /// </param>
    /// <param name="in]">
    /// Sense orientation flag
    /// </param>
    gce_MakeHypr2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
    /// <summary>
    /// Creates a hyperbola from local coordinate system and radii.
    /// </summary>
    /// @note The result is centered at `A.Location()`, and its major axis follows
    /// the X axis direction of `A`.
    /// @note Construction fails with `gce_NegativeRadius` if
    /// `MajorRadius < 0.0` or `MinorRadius < 0.0`.
    /// <param name="in]">
    /// A local coordinate system
    /// </param>
    /// <param name="in]">
    /// MajorRadius major radius value
    /// </param>
    /// <param name="in]">
    /// MinorRadius minor radius value
    /// </param>
    gce_MakeHypr2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Returns the constructed hyperbola.
    /// Exceptions StdFail_NotDone if no hyperbola is constructed.
    /// </summary>
    /// <returns>
    /// resulting hyperbola
    /// </returns>
    Macad::Occt::gp_Hypr2d^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Hypr2d^ Operator();
}; // class gce_MakeHypr2d

//---------------------------------------------------------------------
//  Class  gce_MakeLin
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Lin`.
/// Supported constructions include:
/// - line from axis placement;
/// - line from point and direction;
/// - parallel line through point;
/// - line through two points.
/// </summary>
public ref class gce_MakeLin sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeLin_h
public:
    Include_gce_MakeLin_h
#endif

public:
    gce_MakeLin(::gce_MakeLin* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeLin(::gce_MakeLin& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeLin* NativeInstance
    {
        ::gce_MakeLin* get()
        {
            return static_cast<::gce_MakeLin*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a line located along the axis A1.
    /// </summary>
    /// @note The location of `A1` is the line origin.
    /// <param name="in]">
    /// A1 axis placement
    /// </param>
    gce_MakeLin(Macad::Occt::Ax1 A1);
    /// <summary>
    /// <P> is the location point (origin) of the line and
    /// <V> is the direction of the line.
    /// </summary>
    /// <param name="in]">
    /// P point
    /// </param>
    /// <param name="in]">
    /// V direction vector
    /// </param>
    gce_MakeLin(Macad::Occt::Pnt P, Macad::Occt::Dir V);
    /// <summary>
    /// Creates a line parallel to input line and passing through a point.
    /// </summary>
    /// <param name="in]">
    /// Lin source line
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    gce_MakeLin(Macad::Occt::gp_Lin^ Lin, Macad::Occt::Pnt Point);
    /// <summary>
    /// Creates a line passing through two points.
    /// </summary>
    /// @note Construction fails with `gce_ConfusedPoints` if points are coincident.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    gce_MakeLin(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Returns the constructed line.
    /// Exceptions StdFail_NotDone is raised if no line is constructed.
    /// </summary>
    /// <returns>
    /// resulting line
    /// </returns>
    Macad::Occt::gp_Lin^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Lin^ Operator();
}; // class gce_MakeLin

//---------------------------------------------------------------------
//  Class  gce_MakeLin2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Lin2d`.
/// Supported constructions include:
/// - line from axis placement;
/// - line from point and direction;
/// - line from cartesian equation;
/// - parallel line through point or at signed distance;
/// - line through two points.
/// </summary>
public ref class gce_MakeLin2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeLin2d_h
public:
    Include_gce_MakeLin2d_h
#endif

public:
    gce_MakeLin2d(::gce_MakeLin2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeLin2d(::gce_MakeLin2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeLin2d* NativeInstance
    {
        ::gce_MakeLin2d* get()
        {
            return static_cast<::gce_MakeLin2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a line located with A.
    /// </summary>
    /// @note The location of `A` is the line origin.
    /// <param name="in]">
    /// A local coordinate system
    /// </param>
    gce_MakeLin2d(Macad::Occt::Ax2d A);
    /// <summary>
    /// <P> is the location point (origin) of the line and
    /// <V> is the direction of the line.
    /// </summary>
    /// <param name="in]">
    /// P point
    /// </param>
    /// <param name="in]">
    /// V direction vector
    /// </param>
    gce_MakeLin2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V);
    /// <summary>
    /// Creates the line from the equation A*X + B*Y + C = 0.0
    /// </summary>
    /// @note Construction fails with `gce_NullAxis` if
    /// `A*A + B*B <= gp::Resolution()`.
    /// <param name="in]">
    /// A equation coefficient A
    /// </param>
    /// <param name="in]">
    /// B equation coefficient B
    /// </param>
    /// <param name="in]">
    /// C equation coefficient C
    /// </param>
    gce_MakeLin2d(double A, double B, double C);
    /// <summary>
    /// Creates a line parallel to input line at signed distance.
    /// </summary>
    /// @note If `Dist` is positive, the result is on the right side
    /// of `Lin` (in line local orientation), otherwise on the left.
    /// <param name="in]">
    /// Lin source line
    /// </param>
    /// <param name="in]">
    /// Dist signed distance
    /// </param>
    gce_MakeLin2d(Macad::Occt::gp_Lin2d^ Lin, double Dist);
    /// <summary>
    /// Creates a line parallel to input line and passing through a point.
    /// </summary>
    /// <param name="in]">
    /// Lin source line
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    gce_MakeLin2d(Macad::Occt::gp_Lin2d^ Lin, Macad::Occt::Pnt2d Point);
    /// <summary>
    /// Creates a line passing through two points.
    /// </summary>
    /// @note Construction fails with `gce_ConfusedPoints` if `P1` and `P2`
    /// are coincident.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    gce_MakeLin2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    /// <summary>
    /// Returns the constructed line.
    /// Exceptions StdFail_NotDone if no line is constructed.
    /// </summary>
    /// <returns>
    /// resulting line
    /// </returns>
    Macad::Occt::gp_Lin2d^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::gp_Lin2d^ Operator();
}; // class gce_MakeLin2d

//---------------------------------------------------------------------
//  Class  gce_MakeMirror
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// symmetrical transformation in 3D space about a point,
/// axis or plane. The result is a gp_Trsf transformation.
/// A MakeMirror object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeMirror sealed
    : public Macad::Occt::BaseClass<::gce_MakeMirror>
{

#ifdef Include_gce_MakeMirror_h
public:
    Include_gce_MakeMirror_h
#endif

public:
    gce_MakeMirror(::gce_MakeMirror* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeMirror>( nativeInstance, true )
    {}

    gce_MakeMirror(::gce_MakeMirror& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeMirror>( &nativeInstance, false )
    {}

    property ::gce_MakeMirror* NativeInstance
    {
        ::gce_MakeMirror* get()
        {
            return static_cast<::gce_MakeMirror*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a central symmetry about a point.
    /// </summary>
    /// <param name="in]">
    /// Point center point
    /// </param>
    gce_MakeMirror(Macad::Occt::Pnt Point);
    /// <summary>
    /// Constructs an axial symmetry about an axis.
    /// </summary>
    /// <param name="in]">
    /// Axis mirror axis
    /// </param>
    gce_MakeMirror(Macad::Occt::Ax1 Axis);
    /// <summary>
    /// Constructs an axial symmetry about a line.
    /// </summary>
    /// <param name="in]">
    /// Line mirror line
    /// </param>
    gce_MakeMirror(Macad::Occt::gp_Lin^ Line);
    /// <summary>
    /// Constructs an axial symmetry about an axis defined by point and direction.
    /// </summary>
    /// <param name="in]">
    /// Point point on the axis
    /// </param>
    /// <param name="in]">
    /// Direc axis direction
    /// </param>
    gce_MakeMirror(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc);
    /// <summary>
    /// Constructs a planar symmetry about a plane.
    /// </summary>
    /// <param name="in]">
    /// Plane mirror plane
    /// </param>
    gce_MakeMirror(Macad::Occt::Pln Plane);
    /// <summary>
    /// Constructs a planar symmetry about a plane.
    /// </summary>
    /// <param name="in]">
    /// Plane mirror plane
    /// </param>
    gce_MakeMirror(Macad::Occt::Ax2 Plane);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf Operator();
}; // class gce_MakeMirror

//---------------------------------------------------------------------
//  Class  gce_MakeMirror2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// symmetrical transformation in 2D space about a point
/// or axis. The result is a gp_Trsf2d transformation.
/// A MakeMirror2d object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and consulting the result.
/// </summary>
public ref class gce_MakeMirror2d sealed
    : public Macad::Occt::BaseClass<::gce_MakeMirror2d>
{

#ifdef Include_gce_MakeMirror2d_h
public:
    Include_gce_MakeMirror2d_h
#endif

public:
    gce_MakeMirror2d(::gce_MakeMirror2d* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeMirror2d>( nativeInstance, true )
    {}

    gce_MakeMirror2d(::gce_MakeMirror2d& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeMirror2d>( &nativeInstance, false )
    {}

    property ::gce_MakeMirror2d* NativeInstance
    {
        ::gce_MakeMirror2d* get()
        {
            return static_cast<::gce_MakeMirror2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a central symmetry about a point.
    /// </summary>
    /// <param name="in]">
    /// Point center point
    /// </param>
    gce_MakeMirror2d(Macad::Occt::Pnt2d Point);
    /// <summary>
    /// Constructs an axial symmetry about an axis.
    /// </summary>
    /// <param name="in]">
    /// Axis mirror axis
    /// </param>
    gce_MakeMirror2d(Macad::Occt::Ax2d Axis);
    /// <summary>
    /// Constructs an axial symmetry about a line.
    /// </summary>
    /// <param name="in]">
    /// Line mirror line
    /// </param>
    gce_MakeMirror2d(Macad::Occt::gp_Lin2d^ Line);
    /// <summary>
    /// Constructs an axial symmetry about an axis defined by point and direction.
    /// </summary>
    /// <param name="in]">
    /// Point point on the axis
    /// </param>
    /// <param name="in]">
    /// Direc axis direction
    /// </param>
    gce_MakeMirror2d(Macad::Occt::Pnt2d Point, Macad::Occt::Dir2d Direc);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf2d Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf2d Operator();
}; // class gce_MakeMirror2d

//---------------------------------------------------------------------
//  Class  gce_MakeParab
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for `gp_Parab`.
/// The parabola is infinite in the parameter range ]-infinite, +infinite[.
/// The vertex is the `Location` point of the local coordinate system.
/// 
/// The `XDirection` and `YDirection` define the parabola plane.
/// 
/// The `XAxis` (`Location`, `XDirection`) is the symmetry axis and is oriented
/// from the vertex to the focus.
/// 
/// The `YAxis` (`Location`, `YDirection`) is parallel to the directrix.
/// 
/// The equation in the local coordinate system is:
/// `Y**2 = (2*P) * X`, where `P` is the parameter
/// (distance between focus and directrix).
/// The focal length `F = P / 2` is the distance from vertex to focus.
/// 
/// Supported constructions:
/// - from local coordinate system and focal length;
/// - from directrix and focus.
/// </summary>
public ref class gce_MakeParab sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeParab_h
public:
    Include_gce_MakeParab_h
#endif

public:
    gce_MakeParab(::gce_MakeParab* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeParab(::gce_MakeParab& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeParab* NativeInstance
    {
        ::gce_MakeParab* get()
        {
            return static_cast<::gce_MakeParab*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a parabola from local coordinate system and focal length.
    /// </summary>
    /// <param name="in]">
    /// A2 local coordinate system of the parabola
    /// </param>
    /// <param name="in]">
    /// Focal focal length
    /// </param>
    /// @note `TheError` is set to `gce_NullFocusLength` if `Focal < 0.0`.
    gce_MakeParab(Macad::Occt::Ax2 A2, double Focal);
    /// <summary>
    /// Creates a parabola from directrix and focus.
    /// </summary>
    /// <param name="in]">
    /// D directrix of the parabola
    /// </param>
    /// <param name="in]">
    /// F focus point of the parabola
    /// </param>
    gce_MakeParab(Macad::Occt::Ax1 D, Macad::Occt::Pnt F);
    /// <summary>
    /// Returns the constructed parabola.
    /// </summary>
    /// <returns>
    /// resulting parabola
    /// </returns>
    /// @throw StdFail_NotDone if construction has failed
    Macad::Occt::gp_Parab^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting parabola
    /// </returns>
    Macad::Occt::gp_Parab^ Operator();
}; // class gce_MakeParab

//---------------------------------------------------------------------
//  Class  gce_MakeParab2d
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for `gp_Parab2d`.
/// The parabola is infinite and represented in a local 2D coordinate system.
/// The `XAxis` is the symmetry axis directed from vertex to focus,
/// and the `YAxis` is parallel to the directrix.
/// The equation in local coordinates is:
/// `Y**2 = (2*P) * X`, where `P` is the distance between focus and directrix.
/// The focal length `F = P / 2` is the distance from vertex to focus.
/// 
/// Supported constructions:
/// - from symmetry axis and focal length;
/// - from full axis system and focal length;
/// - from directrix and focus;
/// - from focus and vertex.
/// </summary>
public ref class gce_MakeParab2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeParab2d_h
public:
    Include_gce_MakeParab2d_h
#endif

public:
    gce_MakeParab2d(::gce_MakeParab2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeParab2d(::gce_MakeParab2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeParab2d* NativeInstance
    {
        ::gce_MakeParab2d* get()
        {
            return static_cast<::gce_MakeParab2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a parabola from symmetry axis and focal length.
    /// </summary>
    /// <param name="in]">
    /// MirrorAxis symmetry axis of the parabola
    /// </param>
    /// <param name="in]">
    /// Focal focal length
    /// </param>
    /// <param name="in]">
    /// Sense orientation of parametrization
    /// </param>
    /// @note `Focal = 0` is accepted.
    /// @note `TheError` is set to `gce_NullFocusLength` if `Focal < 0.0`.
    gce_MakeParab2d(Macad::Occt::Ax2d MirrorAxis, double Focal, bool Sense);
    /// <summary>
    /// Creates a parabola from symmetry axis and focal length.
    /// </summary>
    /// <param name="in]">
    /// MirrorAxis symmetry axis of the parabola
    /// </param>
    /// <param name="in]">
    /// Focal focal length
    /// </param>
    /// <param name="in]">
    /// Sense orientation of parametrization
    /// </param>
    /// @note `Focal = 0` is accepted.
    /// @note `TheError` is set to `gce_NullFocusLength` if `Focal < 0.0`.
    gce_MakeParab2d(Macad::Occt::Ax2d MirrorAxis, double Focal);
    /// <summary>
    /// Creates a parabola from full local coordinate system and focal length.
    /// </summary>
    /// <param name="in]">
    /// A local coordinate system of the parabola
    /// </param>
    /// <param name="in]">
    /// Focal focal length
    /// </param>
    /// @note `Focal = 0` is accepted.
    /// @note `TheError` is set to `gce_NullFocusLength` if `Focal < 0.0`.
    gce_MakeParab2d(Macad::Occt::Ax22d A, double Focal);
    /// <summary>
    /// Creates a parabola from directrix and focus.
    /// </summary>
    /// <param name="in]">
    /// D directrix of the parabola
    /// </param>
    /// <param name="in]">
    /// F focus point of the parabola
    /// </param>
    /// <param name="in]">
    /// Sense orientation of parametrization
    /// </param>
    gce_MakeParab2d(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F, bool Sense);
    /// <summary>
    /// Creates a parabola from directrix and focus.
    /// </summary>
    /// <param name="in]">
    /// D directrix of the parabola
    /// </param>
    /// <param name="in]">
    /// F focus point of the parabola
    /// </param>
    /// <param name="in]">
    /// Sense orientation of parametrization
    /// </param>
    gce_MakeParab2d(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F);
    /// <summary>
    /// Creates a parabola from focus and vertex.
    /// </summary>
    /// <param name="in]">
    /// S1 focus point
    /// </param>
    /// <param name="in]">
    /// Center vertex point
    /// </param>
    /// <param name="in]">
    /// Sense orientation of parametrization
    /// </param>
    /// @note The class does not prevent zero focal distance.
    /// @note `TheError` is set to `gce_NullAxis` if `S1` and `Center` are coincident.
    gce_MakeParab2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d Center, bool Sense);
    /// <summary>
    /// Creates a parabola from focus and vertex.
    /// </summary>
    /// <param name="in]">
    /// S1 focus point
    /// </param>
    /// <param name="in]">
    /// Center vertex point
    /// </param>
    /// <param name="in]">
    /// Sense orientation of parametrization
    /// </param>
    /// @note The class does not prevent zero focal distance.
    /// @note `TheError` is set to `gce_NullAxis` if `S1` and `Center` are coincident.
    gce_MakeParab2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d Center);
    /// <summary>
    /// Returns the constructed parabola.
    /// </summary>
    /// <returns>
    /// resulting parabola
    /// </returns>
    /// @throw StdFail_NotDone if construction has failed
    Macad::Occt::gp_Parab2d^ Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting parabola
    /// </returns>
    Macad::Occt::gp_Parab2d^ Operator();
}; // class gce_MakeParab2d

//---------------------------------------------------------------------
//  Class  gce_MakePln
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for `gp_Pln`.
/// Supported constructions include:
/// - plane from axis placement or point+normal;
/// - plane from cartesian equation;
/// - plane parallel to another plane through point or at signed distance;
/// - plane through two or three points;
/// - plane through axis location normal to axis direction.
/// </summary>
/// @note A plane is positioned by local coordinate system (`gp_Ax3`):
/// - `Location` is the origin,
/// - main direction is the plane normal,
/// - `XDirection` and `YDirection` define in-plane axes.
public ref class gce_MakePln sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakePln_h
public:
    Include_gce_MakePln_h
#endif

public:
    gce_MakePln(::gce_MakePln* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakePln(::gce_MakePln& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakePln* NativeInstance
    {
        ::gce_MakePln* get()
        {
            return static_cast<::gce_MakePln*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The coordinate system of the plane is defined with the axis
    /// placement A2.
    /// The "Direction" of A2 defines the normal to the plane.
    /// The "Location" of A2 defines the location (origin) of the plane.
    /// The "XDirection" and "YDirection" of A2 define the "XAxis" and
    /// the "YAxis" of the plane used to parametrize the plane.
    /// </summary>
    /// <param name="in]">
    /// A2 local coordinate system
    /// </param>
    gce_MakePln(Macad::Occt::Ax2 A2);
    /// <summary>
    /// Creates a plane with the "Location" point <P>
    /// and the normal direction <V>.
    /// </summary>
    /// <param name="in]">
    /// P point
    /// </param>
    /// <param name="in]">
    /// V direction vector
    /// </param>
    gce_MakePln(Macad::Occt::Pnt P, Macad::Occt::Dir V);
    /// <summary>
    /// Creates a plane from its cartesian equation :
    /// A * X + B * Y + C * Z + D = 0.0
    /// 
    /// </summary>
    /// @note Construction fails with `gce_BadEquation` if
    /// `A*A + B*B + C*C <= gp::Resolution()`.
    /// <param name="in]">
    /// A equation coefficient A
    /// </param>
    /// <param name="in]">
    /// B equation coefficient B
    /// </param>
    /// <param name="in]">
    /// C equation coefficient C
    /// </param>
    /// <param name="in]">
    /// D equation constant term
    /// </param>
    gce_MakePln(double A, double B, double C, double D);
    /// <summary>
    /// Creates a plane parallel to input plane and passing through a point.
    /// </summary>
    /// <param name="in]">
    /// Pln source plane
    /// </param>
    /// <param name="in]">
    /// Point reference point
    /// </param>
    gce_MakePln(Macad::Occt::Pln Pln, Macad::Occt::Pnt Point);
    /// <summary>
    /// Creates a plane parallel to input plane at signed distance.
    /// </summary>
    /// @note Positive `Dist` shifts along the plane normal, negative in opposite direction.
    /// <param name="in]">
    /// Pln source plane
    /// </param>
    /// <param name="in]">
    /// Dist signed distance
    /// </param>
    gce_MakePln(Macad::Occt::Pln Pln, double Dist);
    /// <summary>
    /// Creates a plane through three points.
    /// </summary>
    /// @note Construction fails with `gce_ColinearPoints` if points are collinear.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    /// <param name="in]">
    /// P3 third point
    /// </param>
    gce_MakePln(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
    /// <summary>
    /// Creates a plane through `P1`, normal to direction (`P1`,`P2`).
    /// </summary>
    /// @note Construction fails with `gce_ConfusedPoints` if `P1` and `P2` coincide.
    /// <param name="in]">
    /// P1 first point
    /// </param>
    /// <param name="in]">
    /// P2 second point
    /// </param>
    gce_MakePln(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Make a pln passing through the location of <Axis>and
    /// normal to the Direction of <Axis>.
    /// </summary>
    /// @note This constructor always succeeds for valid `Axis`.
    /// <param name="in]">
    /// Axis axis definition
    /// </param>
    gce_MakePln(Macad::Occt::Ax1 Axis);
    /// <summary>
    /// Returns the constructed plane.
    /// Exceptions StdFail_NotDone if no plane is constructed.
    /// </summary>
    /// <returns>
    /// resulting plane
    /// </returns>
    Macad::Occt::Pln Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting object
    /// </returns>
    Macad::Occt::Pln Operator();
}; // class gce_MakePln

//---------------------------------------------------------------------
//  Class  gce_MakeRotation
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// rotation in 3D space. The result is a gp_Trsf transformation.
/// A MakeRotation object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeRotation sealed
    : public Macad::Occt::BaseClass<::gce_MakeRotation>
{

#ifdef Include_gce_MakeRotation_h
public:
    Include_gce_MakeRotation_h
#endif

public:
    gce_MakeRotation(::gce_MakeRotation* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeRotation>( nativeInstance, true )
    {}

    gce_MakeRotation(::gce_MakeRotation& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeRotation>( &nativeInstance, false )
    {}

    property ::gce_MakeRotation* NativeInstance
    {
        ::gce_MakeRotation* get()
        {
            return static_cast<::gce_MakeRotation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a rotation around the axis defined by a line.
    /// </summary>
    /// <param name="in]">
    /// Line rotation axis
    /// </param>
    /// <param name="in]">
    /// Angle rotation angle in radians
    /// </param>
    gce_MakeRotation(Macad::Occt::gp_Lin^ Line, double Angle);
    /// <summary>
    /// Constructs a rotation around an axis.
    /// </summary>
    /// <param name="in]">
    /// Axis rotation axis
    /// </param>
    /// <param name="in]">
    /// Angle rotation angle in radians
    /// </param>
    gce_MakeRotation(Macad::Occt::Ax1 Axis, double Angle);
    /// <summary>
    /// Constructs a rotation around an axis defined by point and direction.
    /// </summary>
    /// <param name="in]">
    /// Point point on the axis
    /// </param>
    /// <param name="in]">
    /// Direc axis direction
    /// </param>
    /// <param name="in]">
    /// Angle rotation angle in radians
    /// </param>
    gce_MakeRotation(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc, double Angle);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf Operator();
}; // class gce_MakeRotation

//---------------------------------------------------------------------
//  Class  gce_MakeRotation2d
//---------------------------------------------------------------------
/// <summary>
/// Implements an elementary construction algorithm for
/// a rotation in 2D space. The result is a gp_Trsf2d transformation.
/// A MakeRotation2d object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeRotation2d sealed
    : public Macad::Occt::BaseClass<::gce_MakeRotation2d>
{

#ifdef Include_gce_MakeRotation2d_h
public:
    Include_gce_MakeRotation2d_h
#endif

public:
    gce_MakeRotation2d(::gce_MakeRotation2d* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeRotation2d>( nativeInstance, true )
    {}

    gce_MakeRotation2d(::gce_MakeRotation2d& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeRotation2d>( &nativeInstance, false )
    {}

    property ::gce_MakeRotation2d* NativeInstance
    {
        ::gce_MakeRotation2d* get()
        {
            return static_cast<::gce_MakeRotation2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a rotation around a point in 2D.
    /// </summary>
    /// <param name="in]">
    /// Point rotation center
    /// </param>
    /// <param name="in]">
    /// Angle rotation angle in radians
    /// </param>
    gce_MakeRotation2d(Macad::Occt::Pnt2d Point, double Angle);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf2d Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf2d Operator();
}; // class gce_MakeRotation2d

//---------------------------------------------------------------------
//  Class  gce_MakeScale
//---------------------------------------------------------------------
/// <summary>
/// Implements an elementary construction algorithm for
/// a scaling transformation in 3D space. The result is a gp_Trsf transformation.
/// A MakeScale object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeScale sealed
    : public Macad::Occt::BaseClass<::gce_MakeScale>
{

#ifdef Include_gce_MakeScale_h
public:
    Include_gce_MakeScale_h
#endif

public:
    gce_MakeScale(::gce_MakeScale* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeScale>( nativeInstance, true )
    {}

    gce_MakeScale(::gce_MakeScale& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeScale>( &nativeInstance, false )
    {}

    property ::gce_MakeScale* NativeInstance
    {
        ::gce_MakeScale* get()
        {
            return static_cast<::gce_MakeScale*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a scaling transformation.
    /// </summary>
    /// <param name="in]">
    /// Point center of scaling
    /// </param>
    /// <param name="in]">
    /// Scale scale factor
    /// </param>
    gce_MakeScale(Macad::Occt::Pnt Point, double Scale);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf Operator();
}; // class gce_MakeScale

//---------------------------------------------------------------------
//  Class  gce_MakeScale2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements an elementary construction algorithm for
/// a scaling transformation in 2D space. The result is a gp_Trsf2d transformation.
/// A MakeScale2d object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeScale2d sealed
    : public Macad::Occt::BaseClass<::gce_MakeScale2d>
{

#ifdef Include_gce_MakeScale2d_h
public:
    Include_gce_MakeScale2d_h
#endif

public:
    gce_MakeScale2d(::gce_MakeScale2d* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeScale2d>( nativeInstance, true )
    {}

    gce_MakeScale2d(::gce_MakeScale2d& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeScale2d>( &nativeInstance, false )
    {}

    property ::gce_MakeScale2d* NativeInstance
    {
        ::gce_MakeScale2d* get()
        {
            return static_cast<::gce_MakeScale2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a scaling transformation.
    /// </summary>
    /// <param name="in]">
    /// Point center of scaling
    /// </param>
    /// <param name="in]">
    /// Scale scale factor
    /// </param>
    gce_MakeScale2d(Macad::Occt::Pnt2d Point, double Scale);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf2d Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf2d Operator();
}; // class gce_MakeScale2d

//---------------------------------------------------------------------
//  Class  gce_MakeTranslation
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// translation in 3D space. The result is a gp_Trsf transformation.
/// A MakeTranslation object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeTranslation sealed
    : public Macad::Occt::BaseClass<::gce_MakeTranslation>
{

#ifdef Include_gce_MakeTranslation_h
public:
    Include_gce_MakeTranslation_h
#endif

public:
    gce_MakeTranslation(::gce_MakeTranslation* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeTranslation>( nativeInstance, true )
    {}

    gce_MakeTranslation(::gce_MakeTranslation& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeTranslation>( &nativeInstance, false )
    {}

    property ::gce_MakeTranslation* NativeInstance
    {
        ::gce_MakeTranslation* get()
        {
            return static_cast<::gce_MakeTranslation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a translation from a vector.
    /// </summary>
    /// <param name="in]">
    /// Vect translation vector
    /// </param>
    gce_MakeTranslation(Macad::Occt::Vec Vect);
    /// <summary>
    /// Constructs a translation from two points.
    /// </summary>
    /// <param name="in]">
    /// Point1 start point
    /// </param>
    /// <param name="in]">
    /// Point2 end point
    /// </param>
    gce_MakeTranslation(Macad::Occt::Pnt Point1, Macad::Occt::Pnt Point2);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf Operator();
}; // class gce_MakeTranslation

//---------------------------------------------------------------------
//  Class  gce_MakeTranslation2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// translation in 2D space. The result is a gp_Trsf2d transformation.
/// A MakeTranslation2d object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeTranslation2d sealed
    : public Macad::Occt::BaseClass<::gce_MakeTranslation2d>
{

#ifdef Include_gce_MakeTranslation2d_h
public:
    Include_gce_MakeTranslation2d_h
#endif

public:
    gce_MakeTranslation2d(::gce_MakeTranslation2d* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeTranslation2d>( nativeInstance, true )
    {}

    gce_MakeTranslation2d(::gce_MakeTranslation2d& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeTranslation2d>( &nativeInstance, false )
    {}

    property ::gce_MakeTranslation2d* NativeInstance
    {
        ::gce_MakeTranslation2d* get()
        {
            return static_cast<::gce_MakeTranslation2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a translation from a vector.
    /// </summary>
    /// <param name="in]">
    /// Vect translation vector
    /// </param>
    gce_MakeTranslation2d(Macad::Occt::Vec2d Vect);
    /// <summary>
    /// Constructs a translation from two points.
    /// </summary>
    /// <param name="in]">
    /// Point1 start point
    /// </param>
    /// <param name="in]">
    /// Point2 end point
    /// </param>
    gce_MakeTranslation2d(Macad::Occt::Pnt2d Point1, Macad::Occt::Pnt2d Point2);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf2d Value();
    /// <summary>
    /// Alias for Value() returning a copy.
    /// </summary>
    /// <returns>
    /// resulting transformation
    /// </returns>
    Macad::Occt::Trsf2d Operator();
}; // class gce_MakeTranslation2d

}; // namespace Occt
}; // namespace Macad
