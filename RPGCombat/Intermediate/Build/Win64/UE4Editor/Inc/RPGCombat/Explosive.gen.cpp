// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/Explosive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosive() {}
// Cross Module References
	RPGCOMBAT_API UClass* Z_Construct_UClass_AExplosive_NoRegister();
	RPGCOMBAT_API UClass* Z_Construct_UClass_AExplosive();
	RPGCOMBAT_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References
	void AExplosive::StaticRegisterNativesAExplosive()
	{
	}
	UClass* Z_Construct_UClass_AExplosive_NoRegister()
	{
		return AExplosive::StaticClass();
	}
	struct Z_Construct_UClass_AExplosive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Explosive.h" },
		{ "ModuleRelativePath", "Explosive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosive_Statics::ClassParams = {
		&AExplosive::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosive, 1449603869);
	template<> RPGCOMBAT_API UClass* StaticClass<AExplosive>()
	{
		return AExplosive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosive(Z_Construct_UClass_AExplosive, &AExplosive::StaticClass, TEXT("/Script/RPGCombat"), TEXT("AExplosive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif