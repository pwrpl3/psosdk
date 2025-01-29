#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigVM

#include "Basic.hpp"


namespace SDK
{

// Enum RigVM.ERigVMParameterType
// NumValues: 0x0004
enum class ERigVMParameterType : uint8
{
	Input                                    = 0,
	Output                                   = 1,
	Invalid                                  = 2,
	ERigVMParameterType_MAX                  = 3,
};

// Enum RigVM.ERigVMOpCode
// NumValues: 0x0055
enum class ERigVMOpCode : uint8
{
	Execute_0_Operands                       = 0,
	Execute_1_Operands                       = 1,
	Execute_2_Operands                       = 2,
	Execute_3_Operands                       = 3,
	Execute_4_Operands                       = 4,
	Execute_5_Operands                       = 5,
	Execute_6_Operands                       = 6,
	Execute_7_Operands                       = 7,
	Execute_8_Operands                       = 8,
	Execute_9_Operands                       = 9,
	Execute_10_Operands                      = 10,
	Execute_11_Operands                      = 11,
	Execute_12_Operands                      = 12,
	Execute_13_Operands                      = 13,
	Execute_14_Operands                      = 14,
	Execute_15_Operands                      = 15,
	Execute_16_Operands                      = 16,
	Execute_17_Operands                      = 17,
	Execute_18_Operands                      = 18,
	Execute_19_Operands                      = 19,
	Execute_20_Operands                      = 20,
	Execute_21_Operands                      = 21,
	Execute_22_Operands                      = 22,
	Execute_23_Operands                      = 23,
	Execute_24_Operands                      = 24,
	Execute_25_Operands                      = 25,
	Execute_26_Operands                      = 26,
	Execute_27_Operands                      = 27,
	Execute_28_Operands                      = 28,
	Execute_29_Operands                      = 29,
	Execute_30_Operands                      = 30,
	Execute_31_Operands                      = 31,
	Execute_32_Operands                      = 32,
	Execute_33_Operands                      = 33,
	Execute_34_Operands                      = 34,
	Execute_35_Operands                      = 35,
	Execute_36_Operands                      = 36,
	Execute_37_Operands                      = 37,
	Execute_38_Operands                      = 38,
	Execute_39_Operands                      = 39,
	Execute_40_Operands                      = 40,
	Execute_41_Operands                      = 41,
	Execute_42_Operands                      = 42,
	Execute_43_Operands                      = 43,
	Execute_44_Operands                      = 44,
	Execute_45_Operands                      = 45,
	Execute_46_Operands                      = 46,
	Execute_47_Operands                      = 47,
	Execute_48_Operands                      = 48,
	Execute_49_Operands                      = 49,
	Execute_50_Operands                      = 50,
	Execute_51_Operands                      = 51,
	Execute_52_Operands                      = 52,
	Execute_53_Operands                      = 53,
	Execute_54_Operands                      = 54,
	Execute_55_Operands                      = 55,
	Execute_56_Operands                      = 56,
	Execute_57_Operands                      = 57,
	Execute_58_Operands                      = 58,
	Execute_59_Operands                      = 59,
	Execute_60_Operands                      = 60,
	Execute_61_Operands                      = 61,
	Execute_62_Operands                      = 62,
	Execute_63_Operands                      = 63,
	Execute_64_Operands                      = 64,
	Zero                                     = 65,
	BoolFalse                                = 66,
	BoolTrue                                 = 67,
	Copy                                     = 68,
	Increment                                = 69,
	Decrement                                = 70,
	Equals                                   = 71,
	NotEquals                                = 72,
	JumpAbsolute                             = 73,
	JumpForward                              = 74,
	JumpBackward                             = 75,
	JumpAbsoluteIf                           = 76,
	JumpForwardIf                            = 77,
	JumpBackwardIf                           = 78,
	ChangeType                               = 79,
	Exit                                     = 80,
	BeginBlock                               = 81,
	EndBlock                                 = 82,
	Invalid                                  = 83,
	ERigVMOpCode_MAX                         = 84,
};

// Enum RigVM.ERigVMPinDirection
// NumValues: 0x0007
enum class ERigVMPinDirection : uint8
{
	Input                                    = 0,
	Output                                   = 1,
	IO                                       = 2,
	Visible                                  = 3,
	Hidden                                   = 4,
	Invalid                                  = 5,
	ERigVMPinDirection_MAX                   = 6,
};

// Enum RigVM.ERigVMRegisterType
// NumValues: 0x0006
enum class ERigVMRegisterType : uint8
{
	Plain                                    = 0,
	String                                   = 1,
	Name                                     = 2,
	Struct                                   = 3,
	Invalid                                  = 4,
	ERigVMRegisterType_MAX                   = 5,
};

// Enum RigVM.ERigVMMemoryType
// NumValues: 0x0005
enum class ERigVMMemoryType : uint8
{
	Work                                     = 0,
	Literal                                  = 1,
	External                                 = 2,
	Invalid                                  = 3,
	ERigVMMemoryType_MAX                     = 4,
};

// ScriptStruct RigVM.RigVMByteCodeEntry
// 0x000C (0x000C - 0x0000)
struct FRigVMByteCodeEntry final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InstructionIndex;                                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct RigVM.RigVMOperand
// 0x0006 (0x0006 - 0x0000)
struct FRigVMOperand final
{
public:
	ERigVMMemoryType                              MemoryType;                                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CCF[0x1];                                     // 0x0001(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint16                                        RegisterIndex;                                     // 0x0002(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                        RegisterOffset;                                    // 0x0004(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct RigVM.RigVMExecuteContext
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FRigVMExecuteContext
{
public:
	uint8                                         Pad_1CD0[0x58];                                    // 0x0000(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMParameter
// 0x0030 (0x0030 - 0x0000)
struct FRigVMParameter final
{
public:
	ERigVMParameterType                           Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CD1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Name;                                              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         RegisterIndex;                                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 CPPType;                                           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                          ScriptStruct;                                      // 0x0020(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   ScriptStructPath;                                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct RigVM.RigVMStruct
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FRigVMStruct
{
public:
	uint8                                         Pad_1CD2[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMByteCode
// 0x0030 (0x0030 - 0x0000)
struct FRigVMByteCode final
{
public:
	TArray<uint8>                                 ByteCode;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                         NumInstructions;                                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CD3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMByteCodeEntry>            Entries;                                           // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CD4[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMInstruction
// 0x0010 (0x0010 - 0x0000)
struct FRigVMInstruction final
{
public:
	uint64                                        ByteCodeIndex;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERigVMOpCode                                  OpCode;                                            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         OperandAlignment;                                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD5[0x6];                                     // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMInstructionArray
// 0x0010 (0x0010 - 0x0000)
struct FRigVMInstructionArray final
{
public:
	TArray<struct FRigVMInstruction>              Instructions;                                      // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct RigVM.RigVMBaseOp
// 0x0001 (0x0001 - 0x0000)
struct FRigVMBaseOp
{
public:
	uint8                                         Pad_1CD6[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMUnaryOp
// 0x0007 (0x0008 - 0x0001)
struct alignas(0x02) FRigVMUnaryOp : public FRigVMBaseOp
{
public:
	uint8                                         Pad_1CD7[0x7];                                     // 0x0001(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMChangeTypeOp
// 0x0008 (0x0010 - 0x0008)
struct FRigVMChangeTypeOp final : public FRigVMUnaryOp
{
public:
	uint8                                         Pad_1CD8[0x8];                                     // 0x0008(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMJumpIfOp
// 0x0008 (0x0010 - 0x0008)
struct alignas(0x04) FRigVMJumpIfOp final : public FRigVMUnaryOp
{
public:
	uint8                                         Pad_1CD9[0x8];                                     // 0x0008(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMJumpOp
// 0x0007 (0x0008 - 0x0001)
struct alignas(0x04) FRigVMJumpOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_1CDA[0x7];                                     // 0x0001(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMComparisonOp
// 0x0013 (0x0014 - 0x0001)
struct alignas(0x02) FRigVMComparisonOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_1CDB[0x13];                                    // 0x0001(0x0013)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMCopyOp
// 0x000D (0x000E - 0x0001)
struct alignas(0x02) FRigVMCopyOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_1CDC[0xD];                                     // 0x0001(0x000D)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMBinaryOp
// 0x000D (0x000E - 0x0001)
struct alignas(0x02) FRigVMBinaryOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_1CDD[0xD];                                     // 0x0001(0x000D)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMExecuteOp
// 0x0003 (0x0004 - 0x0001)
struct alignas(0x02) FRigVMExecuteOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_1CDE[0x3];                                     // 0x0001(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMSlice
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FRigVMSlice final
{
public:
	uint8                                         Pad_1CDF[0xC];                                     // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMRegister
// 0x0024 (0x0024 - 0x0000)
struct FRigVMRegister final
{
public:
	ERigVMRegisterType                            Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        ByteIndex;                                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        ElementSize;                                       // 0x0008(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        ElementCount;                                      // 0x000A(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        SliceCount;                                        // 0x000C(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         AlignmentBytes;                                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE1[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint16                                        TrailingBytes;                                     // 0x0010(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE2[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Name;                                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ScriptStructIndex;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsArray;                                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDynamic;                                        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE3[0x2];                                     // 0x0022(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMRegisterOffset
// 0x0048 (0x0048 - 0x0000)
struct FRigVMRegisterOffset final
{
public:
	TArray<int32>                                 Segments;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	ERigVMRegisterType                            Type;                                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CE4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CPPType;                                           // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CE5[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          ScriptStruct;                                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                          ParentScriptStruct;                                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         ArrayIndex;                                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                        ElementSize;                                       // 0x0034(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CE6[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CachedSegmentPath;                                 // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct RigVM.RigVMMemoryContainer
// 0x00A0 (0x00A0 - 0x0000)
struct FRigVMMemoryContainer final
{
public:
	bool                                          bUseNameMap;                                       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ERigVMMemoryType                              MemoryType;                                        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CE7[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMRegister>                 Registers;                                         // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FRigVMRegisterOffset>           RegisterOffsets;                                   // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 Data;                                              // 0x0028(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UScriptStruct*>                  ScriptStructs;                                     // 0x0038(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                      NameMap;                                           // 0x0048(0x0050)(Transient, NativeAccessSpecifierPrivate)
	bool                                          bEncounteredErrorDuringLoad;                       // 0x0098(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CE8[0x7];                                     // 0x0099(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigVM.RigVMMemoryStatistics
// 0x000C (0x000C - 0x0000)
struct FRigVMMemoryStatistics final
{
public:
	uint32                                        RegisterCount;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        DataBytes;                                         // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        TotalBytes;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct RigVM.RigVMByteCodeStatistics
// 0x0008 (0x0008 - 0x0000)
struct FRigVMByteCodeStatistics final
{
public:
	uint32                                        InstructionCount;                                  // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        DataBytes;                                         // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct RigVM.RigVMStatistics
// 0x002C (0x002C - 0x0000)
struct FRigVMStatistics final
{
public:
	uint32                                        BytesForCDO;                                       // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        BytesPerInstance;                                  // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                 LiteralMemory;                                     // 0x0008(0x000C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                 WorkMemory;                                        // 0x0014(0x000C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint32                                        BytesForCaching;                                   // 0x0020(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMByteCodeStatistics               ByteCode;                                          // 0x0024(0x0008)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

}

