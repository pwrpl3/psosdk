#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_Extras

#include "Basic.hpp"

#include "MM_Extras_classes.hpp"
#include "MM_Extras_parameters.hpp"


namespace SDK
{

// Function MM_Extras.MM_Extras_C.ExecuteUbergraph_MM_Extras
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMM_Extras_C::ExecuteUbergraph_MM_Extras(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_Extras_C", "ExecuteUbergraph_MM_Extras");

	Params::MM_Extras_C_ExecuteUbergraph_MM_Extras Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_Extras.MM_Extras_C.BndEvt__MM_Extras_Back_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMM_Extras_C::BndEvt__MM_Extras_Back_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_Extras_C", "BndEvt__MM_Extras_Back_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_Extras.MM_Extras_C.BndEvt__MM_Extras_Discord_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMM_Extras_C::BndEvt__MM_Extras_Discord_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_Extras_C", "BndEvt__MM_Extras_Discord_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_Extras.MM_Extras_C.BndEvt__MM_Extras_Discord_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMM_Extras_C::BndEvt__MM_Extras_Discord_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_Extras_C", "BndEvt__MM_Extras_Discord_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_Extras.MM_Extras_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMM_Extras_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_Extras_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_Extras.MM_Extras_C.Disable
// (BlueprintCallable, BlueprintEvent)

void UMM_Extras_C::Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_Extras_C", "Disable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_Extras.MM_Extras_C.Enable
// (BlueprintCallable, BlueprintEvent)

void UMM_Extras_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_Extras_C", "Enable");

	UObject::ProcessEvent(Func, nullptr);
}

}

