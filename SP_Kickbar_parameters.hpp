#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SP_Kickbar

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SP_Kickbar.SP_KickBar_C.ExecuteUbergraph_SP_KickBar
// 0x00C8 (0x00C8 - 0x0000)
struct SP_KickBar_C_ExecuteUbergraph_SP_KickBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_20FA[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASP_Controller_C*                       K2Node_DynamicCast_AsSP_Controller;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_Get_YellowCardVis_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20FB[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_Get_GkGlovesImage_ReturnValue;            // 0x0038(0x0088)()
	float                                         CallFunc_Get_Stamina_ReturnValue;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SP_Kickbar.SP_KickBar_C.Get_KickPower
// 0x0008 (0x0008 - 0x0000)
struct SP_KickBar_C_Get_KickPower final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SP_Kickbar.SP_KickBar_C.Get_KickBarColor
// 0x0014 (0x0014 - 0x0000)
struct SP_KickBar_C_Get_KickBarColor final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SP_Kickbar.SP_KickBar_C.Get_Stamina
// 0x0008 (0x0008 - 0x0000)
struct SP_KickBar_C_Get_Stamina final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SP_Kickbar.SP_KickBar_C.Get_GkGlovesImage
// 0x0408 (0x0408 - 0x0000)
struct SP_KickBar_C_Get_GkGlovesImage final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0088(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00B0(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00D8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0160(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x01E8(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0210(0x0088)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20FC[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x02A0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x02C8(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x02F0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x0378(0x0088)()
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0402(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0403(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SP_Kickbar.SP_KickBar_C.Get_YellowCardVis
// 0x0005 (0x0005 - 0x0000)
struct SP_KickBar_C_Get_YellowCardVis final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

