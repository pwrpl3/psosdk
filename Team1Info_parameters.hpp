#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Team1Info

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Team1Info.Team1Info_C.ExecuteUbergraph_Team1Info
// 0x0078 (0x0078 - 0x0000)
struct Team1Info_C_ExecuteUbergraph_Team1Info final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20DB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_TeamName;                       // 0x0008(0x0018)()
	struct FLinearColor                           K2Node_CustomEvent_TeamColor;                      // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMultiplayerMenu_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UMultiplayerMenu_C*                     CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20DC[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASP_Controller_C*                       K2Node_DynamicCast_AsSP_Controller;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Team1Info.Team1Info_C.BndEvt__Team1Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Team1Info_C_BndEvt__Team1Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Team1Info.Team1Info_C.RecieveTeamInfo
// 0x0028 (0x0028 - 0x0000)
struct Team1Info_C_RecieveTeamInfo final
{
public:
	class FText                                   Param_TeamName;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                           Param_TeamColor;                                   // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

