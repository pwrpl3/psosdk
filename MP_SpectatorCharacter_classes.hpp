#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_SpectatorCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_SpectatorCharacter.MP_SpectatorCharacter_C
// 0x0050 (0x0510 - 0x04C0)
class AMP_SpectatorCharacter_C final : public ACharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       DirectorCamera;                                    // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       SidelineCamera;                                    // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       BroadcastCamera;                                   // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObject*                                MP_GameState;                                      // 0x04E0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASoccerBall_C*                          MatchBall;                                         // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PlayerSessionId;                                   // 0x04F0(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         CameraMode;                                        // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Location;                                          // 0x0504(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MP_SpectatorCharacter(int32 EntryPoint);
	void SidelineCameraTick();
	void CameraAngleMinus(class UMP_Interface_C* MP_Interface);
	void CameraAnglePlus(class UMP_Interface_C* MP_Interface);
	void DirectorCameraTick();
	void SetCameraMode(int32 Param_CameraMode);
	void CameraTick();
	void Set_Camera_FOV(float InFieldOfView);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ZoomMinus();
	void ZoomPlus();
	void ReceiveUnpossessed(class AController* OldController);
	void BroadcastCameraTick();
	void Set_MatchBall(class ASoccerBall_C* Param_MatchBall);
	void Get_MatchBall();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_SpectatorCharacter_C">();
	}
	static class AMP_SpectatorCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMP_SpectatorCharacter_C>();
	}
};

}

