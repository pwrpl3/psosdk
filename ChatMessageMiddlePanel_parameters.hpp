#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatMessageMiddlePanel

#include "Basic.hpp"


namespace SDK::Params
{

// Function ChatMessageMiddlePanel.ChatMessageMiddlePanel_C.ExecuteUbergraph_ChatMessageMiddlePanel
// 0x0030 (0x0030 - 0x0000)
struct ChatMessageMiddlePanel_C_ExecuteUbergraph_ChatMessageMiddlePanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_213D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InText;                         // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};

// Function ChatMessageMiddlePanel.ChatMessageMiddlePanel_C.RecieveMessage
// 0x0010 (0x0010 - 0x0000)
struct ChatMessageMiddlePanel_C_RecieveMessage final
{
public:
	class FString                                 InText;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
};

}

