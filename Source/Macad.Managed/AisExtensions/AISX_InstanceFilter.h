#pragma once

class AISX_InstanceFilter : public SelectMgr_Filter
{
public:

    void Add(Handle(AIS_InteractiveObject) hInstance);
    virtual bool IsOk (const Handle(SelectMgr_EntityOwner)& anObj) const override;

    //--------------------------------------------------------------------------------------------------

    DEFINE_STANDARD_RTTIEXT(AISX_InstanceFilter,SelectMgr_Filter)

private:
    NCollection_List<Handle(AIS_InteractiveObject)> m_kInstanceList;
};

