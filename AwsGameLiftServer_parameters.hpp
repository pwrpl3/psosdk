#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AwsGameLiftServer

#include "Basic.hpp"

#include "AwsGameLiftServer_structs.hpp"


namespace SDK::Params
{

// Function AwsGameLiftServer.GameLiftServerGameMode.Internal_PreLogin
// 0x0030 (0x0030 - 0x0000)
struct GameLiftServerGameMode_Internal_PreLogin final
{
public:
	class FString                                 Options;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Address;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ErrorMessage;                                      // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AwsGameLiftServer.GameLiftServerObject.ProcessEnding
// 0x0020 (0x0020 - 0x0000)
struct GameLiftServerObject_ProcessEnding final
{
public:
	EGameLiftErrorType                            ErrorType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1796[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1797[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.AcceptPlayerSession
// 0x0030 (0x0030 - 0x0000)
struct GameLiftServerObject_AcceptPlayerSession final
{
public:
	class FString                                 PlayerSessionId;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameLiftErrorType                            ErrorType;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1798[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1799[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.ActivateGameSession
// 0x0020 (0x0020 - 0x0000)
struct GameLiftServerObject_ActivateGameSession final
{
public:
	EGameLiftErrorType                            ErrorType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_179A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_179B[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.DescribePlayerSessions
// 0x00A0 (0x00A0 - 0x0000)
struct GameLiftServerObject_DescribePlayerSessions final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FServerDescribePlayerSessionsRequest   Request;                                           // 0x0008(0x0058)(Parm, NativeAccessSpecifierPublic)
	struct FServerDescribePlayerSessionsResult    Result;                                            // 0x0060(0x0020)(Parm, OutParm, NativeAccessSpecifierPublic)
	EGameLiftErrorType                            ErrorType;                                         // 0x0080(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_179C[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0088(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0098(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_179D[0x7];                                     // 0x0099(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.GetGameSessionId
// 0x0030 (0x0030 - 0x0000)
struct GameLiftServerObject_GetGameSessionId final
{
public:
	class FString                                 GameSessionID;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameLiftErrorType                            ErrorType;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_179E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_179F[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.GetTerminationTime
// 0x0030 (0x0030 - 0x0000)
struct GameLiftServerObject_GetTerminationTime final
{
public:
	class FString                                 TerminationTime;                                   // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameLiftErrorType                            ErrorType;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A1[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.ProcessTerminate
// 0x0001 (0x0001 - 0x0000)
struct GameLiftServerObject_ProcessTerminate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AwsGameLiftServer.GameLiftServerObject.RemovePlayerSession
// 0x0030 (0x0030 - 0x0000)
struct GameLiftServerObject_RemovePlayerSession final
{
public:
	class FString                                 PlayerSessionId;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameLiftErrorType                            ErrorType;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A3[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.ServerHealthCheck
// 0x0001 (0x0001 - 0x0000)
struct GameLiftServerObject_ServerHealthCheck final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AwsGameLiftServer.GameLiftServerObject.StartGameSession
// 0x0098 (0x0098 - 0x0000)
struct GameLiftServerObject_StartGameSession final
{
public:
	struct FServerGameSession                     Session;                                           // 0x0000(0x0090)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A4[0x7];                                     // 0x0091(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.StartMatchBackfill
// 0x0070 (0x0070 - 0x0000)
struct GameLiftServerObject_StartMatchBackfill final
{
public:
	struct FStartMatchBackfillRequestServer       Request;                                           // 0x0000(0x0040)(Parm, NativeAccessSpecifierPublic)
	struct FStartMatchBackfillResultServer        Result;                                            // 0x0040(0x0010)(Parm, OutParm, NativeAccessSpecifierPublic)
	EGameLiftErrorType                            ErrorType;                                         // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A5[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0058(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A6[0x7];                                     // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.StopMatchBackfill
// 0x0050 (0x0050 - 0x0000)
struct GameLiftServerObject_StopMatchBackfill final
{
public:
	struct FStopMatchBackfillRequest              Request;                                           // 0x0000(0x0030)(Parm, NativeAccessSpecifierPublic)
	EGameLiftErrorType                            ErrorType;                                         // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A7[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A8[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.UpdateGameSession
// 0x00A0 (0x00A0 - 0x0000)
struct GameLiftServerObject_UpdateGameSession final
{
public:
	struct FServerUpdateGameSession               Session;                                           // 0x0000(0x0098)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0098(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A9[0x7];                                     // 0x0099(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AwsGameLiftServer.GameLiftServerObject.UpdatePlayerSessionCreationPolicy
// 0x0020 (0x0020 - 0x0000)
struct GameLiftServerObject_UpdatePlayerSessionCreationPolicy final
{
public:
	ECreationPolicy                               NewPlayerSessionPolicy;                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameLiftErrorType                            ErrorType;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17AA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMessage;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17AB[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

