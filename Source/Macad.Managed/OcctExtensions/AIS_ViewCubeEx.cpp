#include "ManagedPCH.h"

#include "AIS_ViewCubeEx.h"

IMPLEMENT_STANDARD_RTTIEXT(AIS_ViewCubeEx, AIS_ViewCube)

//--------------------------------------------------------------------------------------------------

void AIS_ViewCubeEx::Compute(const opencascade::handle<PrsMgr_PresentationManager>& thePrsMgr,
	const opencascade::handle<Prs3d_Presentation>& thePrs, const int theMode)
{
	thePrs->SetInfiniteState(true);
	if (theMode != 0)
	{
		return;
	}

	const gp_Pnt aLocation = (mySize * 0.5 + myBoxFacetExtension + myAxesPadding) * gp_XYZ(-1.0, -1.0, -1.0);

	// Display box sides
	{
		int aNbNodes = 0, aNbTris = 0;
		for (int aPartIter = V3d_Xpos; aPartIter <= int(V3d_Zneg); ++aPartIter)
		{
			createBoxPartTriangles(Handle(Graphic3d_ArrayOfTriangles)(), aNbNodes, aNbTris,
			                       (V3d_TypeOfOrientation)aPartIter);
		}
		if (aNbNodes > 0)
		{
			Handle(Graphic3d_ArrayOfTriangles) aTris = new Graphic3d_ArrayOfTriangles(
				aNbNodes, aNbTris * 3, Graphic3d_ArrayFlags_VertexNormal | Graphic3d_ArrayFlags_VertexTexel);
			Handle(Graphic3d_ArrayOfSegments) aSegs;
			if (myDrawer->FaceBoundaryDraw())
			{
				aSegs = new Graphic3d_ArrayOfSegments(aNbNodes, aNbNodes * 2, Graphic3d_ArrayFlags_None);
			}
			aNbNodes = aNbTris = 0;
			for (int aPartIter = V3d_Xpos; aPartIter <= int(V3d_Zneg); ++aPartIter)
			{
				int aTriNodesFrom = aTris->VertexNumber();
				const int aTriFrom = aNbTris;
				createBoxPartTriangles(aTris, aNbNodes, aNbTris, (V3d_TypeOfOrientation)aPartIter);
				
				if (aSegs.IsNull())
				{
					continue;
				}

				const int aFirstNode = aSegs->VertexNumber();
				for (int aVertIter = (aNbTris - aTriFrom) > 2 ? aTriNodesFrom + 2 : aTriNodesFrom + 1;
					     // skip triangle fan center
				     aVertIter <= aTris->VertexNumber(); ++aVertIter)
				{
					aSegs->AddVertex(aTris->Vertice(aVertIter));
				}
				aSegs->AddPolylineEdges(aFirstNode + 1, aSegs->VertexNumber(), true);
			}

			{
				Handle(Graphic3d_Group) aGroupSides = thePrs->NewGroup();
				aGroupSides->SetClosed(true); // should be replaced by forced back-face culling aspect
				aGroupSides->SetGroupPrimitivesAspect(myDrawer->ShadingAspect()->Aspect());
				aGroupSides->AddPrimitiveArray(aTris);
			}

			if (!aSegs.IsNull())
			{
				Handle(Graphic3d_Group) aGroupSegs = thePrs->NewGroup();
				aGroupSegs->SetGroupPrimitivesAspect(myDrawer->FaceBoundaryAspect()->Aspect());
				aGroupSegs->AddPrimitiveArray(aSegs);
			}
		}
	}

	// Display box edges
	{
		int aNbNodes = 0, aNbTris = 0;
		for (int aPartIter = V3d_XposYpos; aPartIter <= int(V3d_YposZneg); ++aPartIter)
		{
			createBoxPartTriangles(Handle(Graphic3d_ArrayOfTriangles)(), aNbNodes, aNbTris,
			                       (V3d_TypeOfOrientation)aPartIter);
		}
		if (aNbNodes > 0)
		{
			Handle(Graphic3d_ArrayOfTriangles) aTris = new Graphic3d_ArrayOfTriangles(
					aNbNodes, aNbTris * 3, Graphic3d_ArrayFlags_VertexNormal);
			aNbNodes = aNbTris = 0;
			for (int aPartIter = V3d_XposYpos; aPartIter <= int(V3d_YposZneg); ++aPartIter)
			{
				const V3d_TypeOfOrientation anOrient = (V3d_TypeOfOrientation)aPartIter;
				createBoxPartTriangles(aTris, aNbNodes, aNbTris, anOrient);
			}

			Handle(Graphic3d_Group) aGroupEdges = thePrs->NewGroup();
			aGroupEdges->SetClosed(true);
			aGroupEdges->SetGroupPrimitivesAspect(myBoxEdgeAspect->Aspect());
			aGroupEdges->AddPrimitiveArray(aTris);
		}
	}

	// Display box corners
	{
		int aNbNodes = 0, aNbTris = 0;
		for (int aPartIter = V3d_XposYposZpos; aPartIter <= int(V3d_XnegYnegZneg); ++aPartIter
		)
		{
			createBoxPartTriangles(Handle(Graphic3d_ArrayOfTriangles)(), aNbNodes, aNbTris,
			                       (V3d_TypeOfOrientation)aPartIter);
		}
		if (aNbNodes > 0)
		{
			Handle(Graphic3d_ArrayOfTriangles) aTris = new Graphic3d_ArrayOfTriangles(
					aNbNodes, aNbTris * 3, Graphic3d_ArrayFlags_VertexNormal);
			aNbNodes = aNbTris = 0;
			for (int aPartIter = V3d_XposYposZpos; aPartIter <= int(V3d_XnegYnegZneg); ++
			     aPartIter)
			{
				const V3d_TypeOfOrientation anOrient = (V3d_TypeOfOrientation)aPartIter;
				createBoxPartTriangles(aTris, aNbNodes, aNbTris, anOrient);
			}

			Handle(Graphic3d_Group) aGroupCorners = thePrs->NewGroup();
			aGroupCorners->SetClosed(true);
			aGroupCorners->SetGroupPrimitivesAspect(myBoxCornerAspect->Aspect());
			aGroupCorners->AddPrimitiveArray(aTris);
		}
	}
}

