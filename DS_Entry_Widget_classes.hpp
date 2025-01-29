#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DS_Entry_Widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DS_Entry_Widget.DS_Entry_Widget_C
// 0x0020 (0x0280 - 0x0260)
class UDS_Entry_Widget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Exit;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_208;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMP_GameState_C*                        MP_GameState;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DS_Entry_Widget(int32 EntryPoint);
	void Construct();
	void BndEvt__DS_Entry_Widget_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	class FText GetStartingLevel();
	class FText GetInitializeSuccess();
	class FText GetSearchedGameProperties();
	class FText GetProccessParametersReady();
	class FText GetHasLevel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DS_Entry_Widget_C">();
	}
	static class UDS_Entry_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDS_Entry_Widget_C>();
	}
};

}

