#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTags

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddGameplayTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);
	static void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);
	static void BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	static bool DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	static bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTag& Tag);
	static bool EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	static bool EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	static void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	static class FString GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	static class FString GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	static int32 GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	static class FName GetTagName(const struct FGameplayTag& GameplayTag);
	static bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTagContainer& OtherContainer);
	static bool HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static bool HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static bool HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	static bool IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	static bool IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery);
	static struct FGameplayTagContainer MakeGameplayTagContainerFromArray(const TArray<struct FGameplayTag>& GameplayTags);
	static struct FGameplayTagContainer MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	static struct FGameplayTagQuery MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	static struct FGameplayTag MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	static struct FGameplayTagContainer MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	static bool MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static bool MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	static bool NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	static bool NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	static bool NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B);
	static bool NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B);
	static bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlueprintGameplayTagLibrary">();
	}
	static class UBlueprintGameplayTagLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintGameplayTagLibrary>();
	}
};

// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class IGameplayTagAssetInterface final : public IInterface
{
public:
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer) const;
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer) const;
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer) const;
	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagAssetInterface">();
	}
	static class IGameplayTagAssetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayTagAssetInterface>();
	}
};

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UEditableGameplayTagQuery final : public UObject
{
public:
	class FString                                 UserDescription;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C34[0x10];                                    // 0x0038(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UEditableGameplayTagQueryExpression*    RootExpression;                                    // 0x0048(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      TagQueryExportText_Helper;                         // 0x0050(0x0048)(NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQuery">();
	}
	static class UEditableGameplayTagQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQuery>();
	}
};

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression">();
	}
	static class UEditableGameplayTagQueryExpression* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression>();
	}
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AnyTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AnyTagsMatch>();
	}
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AllTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AllTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AllTagsMatch>();
	}
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_NoTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_NoTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_NoTagsMatch>();
	}
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AnyExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AnyExprMatch>();
	}
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AllExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AllExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AllExprMatch>();
	}
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_NoExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_NoExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_NoExprMatch>();
	}
};

// Class GameplayTags.GameplayTagsManager
// 0x0218 (0x0240 - 0x0028)
class UGameplayTagsManager final : public UObject
{
public:
	uint8                                         Pad_1C35[0x138];                                   // 0x0028(0x0138)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FGameplayTagSource>  TagSources;                                        // 0x0160(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C36[0x80];                                    // 0x01B0(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDataTable*>                     GameplayTagTables;                                 // 0x0230(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsManager">();
	}
	static class UGameplayTagsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsManager>();
	}
};

// Class GameplayTags.GameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class UGameplayTagsList : public UObject
{
public:
	class FString                                 ConfigFileName;                                    // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagTableRow>           GameplayTagList;                                   // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsList">();
	}
	static class UGameplayTagsList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsList>();
	}
};

// Class GameplayTags.RestrictedGameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class URestrictedGameplayTagsList final : public UObject
{
public:
	class FString                                 ConfigFileName;                                    // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RestrictedGameplayTagsList">();
	}
	static class URestrictedGameplayTagsList* GetDefaultObj()
	{
		return GetDefaultObjImpl<URestrictedGameplayTagsList>();
	}
};

// Class GameplayTags.GameplayTagsSettings
// 0x0070 (0x00B8 - 0x0048)
class UGameplayTagsSettings final : public UGameplayTagsList
{
public:
	bool                                          ImportTagsFromConfig;                              // 0x0048(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          WarnOnInvalidTags;                                 // 0x0049(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ClearInvalidTags;                                  // 0x004A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FastReplication;                                   // 0x004B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C37[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InvalidTagCharacters;                              // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagCategoryRemap>      CategoryRemapping;                                 // 0x0060(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                GameplayTagTableList;                              // 0x0070(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagRedirect>           GameplayTagRedirects;                              // 0x0080(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                           CommonlyReplicatedTags;                            // 0x0090(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                         NumBitsForContainerSize;                           // 0x00A0(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NetIndexFirstBitSegment;                           // 0x00A4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedConfigInfo>          RestrictedConfigFiles;                             // 0x00A8(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsSettings">();
	}
	static class UGameplayTagsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsSettings>();
	}
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0018 (0x0050 - 0x0038)
class UGameplayTagsDeveloperSettings final : public UDeveloperSettings
{
public:
	class FString                                 DeveloperConfigName;                               // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FavoriteTagSource;                                 // 0x0048(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsDeveloperSettings">();
	}
	static class UGameplayTagsDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsDeveloperSettings>();
	}
};

}

