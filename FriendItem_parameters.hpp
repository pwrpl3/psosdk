#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SteamCore_structs.hpp"


namespace SDK::Params
{

// Function FriendItem.FriendItem_C.ExecuteUbergraph_FriendItem
// 0x00E0 (0x00E0 - 0x0000)
struct FriendItem_C_ExecuteUbergraph_FriendItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20A3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamID                               K2Node_CustomEvent_SteamID;                        // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Status;                         // 0x0010(0x0018)()
	class UTexture2D*                             CallFunc_GetMediumFriendAvatar_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFriendPersonaName_ReturnValue;         // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0040(0x0088)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
};

// Function FriendItem.FriendItem_C.RecieveFriendInfo
// 0x0020 (0x0020 - 0x0000)
struct FriendItem_C_RecieveFriendInfo final
{
public:
	struct FSteamID                               SteamID;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class FText                                   Status;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}

