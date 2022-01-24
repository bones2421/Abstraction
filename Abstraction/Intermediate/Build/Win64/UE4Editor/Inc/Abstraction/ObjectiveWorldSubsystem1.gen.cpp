// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abstraction/Public/ObjectiveWorldSubsystem1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveWorldSubsystem1() {}
// Cross Module References
	ABSTRACTION_API UClass* Z_Construct_UClass_UObjectiveWorldSubsystem1_NoRegister();
	ABSTRACTION_API UClass* Z_Construct_UClass_UObjectiveWorldSubsystem1();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Abstraction();
// End Cross Module References
	void UObjectiveWorldSubsystem1::StaticRegisterNativesUObjectiveWorldSubsystem1()
	{
	}
	UClass* Z_Construct_UClass_UObjectiveWorldSubsystem1_NoRegister()
	{
		return UObjectiveWorldSubsystem1::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveWorldSubsystem1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveWorldSubsystem1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Abstraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveWorldSubsystem1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObjectiveWorldSubsystem1.h" },
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveWorldSubsystem1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveWorldSubsystem1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveWorldSubsystem1_Statics::ClassParams = {
		&UObjectiveWorldSubsystem1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveWorldSubsystem1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveWorldSubsystem1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveWorldSubsystem1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectiveWorldSubsystem1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectiveWorldSubsystem1, 443618467);
	template<> ABSTRACTION_API UClass* StaticClass<UObjectiveWorldSubsystem1>()
	{
		return UObjectiveWorldSubsystem1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectiveWorldSubsystem1(Z_Construct_UClass_UObjectiveWorldSubsystem1, &UObjectiveWorldSubsystem1::StaticClass, TEXT("/Script/Abstraction"), TEXT("UObjectiveWorldSubsystem1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveWorldSubsystem1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
