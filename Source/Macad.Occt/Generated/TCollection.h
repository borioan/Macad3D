// Generated wrapper code for package TCollection

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TCollection_ExtendedString
//---------------------------------------------------------------------
/// <summary>
/// A variable-length sequence of "extended" (UNICODE) characters (16-bit character type).
/// It provides editing operations with built-in memory management
/// to make ExtendedString objects easier to use than ordinary extended character arrays.
/// ExtendedString objects follow "value semantics", that is, they are the actual strings,
/// not handles to strings, and are copied through assignment.
/// You may use HExtendedString objects to get handles to strings.
/// 
/// Beware that class can transparently store UTF-16 string with surrogate pairs
/// (Unicode symbol represented by two 16-bit code units).
/// However, surrogate pairs are not considered by the following methods:
/// - Method ::Length() return the number of 16-bit code units, not the number of Unicode symbols.
/// - Methods taking/returning symbol index work with 16-bit code units, not true Unicode symbols,
/// including ::Remove(), ::SetValue(), ::Value(), ::Search(), ::Trunc() and others.
/// If application needs to process surrogate pairs, NCollection_UtfIterator<char16_t> class can be
/// used for iterating through Unicode string (UTF-32 code unit will be returned for each position).
/// </summary>
public ref class TCollection_ExtendedString sealed
    : public Macad::Occt::BaseClass<::TCollection_ExtendedString>
{

#ifdef Include_TCollection_ExtendedString_h
public:
    Include_TCollection_ExtendedString_h
#endif

public:
    TCollection_ExtendedString(::TCollection_ExtendedString* nativeInstance)
        : Macad::Occt::BaseClass<::TCollection_ExtendedString>( nativeInstance, true )
    {}

    TCollection_ExtendedString(::TCollection_ExtendedString& nativeInstance)
        : Macad::Occt::BaseClass<::TCollection_ExtendedString>( &nativeInstance, false )
    {}

    property ::TCollection_ExtendedString* NativeInstance
    {
        ::TCollection_ExtendedString* get()
        {
            return static_cast<::TCollection_ExtendedString*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an ExtendedString to an empty ExtendedString.
    /// </summary>
    TCollection_ExtendedString();
    /// <summary>
    /// Creation by converting an ExtString (char16_t*) to an extended string.
    /// </summary>
    /// <param name="in]">
    /// theString the char16_t string to copy
    /// </param>
    TCollection_ExtendedString(System::String^ theString);
    /// <summary>
    /// Initializes an ExtendedString with a single ASCII character.
    /// </summary>
    /// <param name="in]">
    /// theChar the ASCII character to initialize from
    /// </param>
    TCollection_ExtendedString(char theChar);
    /* Method skipped due to unknown mapping: void TCollection_ExtendedString(int theLength, char16_t theFiller, ) */
    /// <summary>
    /// Initializes an ExtendedString with an integer value.
    /// </summary>
    /// <param name="in]">
    /// theValue the integer value to convert to string
    /// </param>
    TCollection_ExtendedString(int theValue);
    /// <summary>
    /// Initializes an ExtendedString with a real value.
    /// </summary>
    /// <param name="in]">
    /// theValue the real value to convert to string
    /// </param>
    TCollection_ExtendedString(double theValue);
    /// <summary>
    /// Creation by converting an AsciiString to an extended string.
    /// The string is treated as having UTF-8 coding.
    /// If it is not a UTF-8 or multi byte then each character is copied to ExtCharacter.
    /// </summary>
    /// <param name="in]">
    /// theString the ASCII string to convert
    /// </param>
    /// <param name="in]">
    /// theIsMultiByte flag indicating UTF-8 coding
    /// </param>
    TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ theString, bool theIsMultiByte);
    /// <summary>
    /// Creation by converting an AsciiString to an extended string.
    /// The string is treated as having UTF-8 coding.
    /// If it is not a UTF-8 or multi byte then each character is copied to ExtCharacter.
    /// </summary>
    /// <param name="in]">
    /// theString the ASCII string to convert
    /// </param>
    /// <param name="in]">
    /// theIsMultiByte flag indicating UTF-8 coding
    /// </param>
    TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ theString);
    /// <summary>
    /// Initializes an ExtendedString with a char16_t string and explicit length.
    /// </summary>
    /// <param name="in]">
    /// theString the char16_t string to initialize from
    /// </param>
    /// <param name="in]">
    /// theLength the length of the string
    /// </param>
    TCollection_ExtendedString(System::String^ theString, int theLength);
    /* Method skipped due to unknown mapping: void TCollection_ExtendedString(u16string_view theStringView, ) */
    /// <summary>
    /// Appends the other extended string to this extended string.
    /// Note that this method is an alias of operator +=.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"Hello");
    /// TCollection_ExtendedString anotherString(u" World");
    /// aString += anotherString;
    /// // Result: aString == u"Hello World"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the string to append
    /// </param>
    void AssignCat(Macad::Occt::TCollection_ExtendedString^ theOther);
    /// <summary>
    /// Appends the integer value to this extended string.
    /// </summary>
    /// <param name="in]">
    /// theOther the integer to append
    /// </param>
    void AssignCat(int theOther);
    /// <summary>
    /// Appends the ASCII character to this extended string.
    /// </summary>
    /// <param name="in]">
    /// theChar the character to append
    /// </param>
    void AssignCat(char theChar);
    /// <summary>
    /// Appends the real value to this extended string.
    /// </summary>
    /// <param name="in]">
    /// theOther the real value to append
    /// </param>
    void AssignCat(double theOther);
    /* Method skipped due to unknown mapping: void AssignCat(char16_t theChar, ) */
    /// <summary>
    /// Core implementation: Appends char16_t string (pointer and length) to this extended string.
    /// This is the primary implementation that all other AssignCat overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to append
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to append
    /// </param>
    void AssignCat(System::String^ theString, int theLength);
    /* Method skipped due to unknown mapping: void AssignCat(u16string_view theStringView, ) */
    /// <summary>
    /// Core implementation: Concatenates char16_t string (pointer and length)
    /// and returns a new string.
    /// </summary>
    /// <param name="in]">
    /// theOther pointer to the string to append
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to append
    /// </param>
    /// <returns>
    /// new string with theOther appended
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ Cat(System::String^ theOther, int theLength);
    /// <summary>
    /// Concatenates char16_t string and returns a new string.
    /// </summary>
    /// <param name="in]">
    /// theOther the null-terminated string to append
    /// </param>
    /// <returns>
    /// new string with theOther appended
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ Cat(System::String^ theOther);
    /// <summary>
    /// Appends the integer value to this string and returns a new string.
    /// </summary>
    /// <param name="in]">
    /// theOther the integer to append
    /// </param>
    /// <returns>
    /// new string with integer appended
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ Cat(int theOther);
    /// <summary>
    /// Appends the real value to this string and returns a new string.
    /// </summary>
    /// <param name="in]">
    /// theOther the real value to append
    /// </param>
    /// <returns>
    /// new string with real value appended
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ Cat(double theOther);
    /// <summary>
    /// Appends a single ASCII character to this string and returns a new string.
    /// </summary>
    /// <param name="in]">
    /// theChar the ASCII character to append
    /// </param>
    Macad::Occt::TCollection_ExtendedString^ Cat(char theChar);
    /// <summary>
    /// Appends the other extended string to this string and returns a new string.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"Hello");
    /// TCollection_ExtendedString anotherString(u" World");
    /// TCollection_ExtendedString aResult = aString + anotherString;
    /// // Result: aResult == u"Hello World"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the string to append
    /// </param>
    /// <returns>
    /// new string with theOther appended
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ Cat(Macad::Occt::TCollection_ExtendedString^ theOther);
    /* Method skipped due to unknown mapping: void ChangeAll(char16_t theChar, char16_t theNewChar, ) */
    /// <summary>
    /// Removes all characters contained in this string.
    /// This produces an empty ExtendedString.
    /// </summary>
    void Clear();
    /// <summary>
    /// Core implementation: Copy from a char16_t pointer with explicit length.
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to copy
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to copy
    /// </param>
    void Copy(System::String^ theString, int theLength);
    /// <summary>
    /// Copy from a char16_t pointer.
    /// </summary>
    /// <param name="in]">
    /// theString the null-terminated string to copy
    /// </param>
    void Copy(System::String^ theString);
    /// <summary>
    /// Copy theFromWhere to this string.
    /// Used as operator =
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString;
    /// TCollection_ExtendedString anotherString(u"Hello World");
    /// aString = anotherString;  // operator=
    /// // Result: aString == u"Hello World"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theFromWhere the string to copy from
    /// </param>
    void Copy(Macad::Occt::TCollection_ExtendedString^ theFromWhere);
    /// <summary>
    /// Exchange the data of two strings (without reallocating memory).
    /// </summary>
    /// <param name="in,out]">
    /// theOther the string to exchange data with
    /// </param>
    void Swap(Macad::Occt::TCollection_ExtendedString^ theOther);
    /* Method skipped due to unknown mapping: void Insert(int theWhere, char16_t theWhat, ) */
    /// <summary>
    /// Core implementation: Insert a char16_t string (pointer and length) at position theWhere.
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to insert at (1-based)
    /// </param>
    /// <param name="in]">
    /// theWhat pointer to the string to insert
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to insert
    /// </param>
    void Insert(int theWhere, System::String^ theWhat, int theLength);
    /// <summary>
    /// Insert an ExtendedString at position theWhere.
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to insert at (1-based)
    /// </param>
    /// <param name="in]">
    /// theWhat the string to insert
    /// </param>
    void Insert(int theWhere, Macad::Occt::TCollection_ExtendedString^ theWhat);
    /// <summary>
    /// Returns True if this string contains no characters.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Core implementation: Returns true if this string equals theOther (pointer and length).
    /// </summary>
    /// <param name="in]">
    /// theOther pointer to the string to compare with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to compare with
    /// </param>
    /// <returns>
    /// true if strings are equal, false otherwise
    /// </returns>
    bool IsEqual(System::String^ theOther, int theLength);
    /// <summary>
    /// Returns true if this string equals theOther null-terminated string.
    /// Note that this method is an alias of operator ==.
    /// </summary>
    /// <param name="in]">
    /// theOther the char16_t string to compare with
    /// </param>
    /// <returns>
    /// true if strings are equal, false otherwise
    /// </returns>
    bool IsEqual(System::String^ theOther);
    /// <summary>
    /// Returns true if the characters in this extended
    /// string are identical to the characters in theOther extended string.
    /// Note that this method is an alias of operator ==.
    /// </summary>
    /// <param name="in]">
    /// theOther the extended string to compare with
    /// </param>
    /// <returns>
    /// true if strings are equal, false otherwise
    /// </returns>
    bool IsEqual(Macad::Occt::TCollection_ExtendedString^ theOther);
    /// <summary>
    /// Core implementation: Returns true if this string differs from theOther (pointer and length).
    /// </summary>
    /// <param name="in]">
    /// theOther pointer to the string to compare with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to compare with
    /// </param>
    /// <returns>
    /// true if strings are different, false otherwise
    /// </returns>
    bool IsDifferent(System::String^ theOther, int theLength);
    /// <summary>
    /// Returns true if this string differs from theOther null-terminated string.
    /// Note that this method is an alias of operator !=.
    /// </summary>
    /// <param name="in]">
    /// theOther the char16_t string to compare with
    /// </param>
    /// <returns>
    /// true if strings are different, false otherwise
    /// </returns>
    bool IsDifferent(System::String^ theOther);
    /// <summary>
    /// Returns true if there are differences between the
    /// characters in this extended string and theOther extended string.
    /// Note that this method is an alias of operator !=.
    /// </summary>
    /// <param name="in]">
    /// theOther the extended string to compare with
    /// </param>
    /// <returns>
    /// true if strings are different, false otherwise
    /// </returns>
    bool IsDifferent(Macad::Occt::TCollection_ExtendedString^ theOther);
    /// <summary>
    /// Core implementation: Returns TRUE if this string is lexicographically less than theOther.
    /// </summary>
    /// <param name="in]">
    /// theOther pointer to the string to compare with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to compare with
    /// </param>
    /// <returns>
    /// true if this string is less than theOther
    /// </returns>
    bool IsLess(System::String^ theOther, int theLength);
    /// <summary>
    /// Returns TRUE if this string is lexicographically less than theOther.
    /// </summary>
    /// <param name="in]">
    /// theOther the char16_t string to compare with
    /// </param>
    /// <returns>
    /// true if this string is less than theOther
    /// </returns>
    bool IsLess(System::String^ theOther);
    /// <summary>
    /// Returns TRUE if this string is lexicographically less than theOther.
    /// </summary>
    /// <param name="in]">
    /// theOther the extended string to compare with
    /// </param>
    /// <returns>
    /// true if this string is less than theOther
    /// </returns>
    bool IsLess(Macad::Occt::TCollection_ExtendedString^ theOther);
    /// <summary>
    /// Core implementation: Returns TRUE if this string is lexicographically greater than theOther.
    /// </summary>
    /// <param name="in]">
    /// theOther pointer to the string to compare with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to compare with
    /// </param>
    /// <returns>
    /// true if this string is greater than theOther
    /// </returns>
    bool IsGreater(System::String^ theOther, int theLength);
    /// <summary>
    /// Returns TRUE if this string is lexicographically greater than theOther.
    /// </summary>
    /// <param name="in]">
    /// theOther the char16_t string to compare with
    /// </param>
    /// <returns>
    /// true if this string is greater than theOther
    /// </returns>
    bool IsGreater(System::String^ theOther);
    /// <summary>
    /// Returns TRUE if this string is lexicographically greater than theOther.
    /// </summary>
    /// <param name="in]">
    /// theOther the extended string to compare with
    /// </param>
    /// <returns>
    /// true if this string is greater than theOther
    /// </returns>
    bool IsGreater(Macad::Occt::TCollection_ExtendedString^ theOther);
    /// <summary>
    /// Core implementation: Determines whether this string starts with theStartString.
    /// </summary>
    /// <param name="in]">
    /// theStartString pointer to the string to check for
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to check for
    /// </param>
    /// <returns>
    /// true if this string starts with theStartString
    /// </returns>
    bool StartsWith(System::String^ theStartString, int theLength);
    /// <summary>
    /// Determines whether this string starts with theStartString.
    /// </summary>
    /// <param name="in]">
    /// theStartString the null-terminated string to check for
    /// </param>
    /// <returns>
    /// true if this string starts with theStartString
    /// </returns>
    bool StartsWith(System::String^ theStartString);
    /// <summary>
    /// Determines whether the beginning of this string instance matches the specified string.
    /// </summary>
    /// <param name="in]">
    /// theStartString the string to check for at the beginning
    /// </param>
    /// <returns>
    /// true if this string starts with theStartString
    /// </returns>
    bool StartsWith(Macad::Occt::TCollection_ExtendedString^ theStartString);
    /// <summary>
    /// Core implementation: Determines whether this string ends with theEndString.
    /// </summary>
    /// <param name="in]">
    /// theEndString pointer to the string to check for
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to check for
    /// </param>
    /// <returns>
    /// true if this string ends with theEndString
    /// </returns>
    bool EndsWith(System::String^ theEndString, int theLength);
    /// <summary>
    /// Determines whether this string ends with theEndString.
    /// </summary>
    /// <param name="in]">
    /// theEndString the null-terminated string to check for
    /// </param>
    /// <returns>
    /// true if this string ends with theEndString
    /// </returns>
    bool EndsWith(System::String^ theEndString);
    /// <summary>
    /// Determines whether the end of this string instance matches the specified string.
    /// </summary>
    /// <param name="in]">
    /// theEndString the string to check for at the end
    /// </param>
    /// <returns>
    /// true if this string ends with theEndString
    /// </returns>
    bool EndsWith(Macad::Occt::TCollection_ExtendedString^ theEndString);
    /// <summary>
    /// Returns True if the ExtendedString contains only "Ascii Range" characters.
    /// </summary>
    /// <returns>
    /// true if string contains only ASCII characters
    /// </returns>
    bool IsAscii();
    /// <summary>
    /// Returns the number of 16-bit code units
    /// (might be greater than number of Unicode symbols if string contains surrogate pairs).
    /// </summary>
    /// <returns>
    /// the number of 16-bit code units
    /// </returns>
    int Length();
    /// <summary>
    /// Displays this string on a stream.
    /// </summary>
    /// <param name="in]">
    /// theStream the output stream
    /// </param>
    void Print(System::IO::TextWriter^ theStream);
    /* Method skipped due to unknown mapping: void RemoveAll(char16_t theWhat, ) */
    /// <summary>
    /// Erases theHowMany characters from position theWhere, theWhere included.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"Hello");
    /// aString.Remove(2, 2); // erases 2 characters from position 2
    /// // Result: aString == u"Hlo"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to start erasing from (1-based)
    /// </param>
    /// <param name="in]">
    /// theHowMany the number of characters to erase
    /// </param>
    void Remove(int theWhere, int theHowMany);
    /// <summary>
    /// Erases theHowMany characters from position theWhere, theWhere included.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"Hello");
    /// aString.Remove(2, 2); // erases 2 characters from position 2
    /// // Result: aString == u"Hlo"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to start erasing from (1-based)
    /// </param>
    /// <param name="in]">
    /// theHowMany the number of characters to erase
    /// </param>
    void Remove(int theWhere);
    /// <summary>
    /// Core implementation: Searches for theWhat (pointer and length) from the beginning.
    /// </summary>
    /// <param name="in]">
    /// theWhat pointer to the string to search for
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to search for
    /// </param>
    /// <returns>
    /// the position of first match (1-based), or -1 if not found
    /// </returns>
    int Search(System::String^ theWhat, int theLength);
    /// <summary>
    /// Searches for theWhat null-terminated string from the beginning.
    /// </summary>
    /// <param name="in]">
    /// theWhat the null-terminated string to search for
    /// </param>
    /// <returns>
    /// the position of first match (1-based), or -1 if not found
    /// </returns>
    int Search(System::String^ theWhat);
    /// <summary>
    /// Searches an ExtendedString in this string from the beginning
    /// and returns position of first item theWhat matching.
    /// It returns -1 if not found.
    /// </summary>
    /// <param name="in]">
    /// theWhat the string to search for
    /// </param>
    /// <returns>
    /// the position of first match (1-based), or -1 if not found
    /// </returns>
    int Search(Macad::Occt::TCollection_ExtendedString^ theWhat);
    /// <summary>
    /// Core implementation: Searches for theWhat (pointer and length) from the end.
    /// </summary>
    /// <param name="in]">
    /// theWhat pointer to the string to search for
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to search for
    /// </param>
    /// <returns>
    /// the position of first match from end (1-based), or -1 if not found
    /// </returns>
    int SearchFromEnd(System::String^ theWhat, int theLength);
    /// <summary>
    /// Searches for theWhat null-terminated string from the end.
    /// </summary>
    /// <param name="in]">
    /// theWhat the null-terminated string to search for
    /// </param>
    /// <returns>
    /// the position of first match from end (1-based), or -1 if not found
    /// </returns>
    int SearchFromEnd(System::String^ theWhat);
    /// <summary>
    /// Searches an ExtendedString in this string from the end
    /// and returns position of first item theWhat matching.
    /// It returns -1 if not found.
    /// </summary>
    /// <param name="in]">
    /// theWhat the string to search for
    /// </param>
    /// <returns>
    /// the position of first match from end (1-based), or -1 if not found
    /// </returns>
    int SearchFromEnd(Macad::Occt::TCollection_ExtendedString^ theWhat);
    /* Method skipped due to unknown mapping: void SetValue(int theWhere, char16_t theWhat, ) */
    /// <summary>
    /// Core implementation: Replaces a part of this string by char16_t string (pointer and length).
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to start replacement (1-based)
    /// </param>
    /// <param name="in]">
    /// theWhat pointer to the string to replace with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to replace with
    /// </param>
    void SetValue(int theWhere, System::String^ theWhat, int theLength);
    /// <summary>
    /// Replaces a part of this string by another ExtendedString.
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to start replacement (1-based)
    /// </param>
    /// <param name="in]">
    /// theWhat the string to replace with
    /// </param>
    void SetValue(int theWhere, Macad::Occt::TCollection_ExtendedString^ theWhat);
    /// <summary>
    /// Copies characters from this string starting from index theFromIndex
    /// to the index theToIndex (inclusive).
    /// Raises an exception if theToIndex or theFromIndex is out of bounds.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"abcdefg");
    /// TCollection_ExtendedString aSubString = aString.SubString(3, 6);
    /// // Result: aSubString == u"cdef"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theFromIndex the starting index (1-based)
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index (1-based, inclusive)
    /// </param>
    /// <returns>
    /// the substring from theFromIndex to theToIndex
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ SubString(int theFromIndex, int theToIndex);
    /// <summary>
    /// Splits this extended string into two sub-strings at position theWhere.
    /// -   The second sub-string (from position theWhere + 1 of this string to the end) is
    /// returned in a new extended string.
    /// -   This extended string is modified: its last characters are removed, it becomes equal to
    /// the first sub-string (from the first character to position theWhere).
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"abcdefg");
    /// TCollection_ExtendedString aSecondPart = aString.Split(3);
    /// // Result: aString == u"abc" and aSecondPart == u"defg"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to split at (0-based)
    /// </param>
    /// <returns>
    /// the second part of the split string
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ Split(int theWhere);
    /// <summary>
    /// Extracts theWhichOne token from this string.
    /// By default, the theSeparators is set to space and tabulation.
    /// By default, the token extracted is the first one (theWhichOne = 1).
    /// theSeparators contains all separators you need.
    /// If no token indexed by theWhichOne is found, it returns an empty ExtendedString.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"This is a     message");
    /// TCollection_ExtendedString aToken1 = aString.Token();
    /// // Result: aToken1 == u"This"
    /// 
    /// TCollection_ExtendedString aToken2 = aString.Token(u" ", 4);
    /// // Result: aToken2 == u"message"
    /// 
    /// TCollection_ExtendedString aToken3 = aString.Token(u" ", 2);
    /// // Result: aToken3 == u"is"
    /// 
    /// TCollection_ExtendedString aToken4 = aString.Token(u" ", 9);
    /// // Result: aToken4 == u""
    /// 
    /// TCollection_ExtendedString bString(u"1234; test:message   , value");
    /// TCollection_ExtendedString bToken1 = bString.Token(u"; :,", 4);
    /// // Result: bToken1 == u"value"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theSeparators the separator characters
    /// </param>
    /// <param name="in]">
    /// theWhichOne the token number to extract (1-based)
    /// </param>
    /// <returns>
    /// the extracted token
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ Token(System::String^ theSeparators, int theWhichOne);
    /// <summary>
    /// Extracts theWhichOne token from this string.
    /// By default, the theSeparators is set to space and tabulation.
    /// By default, the token extracted is the first one (theWhichOne = 1).
    /// theSeparators contains all separators you need.
    /// If no token indexed by theWhichOne is found, it returns an empty ExtendedString.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"This is a     message");
    /// TCollection_ExtendedString aToken1 = aString.Token();
    /// // Result: aToken1 == u"This"
    /// 
    /// TCollection_ExtendedString aToken2 = aString.Token(u" ", 4);
    /// // Result: aToken2 == u"message"
    /// 
    /// TCollection_ExtendedString aToken3 = aString.Token(u" ", 2);
    /// // Result: aToken3 == u"is"
    /// 
    /// TCollection_ExtendedString aToken4 = aString.Token(u" ", 9);
    /// // Result: aToken4 == u""
    /// 
    /// TCollection_ExtendedString bString(u"1234; test:message   , value");
    /// TCollection_ExtendedString bToken1 = bString.Token(u"; :,", 4);
    /// // Result: bToken1 == u"value"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theSeparators the separator characters
    /// </param>
    /// <param name="in]">
    /// theWhichOne the token number to extract (1-based)
    /// </param>
    /// <returns>
    /// the extracted token
    /// </returns>
    Macad::Occt::TCollection_ExtendedString^ Token(System::String^ theSeparators);
    /// <summary>
    /// Returns pointer to ExtString (char16_t*).
    /// </summary>
    /// <returns>
    /// the char16_t string representation
    /// </returns>
    System::String^ ToExtString();
    /// <summary>
    /// Returns pointer to string as wchar_t* on Windows platform where wchar_t* is considered as
    /// UTF-16 string. This method is useful to pass string into wide-char system APIs, and makes
    /// sense only on Windows (other systems use UTF-8 and can miss wide-char functions at all).
    /// </summary>
    /// <returns>
    /// the wchar_t string representation
    /// </returns>
    System::String^ ToWideString();
    /// <summary>
    /// Truncates this string to theHowMany characters.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_ExtendedString aString(u"Hello Dolly");
    /// aString.Trunc(3);
    /// // Result: aString == u"Hel"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theHowMany the number of characters to keep
    /// </param>
    void Trunc(int theHowMany);
    /* Method skipped due to unknown mapping: char16_t Value(int theWhere, ) */
    /// <summary>
    /// Returns a hashed value for the extended string.
    /// Note: if string is ASCII, the computed value is the same as the value computed with the
    /// HashCode function on a TCollection_AsciiString string composed with equivalent ASCII
    /// characters.
    /// </summary>
    /// <returns>
    /// a computed hash code
    /// </returns>
    long long unsigned int HashCode();
    /// <summary>
    /// Returns a const reference to a single shared empty string instance.
    /// This method provides access to a static empty string to avoid creating temporary empty
    /// strings. Use this method instead of constructing empty strings when you need a const
    /// reference.
    /// 
    /// Example:
    /// ```cpp
    /// const TCollection_ExtendedString& anEmptyStr = TCollection_ExtendedString::EmptyString();
    /// // Use anEmptyStr instead of TCollection_ExtendedString()
    /// ```
    /// </summary>
    /// <returns>
    /// const reference to static empty string
    /// </returns>
    static Macad::Occt::TCollection_ExtendedString^ EmptyString();
    /// <summary>
    /// Returns true if the characters in this extended
    /// string are identical to the characters in the other extended string.
    /// Note that this method is an alias of operator ==.
    /// </summary>
    /// <param name="in]">
    /// theString1 first string to compare
    /// </param>
    /// <param name="in]">
    /// theString2 second string to compare
    /// </param>
    /// <returns>
    /// true if strings are equal
    /// </returns>
    static bool IsEqual(Macad::Occt::TCollection_ExtendedString^ theString1, Macad::Occt::TCollection_ExtendedString^ theString2);
    /// <summary>
    /// Converts the internal myString to UTF8 coding and
    /// returns length of the out CString. A memory for the
    /// theCString should be allocated before call!
    /// </summary>
    /// <param name="in,out]">
    /// theCString pointer to the output buffer
    /// </param>
    /// <returns>
    /// length of the UTF-8 string
    /// </returns>
    int ToUTF8CString(char% theCString);
    /// <summary>
    /// Returns expected CString length in UTF8 coding (like strlen, without null terminator).
    /// It can be used for memory calculation before converting to CString containing symbols in UTF8
    /// coding. For external allocation, use: char* buf = new char[str.LengthOfCString() + 1];
    /// </summary>
    /// <returns>
    /// expected UTF-8 string length
    /// </returns>
    int LengthOfCString();
    /// <summary>
    /// Removes all space characters in the beginning of the string.
    /// </summary>
    void LeftAdjust();
    /// <summary>
    /// Removes all space characters at the end of the string.
    /// </summary>
    void RightAdjust();
    /* Method skipped due to unknown mapping: void LeftJustify(int theWidth, char16_t theFiller, ) */
    /* Method skipped due to unknown mapping: void RightJustify(int theWidth, char16_t theFiller, ) */
    /* Method skipped due to unknown mapping: void Center(int theWidth, char16_t theFiller, ) */
    /// <summary>
    /// Converts the first character into its corresponding
    /// upper-case character and the other characters into lowercase.
    /// </summary>
    /// @note Only ASCII characters (a-z, A-Z) are affected by case conversion.
    void Capitalize();
    /// <summary>
    /// Core implementation: Inserts char16_t string (pointer and length) at the beginning.
    /// </summary>
    /// <param name="in]">
    /// theOther pointer to the string to prepend
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to prepend
    /// </param>
    void Prepend(System::String^ theOther, int theLength);
    /// <summary>
    /// Inserts a null-terminated char16_t string at the beginning.
    /// </summary>
    /// <param name="in]">
    /// theOther the null-terminated string to prepend
    /// </param>
    void Prepend(System::String^ theOther);
    /// <summary>
    /// Inserts the other extended string at the beginning of this string.
    /// </summary>
    /// <param name="in]">
    /// theOther the string to prepend
    /// </param>
    void Prepend(Macad::Occt::TCollection_ExtendedString^ theOther);
    /// <summary>
    /// Returns the index of the first character of this string that is
    /// present in theSet.
    /// The search begins at index theFromIndex and ends at index theToIndex.
    /// Returns zero if failure.
    /// </summary>
    /// <param name="in]">
    /// theSet the set of characters to search for
    /// </param>
    /// <param name="in]">
    /// theFromIndex the starting index for search (1-based)
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index for search (1-based)
    /// </param>
    /// <returns>
    /// the index of first character found in set, or 0 if not found
    /// </returns>
    int FirstLocationInSet(Macad::Occt::TCollection_ExtendedString^ theSet, int theFromIndex, int theToIndex);
    /// <summary>
    /// Returns the index of the first character of this string that is
    /// NOT present in theSet.
    /// The search begins at index theFromIndex and ends at index theToIndex.
    /// Returns zero if failure.
    /// </summary>
    /// <param name="in]">
    /// theSet the set of characters to check against
    /// </param>
    /// <param name="in]">
    /// theFromIndex the starting index for search (1-based)
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index for search (1-based)
    /// </param>
    /// <returns>
    /// the index of first character not in set, or 0 if not found
    /// </returns>
    int FirstLocationNotInSet(Macad::Occt::TCollection_ExtendedString^ theSet, int theFromIndex, int theToIndex);
    /// <summary>
    /// Converts this extended string containing a numeric expression to an Integer.
    /// </summary>
    /// <returns>
    /// the integer value
    /// </returns>
    int IntegerValue();
    /// <summary>
    /// Returns True if this extended string contains an integer value.
    /// </summary>
    /// <returns>
    /// true if string represents an integer value
    /// </returns>
    bool IsIntegerValue();
    /// <summary>
    /// Converts this extended string containing a numeric expression to a Real.
    /// </summary>
    /// <returns>
    /// the real value
    /// </returns>
    double RealValue();
    /// <summary>
    /// Returns True if this extended string starts with characters that can be
    /// interpreted as a real value.
    /// </summary>
    /// <param name="in]">
    /// theToCheckFull when TRUE, checks if entire string defines a real value;
    /// otherwise checks if string starts with a real value
    /// </param>
    /// <returns>
    /// true if string represents a real value
    /// </returns>
    bool IsRealValue(bool theToCheckFull);
    /// <summary>
    /// Returns True if this extended string starts with characters that can be
    /// interpreted as a real value.
    /// </summary>
    /// <param name="in]">
    /// theToCheckFull when TRUE, checks if entire string defines a real value;
    /// otherwise checks if string starts with a real value
    /// </param>
    /// <returns>
    /// true if string represents a real value
    /// </returns>
    bool IsRealValue();
    /// <summary>
    /// Returns True if the strings contain same characters.
    /// </summary>
    /// <param name="in]">
    /// theOther the string to compare with
    /// </param>
    /// <param name="in]">
    /// theIsCaseSensitive flag indicating case sensitivity
    /// </param>
    /// @note When case-insensitive, only ASCII characters (a-z, A-Z) are affected.
    /// <returns>
    /// true if strings contain same characters
    /// </returns>
    bool IsSameString(Macad::Occt::TCollection_ExtendedString^ theOther, bool theIsCaseSensitive);
    int GetHashCode() override;
}; // class TCollection_ExtendedString

