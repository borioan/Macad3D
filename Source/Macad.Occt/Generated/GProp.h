// Generated wrapper code for package GProp

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  GProp_ValueType
//---------------------------------------------------------------------
/// <summary>
/// Algorithms:
/// </summary>
public enum class GProp_ValueType
{
    Mass = 0,
    CenterMassX = 1,
    CenterMassY = 2,
    CenterMassZ = 3,
    InertiaXX = 4,
    InertiaYY = 5,
    InertiaZZ = 6,
    InertiaXY = 7,
    InertiaXZ = 8,
    InertiaYZ = 9,
    Unknown = 10
}; // enum  class GProp_ValueType

//---------------------------------------------------------------------
//  Class  GProp
//---------------------------------------------------------------------
/// <summary>
/// This package defines algorithms to compute the global properties
/// of a set of points, a curve, a surface, a solid (non infinite
/// region of space delimited with geometric entities), a compound
/// geometric system (heterogeneous composition of the previous
/// entities).
/// 
/// Global properties are:
/// . length, area, volume,
/// . centre of mass,
/// . axis of inertia,
/// . moments of inertia,
/// . radius of gyration.
/// 
/// It provides also a class to compile the average point or
/// line of a set of points.
/// </summary>
public ref class GProp sealed
    : public Macad::Occt::BaseClass<::GProp>
{

#ifdef Include_GProp_h
public:
    Include_GProp_h
#endif

public:
    GProp(::GProp* nativeInstance)
        : Macad::Occt::BaseClass<::GProp>( nativeInstance, true )
    {}

    GProp(::GProp& nativeInstance)
        : Macad::Occt::BaseClass<::GProp>( &nativeInstance, false )
    {}

    property ::GProp* NativeInstance
    {
        ::GProp* get()
        {
            return static_cast<::GProp*>(_NativeInstance);
        }
    }

public:
    GProp();
    /// <summary>
    /// methods of package
    /// Computes the matrix Operator, referred to as the
    /// "Huyghens Operator" of a geometric system at the
    /// point Q of the space, using the following data:
    /// - Mass, i.e. the mass of the system,
    /// - G, the center of mass of the system.
    /// The "Huyghens Operator" is used to compute
    /// Inertia/Q, the matrix of inertia of the system at
    /// the point Q using Huyghens' theorem:
    /// Inertia/Q = Inertia/G + HOperator (Q, G, Mass)
    /// where Inertia/G is the matrix of inertia of the
    /// system relative to its center of mass as returned by
    /// the function MatrixOfInertia on any GProp_GProps object.
    /// </summary>
    static void HOperator(Macad::Occt::Pnt G, Macad::Occt::Pnt Q, double Mass, Macad::Occt::Mat% Operator);
}; // class GProp

