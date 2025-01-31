#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatMessage.ChatMessage_C
// 0x0010 (0x0270 - 0x0260)
class UChatMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         RichText;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChatMessage(int32 EntryPoint);
	void RecieveMessage(const class FString& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatMessage_C">();
	}
	static class UChatMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatMessage_C>();
	}
};

}

