#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_FreeCam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_FreeCam.MP_FreeCam_C
// 0x0010 (0x02B8 - 0x02A8)
class AMP_FreeCam_C final : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASoccerBall_C*                          MatchBall;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MP_FreeCam(int32 EntryPoint);
	void ReceiveUnpossessed(class AController* OldController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_FreeCam_C">();
	}
	static class AMP_FreeCam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMP_FreeCam_C>();
	}
};

}

