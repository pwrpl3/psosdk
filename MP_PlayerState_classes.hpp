#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_PlayerState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SP_PlayerAppearance_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_PlayerState.MP_PlayerState_C
// 0x0220 (0x0540 - 0x0320)
class AMP_PlayerState_C final : public APlayerState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AMP_GameState_C*                        MP_GameState;                                      // 0x0330(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASP_Controller_C*                       SP_Controller;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SteamID;                                           // 0x0340(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 UserId;                                            // 0x0350(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 PlayerSessionId;                                   // 0x0360(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 PlayerName;                                        // 0x0370(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSP_PlayerAppearance                   SP_PlayerAppearance;                               // 0x0380(0x00A8)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsHost;                                            // 0x0428(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCaptain;                                         // 0x0429(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCoach;                                           // 0x042A(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D3[0x1];                                     // 0x042B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Team;                                              // 0x042C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Position;                                          // 0x0430(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_Score;                                       // 0x0434(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_Passes;                                      // 0x0438(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_Assists;                                     // 0x043C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_TKLs;                                        // 0x0440(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_INTs;                                        // 0x0444(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_Shots;                                       // 0x0448(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_Goals;                                       // 0x044C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_Saves;                                       // 0x0450(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_Catches;                                     // 0x0454(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubTeam;                                           // 0x0458(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPosition;                                       // 0x045C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RedCardTeam;                                       // 0x0460(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RedCardPosition;                                   // 0x0464(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FoulState;                                         // 0x0468(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FoulCoolDown;                                      // 0x046C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D4[0x3];                                     // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TeamChangeMessageText;                             // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Stats_YellowCards;                                 // 0x0480(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stats_RedCards;                                    // 0x0484(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAfk;                                             // 0x0488(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayerVoted;                                       // 0x0489(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayerMuted;                                       // 0x048A(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D5[0x5];                                     // 0x048B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MuteReason;                                        // 0x0490(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UVaRestRequestJSON*                     VaRestRequest;                                     // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PersonalVoteType;                                  // 0x04A8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22D6[0x4];                                     // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PersonalVoteText1;                                 // 0x04B0(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                   PersonalVoteText2;                                 // 0x04C8(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                          AwaitingSwap;                                      // 0x04E0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D7[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMP_PlayerState_C*                      SwapRequester;                                     // 0x04E8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             SwapLocation;                                      // 0x04F0(0x0030)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         SwapTeam;                                          // 0x0520(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SwapPosition;                                      // 0x0524(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LogoutMessage;                                     // 0x0528(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          AwaitingRedCardSpawn;                              // 0x0538(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PersonalVoteCooldown;                              // 0x0539(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayerInitialized;                                 // 0x053A(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MP_PlayerState(int32 EntryPoint);
	void CheckInitialization();
	void StartPersonalVoteCooldown();
	void StartPersonalVoteTimer();
	void Func_Position_0(int32 Param_SubTeam, int32 Param_SubPosition, bool SendTeamChangeMessage);
	void InitiateSwap();
	void PersonalVoteNo();
	void PersonalVoteYes();
	void MPMinusRecieveSwapRequest(class AMP_PlayerState_C* Param_SwapRequester, bool CPT_Swap_);
	void UpdateSteamNameSuccess(class UVaRestRequestJSON* Request);
	void UpdateSteamNameFail(class UVaRestRequestJSON* Request);
	void InitializePlayer(const class FString& Param_SteamID, const class FString& SteamTicket, const class FString& Param_PlayerSessionId, class ASP_Controller_C* Param_SP_Controller, const struct FSP_PlayerAppearance& Param_SP_PlayerAppearance);
	void RemoveCaptain();
	void Set_MuteReason(const class FString& Param_MuteReason);
	void Stats_Add_Shot();
	void Stats_Add_INT();
	void Set_IsAfk(bool Param_IsAfk);
	void Reset_FoulState();
	void AddFoul();
	void RecieveKick();
	void ForceSpectate();
	void Stats_AddCatch();
	void Stats_Reset();
	void Stats_AddSave();
	void Stats_AddTKL();
	void Stats_AddGoal();
	void Stats_AddAssist();
	void Stats_AddPass();
	void GetReferences();
	void ReceiveBeginPlay();
	void Func_Position(int32 Param_Team, int32 Param_Position, bool SendTeamChangeMessage_);
	void CalculateTeamChangeMessage(class FString* TeamChangeMessage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_PlayerState_C">();
	}
	static class AMP_PlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMP_PlayerState_C>();
	}
};

}

