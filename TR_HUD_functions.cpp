#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TR_HUD

#include "Basic.hpp"

#include "TR_HUD_classes.hpp"
#include "TR_HUD_parameters.hpp"


namespace SDK
{

// Function TR_HUD.TR_HUD_C.ExecuteUbergraph_TR_HUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATR_HUD_C::ExecuteUbergraph_TR_HUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_HUD_C", "ExecuteUbergraph_TR_HUD");

	Params::TR_HUD_C_ExecuteUbergraph_TR_HUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TR_HUD.TR_HUD_C.CreateWidgets
// (BlueprintCallable, BlueprintEvent)

void ATR_HUD_C::CreateWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_HUD_C", "CreateWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_HUD.TR_HUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATR_HUD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_HUD_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_HUD.TR_HUD_C.GetReferences
// (BlueprintCallable, BlueprintEvent)

void ATR_HUD_C::GetReferences()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_HUD_C", "GetReferences");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_HUD.TR_HUD_C.Set_UIOnly
// (BlueprintCallable, BlueprintEvent)

void ATR_HUD_C::Set_UIOnly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_HUD_C", "Set_UIOnly");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_HUD.TR_HUD_C.Set_GameOnly
// (BlueprintCallable, BlueprintEvent)

void ATR_HUD_C::Set_GameOnly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_HUD_C", "Set_GameOnly");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_HUD.TR_HUD_C.Escape_CalculateMenuState
// (BlueprintCallable, BlueprintEvent)

void ATR_HUD_C::Escape_CalculateMenuState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_HUD_C", "Escape_CalculateMenuState");

	UObject::ProcessEvent(Func, nullptr);
}

}

