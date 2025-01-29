#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AssetTags

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class AssetTags.AssetTagsSubsystem
// 0x0000 (0x0030 - 0x0030)
class UAssetTagsSubsystem final : public UEngineSubsystem
{
public:
	bool CollectionExists(const class FName Param_Name);
	TArray<struct FAssetData> GetAssetsInCollection(const class FName Param_Name);
	TArray<class FName> GetCollections();
	TArray<class FName> GetCollectionsContainingAsset(const class FName AssetPathName);
	TArray<class FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData);
	TArray<class FName> GetCollectionsContainingAssetPtr(const class UObject* AssetPtr);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssetTagsSubsystem">();
	}
	static class UAssetTagsSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetTagsSubsystem>();
	}
};

}

