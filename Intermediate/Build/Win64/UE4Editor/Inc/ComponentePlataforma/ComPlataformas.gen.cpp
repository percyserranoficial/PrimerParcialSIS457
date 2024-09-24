// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComponentePlataforma/ComPlataformas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComPlataformas() {}
// Cross Module References
	COMPONENTEPLATAFORMA_API UClass* Z_Construct_UClass_AComPlataformas_NoRegister();
	COMPONENTEPLATAFORMA_API UClass* Z_Construct_UClass_AComPlataformas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ComponentePlataforma();
// End Cross Module References
	void AComPlataformas::StaticRegisterNativesAComPlataformas()
	{
	}
	UClass* Z_Construct_UClass_AComPlataformas_NoRegister()
	{
		return AComPlataformas::StaticClass();
	}
	struct Z_Construct_UClass_AComPlataformas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComPlataformas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentePlataforma,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComPlataformas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComPlataformas.h" },
		{ "ModuleRelativePath", "ComPlataformas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComPlataformas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComPlataformas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComPlataformas_Statics::ClassParams = {
		&AComPlataformas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AComPlataformas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComPlataformas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComPlataformas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComPlataformas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComPlataformas, 27899421);
	template<> COMPONENTEPLATAFORMA_API UClass* StaticClass<AComPlataformas>()
	{
		return AComPlataformas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComPlataformas(Z_Construct_UClass_AComPlataformas, &AComPlataformas::StaticClass, TEXT("/Script/ComponentePlataforma"), TEXT("AComPlataformas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComPlataformas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
