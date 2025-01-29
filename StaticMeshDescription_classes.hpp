#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StaticMeshDescription

#include "Basic.hpp"

#include "MeshDescription_classes.hpp"


namespace SDK
{

// Class StaticMeshDescription.StaticMeshDescription
// 0x0000 (0x0390 - 0x0390)
class UStaticMeshDescription final : public UMeshDescriptionBase
{
public:
	void CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ);
	void SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const class FName& SlotName);
	void SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int32 UVIndex);

	struct FVector2D GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int32 UVIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StaticMeshDescription">();
	}
	static class UStaticMeshDescription* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStaticMeshDescription>();
	}
};

}

