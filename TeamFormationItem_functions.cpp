#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamFormationItem

#include "Basic.hpp"

#include "TeamFormationItem_classes.hpp"
#include "TeamFormationItem_parameters.hpp"


namespace SDK
{

// Function TeamFormationItem.TeamFormationItem_C.ExecuteUbergraph_TeamFormationItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamFormationItem_C::ExecuteUbergraph_TeamFormationItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamFormationItem_C", "ExecuteUbergraph_TeamFormationItem");

	Params::TeamFormationItem_C_ExecuteUbergraph_TeamFormationItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamFormationItem.TeamFormationItem_C.BndEvt__TeamFormationItem_PlayerOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamFormationItem_C::BndEvt__TeamFormationItem_PlayerOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamFormationItem_C", "BndEvt__TeamFormationItem_PlayerOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::TeamFormationItem_C_BndEvt__TeamFormationItem_PlayerOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamFormationItem.TeamFormationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamFormationItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamFormationItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamFormationItem.TeamFormationItem_C.BndEvt__TeamFormationItem_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTeamFormationItem_C::BndEvt__TeamFormationItem_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamFormationItem_C", "BndEvt__TeamFormationItem_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamFormationItem.TeamFormationItem_C.RecievePlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CPT_FormationItem_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Param_Steam_ID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Param_Player_Session_ID                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   FoulState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCaptain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsMuted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamFormationItem_C::RecievePlayerInfo(bool CPT_FormationItem_, const class FString& Param_Steam_ID, const class FString& Param_Player_Session_ID, const class FString& PlayerName, int32 FoulState, bool IsHost, bool IsCaptain, bool IsMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamFormationItem_C", "RecievePlayerInfo");

	Params::TeamFormationItem_C_RecievePlayerInfo Parms{};

	Parms.CPT_FormationItem_ = CPT_FormationItem_;
	Parms.Param_Steam_ID = std::move(Param_Steam_ID);
	Parms.Param_Player_Session_ID = std::move(Param_Player_Session_ID);
	Parms.PlayerName = std::move(PlayerName);
	Parms.FoulState = FoulState;
	Parms.IsHost = IsHost;
	Parms.IsCaptain = IsCaptain;
	Parms.IsMuted = IsMuted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamFormationItem.TeamFormationItem_C.RecieveItemInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector2D>                UI_Vectors                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                     PositionName                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FButtonStyle                     ButtonStyle                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTeamFormationItem_C::RecieveItemInfo(const TArray<struct FVector2D>& UI_Vectors, const TArray<class FText>& PositionName, const struct FButtonStyle& ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamFormationItem_C", "RecieveItemInfo");

	Params::TeamFormationItem_C_RecieveItemInfo Parms{};

	Parms.UI_Vectors = std::move(UI_Vectors);
	Parms.PositionName = std::move(PositionName);
	Parms.ButtonStyle = std::move(ButtonStyle);

	UObject::ProcessEvent(Func, &Parms);
}

}

