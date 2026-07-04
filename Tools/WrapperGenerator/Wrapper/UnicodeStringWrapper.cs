namespace Macad.Occt.Generator;

[TypeList("Standard_ExtString")]
public class UnicodeStringWrapper : TypeWrapper
{
    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        decl = "System::String^";
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        // OCCT 8 exposes this both via the classic Standard_ExtString (= const char16_t*)
        // typedef and via plain "const wchar_t*"/"const char16_t*" parameters directly;
        // cast to whichever the actual native parameter type is rather than assuming
        // Standard_ExtString, since the two pointee types are not implicitly convertible.
        param = $"(const {pd.Type.Name}*)pp_{pd.Name}";

        writerPre.WriteLine($"pin_ptr<const wchar_t> pp_{pd.Name} = PtrToStringChars({pd.Name});");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        // Same reasoning as GenerateParameter: use the method's actual native return
        // pointee type instead of assuming the Standard_ExtString (char16_t*) spelling.
        resultAssign = $"const {md.Type.Name}* _result = ";
        returnValue = "gcnew System::String((const wchar_t *)_result)";

        return true;
    }

}