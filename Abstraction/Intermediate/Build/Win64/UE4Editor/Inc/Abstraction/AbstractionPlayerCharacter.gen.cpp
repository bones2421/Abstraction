// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abstraction/Public/AbstractionPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractionPlayerCharacter() {}
// Cross Module References
	ABSTRACTION_API UClass* Z_Construct_UClass_AAbstractionPlayerCharacter_NoRegister();
	ABSTRACTION_API UClass* Z_Construct_UClass_AAbstractionPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Abstraction();
// End Cross Module References
	void AAbstractionPlayerCharacter::StaticRegisterNativesAAbstractionPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAbstractionPlayerCharacter_NoRegister()
	{
		return AAbstractionPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAbstractionPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbstractionPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Abstraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbstractionPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AbstractionPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/AbstractionPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbstractionPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbstractionPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbstractionPlayerCharacter_Statics::ClassParams = {
		&AAbstractionPlayerCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAbstractionPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbstractionPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbstractionPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAbstractionPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbstractionPlayerCharacter, 1380154420);
	template<> ABSTRACTION_API UClass* StaticClass<AAbstractionPlayerCharacter>()
	{
		return AAbstractionPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbstractionPlayerCharacter(Z_Construct_UClass_AAbstractionPlayerCharacter, &AAbstractionPlayerCharacter::StaticClass, TEXT("/Script/Abstraction"), TEXT("AAbstractionPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbstractionPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
