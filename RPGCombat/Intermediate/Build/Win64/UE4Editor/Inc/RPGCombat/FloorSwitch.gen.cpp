// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/FloorSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorSwitch() {}
// Cross Module References
	RPGCOMBAT_API UClass* Z_Construct_UClass_AFloorSwitch_NoRegister();
	RPGCOMBAT_API UClass* Z_Construct_UClass_AFloorSwitch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RPGCombat();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AFloorSwitch::execUpdateFloorSwitchLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFloorSwitchLocation(Z_Param_Z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorSwitch::execUpdateDoorLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDoorLocation(Z_Param_Z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorSwitch::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorSwitch::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AFloorSwitch_LowerDoor = FName(TEXT("LowerDoor"));
	void AFloorSwitch::LowerDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_LowerDoor),NULL);
	}
	static FName NAME_AFloorSwitch_LowerFloorSwitch = FName(TEXT("LowerFloorSwitch"));
	void AFloorSwitch::LowerFloorSwitch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_LowerFloorSwitch),NULL);
	}
	static FName NAME_AFloorSwitch_RaiseDoor = FName(TEXT("RaiseDoor"));
	void AFloorSwitch::RaiseDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_RaiseDoor),NULL);
	}
	static FName NAME_AFloorSwitch_RaiseFloorSwitch = FName(TEXT("RaiseFloorSwitch"));
	void AFloorSwitch::RaiseFloorSwitch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_RaiseFloorSwitch),NULL);
	}
	void AFloorSwitch::StaticRegisterNativesAFloorSwitch()
	{
		UClass* Class = AFloorSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AFloorSwitch::execOnBeginOverlap },
			{ "OnEndOverlap", &AFloorSwitch::execOnEndOverlap },
			{ "UpdateDoorLocation", &AFloorSwitch::execUpdateDoorLocation },
			{ "UpdateFloorSwitchLocation", &AFloorSwitch::execUpdateFloorSwitchLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "LowerDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_LowerDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "LowerFloorSwitch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics
	{
		struct FloorSwitch_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FloorSwitch_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloorSwitch_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(FloorSwitch_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics
	{
		struct FloorSwitch_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(FloorSwitch_eventOnEndOverlap_Parms), Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "RaiseDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_RaiseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "RaiseFloorSwitch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics
	{
		struct FloorSwitch_eventUpdateDoorLocation_Parms
		{
			float Z;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventUpdateDoorLocation_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::NewProp_Z,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "UpdateDoorLocation", nullptr, nullptr, sizeof(FloorSwitch_eventUpdateDoorLocation_Parms), Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics
	{
		struct FloorSwitch_eventUpdateFloorSwitchLocation_Parms
		{
			float Z;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventUpdateFloorSwitchLocation_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::NewProp_Z,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "UpdateFloorSwitchLocation", nullptr, nullptr, sizeof(FloorSwitch_eventUpdateFloorSwitchLocation_Parms), Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloorSwitch_NoRegister()
	{
		return AFloorSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AFloorSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDoorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialDoorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialFloorSwitchLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialFloorSwitchLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwitchTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorSwitch_LowerDoor, "LowerDoor" }, // 2326504994
		{ &Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch, "LowerFloorSwitch" }, // 3597203729
		{ &Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap, "OnBeginOverlap" }, // 1281372847
		{ &Z_Construct_UFunction_AFloorSwitch_OnEndOverlap, "OnEndOverlap" }, // 4113401902
		{ &Z_Construct_UFunction_AFloorSwitch_RaiseDoor, "RaiseDoor" }, // 2460338238
		{ &Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch, "RaiseFloorSwitch" }, // 2533339380
		{ &Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation, "UpdateDoorLocation" }, // 1844018569
		{ &Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation, "UpdateFloorSwitchLocation" }, // 3383256856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorSwitch.h" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "// Overlap volume for functionality to be triggered\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Overlap volume for functionality to be triggered" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "// Switch for character to step on\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Switch for character to step on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch = { "FloorSwitch", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, FloorSwitch), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "// Door to move when the floor switch is stepped on\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Door to move when the floor switch is stepped on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation = { "InitialDoorLocation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, InitialDoorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialFloorSwitchLocation_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialFloorSwitchLocation = { "InitialFloorSwitchLocation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, InitialFloorSwitchLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialFloorSwitchLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialFloorSwitchLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTime_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTime = { "SwitchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, SwitchTime), METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialFloorSwitchLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloorSwitch_Statics::ClassParams = {
		&AFloorSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloorSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorSwitch, 2702753048);
	template<> RPGCOMBAT_API UClass* StaticClass<AFloorSwitch>()
	{
		return AFloorSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorSwitch(Z_Construct_UClass_AFloorSwitch, &AFloorSwitch::StaticClass, TEXT("/Script/RPGCombat"), TEXT("AFloorSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
