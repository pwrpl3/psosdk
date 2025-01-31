#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_HUD_NEW

#include "Basic.hpp"

#include "MP_HUD_NEW_classes.hpp"
#include "MP_HUD_NEW_parameters.hpp"


namespace SDK
{

// Function MP_HUD_NEW.MP_HUD_NEW_C.ExecuteUbergraph_MP_HUD_NEW
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_HUD_NEW_C::ExecuteUbergraph_MP_HUD_NEW(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HUD_NEW_C", "ExecuteUbergraph_MP_HUD_NEW");

	Params::MP_HUD_NEW_C_ExecuteUbergraph_MP_HUD_NEW Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_HUD_NEW.MP_HUD_NEW_C.EscapePressed
// (BlueprintCallable, BlueprintEvent)

void AMP_HUD_NEW_C::EscapePressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HUD_NEW_C", "EscapePressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_HUD_NEW.MP_HUD_NEW_C.Set_GameOnly
// (BlueprintCallable, BlueprintEvent)

void AMP_HUD_NEW_C::Set_GameOnly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HUD_NEW_C", "Set_GameOnly");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_HUD_NEW.MP_HUD_NEW_C.Set_UIOnly
// (BlueprintCallable, BlueprintEvent)

void AMP_HUD_NEW_C::Set_UIOnly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HUD_NEW_C", "Set_UIOnly");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_HUD_NEW.MP_HUD_NEW_C.CreateWidgets
// (BlueprintCallable, BlueprintEvent)

void AMP_HUD_NEW_C::CreateWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HUD_NEW_C", "CreateWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_HUD_NEW.MP_HUD_NEW_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMP_HUD_NEW_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_HUD_NEW_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

