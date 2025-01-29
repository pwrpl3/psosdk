#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_SoloRanked

#include "Basic.hpp"

#include "MM_SoloRanked_classes.hpp"
#include "MM_SoloRanked_parameters.hpp"


namespace SDK
{

// Function MM_SoloRanked.MM_SoloRanked_C.ExecuteUbergraph_MM_SoloRanked
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMM_SoloRanked_C::ExecuteUbergraph_MM_SoloRanked(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "ExecuteUbergraph_MM_SoloRanked");

	Params::MM_SoloRanked_C_ExecuteUbergraph_MM_SoloRanked Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Start_SR_Search
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Start_SR_Search()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Start_SR_Search");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Create_SR_Session
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Create_SR_Session()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Create_SR_Session");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Get3v3Ratings
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Get3v3Ratings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Get3v3Ratings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.End_SR_Search
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_StatusText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMM_SoloRanked_C::End_SR_Search(const class FText& Param_StatusText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "End_SR_Search");

	Params::MM_SoloRanked_C_End_SR_Search Parms{};

	Parms.Param_StatusText = std::move(Param_StatusText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_SoloRanked.MM_SoloRanked_C.SavePreferredMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SR_PreferredMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMM_SoloRanked_C::SavePreferredMode(int32 SR_PreferredMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "SavePreferredMode");

	Params::MM_SoloRanked_C_SavePreferredMode Parms{};

	Parms.SR_PreferredMode = SR_PreferredMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_SoloRanked.MM_SoloRanked_C.BndEvt__MM_SoloRanked_PlayButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMM_SoloRanked_C::BndEvt__MM_SoloRanked_PlayButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "BndEvt__MM_SoloRanked_PlayButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.BndEvt__MM_SoloRanked_RegionSelection_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMM_SoloRanked_C::BndEvt__MM_SoloRanked_RegionSelection_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "BndEvt__MM_SoloRanked_RegionSelection_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::MM_SoloRanked_C_BndEvt__MM_SoloRanked_RegionSelection_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMM_SoloRanked_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.BndEvt__MM_SoloRanked_ModeSelectionButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMM_SoloRanked_C::BndEvt__MM_SoloRanked_ModeSelectionButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "BndEvt__MM_SoloRanked_ModeSelectionButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.SetPreferredMode
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::SetPreferredMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "SetPreferredMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Search_SR_3v3_Sessions
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Search_SR_3v3_Sessions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Search_SR_3v3_Sessions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.BndEvt__MM_SoloRanked_PositionSelection_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMM_SoloRanked_C::BndEvt__MM_SoloRanked_PositionSelection_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "BndEvt__MM_SoloRanked_PositionSelection_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::MM_SoloRanked_C_BndEvt__MM_SoloRanked_PositionSelection_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Search_SR_6v6_Sessions
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Search_SR_6v6_Sessions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Search_SR_6v6_Sessions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.BndEvt__MM_SoloRanked_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMM_SoloRanked_C::BndEvt__MM_SoloRanked_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "BndEvt__MM_SoloRanked_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Disable
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Disable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Enable
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Enable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.Get6v6Ratings
// (BlueprintCallable, BlueprintEvent)

void UMM_SoloRanked_C::Get6v6Ratings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "Get6v6Ratings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_SoloRanked.MM_SoloRanked_C.CalculateOverallRating
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_GkRating                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_DefRating                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_MidRating                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_AtkRating                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_OverallRating                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMM_SoloRanked_C::CalculateOverallRating(int32 Param_GkRating, int32 Param_DefRating, int32 Param_MidRating, int32 Param_AtkRating, int32* Param_OverallRating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "CalculateOverallRating");

	Params::MM_SoloRanked_C_CalculateOverallRating Parms{};

	Parms.Param_GkRating = Param_GkRating;
	Parms.Param_DefRating = Param_DefRating;
	Parms.Param_MidRating = Param_MidRating;
	Parms.Param_AtkRating = Param_AtkRating;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_OverallRating != nullptr)
		*Param_OverallRating = Parms.Param_OverallRating;
}


// Function MM_SoloRanked.MM_SoloRanked_C.CalculateStatAverage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   StatTotal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Wins                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Draws                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Losses                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             StatAverage                                            (Parm, OutParm)

void UMM_SoloRanked_C::CalculateStatAverage(int32 StatTotal, int32 Param_Wins, int32 Param_Draws, int32 Param_Losses, class FText* StatAverage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_SoloRanked_C", "CalculateStatAverage");

	Params::MM_SoloRanked_C_CalculateStatAverage Parms{};

	Parms.StatTotal = StatTotal;
	Parms.Param_Wins = Param_Wins;
	Parms.Param_Draws = Param_Draws;
	Parms.Param_Losses = Param_Losses;

	UObject::ProcessEvent(Func, &Parms);

	if (StatAverage != nullptr)
		*StatAverage = std::move(Parms.StatAverage);
}

}

