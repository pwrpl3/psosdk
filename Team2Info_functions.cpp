#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Team2Info

#include "Basic.hpp"

#include "Team2Info_classes.hpp"
#include "Team2Info_parameters.hpp"


namespace SDK
{

// Function Team2Info.Team2Info_C.ExecuteUbergraph_Team2Info
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam2Info_C::ExecuteUbergraph_Team2Info(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team2Info_C", "ExecuteUbergraph_Team2Info");

	Params::Team2Info_C_ExecuteUbergraph_Team2Info Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Team2Info.Team2Info_C.BndEvt__Team2Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam2Info_C::BndEvt__Team2Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team2Info_C", "BndEvt__Team2Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::Team2Info_C_BndEvt__Team2Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Team2Info.Team2Info_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeam2Info_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team2Info_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Team2Info.Team2Info_C.BndEvt__Team2Info_TeamListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTeam2Info_C::BndEvt__Team2Info_TeamListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team2Info_C", "BndEvt__Team2Info_TeamListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Team2Info.Team2Info_C.BndEvt__Team2Info_TeamFormationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTeam2Info_C::BndEvt__Team2Info_TeamFormationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team2Info_C", "BndEvt__Team2Info_TeamFormationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Team2Info.Team2Info_C.RecieveTeamInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_TeamName                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     Param_TeamColor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam2Info_C::RecieveTeamInfo(const class FText& Param_TeamName, const struct FLinearColor& Param_TeamColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team2Info_C", "RecieveTeamInfo");

	Params::Team2Info_C_RecieveTeamInfo Parms{};

	Parms.Param_TeamName = std::move(Param_TeamName);
	Parms.Param_TeamColor = std::move(Param_TeamColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

