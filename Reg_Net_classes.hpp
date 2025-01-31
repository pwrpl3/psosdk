#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Reg_Net

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Reg_Net.Reg_Net_C
// 0x0030 (0x0250 - 0x0220)
class AReg_Net_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   NetSupports;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Net;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PostSupports;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Posts;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          PostHitCoolDown;                                   // 0x0248(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NetHitCoolDown;                                    // 0x0249(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Reg_Net(int32 EntryPoint);
	void Set_GoalOpacity(float GoalOpacity);
	void StopBall(class ASoccerBall_C* SoccerBall, const struct FVector& Velocity);
	void Check_CrowdRoar_ShotStat();
	void PlayNetHitSound_All(const struct FVector& Location);
	void Calculate_NetHit(class AActor* OtherActor, const struct FVector& HitLocation);
	void BndEvt__Net_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Posts_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void PlayPostHitSound_All(const struct FVector& Location);
	void Calculate_PostHit(class AActor* OtherActor, const struct FVector& HitLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Reg_Net_C">();
	}
	static class AReg_Net_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReg_Net_C>();
	}
};

}