//---------------------------------------------------------------------
//  Class  GProp_PrincipalProps
//---------------------------------------------------------------------
/// <summary>
/// A framework to present the principal properties of
/// inertia of a system of which global properties are
/// computed by a GProp_GProps object.
/// There is always a set of axes for which the
/// products of inertia of a geometric system are equal
/// to 0; i.e. the matrix of inertia of the system is
/// diagonal. These axes are the principal axes of
/// inertia. Their origin is coincident with the center of
/// mass of the system. The associated moments are
/// called the principal moments of inertia.
/// This sort of presentation object is created, filled and
/// returned by the function PrincipalProperties for
/// any GProp_GProps object, and can be queried to access the result.
/// Note: The system whose principal properties of
/// inertia are returned by this framework is referred to
/// as the current system. The current system,
/// however, is retained neither by this presentation
/// framework nor by the GProp_GProps object which activates it.
/// </summary>
public ref class GProp_PrincipalProps sealed
    : public Macad::Occt::BaseClass<::GProp_PrincipalProps>
{

#ifdef Include_GProp_PrincipalProps_h
public:
    Include_GProp_PrincipalProps_h
#endif

public:
    GProp_PrincipalProps(::GProp_PrincipalProps* nativeInstance)
        : Macad::Occt::BaseClass<::GProp_PrincipalProps>( nativeInstance, true )
    {}

    GProp_PrincipalProps(::GProp_PrincipalProps& nativeInstance)
        : Macad::Occt::BaseClass<::GProp_PrincipalProps>( &nativeInstance, false )
    {}

    property ::GProp_PrincipalProps* NativeInstance
    {
        ::GProp_PrincipalProps* get()
        {
            return static_cast<::GProp_PrincipalProps*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// creates an undefined PrincipalProps.
    /// </summary>
    GProp_PrincipalProps();
    /// <summary>
    /// returns true if the geometric system has an axis of symmetry.
    /// For comparing moments relative tolerance 1.e-10 is used.
    /// Usually it is enough for objects, restricted by faces with
    /// analytical geometry.
    /// </summary>
    bool HasSymmetryAxis();
    /// <summary>
    /// returns true if the geometric system has an axis of symmetry.
    /// aTol is relative tolerance for checking equality of moments
    /// If aTol == 0, relative tolerance is ~ 1.e-16 (Epsilon(I))
    /// </summary>
    bool HasSymmetryAxis(double aTol);
    /// <summary>
    /// returns true if the geometric system has a point of symmetry.
    /// For comparing moments relative tolerance 1.e-10 is used.
    /// Usually it is enough for objects, restricted by faces with
    /// analytical geometry.
    /// </summary>
    bool HasSymmetryPoint();
    /// <summary>
    /// returns true if the geometric system has a point of symmetry.
    /// aTol is relative tolerance for checking equality of moments
    /// If aTol == 0, relative tolerance is ~ 1.e-16 (Epsilon(I))
    /// </summary>
    bool HasSymmetryPoint(double aTol);
    /// <summary>
    /// Ixx, Iyy and Izz return the principal moments of inertia
    /// in the current system.
    /// Notes :
    /// - If the current system has an axis of symmetry, two
    /// of the three values Ixx, Iyy and Izz are equal. They
    /// indicate which eigen vectors define an infinity of
    /// axes of principal inertia.
    /// - If the current system has a center of symmetry, Ixx,
    /// Iyy and Izz are equal.
    /// </summary>
    void Moments(double% Ixx, double% Iyy, double% Izz);
    /// <summary>
    /// returns the first axis of inertia.
    /// 
    /// if the system has a point of symmetry there is an infinity of
    /// solutions. It is not possible to defines the three axis of
    /// inertia.
    /// </summary>
    Macad::Occt::Vec FirstAxisOfInertia();
    /// <summary>
    /// returns the second axis of inertia.
    /// 
    /// if the system has a point of symmetry or an axis of symmetry the
    /// second and the third axis of symmetry are undefined.
    /// </summary>
    Macad::Occt::Vec SecondAxisOfInertia();
    /// <summary>
    /// returns the third axis of inertia.
    /// This and the above functions return the first, second or third eigen vector of the
    /// matrix of inertia of the current system.
    /// The first, second and third principal axis of inertia
    /// pass through the center of mass of the current
    /// system. They are respectively parallel to these three eigen vectors.
    /// Note that:
    /// - If the current system has an axis of symmetry, any
    /// axis is an axis of principal inertia if it passes
    /// through the center of mass of the system, and runs
    /// parallel to a linear combination of the two eigen
    /// vectors of the matrix of inertia, corresponding to the
    /// two eigen values which are equal. If the current
    /// system has a center of symmetry, any axis passing
    /// through the center of mass of the system is an axis
    /// of principal inertia. Use the functions
    /// HasSymmetryAxis and HasSymmetryPoint to
    /// check these particular cases, where the returned
    /// eigen vectors define an infinity of principal axis of inertia.
    /// - The Moments function can be used to know which
    /// of the three eigen vectors corresponds to the two
    /// eigen values which are equal.
    /// 
    /// if the system has a point of symmetry or an axis of symmetry the
    /// second and the third axis of symmetry are undefined.
    /// </summary>
    Macad::Occt::Vec ThirdAxisOfInertia();
    /// <summary>
    /// Returns the principal radii of gyration Rxx, Ryy
    /// and Rzz are the radii of gyration of the current
    /// system about its three principal axes of inertia.
    /// Note that:
    /// - If the current system has an axis of symmetry,
    /// two of the three values Rxx, Ryy and Rzz are equal.
    /// - If the current system has a center of symmetry,
    /// Rxx, Ryy and Rzz are equal.
    /// </summary>
    void RadiusOfGyration(double% Rxx, double% Ryy, double% Rzz);
}; // class GProp_PrincipalProps

//---------------------------------------------------------------------
//  Class  GProp_GProps
//---------------------------------------------------------------------
/// <summary>
/// Implements a general mechanism to compute the global properties of
/// a "compound geometric system" in 3D space by composition of the
/// global properties of elementary geometric entities such as a curve,
/// surface, solid, or set of points. It is also possible to compose
/// the properties of several "compound geometric systems".
/// 
/// To compute the global properties of a compound geometric system:
/// - declare a GProp_GProps using a constructor which initializes the
/// instance and defines the location point used to compute the
/// inertia,
/// - compose the global properties of the geometric components into
/// the system using the method Add().
/// 
/// To compute the global properties of the geometric components of
/// the system, use the services of the following frameworks:
/// - GProp_PGProps for a set of points,
/// - CGProps       for a curve,
/// - SGProps       for a surface,
/// - VGProps       for a "solid".
/// The CGProps, SGProps and VGProps frameworks are generic and must
/// be instantiated for the application (see BRepGProp / GeomGProp).
/// 
/// The global properties computed are:
/// - the dimension (length, area or volume),
/// - the mass,
/// - the centre of mass,
/// - the moments of inertia (static moments and quadratic moments),
/// - the moment about an axis,
/// - the radius of gyration about an axis,
/// - the principal properties of inertia
/// (see GProp_PrincipalProps):
/// - the principal moments,
/// - the principal axes of inertia,
/// - the principal radii of gyration.
/// 
/// Example:
/// </summary>
/// @code
/// // Declares the GProps; the absolute origin (0, 0, 0) is used as the
/// // default reference point to compute the centre of mass.
/// GProp_GProps aSystem;
/// 
/// // Computes the inertia of a 3D curve.
/// Your_CGProps aComponent1(theCurve, ...);
/// 
/// // Computes the inertia of two surfaces.
/// Your_SGProps aComponent2(theSurface1, ...);
/// Your_SGProps aComponent3(theSurface2, ...);
/// 
/// // Composes the global properties of components 1, 2, 3. A density
/// // can be associated with the components; it defaults to 1.0.
/// const double aDensity1 = 2.0;
/// const double aDensity2 = 3.0;
/// aSystem.Add(aComponent1, aDensity1);
/// aSystem.Add(aComponent2, aDensity2);
/// aSystem.Add(aComponent3);
/// 
/// // Returns the centre of mass of the system in the absolute
/// // Cartesian coordinate system.
/// const gp_Pnt aG = aSystem.CentreOfMass();
/// 
/// // Computes the principal properties of inertia of the system.
/// const GProp_PrincipalProps aPp = aSystem.PrincipalProperties();
/// 
/// // Returns the principal moments and radii of gyration.
/// double aIxx, aIyy, aIzz, aRxx, aRyy, aRzz;
/// aPp.Moments(aIxx, aIyy, aIzz);
/// aPp.RadiusOfGyration(aRxx, aRyy, aRzz);
/// @endcode
public ref class GProp_GProps
    : public Macad::Occt::BaseClass<::GProp_GProps>
{

#ifdef Include_GProp_GProps_h
public:
    Include_GProp_GProps_h
#endif

protected:
    GProp_GProps(InitMode init)
        : Macad::Occt::BaseClass<::GProp_GProps>( init )
    {}

public:
    GProp_GProps(::GProp_GProps* nativeInstance)
        : Macad::Occt::BaseClass<::GProp_GProps>( nativeInstance, true )
    {}

    GProp_GProps(::GProp_GProps& nativeInstance)
        : Macad::Occt::BaseClass<::GProp_GProps>( &nativeInstance, false )
    {}

    property ::GProp_GProps* NativeInstance
    {
        ::GProp_GProps* get()
        {
            return static_cast<::GProp_GProps*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The origin (0, 0, 0) of the absolute Cartesian coordinate system
    /// is used to compute the global properties.
    /// </summary>
    GProp_GProps();
    /// <summary>
    /// The point SystemLocation is used to compute the global properties
    /// of the system. For greater accuracy, define this point close to
    /// the location of the system; for example a point near the centre
    /// of mass of the system.
    /// 
    /// At initialization the framework is empty: it retains no
    /// dimensional information such as mass or inertia. It is, however,
    /// ready to bring together global properties of various other
    /// systems whose global properties have already been computed using
    /// another framework. To do this, use Add() to define the components
    /// of the system, once per component, and then use the interrogation
    /// functions to access the computed values.
    /// 
    /// </summary>
    /// <param name="in]">
    /// SystemLocation reference point of the system used for
    /// inertia accumulation
    /// </param>
    GProp_GProps(Macad::Occt::Pnt SystemLocation);
    /// <summary>
    /// Computes the principal properties of inertia of the current
    /// system. There is always a set of axes for which the products of
    /// inertia of a geometric system are equal to 0 - i.e. the matrix of
    /// inertia of the system is diagonal. These axes are the principal
    /// axes of inertia; their origin coincides with the centre of mass
    /// of the system. The associated moments are called the principal
    /// moments of inertia.
    /// 
    /// This function computes the eigen values and eigen vectors of the
    /// matrix of inertia of the system. Results are stored in a
    /// GProp_PrincipalProps framework which can be queried to access
    /// the value sought.
    /// </summary>
    Macad::Occt::GProp_PrincipalProps^ PrincipalProperties();
    /// <summary>
    /// Either:
    /// - initializes the global properties retained by this framework
    /// from those retained by the framework Item, or
    /// - brings together the global properties retained by this
    /// framework with those retained by the framework Item.
    /// 
    /// The value Density (1.0 by default) is used as the density of the
    /// system analysed by Item. Sometimes the density has already been
    /// accounted for at construction time of Item - for example when
    /// Item is a GProp_PGProps framework built to compute the global
    /// properties of a set of weighted points, or another GProp_GProps
    /// object that already retains composite global properties. In these
    /// cases the real density was already taken into account at
    /// construction of Item. Note that this is not checked: if the
    /// density of parts of the system is taken into account two or more
    /// times, the result of the computation will be wrong.
    /// 
    /// Notes:
    /// - The reference point of Item may differ from the reference point
    /// of this framework. Huygens' theorem is applied automatically to
    /// transfer inertia values to the reference point of this
    /// framework.
    /// - Add() is used once per component of the system. After all
    /// components are composed, the interrogation functions return
    /// values for the system as a whole.
    /// - The system whose global properties have been brought together
    /// by this framework is referred to as the "current system". The
    /// current system itself is not retained: only its global
    /// properties are.
    /// 
    /// </summary>
    /// <param name="in]">
    /// Item    framework holding the global properties of the
    /// component to compose
    /// </param>
    /// <param name="in]">
    /// Density density of the component (default 1.0)
    /// </param>
    /// @throws Standard_DomainError if Density is less than or equal to
    /// gp::Resolution().
    void Add(Macad::Occt::GProp_GProps^ Item, double Density);
    /// <summary>
    /// Either:
    /// - initializes the global properties retained by this framework
    /// from those retained by the framework Item, or
    /// - brings together the global properties retained by this
    /// framework with those retained by the framework Item.
    /// 
    /// The value Density (1.0 by default) is used as the density of the
    /// system analysed by Item. Sometimes the density has already been
    /// accounted for at construction time of Item - for example when
    /// Item is a GProp_PGProps framework built to compute the global
    /// properties of a set of weighted points, or another GProp_GProps
    /// object that already retains composite global properties. In these
    /// cases the real density was already taken into account at
    /// construction of Item. Note that this is not checked: if the
    /// density of parts of the system is taken into account two or more
    /// times, the result of the computation will be wrong.
    /// 
    /// Notes:
    /// - The reference point of Item may differ from the reference point
    /// of this framework. Huygens' theorem is applied automatically to
    /// transfer inertia values to the reference point of this
    /// framework.
    /// - Add() is used once per component of the system. After all
    /// components are composed, the interrogation functions return
    /// values for the system as a whole.
    /// - The system whose global properties have been brought together
    /// by this framework is referred to as the "current system". The
    /// current system itself is not retained: only its global
    /// properties are.
    /// 
    /// </summary>
    /// <param name="in]">
    /// Item    framework holding the global properties of the
    /// component to compose
    /// </param>
    /// <param name="in]">
    /// Density density of the component (default 1.0)
    /// </param>
    /// @throws Standard_DomainError if Density is less than or equal to
    /// gp::Resolution().
    void Add(Macad::Occt::GProp_GProps^ Item);
    /// <summary>
    /// Returns the mass of the current system.
    /// 
    /// If no density has been attached to the components of the current
    /// system, the returned value corresponds to:
    /// - the total length of the edges of the current system if this
    /// framework retains only linear properties (for example, when
    /// using only LinearProperties() to combine properties of lines
    /// from shapes), or
    /// - the total area of the faces of the current system if this
    /// framework retains only surface properties (for example, when
    /// using only SurfaceProperties() to combine properties of
    /// surfaces from shapes), or
    /// - the total volume of the solids of the current system if this
    /// framework retains only volume properties (for example, when
    /// using only VolumeProperties() to combine properties of volumes
    /// from solids).
    /// 
    /// </summary>
    /// @warning A length, an area or a volume is computed in the current
    /// unit system. The mass of a single object is its length,
    /// area or volume multiplied by its density. Be consistent
    /// with respect to the units used.
    double Mass();
    /// <summary>
    /// Returns the centre of mass of the current system. With a uniform
    /// gravitational field this is also the centre of gravity. The
    /// coordinates returned for the centre of mass are expressed in the
    /// absolute Cartesian coordinate system.
    /// </summary>
    Macad::Occt::Pnt CentreOfMass();
    /// <summary>
    /// Returns the matrix of inertia. It is a symmetric matrix whose
    /// coefficients are the quadratic moments of inertia:
    /// </summary>
    /// @verbatim
    /// | Ixx  Ixy  Ixz |
    /// matrix = | Ixy  Iyy  Iyz |
    /// | Ixz  Iyz  Izz |
    /// @endverbatim
    /// Ixx, Iyy, Izz are the moments of inertia; Ixy, Ixz, Iyz are the
    /// products of inertia.
    /// 
    /// The matrix of inertia is returned in the central coordinate
    /// system (G, Gx, Gy, Gz), where G is the centre of mass of the
    /// system and Gx, Gy, Gz are parallel to the X(1, 0, 0), Y(0, 1, 0)
    /// and Z(0, 0, 1) directions of the absolute Cartesian coordinate
    /// system. To compute the matrix of inertia at another location use
    /// GProp::HOperator() (Huygens' theorem).
    Macad::Occt::Mat MatrixOfInertia();
    /// <summary>
    /// Returns the static moments of inertia of the current system -
    /// i.e. the moments of inertia about the three axes of the absolute
    /// Cartesian coordinate system.
    /// 
    /// </summary>
    /// <param name="out]">
    /// Ix static moment of inertia about X
    /// </param>
    /// <param name="out]">
    /// Iy static moment of inertia about Y
    /// </param>
    /// <param name="out]">
    /// Iz static moment of inertia about Z
    /// </param>
    void StaticMoments(double% Ix, double% Iy, double% Iz);
    /// <summary>
    /// Computes the moment of inertia of the system about the axis A.
    /// </summary>
    /// <param name="in]">
    /// A axis about which the moment of inertia is computed
    /// </param>
    double MomentOfInertia(Macad::Occt::Ax1 A);
    /// <summary>
    /// Returns the radius of gyration of the current system about the
    /// axis A.
    /// </summary>
    /// <param name="in]">
    /// A axis about which the radius of gyration is computed
    /// </param>
    double RadiusOfGyration(Macad::Occt::Ax1 A);
}; // class GProp_GProps

//---------------------------------------------------------------------
//  Class  GProp_CelGProps
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties of bounded curves in 3D space.
/// Supports elementary curves from the gp package: Lin, Circ, Elips, Parab.
/// </summary>
public ref class GProp_CelGProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_CelGProps_h
public:
    Include_GProp_CelGProps_h
#endif

public:
    GProp_CelGProps(::GProp_CelGProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    GProp_CelGProps(::GProp_CelGProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::GProp_CelGProps* NativeInstance
    {
        ::GProp_CelGProps* get()
        {
            return static_cast<::GProp_CelGProps*>(_NativeInstance);
        }
    }

public:
    GProp_CelGProps();
    GProp_CelGProps(Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt CLocation);
    GProp_CelGProps(Macad::Occt::gp_Circ^ C, double U1, double U2, Macad::Occt::Pnt CLocation);
    GProp_CelGProps(Macad::Occt::gp_Lin^ C, double U1, double U2, Macad::Occt::Pnt CLocation);
    void SetLocation(Macad::Occt::Pnt CLocation);
    void Perform(Macad::Occt::gp_Circ^ C, double U1, double U2);
    void Perform(Macad::Occt::gp_Lin^ C, double U1, double U2);
}; // class GProp_CelGProps

//---------------------------------------------------------------------
//  Class  GProp_PEquation
//---------------------------------------------------------------------
/// <summary>
/// Analyzes a collection of 3D points to decide whether they are
/// coincident, collinear, coplanar, or span 3D space, within a given
/// tolerance.
/// 
/// Uses principal-axis analysis (eigendecomposition of the inertia matrix)
/// to determine the dimensionality of the cloud. Depending on the result
/// type, the corresponding accessor (Point(), Line(), Plane() or Box())
/// returns the fitted geometric entity.
/// 
/// The raw PCA results (Barycentre(), PrincipalAxis(), Extent()) are
/// always available regardless of the fitted type.
/// </summary>
public ref class GProp_PEquation sealed
    : public Macad::Occt::BaseClass<::GProp_PEquation>
{

#ifdef Include_GProp_PEquation_h
public:
    Include_GProp_PEquation_h
#endif

public:
    GProp_PEquation(::GProp_PEquation* nativeInstance)
        : Macad::Occt::BaseClass<::GProp_PEquation>( nativeInstance, true )
    {}

    GProp_PEquation(::GProp_PEquation& nativeInstance)
        : Macad::Occt::BaseClass<::GProp_PEquation>( &nativeInstance, false )
    {}

    property ::GProp_PEquation* NativeInstance
    {
        ::GProp_PEquation* get()
        {
            return static_cast<::GProp_PEquation*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  Type
    //---------------------------------------------------------------------
    /// <summary>
    /// Type of geometric entity that best fits the cloud.
    /// </summary>
    enum class Type
    {
        None = 0,
        Point = 1,
        Line = 2,
        Plane = 3,
        Space = 4
    }; // enum  class Type

    /// <summary>
    /// Constructs the analysis from a set of points and a tolerance.
    /// </summary>
    /// <param name="in]">
    /// thePnts array of points to analyze
    /// </param>
    /// <param name="in]">
    /// theTol  tolerance for dimensional collapse detection
    /// </param>
    GProp_PEquation(Macad::Occt::TColgp_Array1OfPnt^ thePnts, double theTol);
    /// <summary>
    /// Returns the type of the fitted entity.
    /// </summary>
    Macad::Occt::GProp_PEquation::Type GetType();
    /// <summary>
    /// Returns true if points are coplanar within tolerance.
    /// </summary>
    bool IsPlanar();
    /// <summary>
    /// Returns true if points are collinear within tolerance.
    /// </summary>
    bool IsLinear();
    /// <summary>
    /// Returns true if points are coincident within tolerance.
    /// </summary>
    bool IsPoint();
    /// <summary>
    /// Returns true if points span 3D space.
    /// </summary>
    bool IsSpace();
    /// <summary>
    /// Returns the mean plane.
    /// </summary>
    /// @throws Standard_NoSuchObject if !IsPlanar().
    Macad::Occt::Pln Plane();
    /// <summary>
    /// Returns the mean line.
    /// </summary>
    /// @throws Standard_NoSuchObject if !IsLinear().
    Macad::Occt::gp_Lin^ Line();
    /// <summary>
    /// Returns the mean point.
    /// </summary>
    /// @throws Standard_NoSuchObject if !IsPoint().
    Macad::Occt::Pnt Point();
    /// <summary>
    /// Returns a bounding box aligned with the principal axes.
    /// </summary>
    /// <param name="out]">
    /// theP  corner of the box (minimum projection on principal axes)
    /// </param>
    /// <param name="out]">
    /// theV1 first box edge vector (along first principal axis)
    /// </param>
    /// <param name="out]">
    /// theV2 second box edge vector (along second principal axis)
    /// </param>
    /// <param name="out]">
    /// theV3 third box edge vector (along third principal axis)
    /// </param>
    /// @throws Standard_NoSuchObject if !IsSpace().
    void Box(Macad::Occt::Pnt% theP, Macad::Occt::Vec% theV1, Macad::Occt::Vec% theV2, Macad::Occt::Vec% theV3);
    /// <summary>
    /// Returns the centre of mass of the cloud (always valid after construction).
    /// </summary>
    Macad::Occt::Pnt Barycentre();
    /// <summary>
    /// Returns the unit principal axis at @p theIndex (1, 2 or 3),
    /// ordered by eigenvalue.
    /// </summary>
    Macad::Occt::Vec PrincipalAxis(int theIndex);
    /// <summary>
    /// Returns the extent (max - min projection) along principal axis
    /// </summary>
    /// @p theIndex (1, 2 or 3).
    double Extent(int theIndex);
}; // class GProp_PEquation

//---------------------------------------------------------------------
//  Class  GProp_PGProps
//---------------------------------------------------------------------
/// <summary>
/// Computes global properties (mass, barycentre, inertia matrix) of a
/// weighted set of 3D points.
/// 
/// Each point carries a mass; by default the mass is unit. Contributions are
/// accumulated incrementally via AddPoint() or from arrays passed to a
/// constructor. As a GProp_GProps subclass, an instance can be composed
/// into a larger system via GProp_GProps::Add().
/// 
/// Inertia is accumulated at the absolute origin and stored in the inherited
/// GProp_GProps::inertia member, matching the legacy contract of this class.
/// </summary>
public ref class GProp_PGProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_PGProps_h
public:
    Include_GProp_PGProps_h
#endif

public:
    GProp_PGProps(::GProp_PGProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    GProp_PGProps(::GProp_PGProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::GProp_PGProps* NativeInstance
    {
        ::GProp_PGProps* get()
        {
            return static_cast<::GProp_PGProps*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty point set, located at the origin, with zero mass.
    /// </summary>
    GProp_PGProps();
    /// <summary>
    /// Creates a point set from an array of points (unit mass each).
    /// </summary>
    GProp_PGProps(Macad::Occt::TColgp_Array1OfPnt^ thePnts);
    /// <summary>
    /// Creates a point set from a 2D array of points (unit mass each).
    /// </summary>
    GProp_PGProps(Macad::Occt::TColgp_Array2OfPnt^ thePnts);
    /// <summary>
    /// Creates a point set from points and corresponding densities.
    /// </summary>
    /// <param name="in]">
    /// thePnts    point array
    /// </param>
    /// <param name="in]">
    /// theDensity per-point mass array (same length as thePnts)
    /// </param>
    /// @throws Standard_DomainError if a density <= gp::Resolution() or if the
    /// arrays have different lengths.
    GProp_PGProps(Macad::Occt::TColgp_Array1OfPnt^ thePnts, Macad::Occt::TColStd_Array1OfReal^ theDensity);
    /// <summary>
    /// Creates a point set from 2D arrays of points and corresponding densities.
    /// </summary>
    /// <param name="in]">
    /// thePnts    point array
    /// </param>
    /// <param name="in]">
    /// theDensity per-point mass array (same dimensions as thePnts)
    /// </param>
    /// @throws Standard_DomainError on dimension mismatch or non-positive density.
    GProp_PGProps(Macad::Occt::TColgp_Array2OfPnt^ thePnts, Macad::Occt::TColStd_Array2OfReal^ theDensity);
    /// <summary>
    /// Adds a point with unit mass.
    /// </summary>
    void AddPoint(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Adds a point with a given mass.
    /// </summary>
    /// @throws Standard_DomainError if theDensity <= gp::Resolution().
    void AddPoint(Macad::Occt::Pnt thePnt, double theDensity);
    /// <summary>
    /// Computes the barycentre of a set of points (unit mass).
    /// </summary>
    static Macad::Occt::Pnt Barycentre(Macad::Occt::TColgp_Array1OfPnt^ thePnts);
    /// <summary>
    /// Computes the barycentre of a 2D array of points (unit mass).
    /// </summary>
    static Macad::Occt::Pnt Barycentre(Macad::Occt::TColgp_Array2OfPnt^ thePnts);
    /// <summary>
    /// Computes the weighted barycentre and total mass of a set of points.
    /// </summary>
    /// <param name="in]">
    ///  thePnts    point array
    /// </param>
    /// <param name="in]">
    ///  theDensity per-point mass array
    /// </param>
    /// <param name="out]">
    /// theMass    total mass (sum of densities)
    /// </param>
    /// <param name="out]">
    /// theG       weighted barycentre
    /// </param>
    /// @throws Standard_DimensionError on length mismatch.
    static void Barycentre(Macad::Occt::TColgp_Array1OfPnt^ thePnts, Macad::Occt::TColStd_Array1OfReal^ theDensity, double% theMass, Macad::Occt::Pnt% theG);
    /// <summary>
    /// Computes the weighted barycentre and total mass for a 2D point array.
    /// </summary>
    /// @throws Standard_DimensionError on dimension mismatch.
    static void Barycentre(Macad::Occt::TColgp_Array2OfPnt^ thePnts, Macad::Occt::TColStd_Array2OfReal^ theDensity, double% theMass, Macad::Occt::Pnt% theG);
}; // class GProp_PGProps

//---------------------------------------------------------------------
//  Class  GProp_SelGProps
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties of a bounded elementary surface in 3D
/// (surfaces from the gp package: Cylinder, Cone, Sphere, Torus).
/// </summary>
public ref class GProp_SelGProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_SelGProps_h
public:
    Include_GProp_SelGProps_h
#endif

public:
    GProp_SelGProps(::GProp_SelGProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    GProp_SelGProps(::GProp_SelGProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::GProp_SelGProps* NativeInstance
    {
        ::GProp_SelGProps* get()
        {
            return static_cast<::GProp_SelGProps*>(_NativeInstance);
        }
    }

public:
    GProp_SelGProps();
    GProp_SelGProps(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt SLocation);
    GProp_SelGProps(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt SLocation);
    GProp_SelGProps(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt SLocation);
    GProp_SelGProps(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt SLocation);
    void SetLocation(Macad::Occt::Pnt SLocation);
    void Perform(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2);
    void Perform(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2);
    void Perform(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
    void Perform(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
}; // class GProp_SelGProps

//---------------------------------------------------------------------
//  Class  GProp_UndefinedAxis
//---------------------------------------------------------------------
public ref class GProp_UndefinedAxis sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_GProp_UndefinedAxis_h
public:
    Include_GProp_UndefinedAxis_h
#endif

public:
    GProp_UndefinedAxis(::GProp_UndefinedAxis* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    GProp_UndefinedAxis(::GProp_UndefinedAxis& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::GProp_UndefinedAxis* NativeInstance
    {
        ::GProp_UndefinedAxis* get()
        {
            return static_cast<::GProp_UndefinedAxis*>(_NativeInstance);
        }
    }

public:
    GProp_UndefinedAxis(System::String^ theMessage);
    GProp_UndefinedAxis();
    GProp_UndefinedAxis(System::String^ theMessage, System::String^ theStackTrace);
    System::String^ ExceptionType();
}; // class GProp_UndefinedAxis

//---------------------------------------------------------------------
//  Class  GProp_VelGProps
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties and the volume of a geometric solid
/// (3D closed region of space). Supports elementary solids from the gp
/// package: Cylinder, Cone, Sphere, Torus.
/// </summary>
public ref class GProp_VelGProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_VelGProps_h
public:
    Include_GProp_VelGProps_h
#endif

public:
    GProp_VelGProps(::GProp_VelGProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    GProp_VelGProps(::GProp_VelGProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::GProp_VelGProps* NativeInstance
    {
        ::GProp_VelGProps* get()
        {
            return static_cast<::GProp_VelGProps*>(_NativeInstance);
        }
    }

public:
    GProp_VelGProps();
    GProp_VelGProps(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt VLocation);
    GProp_VelGProps(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt VLocation);
    GProp_VelGProps(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt VLocation);
    GProp_VelGProps(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt VLocation);
    void SetLocation(Macad::Occt::Pnt VLocation);
    void Perform(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2);
    void Perform(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2);
    void Perform(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
    void Perform(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
}; // class GProp_VelGProps

}; // namespace Occt
}; // namespace Macad
