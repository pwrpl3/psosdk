#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Team1Info

#include "Basic.hpp"

#include "Team1Info_classes.hpp"
#include "Team1Info_parameters.hpp"


namespace SDK
{

// Function Team1Info.Team1Info_C.ExecuteUbergraph_Team1Info
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam1Info_C::ExecuteUbergraph_Team1Info(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team1Info_C", "ExecuteUbergraph_Team1Info");

	Params::Team1Info_C_ExecuteUbergraph_Team1Info Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Team1Info.Team1Info_C.BndEvt__Team1Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam1Info_C::BndEvt__Team1Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team1Info_C", "BndEvt__Team1Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::Team1Info_C_BndEvt__Team1Info_TeamOptions_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Team1Info.Team1Info_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeam1Info_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team1Info_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Team1Info.Team1Info_C.BndEvt__Team1Info_TeamListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTeam1Info_C::BndEvt__Team1Info_TeamListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team1Info_C", "BndEvt__Team1Info_TeamListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Team1Info.Team1Info_C.BndEvt__Team1Info_TeamFormationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTeam1Info_C::BndEvt__Team1Info_TeamFormationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team1Info_C", "BndEvt__Team1Info_TeamFormationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Team1Info.Team1Info_C.RecieveTeamInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_TeamName                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     Param_TeamColor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam1Info_C::RecieveTeamInfo(const class FText& Param_TeamName, const struct FLinearColor& Param_TeamColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Team1Info_C", "RecieveTeamInfo");

	Params::Team1Info_C_RecieveTeamInfo Parms{};

	Parms.Param_TeamName = std::move(Param_TeamName);
	Parms.Param_TeamColor = std::move(Param_TeamColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

