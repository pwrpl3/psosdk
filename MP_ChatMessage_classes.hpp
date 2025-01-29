#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_ChatMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MP_ChatMessage.MP_ChatMessage_C
// 0x0030 (0x0290 - 0x0260)
class UMP_ChatMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        MessageType;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichText;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SystemMessageText;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TeamChangeMessage;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TeamChangeName;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MP_ChatMessage(int32 EntryPoint);
	void RecieveMessageDetails(int32 Param_MessageType, int32 Team, int32 MessageGroup, const class FString& PlayerName, const class FString& PlayerPosition, const class FString& MessageText, const struct FLinearColor& Team1_1stColor, const struct FLinearColor& Team2_1stColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_ChatMessage_C">();
	}
	static class UMP_ChatMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMP_ChatMessage_C>();
	}
};

}

