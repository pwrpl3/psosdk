#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_ScoreBoardCard

#include "Basic.hpp"

#include "MP_ScoreBoardCard_classes.hpp"
#include "MP_ScoreBoardCard_parameters.hpp"


namespace SDK
{

// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.ExecuteUbergraph_MP_ScoreBoardCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMP_ScoreBoardCard_C::ExecuteUbergraph_MP_ScoreBoardCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "ExecuteUbergraph_MP_ScoreBoardCard");

	Params::MP_ScoreBoardCard_C_ExecuteUbergraph_MP_ScoreBoardCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.Set_BackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMP_ScoreBoardCard_C::Set_BackgroundColor(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "Set_BackgroundColor");

	Params::MP_ScoreBoardCard_C_Set_BackgroundColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.BndEvt__MP_ScoreBoardCard_ComboBoxString_184_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMP_ScoreBoardCard_C::BndEvt__MP_ScoreBoardCard_ComboBoxString_184_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "BndEvt__MP_ScoreBoardCard_ComboBoxString_184_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::MP_ScoreBoardCard_C_BndEvt__MP_ScoreBoardCard_ComboBoxString_184_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.Set_SingleKeeperText
// (BlueprintCallable, BlueprintEvent)

void UMP_ScoreBoardCard_C::Set_SingleKeeperText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "Set_SingleKeeperText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.Set_RedCardTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMP_ScoreBoardCard_C::Set_RedCardTime(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "Set_RedCardTime");

	Params::MP_ScoreBoardCard_C_Set_RedCardTime Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.GetPosition
// (BlueprintCallable, BlueprintEvent)

void UMP_ScoreBoardCard_C::GetPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "GetPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.Set_Variables
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Ping                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PlayerNameBasis                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Score                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stats_Passes                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stats_Assists                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stats_Goals                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   INTs                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stats_Saves                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stats_Catches                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stats_INTs                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stats_Shots                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FoulState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAfk                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Param_PlayersSteamID                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           MuteReason                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMP_ScoreBoardCard_C::Set_Variables(const struct FLinearColor& InColorAndOpacity, uint8 Ping, const class FString& PlayerName, const class FString& PlayerNameBasis, int32 Score, int32 Stats_Passes, int32 Stats_Assists, int32 Stats_Goals, int32 INTs, int32 Stats_Saves, int32 Stats_Catches, int32 Stats_INTs, int32 Stats_Shots, int32 FoulState, bool IsAfk, const class FString& Param_PlayersSteamID, const class FString& MuteReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "Set_Variables");

	Params::MP_ScoreBoardCard_C_Set_Variables Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);
	Parms.Ping = Ping;
	Parms.PlayerName = std::move(PlayerName);
	Parms.PlayerNameBasis = std::move(PlayerNameBasis);
	Parms.Score = Score;
	Parms.Stats_Passes = Stats_Passes;
	Parms.Stats_Assists = Stats_Assists;
	Parms.Stats_Goals = Stats_Goals;
	Parms.INTs = INTs;
	Parms.Stats_Saves = Stats_Saves;
	Parms.Stats_Catches = Stats_Catches;
	Parms.Stats_INTs = Stats_INTs;
	Parms.Stats_Shots = Stats_Shots;
	Parms.FoulState = FoulState;
	Parms.IsAfk = IsAfk;
	Parms.Param_PlayersSteamID = std::move(Param_PlayersSteamID);
	Parms.MuteReason = std::move(MuteReason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMP_ScoreBoardCard_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.GetReferences
// (BlueprintCallable, BlueprintEvent)

void UMP_ScoreBoardCard_C::GetReferences()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "GetReferences");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_ScoreBoardCard.MP_ScoreBoardCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMP_ScoreBoardCard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_ScoreBoardCard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

