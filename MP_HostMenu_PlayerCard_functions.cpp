#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_HostMenu_PlayerCard

#include "Basic.hpp"

#include "MP_HostMenu_PlayerCard_classes.hpp"
#include "MP_HostMenu_PlayerCard_parameters.hpp"


namespace SDK
{

// Function MP_HostMenu_PlayerCard.MP_HostMenu_PlayerCard_C.ExecuteUbergraph_MP_HostMenu_PlayerCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMP_HostMenu_PlayerCard_C::ExecuteUbergraph_MP_HostMenu_PlayerCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HostMenu_PlayerCard_C", "ExecuteUbergraph_MP_HostMenu_PlayerCard");

	Params::MP_HostMenu_PlayerCard_C_ExecuteUbergraph_MP_HostMenu_PlayerCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_HostMenu_PlayerCard.MP_HostMenu_PlayerCard_C.BndEvt__HCM_PlayerCard_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMP_HostMenu_PlayerCard_C::BndEvt__HCM_PlayerCard_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HostMenu_PlayerCard_C", "BndEvt__HCM_PlayerCard_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::MP_HostMenu_PlayerCard_C_BndEvt__HCM_PlayerCard_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_HostMenu_PlayerCard.MP_HostMenu_PlayerCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMP_HostMenu_PlayerCard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HostMenu_PlayerCard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

