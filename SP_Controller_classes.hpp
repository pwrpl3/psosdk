#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SP_Controller

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SP_Controller.SP_Controller_C
// 0x0100 (0x0670 - 0x0570)
class ASP_Controller_C final : public APlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         JugglePowerTimeline_KickPower_498349834CFDB8F336ECE19132E29BA3; // 0x0578(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            JugglePowerTimeline__Direction_498349834CFDB8F336ECE19132E29BA3; // 0x057C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26E2[0x3];                                     // 0x057D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     JugglePowerTimeline;                               // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DribblePowerTimeline_KickPower_0E4A027248288C0691A63AA483CFAB22; // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DribblePowerTimeline__Direction_0E4A027248288C0691A63AA483CFAB22; // 0x058C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26E3[0x3];                                     // 0x058D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DribblePowerTimeline;                              // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KickPowerTimeline_KickPower_6F69192749850FA6F625A495C314D9E7; // 0x0598(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            KickPowerTimeline__Direction_6F69192749850FA6F625A495C314D9E7; // 0x059C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26E4[0x3];                                     // 0x059D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     KickPowerTimeline;                                 // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPSO_GameInstance_C*                    PSO_GameInstance;                                  // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AMP_HUD_NEW_C*                          MP_HUD;                                            // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AMP_GameState_C*                        MP_GameState;                                      // 0x05B8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AMP_PlayerState_C*                      MP_PlayerState;                                    // 0x05C0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASP_Character_C*                        SP_Character;                                      // 0x05C8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMP_SpectatorCharacter_C*               SpectatorCharacter;                                // 0x05D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMP_FreeCam_C*                          MP_FreeCam;                                        // 0x05D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InputEnabled;                                      // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26E5[0x3];                                     // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LookSensitivityX;                                  // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookSensitivityY;                                  // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurveSensitivity;                                  // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightSensitivity;                                 // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SprintButtonPressed;                               // 0x05F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Sprinting;                                         // 0x05F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SprintCooldown;                                    // 0x05F6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OnestPersonCamera;                                 // 0x05F7(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          KickCharging;                                      // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26E6[0x3];                                     // 0x05F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         KickType;                                          // 0x05FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           KickBarColor;                                      // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KickPower;                                         // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnestPersonOnly;                                   // 0x0614(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26E7[0x3];                                     // 0x0615(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VerticalAim;                                       // 0x0618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HorizontalAim;                                     // 0x061C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoundEffectsVolume;                                // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AmbienceVolume;                                    // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MusicVolume;                                       // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VoiceChatVolume;                                   // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Ambience;                                          // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Onest_Person_FOV;                                  // 0x0638(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Threerd_Person_FOV;                                // 0x063C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Threerd_Person_Distance;                           // 0x0640(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Threerd_Person_Height;                             // 0x0644(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BallIndicatorSize;                                 // 0x0648(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GkNetTransparency;                                 // 0x064C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GkButtonPressed;                                   // 0x0650(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAfk;                                             // 0x0651(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ProfanityFilter;                                   // 0x0652(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26E8[0x1];                                     // 0x0653(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextChatMode;                                      // 0x0654(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ToggleGkCatch;                                     // 0x0658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26E9[0x3];                                     // 0x0659(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GkDiveButton;                                      // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EmoteButtonPressed;                                // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26EA[0x3];                                     // 0x0661(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FreeCamSpeed;                                      // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FreeCamVerticalMovementVar;                        // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SP_Controller(int32 EntryPoint);
	void ClientPrintString(const class FString& InString);
	void SetMP_Freecam(class AMP_FreeCam_C* SpectatorPawnRef);
	void SetSpectatorCharacter_Server(class AMP_SpectatorCharacter_C* Param_SpectatorCharacter);
	void SetSpectatorCharacter_Client(class AMP_SpectatorCharacter_C* Param_SpectatorCharacter);
	void SetSP_Character_Server(class ASP_Character_C* Param_SP_Character);
	void SetSP_Character_Client(class ASP_Character_C* Param_SP_Character);
	void Set_CameraSettings_Client(float Param_Onest_Person_FOV, float Param_Threerd_Person_FOV, float Param_Threerd_Person_Distance, float Param_Threerd_Person_Height, int32 Param_BallIndicatorSize, float Param_GkNetTransparency);
	void Set_GoalsOpacity(float GoalOpacity);
	void InitializePlayerServer(const class FString& SteamID, const class FString& SteamTicket, const class FString& PlayerSessionId, const struct FSP_PlayerAppearance& SP_PlayerAppearance);
	void Set_OnlineSettings(bool Param_ProfanityFilter, int32 Param_TextChatMode);
	void Set_CameraSettings(float Param_Onest_Person_FOV, float Param_Threerd_Person_FOV, float Param_Threerd_Person_Distance, float Param_Threerd_Person_Height, int32 Param_BallIndicatorSize, float Param_GkNetTransparency);
	void Set_ControlSettings(bool InvertVertical, bool InvertHorizontal, float LookSensitivity, float Param_HeightSensitivity, float CurveSens, bool Param_ToggleGkCatch, int32 Param_GkDiveButton);
	void TaskbarFlash();
	void Set_1stPersonOnly(bool Param_OnestPersonOnly);
	void Set_Ballhalo(class ASoccerBall_C* SoccerBall);
	void Update_CharacterCamera();
	void Set_BallIndicatorSize(int32 BallHaloSize);
	void Set_GkNetTransparency(float Param_GkNetTransparency);
	void UpdateMatchBallIndicator();
	void GetSpectatorCharacter();
	void InitializePlayerClient();
	void Set_1stPersonCamera_Server(bool Param_OnestPersonCamera);
	void Set_1stPersonCamera(bool Param_OnestPersonCamera);
	void Set_PlayerAppearance(const struct FSP_AppearanceCombined& SP_Appearance);
	void Start_AmbienceSound();
	void ReceiveBeginPlay();
	void GkDive();
	void SetDiveCoolDown();
	void DisableGkCatchToggle(bool Param_GkButtonPressed);
	void Set_GkButtonPressed(bool Param_GkButtonPressed);
	void Set_InputEnabled(bool Param_InputEnabled);
	void CalculateSprint();
	void Gk_StopMovement(class UCharacterMovementComponent* CharacterMovementComponent);
	void CheckSprinting();
	void Gk_EnterDiveMovement(class UCharacterMovementComponent* CharacterMovementComponent);
	void Gk_ExitDiveMovement(class UCharacterMovementComponent* CharacterMovementComponent);
	void Set_ControlRotation(const struct FRotator& NewRotation);
	void InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_4(float AxisValue);
	void EnterRun_Client();
	void EnterSprint_Client();
	void InpAxisEvt_HorizontalAim_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_VerticalAim_K2Node_InputAxisEvent_2(float AxisValue);
	void ResetKick();
	void Juggle();
	void Dribble();
	void Kick();
	void CL_Host_Set1stPersonOnly(bool Param_OnestPersonOnly);
	void CL_Host_BanPlayer(class AMP_PlayerState_C* Param_PlayerState);
	void CL_Host_SetAutoStart(bool AutoStart);
	void CL_Host_BenchAllPlayers();
	void CL_Host_GiveHost();
	void CL_Host_KickPlayer(class AMP_PlayerState_C* Param_PlayerState);
	void CL_Host_ForceSpectate(class AMP_PlayerState_C* Param_PlayerState);
	void RecieveKick();
	void CL_Host_SetOvertime(bool OverTime);
	void CL_Host_SetSingleKeeper(bool SingleKeeper);
	void TR_StartTutorial(int32 TutorialType, bool ControllerMode_);
	void CL_Host_ForceResetMatch();
	void CL_Host_ForceStartMatch();
	void CL_Host_MatchLengthMinus();
	void CL_Host_MatchLengthPlus();
	void CL_Host_TeamSizeMinus();
	void CL_Host_TeamSizePlus();
	void TR_StartFreePlay(int32 Team, int32 Position);
	void MP_SubstituteSpawn(int32 Team, int32 Position, bool SendTeamChangeMessage_, const struct FTransform& SpawnTransform);
	void MP_CheckSubstituteSpawn(int32 Team, int32 Position);
	void CheckSpectatorRespawn();
	void Set_SP_FreeCamera_Client(class AMP_FreeCam_C* Param_MP_FreeCam);
	void Spawn_FreeCamera();
	void Spawn_SpectatorCharacter(bool MatchEndSpawn, const struct FTransform& SpawnTransform, bool SendTeamChangeMessage, bool DontCloseMultiplayerMenu);
	void RespawnSP_Character(const struct FTransform& SpawnTransform);
	void MP_CheckSpawn(int32 Team, int32 Position);
	void SpawnSP_Character(int32 Team, int32 Position, bool SendTeamChangeMessage, const struct FTransform& SpawnTransform);
	void MP_CPTMinusInitiateSwap(const class FString& OnestSteamID, const class FString& TwondSteamID, int32 EmptyPosition);
	void MP_CPTMinusKickPlayerFromTeam(const class FString& SteamID);
	void MP_HostMinusSetRedCardLength(int32 RedCardLength);
	void MP_HostMinusSetCaptainRolesEnabled(bool CaptainRolesAllowed);
	void MP_HostMinusSetCoachRolesEnabled(bool CoachRolesAllowed);
	void MP_CPTMinusSetSubstitutesSlots(int32 SubSlots);
	void MP_RequestSwap(const class FString& PlayerSessionId);
	void MP_HUDMinusOpenMatchSummary();
	void MP_HUDMinusUpdateMatchSummary();
	void Coach(int32 CoachTeam);
	void VoteNo();
	void VoteYes();
	void MP_CPTMinusImportCustomTeam(const struct FTeamInfo& TeamInfo, const struct FSP_TeamAppearance& TeamAppearance, const struct FSP_TeamAppearance& GkAppearance);
	void MP_CPTMinusSetFormation(int32 Selection);
	void MP_HostMinusGiveHost(class AMP_PlayerState_C* Param_Player);
	void MP_HostMinusBanPlayer(class AMP_PlayerState_C* Param_MP_PlayerState);
	void MP_HostMinusKickPlayer(class AMP_PlayerState_C* Param_Player);
	void MP_HostMinusForceSpectatePlayer(class AMP_PlayerState_C* Param_Player);
	void MP_HostMinusSet1stPersonOnly(bool Param_OnestPersonOnly);
	void MP_HostMinusSetSingleKeeper(bool SingleKeeper);
	void MP_HostMinusSetAutoMinusStart(bool AutoStart);
	void MP_HostMinusSetOvertimeMode(int32 OvertimeMode);
	void MP_HUDMinusSendPlayerMessage(const class FString& MessageGroup, const class FString& Message);
	void MP_HUDMinusRecieveChatMessage(int32 MessageType, const class FString& SenderSteamID, int32 Team, const class FString& MessageGroup, const class FString& PlayerName, int32 Position, const class FString& Message, const class FString& SwappingPlayerName, int32 SwappingPlayerTeam, int32 SwappingPlayerPosition);
	void UnmutePlayer(class AMP_PlayerState_C* Param_Player);
	void MP_HostMinusForceAllSpectate();
	void MP_HostMinusSetMatchLength(int32 MatchLength);
	void MP_HostMinusSetTeamSize(int32 TeamSize);
	void MP_HostMinusForceResetMatch();
	void MP_HostMinusForceStartMatch();
	void MP_HUDMinusGoalStateFadeIn(bool WithAssist_, const class FText& TeamScoreText, const struct FLinearColor& TeamScoreTextColor, const class FText& ScorerName, const class FText& AssisterName);
	void MP_HUDMinusSetMatchTime(int32 MatchMinutes, float MatchSeconds);
	void MP_HUDMinusMatchStateFadeOut();
	void MP_HUDMinusMatchStateFadeIn(const class FText& MatchStateText, const struct FLinearColor& TextColor);
	void MP_HUDMinusMatchStateSetText(const class FText& MatchStateText, const struct FLinearColor& TextColor);
	void MP_HUDMinusCloseMatchMenu();
	void MP_HUDMinusOpenMatchMenu();
	void InpActEvt_AnyKey_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Emotes_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Emotes_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_QuickChat4_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_QuickChat3_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_QuickChat2_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_QuickChat1_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_ToggleCamera_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Tab_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_GkButton_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_GkButton_K2Node_InputActionEvent_11(const struct FKey& Key);
	void BicycleKick_K2Node_InputActionEvent_12(const struct FKey& Key);
	void BicycleKick_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_SpawnBall_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_Juggle_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_Juggle_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_Dribble_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_Dribble_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_Kick_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_Kick_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_AllChat_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_TeamChat_K2Node_InputActionEvent_26(const struct FKey& Key);
	void JugglePowerTimeline__UpdateFunc();
	void JugglePowerTimeline__FinishedFunc();
	void DribblePowerTimeline__UpdateFunc();
	void DribblePowerTimeline__FinishedFunc();
	void KickPowerTimeline__UpdateFunc();
	void KickPowerTimeline__FinishedFunc();
	void AfkTimer();
	void LongAfkTimer();
	void VeryLongAfkTimer();
	void CalculateTeamAppearance(int32 Team, int32 Position, struct FSP_PlayerAppearance* SP_PlayerAppearance, struct FSP_TeamAppearance* TeamAppearance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SP_Controller_C">();
	}
	static class ASP_Controller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASP_Controller_C>();
	}
};

}

