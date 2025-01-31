#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TR_Tutorial_Movement

#include "Basic.hpp"

#include "TR_Tutorial_Movement_classes.hpp"
#include "TR_Tutorial_Movement_parameters.hpp"


namespace SDK
{

// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.ExecuteUbergraph_TR_Tutorial_Movement
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTR_Tutorial_Movement_C::ExecuteUbergraph_TR_Tutorial_Movement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "ExecuteUbergraph_TR_Tutorial_Movement");

	Params::TR_Tutorial_Movement_C_ExecuteUbergraph_TR_Tutorial_Movement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.BndEvt__TR_Tutorial_Movement_OK_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTR_Tutorial_Movement_C::BndEvt__TR_Tutorial_Movement_OK_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "BndEvt__TR_Tutorial_Movement_OK_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.Set_ControllerMode
// (BlueprintCallable, BlueprintEvent)

void UTR_Tutorial_Movement_C::Set_ControllerMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "Set_ControllerMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.EndTutorial
// (BlueprintCallable, BlueprintEvent)

void UTR_Tutorial_Movement_C::EndTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "EndTutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.BndEvt__TR_Tutorial_Movement_NextTutorial_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTR_Tutorial_Movement_C::BndEvt__TR_Tutorial_Movement_NextTutorial_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "BndEvt__TR_Tutorial_Movement_NextTutorial_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.BndEvt__TR_Tutorial_Movement_ChangeTraining_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTR_Tutorial_Movement_C::BndEvt__TR_Tutorial_Movement_ChangeTraining_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "BndEvt__TR_Tutorial_Movement_ChangeTraining_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.BndEvt__OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTR_Tutorial_Movement_C::BndEvt__OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "BndEvt__OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.Disable
// (BlueprintCallable, BlueprintEvent)

void UTR_Tutorial_Movement_C::Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "Disable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TR_Tutorial_Movement.TR_Tutorial_Movement_C.Enable
// (BlueprintCallable, BlueprintEvent)

void UTR_Tutorial_Movement_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TR_Tutorial_Movement_C", "Enable");

	UObject::ProcessEvent(Func, nullptr);
}

}