//---------------------------------------------------------------------
//  Class  TCollection_AsciiString
//---------------------------------------------------------------------
/// <summary>
/// Class defines a variable-length sequence of 8-bit characters.
/// Despite class name (kept for historical reasons), it is intended to store UTF-8 string, not just
/// ASCII characters. However, multi-byte nature of UTF-8 is not considered by the following
/// methods:
/// - Method ::Length() return the number of bytes, not the number of Unicode symbols.
/// - Methods taking/returning symbol index work with 8-bit code units, not true Unicode symbols,
/// including ::Remove(), ::SetValue(), ::Value(), ::Search(), ::Trunc() and others.
/// If application needs to process multi-byte Unicode symbols explicitly,
/// NCollection_UtfIterator<char> class can be used for iterating through Unicode string (UTF-32
/// code unit will be returned for each position).
/// 
/// Class provides editing operations with built-in memory management to make AsciiString objects
/// easier to use than ordinary character arrays. AsciiString objects follow value semantics; in
/// other words, they are the actual strings, not handles to strings, and are copied through
/// assignment. You may use HAsciiString objects to get handles to strings.
/// </summary>
public ref class TCollection_AsciiString sealed
    : public Macad::Occt::BaseClass<::TCollection_AsciiString>
{

#ifdef Include_TCollection_AsciiString_h
public:
    Include_TCollection_AsciiString_h
#endif

public:
    TCollection_AsciiString(::TCollection_AsciiString* nativeInstance)
        : Macad::Occt::BaseClass<::TCollection_AsciiString>( nativeInstance, true )
    {}

    TCollection_AsciiString(::TCollection_AsciiString& nativeInstance)
        : Macad::Occt::BaseClass<::TCollection_AsciiString>( &nativeInstance, false )
    {}

    property ::TCollection_AsciiString* NativeInstance
    {
        ::TCollection_AsciiString* get()
        {
            return static_cast<::TCollection_AsciiString*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a AsciiString to an empty AsciiString.
    /// </summary>
    TCollection_AsciiString();
    /* Method skipped due to unknown mapping: void TCollection_AsciiString(string_view theStringView, ) */
    /// <summary>
    /// Initializes a AsciiString with a CString and explicit length.
    /// </summary>
    /// <param name="in]">
    /// theMessage the C string to initialize from
    /// </param>
    /// <param name="in]">
    /// theLength the length of the string
    /// </param>
    TCollection_AsciiString(System::String^ theMessage, int theLength);
    /// <summary>
    /// Initializes an AsciiString with specified length space allocated
    /// and filled with filler character. This is useful for buffers.
    /// </summary>
    /// <param name="in]">
    /// theLength the length to allocate
    /// </param>
    /// <param name="in]">
    /// theFiller the character to fill with
    /// </param>
    TCollection_AsciiString(int theLength, char theFiller);
    /// <summary>
    /// Initializes an AsciiString with an integer value
    /// </summary>
    /// <param name="in]">
    /// theValue the integer value to convert to string
    /// </param>
    TCollection_AsciiString(int theValue);
    /// <summary>
    /// Initializes an AsciiString with a real value
    /// </summary>
    /// <param name="in]">
    /// theValue the real value to convert to string
    /// </param>
    TCollection_AsciiString(double theValue);
    /// <summary>
    /// Initializes a AsciiString with copy of another AsciiString
    /// concatenated with the message character.
    /// </summary>
    /// <param name="in]">
    /// theString the string to copy
    /// </param>
    /// <param name="in]">
    /// theChar the character to append
    /// </param>
    TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ theString, char theChar);
    /// <summary>
    /// Initializes a AsciiString with copy of another AsciiString
    /// concatenated with the message string.
    /// </summary>
    /// <param name="in]">
    /// theString the string to copy
    /// </param>
    /// <param name="in]">
    /// theOtherString the string to append
    /// </param>
    TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::TCollection_AsciiString^ theOtherString);
    /// <summary>
    /// Creation by converting an extended string to an ascii string.
    /// If replaceNonAscii is non-null character, it will be used
    /// in place of any non-ascii character found in the source string.
    /// Otherwise, creates UTF-8 unicode string.
    /// </summary>
    /// <param name="in]">
    /// theExtendedString the extended string to convert
    /// </param>
    /// <param name="in]">
    /// theReplaceNonAscii replacement character for non-ASCII characters
    /// </param>
    TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ theExtendedString, char theReplaceNonAscii);
    /// <summary>
    /// Creation by converting an extended string to an ascii string.
    /// If replaceNonAscii is non-null character, it will be used
    /// in place of any non-ascii character found in the source string.
    /// Otherwise, creates UTF-8 unicode string.
    /// </summary>
    /// <param name="in]">
    /// theExtendedString the extended string to convert
    /// </param>
    /// <param name="in]">
    /// theReplaceNonAscii replacement character for non-ASCII characters
    /// </param>
    TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ theExtendedString);
    /// <summary>
    /// Initialize UTF-8 Unicode string from wide-char string considering it as Unicode string
    /// (the size of wide char is a platform-dependent - e.g. on Windows wchar_t is UTF-16).
    /// 
    /// This constructor is unavailable if application is built with deprecated msvc option
    /// "-Zc:wchar_t-", since OCCT itself is never built with this option.
    /// </summary>
    /// <param name="in]">
    /// theStringUtf the wide character string to convert
    /// </param>
    TCollection_AsciiString(System::String^ theStringUtf);
    /// <summary>
    /// Appends other character to this string. This is an unary operator.
    /// </summary>
    /// <param name="in]">
    /// theOther the character to append
    /// </param>
    void AssignCat(char theOther);
    /// <summary>
    /// Appends other integer to this string. This is an unary operator.
    /// </summary>
    /// <param name="in]">
    /// theOther the integer to append
    /// </param>
    void AssignCat(int theOther);
    /// <summary>
    /// Appends other real number to this string. This is an unary operator.
    /// </summary>
    /// <param name="in]">
    /// theOther the real number to append
    /// </param>
    void AssignCat(double theOther);
    /// <summary>
    /// Appends an extended string to this ASCII string.
    /// If theReplaceNonAscii is non-null character, it will be used
    /// in place of any non-ASCII character found in the source string.
    /// Otherwise, appends UTF-8 representation of the source string.
    /// </summary>
    /// <param name="in]">
    /// theOther the extended string to append
    /// </param>
    /// <param name="in]">
    /// theReplaceNonAscii replacement character for non-ASCII characters
    /// </param>
    void AssignCat(Macad::Occt::TCollection_ExtendedString^ theOther, char theReplaceNonAscii);
    /// <summary>
    /// Appends an extended string to this ASCII string.
    /// If theReplaceNonAscii is non-null character, it will be used
    /// in place of any non-ASCII character found in the source string.
    /// Otherwise, appends UTF-8 representation of the source string.
    /// </summary>
    /// <param name="in]">
    /// theOther the extended string to append
    /// </param>
    /// <param name="in]">
    /// theReplaceNonAscii replacement character for non-ASCII characters
    /// </param>
    void AssignCat(Macad::Occt::TCollection_ExtendedString^ theOther);
    /// <summary>
    /// Appends wide-char string converted to UTF-8 representation.
    /// </summary>
    /// <param name="in]">
    /// theStringUtf the wide character string to append
    /// </param>
    void AssignCat(System::String^ theStringUtf);
    /// <summary>
    /// Core implementation: Appends string (pointer and length) to this ASCII string.
    /// This is the primary implementation that all other AssignCat overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to append
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to append
    /// </param>
    void AssignCat(System::String^ theString, int theLength);
    /// <summary>
    /// Appends other string to this string. This is an unary operator.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Hello");
    /// TCollection_AsciiString anotherString(" World");
    /// aString += anotherString;
    /// // Result: aString == "Hello World"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the string to append
    /// </param>
    void AssignCat(Macad::Occt::TCollection_AsciiString^ theOther);
    /* Method skipped due to unknown mapping: void AssignCat(string_view theStringView, ) */
    /// <summary>
    /// Converts the first character into its corresponding
    /// upper-case character and the other characters into lowercase
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("hellO ");
    /// aString.Capitalize();
    /// // Result: aString == "Hello "
    /// ```
    /// </summary>
    void Capitalize();
    /// <summary>
    /// Core implementation: Appends string (pointer and length) to this ASCII string and returns
    /// a new string. This is the primary implementation that all other Cat overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to append
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to append
    /// </param>
    /// <returns>
    /// new string with the string appended
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Cat(System::String^ theString, int theLength);
    /// <summary>
    /// Appends other character to this string.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("I say ");
    /// TCollection_AsciiString aResult = aString + '!';
    /// // Result: aResult == "I say !"
    /// 
    /// // To catenate more, you must put a String before.
    /// // "Hello " + "Dolly" // THIS IS NOT ALLOWED
    /// // This rule is applicable to AssignCat (operator +=) too.
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the character to append
    /// </param>
    /// <returns>
    /// new string with character appended
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Cat(char theOther);
    /// <summary>
    /// Appends other integer to this string.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("I say ");
    /// TCollection_AsciiString aResult = aString + 15;
    /// // Result: aResult == "I say 15"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the integer to append
    /// </param>
    /// <returns>
    /// new string with integer appended
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Cat(int theOther);
    /// <summary>
    /// Appends other real number to this string.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("I say ");
    /// TCollection_AsciiString aResult = aString + 15.15;
    /// // Result: aResult == "I say 15.15"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the real number to append
    /// </param>
    /// <returns>
    /// new string with real number appended
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Cat(double theOther);
    /// <summary>
    /// Appends extended string to this string.
    /// If theReplaceNonAscii is non-null character, it will be used
    /// in place of any non-ASCII character found in the source string.
    /// Otherwise, concatenates UTF-8 representation of the source string.
    /// </summary>
    /// <param name="in]">
    /// theOther the extended string to append
    /// </param>
    /// <param name="in]">
    /// theReplaceNonAscii replacement character for non-ASCII characters
    /// </param>
    /// <returns>
    /// new string with extended string appended
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Cat(Macad::Occt::TCollection_ExtendedString^ theOther, char theReplaceNonAscii);
    /// <summary>
    /// Appends extended string to this string.
    /// If theReplaceNonAscii is non-null character, it will be used
    /// in place of any non-ASCII character found in the source string.
    /// Otherwise, concatenates UTF-8 representation of the source string.
    /// </summary>
    /// <param name="in]">
    /// theOther the extended string to append
    /// </param>
    /// <param name="in]">
    /// theReplaceNonAscii replacement character for non-ASCII characters
    /// </param>
    /// <returns>
    /// new string with extended string appended
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Cat(Macad::Occt::TCollection_ExtendedString^ theOther);
    /// <summary>
    /// Appends wide-char string converted to UTF-8 representation.
    /// </summary>
    /// <param name="in]">
    /// theStringUtf the wide character string to append
    /// </param>
    /// <returns>
    /// new string with wide-char string appended
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Cat(System::String^ theStringUtf);
    /// <summary>
    /// Appends other string to this string.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Hello");
    /// TCollection_AsciiString anotherString(" World");
    /// TCollection_AsciiString aResult = aString + anotherString;
    /// // Result: aResult == "Hello World"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the string to append
    /// </param>
    /// <returns>
    /// new string with other string appended
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Cat(Macad::Occt::TCollection_AsciiString^ theOther);
    /* Method skipped due to unknown mapping: TCollection_AsciiString Cat(string_view theStringView, ) */
    /// <summary>
    /// Modifies this ASCII string so that its length
    /// becomes equal to Width and the new characters
    /// are equal to Filler. New characters are added
    /// both at the beginning and at the end of this string.
    /// If Width is less than the length of this ASCII string, nothing happens.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString anAlphabet("abcdef");
    /// anAlphabet.Center(9, ' ');
    /// // Result: anAlphabet == " abcdef "
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWidth the desired width
    /// </param>
    /// <param name="in]">
    /// theFiller the character to fill with
    /// </param>
    void Center(int theWidth, char theFiller);
    /// <summary>
    /// Substitutes all the characters equal to aChar by NewChar
    /// in this AsciiString.
    /// The substitution can be case sensitive.
    /// If you don't use default case sensitive, no matter whether aChar
    /// is uppercase or not.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Histake");
    /// aString.ChangeAll('H', 'M', true);
    /// // Result: aString == "Mistake"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theChar the character to replace
    /// </param>
    /// <param name="in]">
    /// theNewChar the replacement character
    /// </param>
    /// <param name="in]">
    /// theCaseSensitive flag indicating case sensitivity
    /// </param>
    void ChangeAll(char theChar, char theNewChar, bool theCaseSensitive);
    /// <summary>
    /// Substitutes all the characters equal to aChar by NewChar
    /// in this AsciiString.
    /// The substitution can be case sensitive.
    /// If you don't use default case sensitive, no matter whether aChar
    /// is uppercase or not.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Histake");
    /// aString.ChangeAll('H', 'M', true);
    /// // Result: aString == "Mistake"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theChar the character to replace
    /// </param>
    /// <param name="in]">
    /// theNewChar the replacement character
    /// </param>
    /// <param name="in]">
    /// theCaseSensitive flag indicating case sensitivity
    /// </param>
    void ChangeAll(char theChar, char theNewChar);
    /// <summary>
    /// Removes all characters contained in this string.
    /// This produces an empty AsciiString.
    /// </summary>
    void Clear();
    /// <summary>
    /// Core implementation: Copy string (pointer and length) to this ASCII string.
    /// This is the primary implementation that all other Copy overloads redirect to.
    /// Used as operator =
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to copy from
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to copy
    /// </param>
    void Copy(System::String^ theString, int theLength);
    /// <summary>
    /// Copy C string to this ASCII string.
    /// Used as operator =
    /// </summary>
    /// <param name="in]">
    /// theCString the C string to copy from
    /// </param>
    void Copy(System::String^ theCString);
    /* Method skipped due to unknown mapping: void Copy(string_view theStringView, ) */
    /// <summary>
    /// Copy fromwhere to this string.
    /// Used as operator =
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString;
    /// TCollection_AsciiString anotherString("Hello World");
    /// aString = anotherString;  // operator=
    /// // Result: aString == "Hello World"
    /// ```
    /// </summary>
    void Copy(Macad::Occt::TCollection_AsciiString^ theFromWhere);
    /// <summary>
    /// Exchange the data of two strings (without reallocating memory).
    /// </summary>
    /// <param name="in,out]">
    /// theOther the string to exchange data with
    /// </param>
    void Swap(Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Core implementation: Returns the index of the first character of this string that is
    /// present in the given character set (pointer and length).
    /// The search begins at index FromIndex and ends at index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// </summary>
    /// <param name="in]">
    /// theSet pointer to the set of characters to search for
    /// </param>
    /// <param name="in]">
    /// theSetLength length of the set
    /// </param>
    /// <param name="in]">
    /// theFromIndex the starting index for search
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index for search
    /// </param>
    /// <returns>
    /// the index of first character found in set, or 0 if not found
    /// </returns>
    int FirstLocationInSet(System::String^ theSet, int theSetLength, int theFromIndex, int theToIndex);
    /// <summary>
    /// Returns the index of the first character of this string that is
    /// present in Set.
    /// The search begins to the index FromIndex and ends to the
    /// the index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("aabAcAa");
    /// TCollection_AsciiString aSet("Aa");
    /// int anIndex = aString.FirstLocationInSet(aSet, 1, 7);
    /// // Result: anIndex == 1
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theSet the set of characters to search for
    /// </param>
    /// <param name="in]">
    /// theFromIndex the starting index for search
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index for search
    /// </param>
    /// <returns>
    /// the index of first character found in set, or 0 if not found
    /// </returns>
    int FirstLocationInSet(Macad::Occt::TCollection_AsciiString^ theSet, int theFromIndex, int theToIndex);
    /* Method skipped due to unknown mapping: int FirstLocationInSet(string_view theSet, int theFromIndex, int theToIndex, ) */
    /// <summary>
    /// Core implementation: Returns the index of the first character of this string
    /// that is not present in the given character set (pointer and length).
    /// The search begins at index FromIndex and ends at index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// </summary>
    /// <param name="in]">
    /// theSet pointer to the set of characters to check against
    /// </param>
    /// <param name="in]">
    /// theSetLength length of the set
    /// </param>
    /// <param name="in]">
    /// theFromIndex the starting index for search
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index for search
    /// </param>
    /// <returns>
    /// the index of first character not in set, or 0 if not found
    /// </returns>
    int FirstLocationNotInSet(System::String^ theSet, int theSetLength, int theFromIndex, int theToIndex);
    /// <summary>
    /// Returns the index of the first character of this string
    /// that is not present in the set Set.
    /// The search begins to the index FromIndex and ends to the
    /// the index ToIndex in this string.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("aabAcAa");
    /// TCollection_AsciiString aSet("Aa");
    /// int anIndex = aString.FirstLocationNotInSet(aSet, 1, 7);
    /// // Result: anIndex == 3
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theSet the set of characters to check against
    /// </param>
    /// <param name="in]">
    /// theFromIndex the starting index for search
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index for search
    /// </param>
    /// <returns>
    /// the index of first character not in set, or 0 if not found
    /// </returns>
    int FirstLocationNotInSet(Macad::Occt::TCollection_AsciiString^ theSet, int theFromIndex, int theToIndex);
    /* Method skipped due to unknown mapping: int FirstLocationNotInSet(string_view theSet, int theFromIndex, int theToIndex, ) */
    /// <summary>
    /// Inserts a Character at position where.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("hy not ?");
    /// aString.Insert(1, 'W');
    /// // Result: aString == "Why not ?"
    /// 
    /// TCollection_AsciiString bString("Wh");
    /// bString.Insert(3, 'y');
    /// // Result: bString == "Why"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to insert at
    /// </param>
    /// <param name="in]">
    /// theWhat the character to insert
    /// </param>
    void Insert(int theWhere, char theWhat);
    /// <summary>
    /// Core implementation: Inserts a string (pointer and length) at position theWhere.
    /// This is the primary implementation that all other Insert overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theWhere position to insert at
    /// </param>
    /// <param name="in]">
    /// theString pointer to the string to insert
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to insert
    /// </param>
    void Insert(int theWhere, System::String^ theString, int theLength);
    /// <summary>
    /// Inserts a AsciiString at position where.
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to insert at
    /// </param>
    /// <param name="in]">
    /// theWhat the ASCII string to insert
    /// </param>
    void Insert(int theWhere, Macad::Occt::TCollection_AsciiString^ theWhat);
    /* Method skipped due to unknown mapping: void Insert(int theWhere, string_view theStringView, ) */
    /// <summary>
    /// Core implementation: Inserts string (pointer and length) after a specific index in this
    /// string. This is the primary implementation that all other InsertAfter overloads redirect to.
    /// Raises an exception if index is out of bounds (less than 0 or greater than the length).
    /// </summary>
    /// <param name="in]">
    /// theIndex the index to insert after
    /// </param>
    /// <param name="in]">
    /// theString pointer to the string to insert
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to insert
    /// </param>
    void InsertAfter(int theIndex, System::String^ theString, int theLength);
    /// <summary>
    /// Inserts an ASCII string after a specific index in this string.
    /// Raises an exception if index is out of bounds.
    /// </summary>
    /// <param name="in]">
    /// theIndex the index to insert after
    /// </param>
    /// <param name="in]">
    /// theOther the string to insert
    /// </param>
    void InsertAfter(int theIndex, Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Inserts a C string after a specific index in this string.
    /// Raises an exception if index is out of bounds.
    /// </summary>
    /// <param name="in]">
    /// theIndex the index to insert after
    /// </param>
    /// <param name="in]">
    /// theCString the C string to insert
    /// </param>
    void InsertAfter(int theIndex, System::String^ theCString);
    /* Method skipped due to unknown mapping: void InsertAfter(int theIndex, string_view theStringView, ) */
    /// <summary>
    /// Core implementation: Inserts string (pointer and length) before a specific index in this
    /// string. This is the primary implementation that all other InsertBefore overloads redirect to.
    /// Raises an exception if index is out of bounds (less than 1 or greater than the length).
    /// </summary>
    /// <param name="in]">
    /// theIndex the index to insert before
    /// </param>
    /// <param name="in]">
    /// theString pointer to the string to insert
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to insert
    /// </param>
    void InsertBefore(int theIndex, System::String^ theString, int theLength);
    /// <summary>
    /// Inserts an ASCII string before a specific index in this string.
    /// Raises an exception if index is out of bounds.
    /// </summary>
    /// <param name="in]">
    /// theIndex the index to insert before
    /// </param>
    /// <param name="in]">
    /// theOther the string to insert
    /// </param>
    void InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Inserts a C string before a specific index in this string.
    /// Raises an exception if index is out of bounds.
    /// </summary>
    /// <param name="in]">
    /// theIndex the index to insert before
    /// </param>
    /// <param name="in]">
    /// theCString the C string to insert
    /// </param>
    void InsertBefore(int theIndex, System::String^ theCString);
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, string_view theStringView, ) */
    /// <summary>
    /// Returns True if this string contains zero character.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns true if the characters in this ASCII string
    /// are identical to the characters in ASCII string other.
    /// Note that this method is an alias of operator ==.
    /// </summary>
    /// <param name="in]">
    /// theOther the ASCII string to compare with
    /// </param>
    /// <returns>
    /// true if strings are equal, false otherwise
    /// </returns>
    bool IsEqual(Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Core implementation: Returns true if the characters in this ASCII string
    /// are identical to the string (pointer and length).
    /// This is the primary implementation that string_view and CString overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to compare with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to compare with
    /// </param>
    /// <returns>
    /// true if strings are equal, false otherwise
    /// </returns>
    bool IsEqual(System::String^ theString, int theLength);
    /// <summary>
    /// Returns true if the characters in this ASCII string are identical to the C string.
    /// </summary>
    /// <param name="in]">
    /// theCString the C string to compare with
    /// </param>
    /// <returns>
    /// true if strings are equal, false otherwise
    /// </returns>
    bool IsEqual(System::String^ theCString);
    /* Method skipped due to unknown mapping: bool IsEqual(string_view theStringView, ) */
    /// <summary>
    /// Returns true if there are differences between the
    /// characters in this ASCII string and ASCII string other.
    /// Note that this method is an alias of operator !=
    /// </summary>
    /// <param name="in]">
    /// theOther the ASCII string to compare with
    /// </param>
    /// <returns>
    /// true if strings are different, false otherwise
    /// </returns>
    bool IsDifferent(Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Core implementation: Returns true if there are differences between this ASCII string
    /// and the string (pointer and length).
    /// This is the primary implementation that string_view and CString overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to compare with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to compare with
    /// </param>
    /// <returns>
    /// true if strings are different, false otherwise
    /// </returns>
    bool IsDifferent(System::String^ theString, int theLength);
    /// <summary>
    /// Returns true if there are differences between this ASCII string and C string.
    /// </summary>
    /// <param name="in]">
    /// theCString the C string to compare with
    /// </param>
    /// <returns>
    /// true if strings are different, false otherwise
    /// </returns>
    bool IsDifferent(System::String^ theCString);
    /* Method skipped due to unknown mapping: bool IsDifferent(string_view theStringView, ) */
    /// <summary>
    /// Core implementation: Returns TRUE if this string is lexicographically less than
    /// the string (pointer and length).
    /// This is the primary implementation that all other IsLess overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to compare with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to compare with
    /// </param>
    /// <returns>
    /// true if this string is lexicographically less than the given string
    /// </returns>
    bool IsLess(System::String^ theString, int theLength);
    /// <summary>
    /// Returns TRUE if this string is 'ASCII' less than other.
    /// </summary>
    /// <param name="in]">
    /// theOther the ASCII string to compare with
    /// </param>
    /// <returns>
    /// true if this string is lexicographically less than other
    /// </returns>
    bool IsLess(Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Returns TRUE if this string is lexicographically less than C string.
    /// </summary>
    /// <param name="in]">
    /// theCString the C string to compare with
    /// </param>
    /// <returns>
    /// true if this string is lexicographically less than C string
    /// </returns>
    bool IsLess(System::String^ theCString);
    /* Method skipped due to unknown mapping: bool IsLess(string_view theStringView, ) */
    /// <summary>
    /// Core implementation: Returns TRUE if this string is lexicographically greater than
    /// the string (pointer and length).
    /// This is the primary implementation that all other IsGreater overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theString pointer to the string to compare with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to compare with
    /// </param>
    /// <returns>
    /// true if this string is lexicographically greater than the given string
    /// </returns>
    bool IsGreater(System::String^ theString, int theLength);
    /// <summary>
    /// Returns TRUE if this string is 'ASCII' greater than other.
    /// </summary>
    /// <param name="in]">
    /// theOther the ASCII string to compare with
    /// </param>
    /// <returns>
    /// true if this string is lexicographically greater than other
    /// </returns>
    bool IsGreater(Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Returns TRUE if this string is lexicographically greater than C string.
    /// </summary>
    /// <param name="in]">
    /// theCString the C string to compare with
    /// </param>
    /// <returns>
    /// true if this string is lexicographically greater than C string
    /// </returns>
    bool IsGreater(System::String^ theCString);
    /* Method skipped due to unknown mapping: bool IsGreater(string_view theStringView, ) */
    /// <summary>
    /// Core implementation: Determines whether the beginning of this string instance matches
    /// the specified string (pointer and length).
    /// </summary>
    /// <param name="in]">
    /// theStartString pointer to the string to check for at the beginning
    /// </param>
    /// <param name="in]">
    /// theStartLength length of the string to check for
    /// </param>
    /// <returns>
    /// true if this string starts with theStartString
    /// </returns>
    bool StartsWith(System::String^ theStartString, int theStartLength);
    /// <summary>
    /// Determines whether the beginning of this string instance matches the specified string.
    /// </summary>
    /// <param name="in]">
    /// theStartString the string to check for at the beginning
    /// </param>
    /// <returns>
    /// true if this string starts with theStartString
    /// </returns>
    bool StartsWith(Macad::Occt::TCollection_AsciiString^ theStartString);
    /// <summary>
    /// Determines whether the beginning of this string matches the specified C string.
    /// </summary>
    /// <param name="in]">
    /// theCString the C string to check for at the beginning
    /// </param>
    /// <returns>
    /// true if this string starts with theCString
    /// </returns>
    bool StartsWith(System::String^ theCString);
    /* Method skipped due to unknown mapping: bool StartsWith(string_view theStartString, ) */
    /// <summary>
    /// Core implementation: Determines whether the end of this string instance matches
    /// the specified string (pointer and length).
    /// </summary>
    /// <param name="in]">
    /// theEndString pointer to the string to check for at the end
    /// </param>
    /// <param name="in]">
    /// theEndLength length of the string to check for
    /// </param>
    /// <returns>
    /// true if this string ends with theEndString
    /// </returns>
    bool EndsWith(System::String^ theEndString, int theEndLength);
    /// <summary>
    /// Determines whether the end of this string instance matches the specified string.
    /// </summary>
    /// <param name="in]">
    /// theEndString the string to check for at the end
    /// </param>
    /// <returns>
    /// true if this string ends with theEndString
    /// </returns>
    bool EndsWith(Macad::Occt::TCollection_AsciiString^ theEndString);
    /* Method skipped due to unknown mapping: bool EndsWith(string_view theEndString, ) */
    /// <summary>
    /// Converts a AsciiString containing a numeric expression to an Integer.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("215");
    /// int anInt = aString.IntegerValue();
    /// // Result: anInt == 215
    /// ```
    /// </summary>
    /// <returns>
    /// the integer value of the string
    /// </returns>
    int IntegerValue();
    /// <summary>
    /// Returns True if the AsciiString contains an integer value.
    /// Note: an integer value is considered to be a real value as well.
    /// </summary>
    /// <returns>
    /// true if string represents an integer value
    /// </returns>
    bool IsIntegerValue();
    /// <summary>
    /// Returns True if the AsciiString starts with some characters that can be interpreted as integer
    /// or real value.
    /// </summary>
    /// <param name="in]">
    /// theToCheckFull  when TRUE, checks if entire string defines a real value;
    /// otherwise checks if string starts with a real value
    /// Note: an integer value is considered to be a real value as well.
    /// </param>
    /// <returns>
    /// true if string represents a real value
    /// </returns>
    bool IsRealValue(bool theToCheckFull);
    /// <summary>
    /// Returns True if the AsciiString starts with some characters that can be interpreted as integer
    /// or real value.
    /// </summary>
    /// <param name="in]">
    /// theToCheckFull  when TRUE, checks if entire string defines a real value;
    /// otherwise checks if string starts with a real value
    /// Note: an integer value is considered to be a real value as well.
    /// </param>
    /// <returns>
    /// true if string represents a real value
    /// </returns>
    bool IsRealValue();
    /// <summary>
    /// Returns True if the AsciiString contains only ASCII characters
    /// between ' ' and '~'.
    /// This means no control character and no extended ASCII code.
    /// </summary>
    /// <returns>
    /// true if string contains only ASCII characters
    /// </returns>
    bool IsAscii();
    /// <summary>
    /// Removes all space characters in the beginning of the string.
    /// </summary>
    void LeftAdjust();
    /// <summary>
    /// left justify
    /// Length becomes equal to Width and the new characters are
    /// equal to Filler.
    /// If Width < Length nothing happens.
    /// Raises an exception if Width is less than zero.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("abcdef");
    /// aString.LeftJustify(9, ' ');
    /// // Result: aString == "abcdef   "
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWidth the desired width
    /// </param>
    /// <param name="in]">
    /// theFiller the character to fill with
    /// </param>
    void LeftJustify(int theWidth, char theFiller);
    /// <summary>
    /// Returns number of characters in this string.
    /// This is the same functionality as 'strlen' in C.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString anAlphabet("abcdef");
    /// int aLength = anAlphabet.Length();
    /// // Result: aLength == 6
    /// ```
    /// -   1 is the position of the first character in this string.
    /// -   The length of this string gives the position of its last character.
    /// -   Positions less than or equal to zero, or
    /// greater than the length of this string are
    /// invalid in functions which identify a character
    /// of this string by its position.
    /// </summary>
    /// <returns>
    /// the number of characters in the string
    /// </returns>
    int Length();
    /// <summary>
    /// Returns an index in this string of the first occurrence
    /// of the string S in this string from the starting index
    /// FromIndex to the ending index ToIndex
    /// returns zero if failure
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("aabAaAa");
    /// TCollection_AsciiString aSearchString("Aa");
    /// int anIndex = aString.Location(aSearchString, 1, 7);
    /// // Result: anIndex == 4
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the string to search for
    /// </param>
    /// <param name="in]">
    /// theFromIndex the starting index for search
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index for search
    /// </param>
    /// <returns>
    /// the index of first occurrence, or 0 if not found
    /// </returns>
    int Location(Macad::Occt::TCollection_AsciiString^ theOther, int theFromIndex, int theToIndex);
    /// <summary>
    /// Returns the index of the nth occurrence of the character C
    /// in this string from the starting index FromIndex to the
    /// ending index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("aabAa");
    /// int anIndex = aString.Location(3, 'a', 1, 5);
    /// // Result: anIndex == 5
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theN the occurrence number to find
    /// </param>
    /// <param name="in]">
    /// theC the character to search for
    /// </param>
    /// <param name="in]">
    /// theFromIndex the starting index for search
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index for search
    /// </param>
    /// <returns>
    /// the index of the nth occurrence, or 0 if not found
    /// </returns>
    int Location(int theN, char theC, int theFromIndex, int theToIndex);
    /// <summary>
    /// Converts this string to its lower-case equivalent.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Hello Dolly");
    /// aString.UpperCase();
    /// // Result: aString == "HELLO DOLLY"
    /// aString.LowerCase();
    /// // Result: aString == "hello dolly"
    /// ```
    /// </summary>
    void LowerCase();
    /// <summary>
    /// Inserts the string other at the beginning of this ASCII string.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString anAlphabet("cde");
    /// TCollection_AsciiString aBegin("ab");
    /// anAlphabet.Prepend(aBegin);
    /// // Result: anAlphabet == "abcde"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theOther the string to prepend
    /// </param>
    void Prepend(Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Displays this string on a stream.
    /// </summary>
    /// <param name="in]">
    /// theStream the output stream
    /// </param>
    void Print(System::IO::TextWriter^ theStream);
    /* Method skipped due to unknown mapping: void Read(istream theStream, ) */
    /// <summary>
    /// Converts an AsciiString containing a numeric expression to a Real.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString1("215");
    /// double aReal1 = aString1.RealValue();
    /// // Result: aReal1 == 215.0
    /// 
    /// TCollection_AsciiString aString2("3.14159267");
    /// double aReal2 = aString2.RealValue();
    /// // Result: aReal2 == 3.14159267
    /// ```
    /// </summary>
    /// <returns>
    /// the real value of the string
    /// </returns>
    double RealValue();
    /// <summary>
    /// Remove all the occurrences of the character C in the string.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("HellLLo");
    /// aString.RemoveAll('L', true);
    /// // Result: aString == "Hello"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theC the character to remove
    /// </param>
    /// <param name="in]">
    /// theCaseSensitive flag indicating case sensitivity
    /// </param>
    void RemoveAll(char theC, bool theCaseSensitive);
    /// <summary>
    /// Removes every what characters from this string.
    /// </summary>
    /// <param name="in]">
    /// theWhat the character to remove
    /// </param>
    void RemoveAll(char theWhat);
    /// <summary>
    /// Erases ahowmany characters from position where,
    /// where included.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Hello");
    /// aString.Remove(2, 2); // erases 2 characters from position 2
    /// // Result: aString == "Hlo"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to start erasing from
    /// </param>
    /// <param name="in]">
    /// theHowMany the number of characters to erase
    /// </param>
    void Remove(int theWhere, int theHowMany);
    /// <summary>
    /// Erases ahowmany characters from position where,
    /// where included.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Hello");
    /// aString.Remove(2, 2); // erases 2 characters from position 2
    /// // Result: aString == "Hlo"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to start erasing from
    /// </param>
    /// <param name="in]">
    /// theHowMany the number of characters to erase
    /// </param>
    void Remove(int theWhere);
    /// <summary>
    /// Removes all space characters at the end of the string.
    /// </summary>
    void RightAdjust();
    /// <summary>
    /// Right justify.
    /// Length becomes equal to Width and the new characters are
    /// equal to Filler.
    /// if Width < Length nothing happens.
    /// Raises an exception if Width is less than zero.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("abcdef");
    /// aString.RightJustify(9, ' ');
    /// // Result: aString == "   abcdef"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWidth the desired width
    /// </param>
    /// <param name="in]">
    /// theFiller the character to fill with
    /// </param>
    void RightJustify(int theWidth, char theFiller);
    /// <summary>
    /// Core implementation: Searches a string (pointer and length) in this string from the beginning
    /// and returns position of first item matching.
    /// It returns -1 if not found.
    /// </summary>
    /// <param name="in]">
    /// theWhat pointer to the string to search for
    /// </param>
    /// <param name="in]">
    /// theWhatLength length of the string to search for
    /// </param>
    /// <returns>
    /// the position of first match, or -1 if not found
    /// </returns>
    int Search(System::String^ theWhat, int theWhatLength);
    /// <summary>
    /// Searches an AsciiString in this string from the beginning
    /// and returns position of first item what matching.
    /// It returns -1 if not found.
    /// </summary>
    /// <param name="in]">
    /// theWhat the ASCII string to search for
    /// </param>
    /// <returns>
    /// the position of first match, or -1 if not found
    /// </returns>
    int Search(Macad::Occt::TCollection_AsciiString^ theWhat);
    /// <summary>
    /// Searches a C string in this string from the beginning.
    /// </summary>
    /// <param name="in]">
    /// theCString the C string to search for
    /// </param>
    /// <returns>
    /// the position of first match, or -1 if not found
    /// </returns>
    int Search(System::String^ theCString);
    /* Method skipped due to unknown mapping: int Search(string_view theWhat, ) */
    /// <summary>
    /// Core implementation: Searches a string (pointer and length) in this string from the end
    /// and returns position of first item matching.
    /// It returns -1 if not found.
    /// </summary>
    /// <param name="in]">
    /// theWhat pointer to the string to search for
    /// </param>
    /// <param name="in]">
    /// theWhatLength length of the string to search for
    /// </param>
    /// <returns>
    /// the position of first match from end, or -1 if not found
    /// </returns>
    int SearchFromEnd(System::String^ theWhat, int theWhatLength);
    /// <summary>
    /// Searches a AsciiString in another AsciiString from the end
    /// and returns position of first item what matching.
    /// It returns -1 if not found.
    /// </summary>
    /// <param name="in]">
    /// theWhat the ASCII string to search for
    /// </param>
    /// <returns>
    /// the position of first match from end, or -1 if not found
    /// </returns>
    int SearchFromEnd(Macad::Occt::TCollection_AsciiString^ theWhat);
    /// <summary>
    /// Searches a C string in this string from the end.
    /// </summary>
    /// <param name="in]">
    /// theCString the C string to search for
    /// </param>
    /// <returns>
    /// the position of first match from end, or -1 if not found
    /// </returns>
    int SearchFromEnd(System::String^ theCString);
    /* Method skipped due to unknown mapping: int SearchFromEnd(string_view theWhat, ) */
    /// <summary>
    /// Replaces one character in the AsciiString at position where.
    /// If where is less than zero or greater than the length of this string
    /// an exception is raised.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Garbake");
    /// aString.SetValue(6, 'g');
    /// // Result: aString == "Garbage"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to replace at
    /// </param>
    /// <param name="in]">
    /// theWhat the character to replace with
    /// </param>
    void SetValue(int theWhere, char theWhat);
    /// <summary>
    /// Core implementation: Replaces a part of this string with a string (pointer and length).
    /// This is the primary implementation that all other SetValue string overloads redirect to.
    /// </summary>
    /// <param name="in]">
    /// theWhere position to start replacement
    /// </param>
    /// <param name="in]">
    /// theString pointer to the string to replace with
    /// </param>
    /// <param name="in]">
    /// theLength length of the string to replace with
    /// </param>
    void SetValue(int theWhere, System::String^ theString, int theLength);
    /// <summary>
    /// Replaces a part of this string by another AsciiString.
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to start replacement
    /// </param>
    /// <param name="in]">
    /// theWhat the ASCII string to replace with
    /// </param>
    void SetValue(int theWhere, Macad::Occt::TCollection_AsciiString^ theWhat);
    /* Method skipped due to unknown mapping: void SetValue(int theWhere, string_view theStringView, ) */
    /// <summary>
    /// Splits a AsciiString into two sub-strings.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("abcdefg");
    /// TCollection_AsciiString aSecondPart = aString.Split(3);
    /// // Result: aString == "abc" and aSecondPart == "defg"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to split at
    /// </param>
    /// <returns>
    /// the second part of the split string
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Split(int theWhere);
    /// <summary>
    /// Creation of a sub-string of this string.
    /// The sub-string starts to the index Fromindex and ends
    /// to the index ToIndex.
    /// Raises an exception if ToIndex or FromIndex is out of bounds
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("abcdefg");
    /// TCollection_AsciiString aSubString = aString.SubString(3, 6);
    /// // Result: aSubString == "cdef"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theFromIndex the starting index
    /// </param>
    /// <param name="in]">
    /// theToIndex the ending index
    /// </param>
    /// <returns>
    /// the substring from FromIndex to ToIndex
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ SubString(int theFromIndex, int theToIndex);
    /// <summary>
    /// Returns pointer to AsciiString (char *).
    /// This is useful for some casual manipulations.
    /// Warning: Because this "char *" is 'const', you can't modify its contents.
    /// </summary>
    /// <returns>
    /// the C string representation
    /// </returns>
    System::String^ ToCString();
    /// <summary>
    /// Extracts whichone token from this string.
    /// By default, the separators is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// separators contains all separators you need.
    /// If no token indexed by whichone is found, it returns empty AsciiString.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("This is a     message");
    /// TCollection_AsciiString aToken1 = aString.Token();
    /// // Result: aToken1 == "This"
    /// 
    /// TCollection_AsciiString aToken2 = aString.Token(" ", 4);
    /// // Result: aToken2 == "message"
    /// 
    /// TCollection_AsciiString aToken3 = aString.Token(" ", 2);
    /// // Result: aToken3 == "is"
    /// 
    /// TCollection_AsciiString aToken4 = aString.Token(" ", 9);
    /// // Result: aToken4 == ""
    /// 
    /// TCollection_AsciiString bString("1234; test:message   , value");
    /// TCollection_AsciiString bToken1 = bString.Token("; :,", 4);
    /// // Result: bToken1 == "value"
    /// 
    /// TCollection_AsciiString bToken2 = bString.Token("; :,", 2);
    /// // Result: bToken2 == "test"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theSeparators the separator characters
    /// </param>
    /// <param name="in]">
    /// theWhichOne the token number to extract
    /// </param>
    Macad::Occt::TCollection_AsciiString^ Token(System::String^ theSeparators, int theWhichOne);
    /// <summary>
    /// Extracts whichone token from this string.
    /// By default, the separators is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// separators contains all separators you need.
    /// If no token indexed by whichone is found, it returns empty AsciiString.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("This is a     message");
    /// TCollection_AsciiString aToken1 = aString.Token();
    /// // Result: aToken1 == "This"
    /// 
    /// TCollection_AsciiString aToken2 = aString.Token(" ", 4);
    /// // Result: aToken2 == "message"
    /// 
    /// TCollection_AsciiString aToken3 = aString.Token(" ", 2);
    /// // Result: aToken3 == "is"
    /// 
    /// TCollection_AsciiString aToken4 = aString.Token(" ", 9);
    /// // Result: aToken4 == ""
    /// 
    /// TCollection_AsciiString bString("1234; test:message   , value");
    /// TCollection_AsciiString bToken1 = bString.Token("; :,", 4);
    /// // Result: bToken1 == "value"
    /// 
    /// TCollection_AsciiString bToken2 = bString.Token("; :,", 2);
    /// // Result: bToken2 == "test"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theSeparators the separator characters
    /// </param>
    /// <param name="in]">
    /// theWhichOne the token number to extract
    /// </param>
    Macad::Occt::TCollection_AsciiString^ Token(System::String^ theSeparators);
    /// <summary>
    /// Extracts whichone token from this string.
    /// By default, the separators is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// separators contains all separators you need.
    /// If no token indexed by whichone is found, it returns empty AsciiString.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("This is a     message");
    /// TCollection_AsciiString aToken1 = aString.Token();
    /// // Result: aToken1 == "This"
    /// 
    /// TCollection_AsciiString aToken2 = aString.Token(" ", 4);
    /// // Result: aToken2 == "message"
    /// 
    /// TCollection_AsciiString aToken3 = aString.Token(" ", 2);
    /// // Result: aToken3 == "is"
    /// 
    /// TCollection_AsciiString aToken4 = aString.Token(" ", 9);
    /// // Result: aToken4 == ""
    /// 
    /// TCollection_AsciiString bString("1234; test:message   , value");
    /// TCollection_AsciiString bToken1 = bString.Token("; :,", 4);
    /// // Result: bToken1 == "value"
    /// 
    /// TCollection_AsciiString bToken2 = bString.Token("; :,", 2);
    /// // Result: bToken2 == "test"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theSeparators the separator characters
    /// </param>
    /// <param name="in]">
    /// theWhichOne the token number to extract
    /// </param>
    Macad::Occt::TCollection_AsciiString^ Token();
    /// <summary>
    /// Truncates this string to ahowmany characters.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Hello Dolly");
    /// aString.Trunc(3);
    /// // Result: aString == "Hel"
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theHowMany the number of characters to keep
    /// </param>
    void Trunc(int theHowMany);
    /// <summary>
    /// Converts this string to its upper-case equivalent.
    /// </summary>
    void UpperCase();
    /// <summary>
    /// Length of the string ignoring all spaces (' ') and the
    /// control character at the end.
    /// </summary>
    /// <returns>
    /// the useful length of the string
    /// </returns>
    int UsefullLength();
    /// <summary>
    /// Returns character at position where in this string.
    /// If where is less than zero or greater than the length of this string,
    /// an exception is raised.
    /// 
    /// Example:
    /// ```cpp
    /// TCollection_AsciiString aString("Hello");
    /// char aChar = aString.Value(2);
    /// // Result: aChar == 'e'
    /// ```
    /// </summary>
    /// <param name="in]">
    /// theWhere the position to get character from
    /// </param>
    /// <returns>
    /// the character at the specified position
    /// </returns>
    char Value(int theWhere);
    /// <summary>
    /// Computes a hash code for the given ASCII string
    /// Returns the same integer value as the hash function for TCollection_ExtendedString
    /// </summary>
    /// <returns>
    /// a computed hash code
    /// </returns>
    long long unsigned int HashCode();
    /// <summary>
    /// Returns a const reference to a single shared empty string instance.
    /// This method provides access to a static empty string to avoid creating temporary empty
    /// strings. Use this method instead of constructing empty strings when you need a const
    /// reference.
    /// 
    /// Example:
    /// ```cpp
    /// const TCollection_AsciiString& anEmptyStr = TCollection_AsciiString::EmptyString();
    /// // Use anEmptyStr instead of TCollection_AsciiString()
    /// ```
    /// </summary>
    /// <returns>
    /// const reference to static empty string
    /// </returns>
    static Macad::Occt::TCollection_AsciiString^ EmptyString();
    /// <summary>
    /// Returns True when the two strings are the same.
    /// (Just for HashCode for AsciiString)
    /// </summary>
    /// <param name="in]">
    /// string1 first string to compare
    /// </param>
    /// <param name="in]">
    /// string2 second string to compare
    /// </param>
    /// <returns>
    /// true if strings are equal
    /// </returns>
    static bool IsEqual(Macad::Occt::TCollection_AsciiString^ string1, Macad::Occt::TCollection_AsciiString^ string2);
    /* Method skipped due to unknown mapping: bool IsEqual(TCollection_AsciiString theString1, string_view theStringView, ) */
    /* Method skipped due to unknown mapping: bool IsEqual(string_view theStringView, TCollection_AsciiString theString2, ) */
    /// <summary>
    /// Core implementation: Returns True if the two strings (pointer and length) contain same
    /// characters. This is the primary implementation that all other IsSameString overloads redirect
    /// to.
    /// </summary>
    /// <param name="in]">
    /// theString1 pointer to first string to compare
    /// </param>
    /// <param name="in]">
    /// theLength1 length of first string
    /// </param>
    /// <param name="in]">
    /// theString2 pointer to second string to compare
    /// </param>
    /// <param name="in]">
    /// theLength2 length of second string
    /// </param>
    /// <param name="in]">
    /// theIsCaseSensitive flag indicating case sensitivity
    /// </param>
    /// <returns>
    /// true if strings contain same characters
    /// </returns>
    static bool IsSameString(System::String^ theString1, int theLength1, System::String^ theString2, int theLength2, bool theIsCaseSensitive);
    /// <summary>
    /// Returns True if the strings contain same characters.
    /// </summary>
    /// <param name="in]">
    /// theString1 first string to compare
    /// </param>
    /// <param name="in]">
    /// theString2 second string to compare
    /// </param>
    /// <param name="in]">
    /// theIsCaseSensitive flag indicating case sensitivity
    /// </param>
    /// <returns>
    /// true if strings contain same characters
    /// </returns>
    static bool IsSameString(Macad::Occt::TCollection_AsciiString^ theString1, Macad::Occt::TCollection_AsciiString^ theString2, bool theIsCaseSensitive);
    /// <summary>
    /// Returns True if the string and C string contain same characters.
    /// </summary>
    /// <param name="in]">
    /// theString1 first string to compare
    /// </param>
    /// <param name="in]">
    /// theCString second C string to compare
    /// </param>
    /// <param name="in]">
    /// theIsCaseSensitive flag indicating case sensitivity
    /// </param>
    /// <returns>
    /// true if strings contain same characters
    /// </returns>
    static bool IsSameString(Macad::Occt::TCollection_AsciiString^ theString1, System::String^ theCString, bool theIsCaseSensitive);
    /// <summary>
    /// Returns True if the C string and string contain same characters.
    /// </summary>
    /// <param name="in]">
    /// theCString first C string to compare
    /// </param>
    /// <param name="in]">
    /// theString2 second string to compare
    /// </param>
    /// <param name="in]">
    /// theIsCaseSensitive flag indicating case sensitivity
    /// </param>
    /// <returns>
    /// true if strings contain same characters
    /// </returns>
    static bool IsSameString(System::String^ theCString, Macad::Occt::TCollection_AsciiString^ theString2, bool theIsCaseSensitive);
    /* Method skipped due to unknown mapping: bool IsSameString(TCollection_AsciiString theString1, string_view theStringView, bool theIsCaseSensitive, ) */
    /* Method skipped due to unknown mapping: bool IsSameString(string_view theStringView, TCollection_AsciiString theString2, bool theIsCaseSensitive, ) */
    /// <summary>
    /// Returns True if the two C strings contain same characters.
    /// </summary>
    /// <param name="in]">
    /// theCString1 first C string to compare
    /// </param>
    /// <param name="in]">
    /// theCString2 second C string to compare
    /// </param>
    /// <param name="in]">
    /// theIsCaseSensitive flag indicating case sensitivity
    /// </param>
    /// <returns>
    /// true if strings contain same characters
    /// </returns>
    static bool IsSameString(System::String^ theCString1, System::String^ theCString2, bool theIsCaseSensitive);
    /* Method skipped due to unknown mapping: bool IsSameString(string_view theStringView1, string_view theStringView2, bool theIsCaseSensitive, ) */
    bool Equals(System::Object^ obj) override;
}; // class TCollection_AsciiString

//---------------------------------------------------------------------
//  Class  TCollection_HExtendedString
//---------------------------------------------------------------------
/// <summary>
/// A variable-length sequence of "extended"
/// (UNICODE) characters (16-bit character
/// type). It provides editing operations with
/// built-in memory management to make
/// ExtendedString objects easier to use than
/// ordinary extended character arrays.
/// HExtendedString objects are handles to strings.
/// - HExtendedString strings may be shared by several objects.
/// - You may use an ExtendedString object to get the actual string.
/// Note: HExtendedString objects use an
/// ExtendedString string as a field.
/// </summary>
public ref class TCollection_HExtendedString sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TCollection_HExtendedString_h
public:
    Include_TCollection_HExtendedString_h
#endif

public:
    TCollection_HExtendedString(::TCollection_HExtendedString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TCollection_HExtendedString(::TCollection_HExtendedString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TCollection_HExtendedString* NativeInstance
    {
        ::TCollection_HExtendedString* get()
        {
            return static_cast<::TCollection_HExtendedString*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a HExtendedString to an empty ExtendedString.
    /// </summary>
    TCollection_HExtendedString();
    /// <summary>
    /// Initializes a HExtendedString with an ExtString.
    /// </summary>
    TCollection_HExtendedString(System::String^ message);
    /* Method skipped due to unknown mapping: void TCollection_HExtendedString(int length, char16_t filler, ) */
    /// <summary>
    /// Initializes a HExtendedString with a ExtendedString.
    /// </summary>
    TCollection_HExtendedString(Macad::Occt::TCollection_ExtendedString^ aString);
    /// <summary>
    /// Initializes a HExtendedString with an HAsciiString.
    /// </summary>
    TCollection_HExtendedString(Macad::Occt::TCollection_HAsciiString^ aString);
    /// <summary>
    /// Appends <other> to me.
    /// </summary>
    void AssignCat(Macad::Occt::TCollection_HExtendedString^ other);
    /// <summary>
    /// Returns a string appending <other> to me.
    /// </summary>
    Macad::Occt::TCollection_HExtendedString^ Cat(Macad::Occt::TCollection_HExtendedString^ other);
    /* Method skipped due to unknown mapping: void ChangeAll(char16_t aChar, char16_t NewChar, ) */
    /// <summary>
    /// Removes all characters contained in <me>.
    /// This produces an empty ExtendedString.
    /// </summary>
    void Clear();
    /// <summary>
    /// Returns True if the string <me> contains zero character
    /// </summary>
    bool IsEmpty();
    /* Method skipped due to unknown mapping: void Insert(int where, char16_t what, ) */
    /// <summary>
    /// Insert a HExtendedString at position <where>.
    /// </summary>
    void Insert(int where, Macad::Occt::TCollection_HExtendedString^ what);
    /// <summary>
    /// Returns TRUE if <me> is less than <other>.
    /// </summary>
    bool IsLess(Macad::Occt::TCollection_HExtendedString^ other);
    /// <summary>
    /// Returns TRUE if <me> is greater than <other>.
    /// </summary>
    bool IsGreater(Macad::Occt::TCollection_HExtendedString^ other);
    /// <summary>
    /// Returns True if the string contains only "Ascii Range" characters
    /// </summary>
    bool IsAscii();
    /// <summary>
    /// Returns number of characters in <me>.
    /// This is the same functionality as 'strlen' in C.
    /// </summary>
    int Length();
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Erase(2,2) erases 2 characters from position 1
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where, int ahowmany);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Erase(2,2) erases 2 characters from position 1
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where);
    /* Method skipped due to unknown mapping: void RemoveAll(char16_t what, ) */
    /* Method skipped due to unknown mapping: void SetValue(int where, char16_t what, ) */
    /// <summary>
    /// Replaces a part of <me> by another string.
    /// </summary>
    void SetValue(int where, Macad::Occt::TCollection_HExtendedString^ what);
    /// <summary>
    /// Splits a ExtendedString into two sub-strings.
    /// Example:
    /// aString contains "abcdefg"
    /// aString.Split(3) gives <me> = "abc" and returns "defg"
    /// </summary>
    Macad::Occt::TCollection_HExtendedString^ Split(int where);
    /// <summary>
    /// Searches a String in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// </summary>
    int Search(Macad::Occt::TCollection_HExtendedString^ what);
    /// <summary>
    /// Searches a ExtendedString in another ExtendedString from the end
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// </summary>
    int SearchFromEnd(Macad::Occt::TCollection_HExtendedString^ what);
    /// <summary>
    /// Returns pointer to ExtString
    /// </summary>
    System::String^ ToExtString();
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HExtendedString^ Token(System::String^ separators, int whichone);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HExtendedString^ Token(System::String^ separators);
    /// <summary>
    /// Truncates <me> to <ahowmany> characters.
    /// Example: me = "Hello Dolly" -> Trunc(3) -> me = "Hel"
    /// </summary>
    void Trunc(int ahowmany);
    /* Method skipped due to unknown mapping: char16_t Value(int where, ) */
    /// <summary>
    /// Returns the field myString
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ String();
    /// <summary>
    /// Displays <me>.
    /// </summary>
    void Print(System::IO::TextWriter^ astream);
    bool IsSameState(Macad::Occt::TCollection_HExtendedString^ other);
    static Macad::Occt::TCollection_HExtendedString^ CreateDowncasted(::TCollection_HExtendedString* instance);
}; // class TCollection_HExtendedString

//---------------------------------------------------------------------
//  Class  TCollection_HAsciiString
//---------------------------------------------------------------------
/// <summary>
/// A variable-length sequence of ASCII characters
/// (normal 8-bit character type). It provides editing
/// operations with built-in memory management to
/// make HAsciiString objects easier to use than ordinary character arrays.
/// HAsciiString objects are handles to strings.
/// -   HAsciiString strings may be shared by several objects.
/// -   You may use an AsciiString object to get the actual string.
/// Note: HAsciiString objects use an AsciiString string as a field.
/// </summary>
public ref class TCollection_HAsciiString sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TCollection_HAsciiString_h
public:
    Include_TCollection_HAsciiString_h
#endif

public:
    TCollection_HAsciiString(::TCollection_HAsciiString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TCollection_HAsciiString(::TCollection_HAsciiString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TCollection_HAsciiString* NativeInstance
    {
        ::TCollection_HAsciiString* get()
        {
            return static_cast<::TCollection_HAsciiString*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a HAsciiString to an empty AsciiString.
    /// </summary>
    TCollection_HAsciiString();
    /// <summary>
    /// Initializes a HAsciiString with a CString.
    /// </summary>
    TCollection_HAsciiString(System::String^ message);
    /// <summary>
    /// Initializes a HAsciiString with <length> space allocated.
    /// and filled with <filler>.This is useful for buffers.
    /// </summary>
    TCollection_HAsciiString(int length, char filler);
    /// <summary>
    /// Initializes a HAsciiString with an integer value
    /// </summary>
    TCollection_HAsciiString(int value);
    /// <summary>
    /// Initializes a HAsciiString with a real value
    /// </summary>
    TCollection_HAsciiString(double value);
    /// <summary>
    /// Initializes a HAsciiString with a AsciiString.
    /// </summary>
    TCollection_HAsciiString(Macad::Occt::TCollection_AsciiString^ aString);
    /// <summary>
    /// Initializes a HAsciiString with a HExtendedString.
    /// If replaceNonAscii is non-null character, it will be used
    /// in place of any non-ascii character found in the source string.
    /// Otherwise, creates UTF-8 unicode string.
    /// </summary>
    TCollection_HAsciiString(Macad::Occt::TCollection_HExtendedString^ aString, char replaceNonAscii);
    /// <summary>
    /// Appends <other> to me.
    /// </summary>
    void AssignCat(System::String^ other);
    /// <summary>
    /// Appends <other> to me.
    /// Example: aString = aString + anotherString
    /// </summary>
    void AssignCat(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Converts the first character into its corresponding
    /// upper-case character and the other characters into lowercase.
    /// Example:
    /// before
    /// me = "hellO "
    /// after
    /// me = "Hello "
    /// </summary>
    void Capitalize();
    /// <summary>
    /// Creates a new string by concatenation of this
    /// ASCII string and the other ASCII string.
    /// Example:
    /// aString = aString + anotherString
    /// aString = aString + "Dummy"
    /// aString contains "I say "
    /// aString = aString + "Hello " + "Dolly"
    /// gives "I say Hello Dolly"
    /// Warning: To catenate more than one CString, you must put a String before.
    /// So the following example is WRONG !
    /// aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED
    /// This rule is applicable to AssignCat (operator +=) too.
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Cat(System::String^ other);
    /// <summary>
    /// Creates a new string by concatenation of this
    /// ASCII string and the other ASCII string.
    /// Example: aString = aString + anotherString
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Cat(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Modifies this ASCII string so that its length
    /// becomes equal to Width and the new characters
    /// are equal to Filler. New characters are added
    /// both at the beginning and at the end of this string.
    /// If Width is less than the length of this ASCII string, nothing happens.
    /// Example
    /// occ::handle<TCollection_HAsciiString>
    /// myAlphabet
    /// = new
    /// TCollection_HAsciiString
    /// ("abcdef");
    /// myAlphabet->Center(9,' ');
    /// assert ( !strcmp(
    /// myAlphabet->ToCString(),
    /// " abcdef ") );
    /// </summary>
    void Center(int Width, char Filler);
    /// <summary>
    /// Replaces all characters equal to aChar by
    /// NewChar in this ASCII string. The substitution is
    /// case sensitive if CaseSensitive is true (default value).
    /// If you do not use the default case sensitive
    /// option, it does not matter whether aChar is upper-case or not.
    /// Example
    /// occ::handle<TCollection_HAsciiString>
    /// myMistake = new
    /// TCollection_HAsciiString
    /// ("Hather");
    /// myMistake->ChangeAll('H','F');
    /// assert ( !strcmp(
    /// myMistake->ToCString(),
    /// "Father") );
    /// </summary>
    void ChangeAll(char aChar, char NewChar, bool CaseSensitive);
    /// <summary>
    /// Replaces all characters equal to aChar by
    /// NewChar in this ASCII string. The substitution is
    /// case sensitive if CaseSensitive is true (default value).
    /// If you do not use the default case sensitive
    /// option, it does not matter whether aChar is upper-case or not.
    /// Example
    /// occ::handle<TCollection_HAsciiString>
    /// myMistake = new
    /// TCollection_HAsciiString
    /// ("Hather");
    /// myMistake->ChangeAll('H','F');
    /// assert ( !strcmp(
    /// myMistake->ToCString(),
    /// "Father") );
    /// </summary>
    void ChangeAll(char aChar, char NewChar);
    /// <summary>
    /// Removes all characters contained in <me>.
    /// This produces an empty HAsciiString.
    /// </summary>
    void Clear();
    /// <summary>
    /// Returns the index of the first character of <me> that is
    /// present in <Set>.
    /// The search begins to the index FromIndex and ends to the
    /// the index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range
    /// Example:
    /// before
    /// me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7
    /// after
    /// me = "aabAcAa"
    /// returns
    /// 1
    /// </summary>
    int FirstLocationInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex);
    /// <summary>
    /// Returns the index of the first character of <me>
    /// that is not present in the set <Set>.
    /// The search begins to the index FromIndex and ends to the
    /// the index ToIndex in <me>.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// Example:
    /// before
    /// me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7
    /// after
    /// me = "aabAcAa"
    /// returns
    /// 3
    /// </summary>
    int FirstLocationNotInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex);
    /// <summary>
    /// Insert a Character at position <where>.
    /// Example:
    /// aString contains "hy not ?"
    /// aString.Insert(1,'W'); gives "Why not ?"
    /// aString contains "Wh"
    /// aString.Insert(3,'y'); gives "Why"
    /// aString contains "Way"
    /// aString.Insert(2,'h'); gives "Why"
    /// </summary>
    void Insert(int where, char what);
    /// <summary>
    /// Insert a HAsciiString at position <where>.
    /// </summary>
    void Insert(int where, Macad::Occt::TCollection_HAsciiString^ what);
    /// <summary>
    /// Inserts the other ASCII string a after a specific index in the string <me>
    /// Example:
    /// before
    /// me = "cde" , Index = 0 , other = "ab"
    /// after
    /// me = "abcde" , other = "ab"
    /// </summary>
    void InsertAfter(int Index, Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Inserts the other ASCII string a before a specific index in the string <me>
    /// Raises an exception if Index is out of bounds
    /// Example:
    /// before
    /// me = "cde" , Index = 1 , other = "ab"
    /// after
    /// me = "abcde" , other = "ab"
    /// </summary>
    void InsertBefore(int Index, Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Returns True if the string <me> contains zero character
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns TRUE if <me> is 'ASCII' less than <other>.
    /// </summary>
    bool IsLess(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Returns TRUE if <me> is 'ASCII' greater than <other>.
    /// </summary>
    bool IsGreater(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Converts a HAsciiString containing a numeric expression to
    /// an Integer.
    /// Example: "215" returns 215.
    /// </summary>
    int IntegerValue();
    /// <summary>
    /// Returns True if the string contains an integer value.
    /// </summary>
    bool IsIntegerValue();
    /// <summary>
    /// Returns True if the string contains a real value.
    /// </summary>
    bool IsRealValue();
    /// <summary>
    /// Returns True if the string contains only ASCII characters
    /// between ' ' and '~'.
    /// This means no control character and no extended ASCII code.
    /// </summary>
    bool IsAscii();
    /// <summary>
    /// Returns True if the string S not contains same characters than
    /// the string <me>.
    /// </summary>
    bool IsDifferent(Macad::Occt::TCollection_HAsciiString^ S);
    /// <summary>
    /// Returns True if the string S contains same characters than the
    /// string <me>.
    /// </summary>
    bool IsSameString(Macad::Occt::TCollection_HAsciiString^ S);
    /// <summary>
    /// Returns True if the string S contains same characters than the
    /// string <me>.
    /// </summary>
    bool IsSameString(Macad::Occt::TCollection_HAsciiString^ S, bool CaseSensitive);
    /// <summary>
    /// Removes all space characters in the beginning of the string
    /// </summary>
    void LeftAdjust();
    /// <summary>
    /// Left justify.
    /// Length becomes equal to Width and the new characters are
    /// equal to Filler
    /// if Width < Length nothing happens
    /// Raises an exception if Width is less than zero
    /// Example:
    /// before
    /// me = "abcdef" , Width = 9 , Filler = ' '
    /// after
    /// me = "abcdef   "
    /// </summary>
    void LeftJustify(int Width, char Filler);
    /// <summary>
    /// Returns number of characters in <me>.
    /// This is the same functionality as 'strlen' in C.
    /// </summary>
    int Length();
    /// <summary>
    /// returns an index in the string <me> of the first occurrence
    /// of the string S in the string <me> from the starting index
    /// FromIndex to the ending index ToIndex
    /// returns zero if failure
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// Example:
    /// before
    /// me = "aabAaAa", S = "Aa", FromIndex = 1, ToIndex = 7
    /// after
    /// me = "aabAaAa"
    /// returns
    /// 4
    /// </summary>
    int Location(Macad::Occt::TCollection_HAsciiString^ other, int FromIndex, int ToIndex);
    /// <summary>
    /// Returns the index of the nth occurrence of the character C
    /// in the string <me> from the starting index FromIndex to the
    /// ending index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range
    /// Example:
    /// before
    /// me = "aabAa", N = 3, C = 'a', FromIndex = 1, ToIndex = 5
    /// after
    /// me = "aabAa"
    /// returns 5
    /// </summary>
    int Location(int N, char C, int FromIndex, int ToIndex);
    /// <summary>
    /// Converts <me> to its lower-case equivalent.
    /// </summary>
    void LowerCase();
    /// <summary>
    /// Inserts the other string at the beginning of the string <me>
    /// Example:
    /// before
    /// me = "cde" , S = "ab"
    /// after
    /// me = "abcde" , S = "ab"
    /// </summary>
    void Prepend(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Prints this string on the stream <astream>.
    /// </summary>
    void Print(System::IO::TextWriter^ astream);
    /// <summary>
    /// Converts a string containing a numeric expression to a Real.
    /// Example:
    /// "215" returns 215.0.
    /// "3.14159267" returns 3.14159267.
    /// </summary>
    double RealValue();
    /// <summary>
    /// Remove all the occurrences of the character C in the string
    /// Example:
    /// before
    /// me = "HellLLo", C = 'L' , CaseSensitive = True
    /// after
    /// me = "Hello"
    /// </summary>
    void RemoveAll(char C, bool CaseSensitive);
    /// <summary>
    /// Removes every <what> characters from <me>
    /// </summary>
    void RemoveAll(char what);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Erase(2,2) erases 2 characters from position 1
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where, int ahowmany);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Erase(2,2) erases 2 characters from position 1
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where);
    /// <summary>
    /// Removes all space characters at the end of the string.
    /// </summary>
    void RightAdjust();
    /// <summary>
    /// Right justify.
    /// Length becomes equal to Width and the new characters are
    /// equal to Filler
    /// if Width < Length nothing happens
    /// Raises an exception if Width is less than zero
    /// Example:
    /// before
    /// me = "abcdef" , Width = 9 , Filler = ' '
    /// after
    /// me = "   abcdef"
    /// </summary>
    void RightJustify(int Width, char Filler);
    /// <summary>
    /// Searches a CString in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// Example:
    /// aString contains "Sample single test"
    /// aString.Search("le") returns 5
    /// </summary>
    int Search(System::String^ what);
    /// <summary>
    /// Searches a String in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// it returns -1 if not found.
    /// </summary>
    int Search(Macad::Occt::TCollection_HAsciiString^ what);
    /// <summary>
    /// Searches a CString in a String from the end
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// Example:
    /// aString contains "Sample single test"
    /// aString.SearchFromEnd("le") returns 12
    /// </summary>
    int SearchFromEnd(System::String^ what);
    /// <summary>
    /// Searches a HAsciiString in another HAsciiString from the end
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// </summary>
    int SearchFromEnd(Macad::Occt::TCollection_HAsciiString^ what);
    /// <summary>
    /// Replaces one character in the string at position <where>.
    /// If <where> is less than zero or greater than the length of <me>
    /// an exception is raised.
    /// Example:
    /// aString contains "Garbake"
    /// astring.Replace(6,'g')  gives <me> = "Garbage"
    /// </summary>
    void SetValue(int where, char what);
    /// <summary>
    /// Replaces a part of <me> by another string.
    /// </summary>
    void SetValue(int where, Macad::Occt::TCollection_HAsciiString^ what);
    /// <summary>
    /// Splits a HAsciiString into two sub-strings.
    /// Example:
    /// aString contains "abcdefg"
    /// aString.Split(3) gives <me> = "abc" and returns "defg"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Split(int where);
    /// <summary>
    /// Creation of a sub-string of the string <me>.
    /// The sub-string starts to the index Fromindex and ends
    /// to the index ToIndex.
    /// Raises an exception if ToIndex or FromIndex is out of
    /// bounds
    /// Example:
    /// before
    /// me = "abcdefg", ToIndex=3, FromIndex=6
    /// after
    /// me = "abcdefg"
    /// returns
    /// "cdef"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ SubString(int FromIndex, int ToIndex);
    /// <summary>
    /// Returns pointer to string (char *)
    /// This is useful for some casual manipulations
    /// Because this "char *" is 'const', you can't modify its contents.
    /// </summary>
    System::String^ ToCString();
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Token(System::String^ separators, int whichone);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Token(System::String^ separators);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Token();
    /// <summary>
    /// Truncates <me> to <ahowmany> characters.
    /// Example: me = "Hello Dolly" -> Trunc(3) -> me = "Hel"
    /// </summary>
    void Trunc(int ahowmany);
    /// <summary>
    /// Converts <me> to its upper-case equivalent.
    /// </summary>
    void UpperCase();
    /// <summary>
    /// Length of the string ignoring all spaces (' ') and the
    /// control character at the end.
    /// </summary>
    int UsefullLength();
    /// <summary>
    /// Returns character at position <where> in <me>.
    /// If <where> is less than zero or greater than the length of
    /// <me>, an exception is raised.
    /// Example:
    /// aString contains "Hello"
    /// aString.Value(2) returns 'e'
    /// </summary>
    char Value(int where);
    /// <summary>
    /// Returns the field myString.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ String();
    bool IsSameState(Macad::Occt::TCollection_HAsciiString^ other);
    static Macad::Occt::TCollection_HAsciiString^ CreateDowncasted(::TCollection_HAsciiString* instance);
}; // class TCollection_HAsciiString

//---------------------------------------------------------------------
//  Class  TCollection
//---------------------------------------------------------------------
/// <summary>
/// The package <TCollection> provides the services for the
/// transient basic data structures.
/// </summary>
public ref class TCollection sealed
    : public Macad::Occt::BaseClass<::TCollection>
{

#ifdef Include_TCollection_h
public:
    Include_TCollection_h
#endif

public:
    TCollection(::TCollection* nativeInstance)
        : Macad::Occt::BaseClass<::TCollection>( nativeInstance, true )
    {}

    TCollection(::TCollection& nativeInstance)
        : Macad::Occt::BaseClass<::TCollection>( &nativeInstance, false )
    {}

    property ::TCollection* NativeInstance
    {
        ::TCollection* get()
        {
            return static_cast<::TCollection*>(_NativeInstance);
        }
    }

public:
    TCollection();
    /// <summary>
    /// Returns a prime number greater than <I> suitable
    /// to dimension a Map. When <I> becomes great there
    /// is a limit on the result (today the limit is
    /// around 1 000 000). This is not a limit of the number
    /// of items but a limit in the number of buckets. i.e.
    /// there will be more collisions in the map.
    /// </summary>
    static int NextPrimeForMap(int I);
}; // class TCollection

}; // namespace Occt
}; // namespace Macad
