// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/RPGCombatGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCombatGameModeBase() {}
// Cross Module References
	RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameModeBase_NoRegister();
	RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References
	void ARPGCombatGameModeBase::StaticRegisterNativesARPGCombatGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARPGCombatGameModeBase_NoRegister()
	{
		return ARPGCombatGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGCombatGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGCombatGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCombatGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RPGCombatGameModeBase.h" },
		{ "ModuleRelativePath", "RPGCombatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGCombatGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCombatGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGCombatGameModeBase_Statics::ClassParams = {
		&ARPGCombatGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARPGCombatGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCombatGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGCombatGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGCombatGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGCombatGameModeBase, 167473768);
	template<> RPGCOMBAT_API UClass* StaticClass<ARPGCombatGameModeBase>()
	{
		return ARPGCombatGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGCombatGameModeBase(Z_Construct_UClass_ARPGCombatGameModeBase, &ARPGCombatGameModeBase::StaticClass, TEXT("/Script/RPGCombat"), TEXT("ARPGCombatGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCombatGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
