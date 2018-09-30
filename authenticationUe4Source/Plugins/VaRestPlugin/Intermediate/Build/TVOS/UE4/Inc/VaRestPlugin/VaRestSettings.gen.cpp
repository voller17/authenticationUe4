// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestPlugin/Classes/VaRestSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestSettings() {}
// Cross Module References
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestSettings_NoRegister();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VaRestPlugin();
// End Cross Module References
	void UVaRestSettings::StaticRegisterNativesUVaRestSettings()
	{
	}
	UClass* Z_Construct_UClass_UVaRestSettings_NoRegister()
	{
		return UVaRestSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExtendedLog_MetaData[];
#endif
		static void NewProp_bExtendedLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExtendedLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRestPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaRestSettings.h" },
		{ "ModuleRelativePath", "Classes/VaRestSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData[] = {
		{ "Category", "VaRest" },
		{ "ModuleRelativePath", "Classes/VaRestSettings.h" },
		{ "ToolTip", "You can disable request content logging to avoid security vulnerability" },
	};
#endif
	void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit(void* Obj)
	{
		((UVaRestSettings*)Obj)->bExtendedLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog = { UE4CodeGen_Private::EPropertyClass::Bool, "bExtendedLog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRestSettings_Statics::ClassParams = {
		&UVaRestSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UVaRestSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRestSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRestSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestSettings, 1948908915);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestSettings(Z_Construct_UClass_UVaRestSettings, &UVaRestSettings::StaticClass, TEXT("/Script/VaRestPlugin"), TEXT("UVaRestSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
