// Generated wrapper code for package CSLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  CSLib_DerivativeStatus
//---------------------------------------------------------------------
/// <summary>
/// Status of surface derivatives computation for normal calculation.
/// 
/// Describes the result of attempting to compute a surface normal
/// from the first derivatives D1U and D1V at a point on a surface.
/// </summary>
public enum class CSLib_DerivativeStatus
{
    Done = 0,
    D1uIsNull = 1,
    D1vIsNull = 2,
    D1IsNull = 3,
    D1uD1vRatioIsNull = 4,
    D1vD1uRatioIsNull = 5,
    D1uIsParallelD1v = 6
}; // enum  class CSLib_DerivativeStatus

//---------------------------------------------------------------------
//  Enum  CSLib_NormalStatus
//---------------------------------------------------------------------
/// <summary>
/// Status of surface normal computation.
/// 
/// Describes the result of attempting to compute the normal N to a surface,
/// including cases involving derivatives of the normal (DN/du, DN/dv).
/// </summary>
public enum class CSLib_NormalStatus
{
    Singular = 0,
    Defined = 1,
    InfinityOfSolutions = 2,
    D1NuIsNull = 3,
    D1NvIsNull = 4,
    D1NIsNull = 5,
    D1NuNvRatioIsNull = 6,
    D1NvNuRatioIsNull = 7,
    D1NuIsParallelD1Nv = 8
}; // enum  class CSLib_NormalStatus