//--------------------------------------------------------------------------------------------------

void AIS_ViewCubeEx::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
                                         const Handle(Prs3d_Drawer)& theStyle,
                                         const Handle(SelectMgr_EntityOwner)& theOwner)
{
	if (theOwner.IsNull()
		|| !thePrsMgr->IsImmediateModeOn())
	{
		return;
	}

	const Graphic3d_ZLayerId aLayer = theStyle->ZLayer() != Graphic3d_ZLayerId_UNKNOWN
		                                  ? theStyle->ZLayer()
		                                  : myDrawer->ZLayer();
	const AIS_ViewCubeOwner* aCubeOwner = dynamic_cast<AIS_ViewCubeOwner*>(theOwner.get());

	Handle(Prs3d_Presentation) aHiPrs = GetHilightPresentation(thePrsMgr);
	aHiPrs->Clear();
	aHiPrs->CStructure()->ViewAffinity = thePrsMgr
	                                     ->StructureManager()->ObjectAffinity(Handle(Standard_Transient)(this));
	aHiPrs->SetTransformPersistence(TransformPersistence());
	aHiPrs->SetZLayer(aLayer);

	{
		Handle(Graphic3d_Group) aGroup = aHiPrs->NewGroup();
		aGroup->SetGroupPrimitivesAspect(theStyle->ShadingAspect()->Aspect());
		int aNbNodes = 0, aNbTris = 0;
		createBoxPartTriangles(Handle(Graphic3d_ArrayOfTriangles)(), aNbNodes, aNbTris, aCubeOwner->MainOrientation());
		if (aNbNodes > 0)
		{
			Handle(Graphic3d_ArrayOfTriangles) aTris = new Graphic3d_ArrayOfTriangles(
					aNbNodes, aNbTris * 3, Graphic3d_ArrayFlags_VertexTexel);
			aNbNodes = aNbTris = 0;
			createBoxPartTriangles(aTris, aNbNodes, aNbTris, aCubeOwner->MainOrientation());
			aGroup->AddPrimitiveArray(aTris);
		}
	}

	if (thePrsMgr->IsImmediateModeOn())
	{
		thePrsMgr->AddToImmediateList(aHiPrs);
	}
}

//--------------------------------------------------------------------------------------------------

void AIS_ViewCubeEx::createBoxSideTriangles(const opencascade::handle<Graphic3d_ArrayOfTriangles>& theTris,
	int& theNbNodes, int& theNbTris, V3d_TypeOfOrientation theDirection) const
{
	const gp_Dir aDir = V3d::GetProjAxis(theDirection);
	const gp_Pnt aPos = aDir.XYZ() * (mySize * 0.5 + myBoxFacetExtension);
	const gp_Ax2 aPosition(aPos, aDir.Reversed());

	gp_Ax3 aSystem(aPosition);
	gp_Trsf aTrsf;
	aTrsf.SetTransformation(aSystem, gp_Ax3());

	const double aHSize = mySize / 2.0f;
	const double aTexU0 = ((float)theDirection) / 6.0f;
	const double aTexU1 = 1.0f / 6.0f + aTexU0;
	const int aVertFirst = !theTris.IsNull() ? theTris->VertexNumber() : 0;

	theNbNodes += 4;
	theNbTris += 2;
	if (theTris.IsNull())
	{
		return;
	}

	theTris->AddVertex(gp_Pnt(-aHSize, -aHSize, 0.0).Transformed(aTrsf), gp_Pnt2d(aTexU1, 1.0));
	theTris->AddVertex(gp_Pnt(-aHSize, aHSize, 0.0).Transformed(aTrsf), gp_Pnt2d(aTexU0, 1.0));
	theTris->AddVertex(gp_Pnt(aHSize, aHSize, 0.0).Transformed(aTrsf), gp_Pnt2d(aTexU0, 0.0));
	theTris->AddVertex(gp_Pnt(aHSize, -aHSize, 0.0).Transformed(aTrsf), gp_Pnt2d(aTexU1, 0.0));
	theTris->AddQuadTriangleEdges(aVertFirst + 1, aVertFirst + 2, aVertFirst + 3, aVertFirst + 4);

	const gp_Dir aNorm = gp::DZ().Transformed(aTrsf);
	for (int aVertIter = aVertFirst + 1; aVertIter <= theTris->VertexNumber(); ++aVertIter)
	{
		theTris->SetVertexNormal(aVertIter, -aNorm);
	}
}

//--------------------------------------------------------------------------------------------------

void AIS_ViewCubeEx::SetTexture(const opencascade::handle<Image_PixMap>& thePixMap)
{
	Handle(Graphic3d_Texture2D) aTexture = new Graphic3d_Texture2D(thePixMap);
	aTexture->SetAnisoFilter(Graphic3d_LOTA_QUALITY);

	myDrawer->ShadingAspect()->Aspect()->SetTextureMap(aTexture);
	myDrawer->ShadingAspect()->Aspect()->SetTextureMapOn(true);

	myDynHilightDrawer->ShadingAspect()->Aspect()->SetTextureMap(aTexture);
	myDynHilightDrawer->ShadingAspect()->Aspect()->SetTextureMapOn(true);

	SynchronizeAspects();
}

//--------------------------------------------------------------------------------------------------


