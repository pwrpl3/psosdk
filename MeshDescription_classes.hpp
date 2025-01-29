#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeshDescription

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MeshDescription.MeshDescription
// 0x0000 (0x0028 - 0x0028)
class UMeshDescription final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshDescription">();
	}
	static class UMeshDescription* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshDescription>();
	}
};

// Class MeshDescription.MeshDescriptionBase
// 0x0368 (0x0390 - 0x0028)
class UMeshDescriptionBase : public UObject
{
public:
	uint8                                         Pad_1C38[0x368];                                   // 0x0028(0x0368)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ComputePolygonTriangulation(const struct FPolygonID& PolygonID);
	struct FEdgeID CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	void CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	struct FPolygonID CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FPolygonGroupID CreatePolygonGroup();
	void CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID);
	void CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FTriangleID CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FVertexID CreateVertex();
	struct FVertexInstanceID CreateVertexInstance(const struct FVertexID& VertexID);
	void CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID);
	void CreateVertexWithID(const struct FVertexID& VertexID);
	void DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices);
	void DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);
	void DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
	void DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr);
	void DeleteVertex(const struct FVertexID& VertexID);
	void DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices);
	void Empty();
	void ReserveNewEdges(int32 NumberOfNewEdges);
	void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);
	void ReserveNewPolygons(const int32 NumberOfNewPolygons);
	void ReserveNewTriangles(int32 NumberOfNewTriangles);
	void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);
	void ReserveNewVertices(int32 NumberOfNewVertices);
	void ReversePolygonFacing(const struct FPolygonID& PolygonID);
	void SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID);
	void SetPolygonVertexInstance(const struct FPolygonID& PolygonID, int32 PerimeterIndex, const struct FVertexInstanceID& VertexInstanceID);
	void SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position);

	void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const;
	void GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs) const;
	struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int32 VertexNumber) const;
	void GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs) const;
	int32 GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID) const;
	int32 GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID) const;
	int32 GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID) const;
	int32 GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID) const;
	int32 GetNumPolygonTriangles(const struct FPolygonID& PolygonID) const;
	int32 GetNumPolygonVertices(const struct FPolygonID& PolygonID) const;
	int32 GetNumVertexConnectedEdges(const struct FVertexID& VertexID) const;
	int32 GetNumVertexConnectedPolygons(const struct FVertexID& VertexID) const;
	int32 GetNumVertexConnectedTriangles(const struct FVertexID& VertexID) const;
	int32 GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID) const;
	int32 GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID) const;
	int32 GetNumVertexVertexInstances(const struct FVertexID& VertexID) const;
	void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs) const;
	void GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs) const;
	void GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs) const;
	void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs) const;
	struct FPolygonGroupID GetPolygonPolygonGroup(const struct FPolygonID& PolygonID) const;
	void GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs) const;
	void GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs) const;
	void GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs) const;
	void GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs) const;
	void GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs) const;
	struct FPolygonID GetTrianglePolygon(const struct FTriangleID& TriangleID) const;
	struct FPolygonGroupID GetTrianglePolygonGroup(const struct FTriangleID& TriangleID) const;
	struct FVertexInstanceID GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int32 Param_Index) const;
	void GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs) const;
	void GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs) const;
	void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs) const;
	void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs) const;
	void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const;
	void GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs) const;
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const;
	void GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs) const;
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID) const;
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID) const;
	struct FEdgeID GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1) const;
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID) const;
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1) const;
	struct FVector GetVertexPosition(const struct FVertexID& VertexID) const;
	void GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs) const;
	bool IsEdgeInternal(const struct FEdgeID& EdgeID) const;
	bool IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID) const;
	bool IsEdgeValid(const struct FEdgeID& EdgeID) const;
	bool IsEmpty() const;
	bool IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID) const;
	bool IsPolygonValid(const struct FPolygonID& PolygonID) const;
	bool IsTrianglePartOfNgon(const struct FTriangleID& TriangleID) const;
	bool IsTriangleValid(const struct FTriangleID& TriangleID) const;
	bool IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID) const;
	bool IsVertexOrphaned(const struct FVertexID& VertexID) const;
	bool IsVertexValid(const struct FVertexID& VertexID) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshDescriptionBase">();
	}
	static class UMeshDescriptionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshDescriptionBase>();
	}
};

}

