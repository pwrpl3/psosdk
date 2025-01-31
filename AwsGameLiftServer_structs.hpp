#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AwsGameLiftServer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum AwsGameLiftServer.ECreationPolicy
// NumValues: 0x0004
enum class ECreationPolicy : uint8
{
	NOT_SET                                  = 0,
	ACCEPT_ALL                               = 1,
	DENY_ALL                                 = 2,
	ECreationPolicy_MAX                      = 3,
};

// Enum AwsGameLiftServer.EServerPlayerSessionStatus
// NumValues: 0x0006
enum class EServerPlayerSessionStatus : uint8
{
	NOT_SET                                  = 0,
	RESERVED                                 = 1,
	ACTIVE                                   = 2,
	COMPLETED                                = 3,
	TIMEDOUT                                 = 4,
	EServerPlayerSessionStatus_MAX           = 5,
};

// Enum AwsGameLiftServer.EServerUpdateReason
// NumValues: 0x0006
enum class EServerUpdateReason : uint8
{
	MATCHMAKING_DATA_UPDATED                 = 0,
	BACKFILL_FAILED                          = 1,
	BACKFILL_TIMED_OUT                       = 2,
	BACKFILL_CANCELLED                       = 3,
	UNKNOWN                                  = 4,
	EServerUpdateReason_MAX                  = 5,
};

// Enum AwsGameLiftServer.EServerGameSessionStatus
// NumValues: 0x0006
enum class EServerGameSessionStatus : uint8
{
	NOT_SET                                  = 0,
	ACTIVE                                   = 1,
	ACTIVATING                               = 2,
	TERMINATED                               = 3,
	TERMINATING                              = 4,
	EServerGameSessionStatus_MAX             = 5,
};

// Enum AwsGameLiftServer.EGameLiftErrorType
// NumValues: 0x001B
enum class EGameLiftErrorType : uint8
{
	ALREADY_INITIALIZED                      = 0,
	FLEET_MISMATCH                           = 1,
	GAMELIFT_CLIENT_NOT_INITIALIZED          = 2,
	GAMELIFT_SERVER_NOT_INITIALIZED          = 3,
	GAME_SESSION_ENDED_FAILED                = 4,
	GAME_SESSION_NOT_READY                   = 5,
	GAME_SESSION_READY_FAILED                = 6,
	GAME_SESSION_ID_NOT_SET                  = 7,
	INITIALIZATION_MISMATCH                  = 8,
	NOT_INITIALIZED                          = 9,
	NO_TARGET_ALIASID_SET                    = 10,
	NO_TARGET_FLEET_SET                      = 11,
	PROCESS_ENDING_FAILED                    = 12,
	PROCESS_NOT_ACTIVE                       = 13,
	PROCESS_NOT_READY                        = 14,
	PROCESS_READY_FAILED                     = 15,
	SDK_VERSION_DETECTION_FAILED             = 16,
	SERVICE_CALL_FAILED                      = 17,
	STX_CALL_FAILED                          = 18,
	STX_INITIALIZATION_FAILED                = 19,
	UNEXPECTED_PLAYER_SESSION                = 20,
	BAD_REQUEST_EXCEPTION                    = 21,
	INTERNAL_SERVICE_EXCEPTION               = 22,
	WEBSOCKET_CONNECT_FAILURE                = 23,
	WEBSOCKET_RETRIABLE_SEND_MESSAGE_FAILURE = 24,
	WEBSOCKET_SEND_MESSAGE_FAILURE           = 25,
	EGameLiftErrorType_MAX                   = 26,
};

// ScriptStruct AwsGameLiftServer.ServerParameters
// 0x0050 (0x0050 - 0x0000)
struct FServerParameters final
{
public:
	class FString                                 WebSocketUrl;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FleetId;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProcessId;                                         // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 HostId;                                            // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AuthToken;                                         // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AwsGameLiftServer.StopMatchBackfillRequest
// 0x0030 (0x0030 - 0x0000)
struct FStopMatchBackfillRequest final
{
public:
	class FString                                 TicketId;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MatchmakingConfigurationArn;                       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GameSessionArn;                                    // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AwsGameLiftServer.GameLiftServerPlayer
// 0x00C8 (0x00C8 - 0x0000)
struct FGameLiftServerPlayer final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Team;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                    LatencyInMs;                                       // 0x0020(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>            PlayerAttributes;                                  // 0x0070(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_178E[0x8];                                     // 0x00C0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AwsGameLiftServer.StartMatchBackfillRequestServer
// 0x0040 (0x0040 - 0x0000)
struct FStartMatchBackfillRequestServer final
{
public:
	class FString                                 TicketId;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MatchmakingConfigurationArn;                       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GameSessionArn;                                    // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameLiftServerPlayer>          Players;                                           // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AwsGameLiftServer.ServerGameProperty
// 0x0020 (0x0020 - 0x0000)
struct FServerGameProperty final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AwsGameLiftServer.ServerGameSession
// 0x0090 (0x0090 - 0x0000)
struct FServerGameSession final
{
public:
	class FString                                 GameSessionID;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FleetId;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaximumPlayerSessionCount;                         // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EServerGameSessionStatus                      Status;                                            // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_178F[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FServerGameProperty>            GameProperties;                                    // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 IpAddress;                                         // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Port;                                              // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1790[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GameSessionData;                                   // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MatchmakerData;                                    // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DnsName;                                           // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AwsGameLiftServer.ServerUpdateGameSession
// 0x0098 (0x0098 - 0x0000)
struct FServerUpdateGameSession final
{
public:
	struct FServerGameSession                     GameSession;                                       // 0x0000(0x0090)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EServerUpdateReason                           UpdateReason;                                      // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1791[0x7];                                     // 0x0091(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AwsGameLiftServer.StartMatchBackfillResultServer
// 0x0010 (0x0010 - 0x0000)
struct FStartMatchBackfillResultServer final
{
public:
	class FString                                 TicketId;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AwsGameLiftServer.ServerPlayerSession
// 0x0090 (0x0090 - 0x0000)
struct FServerPlayerSession final
{
public:
	class FString                                 PlayerSessionId;                                   // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlayerId;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GameSessionID;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FleetId;                                           // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              CreationTime;                                      // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              TerminationTime;                                   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EServerPlayerSessionStatus                    Status;                                            // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1792[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 IpAddress;                                         // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Port;                                              // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1793[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerData;                                        // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DnsName;                                           // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AwsGameLiftServer.ServerDescribePlayerSessionsResult
// 0x0020 (0x0020 - 0x0000)
struct FServerDescribePlayerSessionsResult final
{
public:
	TArray<struct FServerPlayerSession>           PlayerSessions;                                    // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 NextToken;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AwsGameLiftServer.ServerDescribePlayerSessionsRequest
// 0x0058 (0x0058 - 0x0000)
struct FServerDescribePlayerSessionsRequest final
{
public:
	class FString                                 GameSessionID;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlayerId;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlayerSessionId;                                   // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlayerSessionStatusFilter;                         // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Limit;                                             // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1794[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NextToken;                                         // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

