#define Include_Graphic3d_ClipPlane_h \
    typedef NCollection_Vec4<Standard_Real> Equation;

// Graphic3d_ZLayerSettings::Visible()/SetVisible() is not part of upstream OCCT (verified
// absent in OCCT 8.0 sources, current OCCT GitHub master/V7_9_2 tag, and the official
// refman docs back to 7.5.0) - the flag Highlighter.cs relies on to hide/show its custom
// highlight Z-layer between explicit redraws does not exist natively under OCCT 8. This
// tracks the flag on the managed side instead so the call sites keep compiling and working
// unchanged; it does not (and cannot, without native storage) affect any implicit/automatic
// native redraw path outside of Highlighter.PrepareDraw()'s own explicit get/set/write-back
// sequence, where it is fully sufficient since the same managed instance is used throughout.
#define Include_Graphic3d_ZLayerSettings_h \
    bool _MacadVisible = true; \
    bool IsVisible() { return _MacadVisible; } \
    void SetVisible(bool theValue) { _MacadVisible = theValue; }

