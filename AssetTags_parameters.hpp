#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AssetTags

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AssetTags.AssetTagsSubsystem.CollectionExists
// 0x000C (0x000C - 0x0000)
struct AssetTagsSubsystem_CollectionExists final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A2B[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// 0x0018 (0x0018 - 0x0000)
struct AssetTagsSubsystem_GetAssetsInCollection final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                     ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.GetCollections
// 0x0010 (0x0010 - 0x0000)
struct AssetTagsSubsystem_GetCollections final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// 0x0018 (0x0018 - 0x0000)
struct AssetTagsSubsystem_GetCollectionsContainingAsset final
{
public:
	class FName                                   AssetPathName;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// 0x0070 (0x0070 - 0x0000)
struct AssetTagsSubsystem_GetCollectionsContainingAssetData final
{
public:
	struct FAssetData                             AssetData;                                         // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0060(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// 0x0018 (0x0018 - 0x0000)
struct AssetTagsSubsystem_GetCollectionsContainingAssetPtr final
{
public:
	const class UObject*                          AssetPtr;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

}

