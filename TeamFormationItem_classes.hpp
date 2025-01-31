#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamFormationItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamFormationItem.TeamFormationItem_C
// 0x0060 (0x02C0 - 0x0260)
class UTeamFormationItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Join;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Name_TeamFormationItem_C;                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        PlayerOptions;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Position;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TeamIndex;                                         // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PositionIndex;                                     // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASP_Controller_C*                       SP_Controller;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Steam_ID;                                          // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Player_Session_ID;                                 // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          CPTFormationItem;                                  // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TeamFormationItem(int32 EntryPoint);
	void BndEvt__TeamFormationItem_PlayerOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Construct();
	void BndEvt__TeamFormationItem_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void RecievePlayerInfo(bool CPT_FormationItem_, const class FString& Param_Steam_ID, const class FString& Param_Player_Session_ID, const class FString& PlayerName, int32 FoulState, bool IsHost, bool IsCaptain, bool IsMuted);
	void RecieveItemInfo(const TArray<struct FVector2D>& UI_Vectors, const TArray<class FText>& PositionName, const struct FButtonStyle& ButtonStyle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamFormationItem_C">();
	}
	static class UTeamFormationItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamFormationItem_C>();
	}
};

}

