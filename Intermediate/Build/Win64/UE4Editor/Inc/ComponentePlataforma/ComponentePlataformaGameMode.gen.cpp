// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComponentePlataforma/ComponentePlataformaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentePlataformaGameMode() {}
// Cross Module References
	COMPONENTEPLATAFORMA_API UClass* Z_Construct_UClass_AComponentePlataformaGameMode_NoRegister();
	COMPONENTEPLATAFORMA_API UClass* Z_Construct_UClass_AComponentePlataformaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ComponentePlataforma();
// End Cross Module References
	void AComponentePlataformaGameMode::StaticRegisterNativesAComponentePlataformaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AComponentePlataformaGameMode_NoRegister()
	{
		return AComponentePlataformaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AComponentePlataformaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponentePlataformaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentePlataforma,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentePlataformaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ComponentePlataformaGameMode.h" },
		{ "ModuleRelativePath", "ComponentePlataformaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponentePlataformaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponentePlataformaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComponentePlataformaGameMode_Statics::ClassParams = {
		&AComponentePlataformaGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AComponentePlataformaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentePlataformaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponentePlataformaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComponentePlataformaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComponentePlataformaGameMode, 3671960764);
	template<> COMPONENTEPLATAFORMA_API UClass* StaticClass<AComponentePlataformaGameMode>()
	{
		return AComponentePlataformaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComponentePlataformaGameMode(Z_Construct_UClass_AComponentePlataformaGameMode, &AComponentePlataformaGameMode::StaticClass, TEXT("/Script/ComponentePlataforma"), TEXT("AComponentePlataformaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponentePlataformaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