//---------------------------------------------------------------------
//  Class  CSLib
//---------------------------------------------------------------------
/// <summary>
/// Provides functions for basic geometric computation on curves and surfaces.
/// 
/// This package implements functions for computing surface normals
/// and their derivatives at parametric points. The tolerance criteria
/// used are Resolution from gp and RealEpsilon from double.
/// 
/// Key functionality:
/// - Normal computation from surface first derivatives (D1U, D1V)
/// - Approximate normal in singular cases using second derivatives
/// - Derivatives of the non-normalized and normalized normal vectors
/// </summary>
public ref class CSLib sealed
    : public Macad::Occt::BaseClass<::CSLib>
{

#ifdef Include_CSLib_h
public:
    Include_CSLib_h
#endif

public:
    CSLib(::CSLib* nativeInstance)
        : Macad::Occt::BaseClass<::CSLib>( nativeInstance, true )
    {}

    CSLib(::CSLib& nativeInstance)
        : Macad::Occt::BaseClass<::CSLib>( &nativeInstance, false )
    {}

    property ::CSLib* NativeInstance
    {
        ::CSLib* get()
        {
            return static_cast<::CSLib*>(_NativeInstance);
        }
    }

public:
    CSLib();
    /// <summary>
    /// Computes the normal direction of a surface as the cross product D1U ^ D1V.
    /// 
    /// The normal is undefined if:
    /// - D1U has null length, or
    /// - D1V has null length, or
    /// - D1U and D1V are parallel.
    /// 
    /// To check parallelism, the sine of the angle between D1U and D1V
    /// is computed and compared with theSinTol.
    /// 
    /// </summary>
    /// <param name="in]">
    ///  theD1U    First derivative in U direction
    /// </param>
    /// <param name="in]">
    ///  theD1V    First derivative in V direction
    /// </param>
    /// <param name="in]">
    ///  theSinTol Sine tolerance for parallelism check
    /// </param>
    /// <param name="out]">
    /// theStatus Result status indicating success or failure reason
    /// </param>
    /// <param name="out]">
    /// theNormal Computed normal direction (valid only if theStatus == CSLib_Done)
    /// </param>
    static void Normal(Macad::Occt::Vec theD1U, Macad::Occt::Vec theD1V, double theSinTol, Macad::Occt::CSLib_DerivativeStatus% theStatus, Macad::Occt::Dir% theNormal);
    /// <summary>
    /// Computes an approximate normal direction at a singular point using second derivatives.
    /// 
    /// When the standard method cannot compute the normal (D1U ^ D1V is null or too small),
    /// this method uses a limited Taylor expansion:
    /// N(u0+du, v0+dv) = N0 + dN/du * du + dN/dv * dv + O(du^2, dv^2)
    /// 
    /// The normal is approximated from dN/du and dN/dv where N = D1U ^ D1V.
    /// 
    /// </summary>
    /// <param name="in]">
    ///  theD1U    First derivative in U direction
    /// </param>
    /// <param name="in]">
    ///  theD1V    First derivative in V direction
    /// </param>
    /// <param name="in]">
    ///  theD2U    Second derivative in U direction (d^2S/du^2)
    /// </param>
    /// <param name="in]">
    ///  theD2V    Second derivative in V direction (d^2S/dv^2)
    /// </param>
    /// <param name="in]">
    ///  theD2UV   Mixed second derivative (d^2S/dudv)
    /// </param>
    /// <param name="in]">
    ///  theSinTol Sine tolerance for parallelism check
    /// </param>
    /// <param name="out]">
    /// theDone   True if normal was successfully computed
    /// </param>
    /// <param name="out]">
    /// theStatus Result status with detailed information
    /// </param>
    /// <param name="out]">
    /// theNormal Computed normal direction (valid only if theDone is true)
    /// </param>
    static void Normal(Macad::Occt::Vec theD1U, Macad::Occt::Vec theD1V, Macad::Occt::Vec theD2U, Macad::Occt::Vec theD2V, Macad::Occt::Vec theD2UV, double theSinTol, bool% theDone, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% theNormal);
    /// <summary>
    /// Computes the normal direction using magnitude tolerance.
    /// 
    /// A simpler version that checks if the cross product magnitude
    /// and derivative magnitudes exceed the given tolerance.
    /// 
    /// </summary>
    /// <param name="in]">
    ///  theD1U    First derivative in U direction
    /// </param>
    /// <param name="in]">
    ///  theD1V    First derivative in V direction
    /// </param>
    /// <param name="in]">
    ///  theMagTol Magnitude tolerance for singularity detection
    /// </param>
    /// <param name="out]">
    /// theStatus Result status (CSLib_Defined or CSLib_Singular)
    /// </param>
    /// <param name="out]">
    /// theNormal Computed normal direction (valid only if theStatus == CSLib_Defined)
    /// </param>
    static void Normal(Macad::Occt::Vec theD1U, Macad::Occt::Vec theD1V, double theMagTol, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% theNormal);
    /// <summary>
    /// Computes the normal at a singular point using higher-order derivatives.
    /// 
    /// Finds the first order k0 where the derivatives of N = D1U ^ D1V become non-null
    /// and collinear, ensuring a unique normal direction.
    /// 
    /// </summary>
    /// <param name="in]">
    ///  theMaxOrder Maximum derivative order to examine
    /// </param>
    /// <param name="in]">
    ///  theDerNUV   Array of derivatives of N (indices correspond to derivative orders)
    /// </param>
    /// <param name="in]">
    ///  theMagTol   Magnitude tolerance
    /// </param>
    /// <param name="in]">
    ///  theU, theV  Current parameter values
    /// </param>
    /// <param name="in]">
    ///  theUmin, theUmax, theVmin, theVmax  Parameter bounds
    /// </param>
    /// <param name="out]">
    /// theStatus   Result status
    /// </param>
    /// <param name="out]">
    /// theNormal   Computed normal direction
    /// </param>
    /// <param name="out]">
    /// theOrderU, theOrderV  Orders of the first non-null derivative used
    /// </param>
    static void Normal(int theMaxOrder, Macad::Occt::TColgp_Array2OfVec^ theDerNUV, double theMagTol, double theU, double theV, double theUmin, double theUmax, double theVmin, double theVmax, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% theNormal, int% theOrderU, int% theOrderV);
    /// <summary>
    /// Computes the derivative of order (theNu, theNv) of the non-normalized normal vector.
    /// 
    /// The non-normalized normal is N = dS/du ^ dS/dv.
    /// This function computes d^(Nu+Nv)N / (du^Nu * dv^Nv).
    /// 
    /// </summary>
    /// <param name="in]">
    /// theNu      Derivative order in U direction
    /// </param>
    /// <param name="in]">
    /// theNv      Derivative order in V direction
    /// </param>
    /// <param name="in]">
    /// theDerSurf Surface derivatives array where theDerSurf(i,j) = d^(i+j)S/(du^i * dv^j)
    /// for i = 0..theNu+1, j = 0..theNv+1
    /// </param>
    /// <returns>
    /// The derivative vector d^(Nu+Nv)N / (du^Nu * dv^Nv)
    /// </returns>
    static Macad::Occt::Vec DNNUV(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerSurf);
    /// <summary>
    /// Computes the derivative of the non-normalized vector N = dS1/du ^ dS2/dv.
    /// 
    /// This variant is used for osculating surfaces where the normal
    /// is computed from derivatives of two different surfaces.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theNu       Derivative order in U direction
    /// </param>
    /// <param name="in]">
    /// theNv       Derivative order in V direction
    /// </param>
    /// <param name="in]">
    /// theDerSurf1 Derivatives of the first surface S1
    /// </param>
    /// <param name="in]">
    /// theDerSurf2 Derivatives of the second surface S2
    /// </param>
    /// <returns>
    /// The derivative vector
    /// </returns>
    static Macad::Occt::Vec DNNUV(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerSurf1, Macad::Occt::TColgp_Array2OfVec^ theDerSurf2);
    /// <summary>
    /// Computes the derivative of order (theNu, theNv) of the normalized normal vector.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theNu     Derivative order in U direction
    /// </param>
    /// <param name="in]">
    /// theNv     Derivative order in V direction
    /// </param>
    /// <param name="in]">
    /// theDerNUV Array of derivatives of the non-normalized normal.
    /// Contains derivatives d^(i+j)(D1U^D1V)/(du^i * dv^j)
    /// for i = theIduref..theNu+theIduref, j = theIdvref..theNv+theIdvref
    /// </param>
    /// <param name="in]">
    /// theIduref Reference index offset in U (default 0 for regular cases)
    /// </param>
    /// <param name="in]">
    /// theIdvref Reference index offset in V (default 0 for regular cases)
    /// </param>
    /// <returns>
    /// The derivative of the normalized normal vector
    /// </returns>
    static Macad::Occt::Vec DNNormal(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerNUV, int theIduref, int theIdvref);
    /// <summary>
    /// Computes the derivative of order (theNu, theNv) of the normalized normal vector.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theNu     Derivative order in U direction
    /// </param>
    /// <param name="in]">
    /// theNv     Derivative order in V direction
    /// </param>
    /// <param name="in]">
    /// theDerNUV Array of derivatives of the non-normalized normal.
    /// Contains derivatives d^(i+j)(D1U^D1V)/(du^i * dv^j)
    /// for i = theIduref..theNu+theIduref, j = theIdvref..theNv+theIdvref
    /// </param>
    /// <param name="in]">
    /// theIduref Reference index offset in U (default 0 for regular cases)
    /// </param>
    /// <param name="in]">
    /// theIdvref Reference index offset in V (default 0 for regular cases)
    /// </param>
    /// <returns>
    /// The derivative of the normalized normal vector
    /// </returns>
    static Macad::Occt::Vec DNNormal(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerNUV, int theIduref);
    /// <summary>
    /// Computes the derivative of order (theNu, theNv) of the normalized normal vector.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theNu     Derivative order in U direction
    /// </param>
    /// <param name="in]">
    /// theNv     Derivative order in V direction
    /// </param>
    /// <param name="in]">
    /// theDerNUV Array of derivatives of the non-normalized normal.
    /// Contains derivatives d^(i+j)(D1U^D1V)/(du^i * dv^j)
    /// for i = theIduref..theNu+theIduref, j = theIdvref..theNv+theIdvref
    /// </param>
    /// <param name="in]">
    /// theIduref Reference index offset in U (default 0 for regular cases)
    /// </param>
    /// <param name="in]">
    /// theIdvref Reference index offset in V (default 0 for regular cases)
    /// </param>
    /// <returns>
    /// The derivative of the normalized normal vector
    /// </returns>
    static Macad::Occt::Vec DNNormal(int theNu, int theNv, Macad::Occt::TColgp_Array2OfVec^ theDerNUV);
}; // class CSLib

//---------------------------------------------------------------------
//  Class  CSLib_Class2d
//---------------------------------------------------------------------
/// <summary>
/// Low-level algorithm for 2D point-in-polygon classification.
/// 
/// This class determines whether a 2D point lies inside, outside, or on the boundary
/// of a closed polygon. It uses a ray-casting algorithm where a horizontal ray
/// from the test point is extended to infinity, and the number of polygon edge
/// crossings determines the classification.
/// 
/// The polygon is internally normalized to [0,1] x [0,1] domain for numerical stability.
/// 
/// </summary>
/// @note This class was moved from package BRepTopAdaptor.
public ref class CSLib_Class2d sealed
    : public Macad::Occt::BaseClass<::CSLib_Class2d>
{

#ifdef Include_CSLib_Class2d_h
public:
    Include_CSLib_Class2d_h
#endif

public:
    CSLib_Class2d(::CSLib_Class2d* nativeInstance)
        : Macad::Occt::BaseClass<::CSLib_Class2d>( nativeInstance, true )
    {}

    CSLib_Class2d(::CSLib_Class2d& nativeInstance)
        : Macad::Occt::BaseClass<::CSLib_Class2d>( &nativeInstance, false )
    {}

    property ::CSLib_Class2d* NativeInstance
    {
        ::CSLib_Class2d* get()
        {
            return static_cast<::CSLib_Class2d*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  Result
    //---------------------------------------------------------------------
    /// <summary>
    /// Classification result for point-in-polygon tests.
    /// </summary>
    enum class Result
    {
        Inside = 1,
        Outside = -1,
        Uncertain = 0
    }; // enum  class Result

    /// <summary>
    /// Default constructor. Creates an empty classifier.
    /// </summary>
    CSLib_Class2d();
    /// <summary>
    /// Constructs a 2D classifier from an array of polygon vertices.
    /// 
    /// The polygon is automatically closed (no need to repeat the first point at the end).
    /// Points are normalized internally to the UV bounds for numerical stability.
    /// 
    /// </summary>
    /// <param name="in]">
    /// thePnts2d Array of polygon vertices (minimum 3 points required)
    /// </param>
    /// <param name="in]">
    /// theTolU   Tolerance in U direction for boundary detection
    /// </param>
    /// <param name="in]">
    /// theTolV   Tolerance in V direction for boundary detection
    /// </param>
    /// <param name="in]">
    /// theUMin   Minimum U bound of the polygon domain
    /// </param>
    /// <param name="in]">
    /// theVMin   Minimum V bound of the polygon domain
    /// </param>
    /// <param name="in]">
    /// theUMax   Maximum U bound of the polygon domain
    /// </param>
    /// <param name="in]">
    /// theVMax   Maximum V bound of the polygon domain
    /// </param>
    CSLib_Class2d(Macad::Occt::TColgp_Array1OfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax);
    /// <summary>
    /// Constructs a 2D classifier from a sequence of polygon vertices.
    /// 
    /// Same as the array constructor but accepts a sequence for convenience.
    /// 
    /// </summary>
    /// <param name="in]">
    /// thePnts2d Sequence of polygon vertices (minimum 3 points required)
    /// </param>
    /// <param name="in]">
    /// theTolU   Tolerance in U direction for boundary detection
    /// </param>
    /// <param name="in]">
    /// theTolV   Tolerance in V direction for boundary detection
    /// </param>
    /// <param name="in]">
    /// theUMin   Minimum U bound of the polygon domain
    /// </param>
    /// <param name="in]">
    /// theVMin   Minimum V bound of the polygon domain
    /// </param>
    /// <param name="in]">
    /// theUMax   Maximum U bound of the polygon domain
    /// </param>
    /// <param name="in]">
    /// theVMax   Maximum V bound of the polygon domain
    /// </param>
    CSLib_Class2d(Macad::Occt::TColgp_SequenceOfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax);
    /* Method skipped due to unknown mapping: void CSLib_Class2d(NCollection_DynamicArray<gp_Pnt2d> thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax, ) */
    /// <summary>
    /// Classifies a point relative to the polygon.
    /// 
    /// </summary>
    /// <param name="in]">
    /// thePoint The 2D point to classify
    /// </param>
    /// <returns>
    /// Classification result
    /// </returns>
    Macad::Occt::CSLib_Class2d::Result SiDans(Macad::Occt::Pnt2d thePoint);
    /// <summary>
    /// Classifies a point with explicit ON tolerance.
    /// 
    /// Similar to SiDans() but uses the specified tolerance for boundary detection
    /// instead of the tolerances specified at construction.
    /// 
    /// </summary>
    /// <param name="in]">
    /// thePoint The 2D point to classify
    /// </param>
    /// <param name="in]">
    /// theTol   Tolerance for boundary detection
    /// </param>
    /// <returns>
    /// Classification result
    /// </returns>
    Macad::Occt::CSLib_Class2d::Result SiDans_OnMode(Macad::Occt::Pnt2d thePoint, double theTol);
}; // class CSLib_Class2d

}; // namespace Occt
}; // namespace Macad
