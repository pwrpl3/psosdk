#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApexDestruction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ApexDestruction_structs.hpp"


namespace SDK
{

// Class ApexDestruction.DestructibleActor
// 0x0018 (0x0238 - 0x0220)
class ADestructibleActor final : public AActor
{
public:
	class UDestructibleComponent*                 DestructibleComponent;                             // 0x0220(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_             OnActorFracture;                                   // 0x0228(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestructibleActor">();
	}
	static class ADestructibleActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADestructibleActor>();
	}
};

// Class ApexDestruction.DestructibleComponent
// 0x00E0 (0x0780 - 0x06A0)
class UDestructibleComponent final : public USkinnedMeshComponent
{
public:
	uint8                                         bFractureEffectOverride : 1;                       // 0x06A0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_166C[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFractureEffect>                FractureEffects;                                   // 0x06A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEnableHardSleeping;                               // 0x06B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_166D[0x3];                                     // 0x06B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LargeChunkThreshold;                               // 0x06BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_166E[0x10];                                    // 0x06C0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnComponentFracture;                               // 0x06D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_166F[0xA0];                                    // 0x06E0(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	class UDestructibleMesh* GetDestructibleMesh();
	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestructibleComponent">();
	}
	static class UDestructibleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDestructibleComponent>();
	}
};

// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (0x00B8 - 0x0028)
class UDestructibleFractureSettings final : public UObject
{
public:
	int32                                         CellSiteCount;                                     // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFractureMaterial                      FractureMaterialDesc;                              // 0x002C(0x0024)(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         RandomSeed;                                        // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1671[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        VoronoiSites;                                      // 0x0058(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         OriginalSubmeshCount;                              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1672[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDestructibleChunkParameters>   ChunkParameters;                                   // 0x0080(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1673[0x28];                                    // 0x0090(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestructibleFractureSettings">();
	}
	static class UDestructibleFractureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDestructibleFractureSettings>();
	}
};

// Class ApexDestruction.DestructibleMesh
// 0x00A0 (0x0440 - 0x03A0)
class UDestructibleMesh final : public USkeletalMesh
{
public:
	struct FDestructibleParameters                DefaultDestructibleParameters;                     // 0x03A0(0x0088)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FFractureEffect>                FractureEffects;                                   // 0x0428(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1674[0x8];                                     // 0x0438(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestructibleMesh">();
	}
	static class UDestructibleMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDestructibleMesh>();
	}
};

}

