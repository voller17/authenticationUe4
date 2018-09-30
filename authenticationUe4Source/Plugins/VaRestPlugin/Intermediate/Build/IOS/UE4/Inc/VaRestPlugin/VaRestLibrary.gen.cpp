// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestPlugin/Classes/VaRestLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestLibrary() {}
// Cross Module References
	VARESTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VaRestPlugin();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
	VARESTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVaRestCallResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Decode();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Encode();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_CallURL();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestContentType();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestVerb();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_PercentEncode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics
	{
		struct _Script_VaRestPlugin_eventVaRestCallDelegate_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::NewProp_Request = { UE4CodeGen_Private::EPropertyClass::Object, "Request", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VaRestPlugin_eventVaRestCallDelegate_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin, "VaRestCallDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_VaRestPlugin_eventVaRestCallDelegate_Parms), Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FVaRestCallResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VARESTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaRestCallResponse, Z_Construct_UPackage__Script_VaRestPlugin(), TEXT("VaRestCallResponse"), sizeof(FVaRestCallResponse), Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVaRestCallResponse(FVaRestCallResponse::StaticStruct, TEXT("/Script/VaRestPlugin"), TEXT("VaRestCallResponse"), false, nullptr, nullptr);
static struct FScriptStruct_VaRestPlugin_StaticRegisterNativesFVaRestCallResponse
{
	FScriptStruct_VaRestPlugin_StaticRegisterNativesFVaRestCallResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VaRestCallResponse")),new UScriptStruct::TCppStructOps<FVaRestCallResponse>);
	}
} ScriptStruct_VaRestPlugin_StaticRegisterNativesFVaRestCallResponse;
	struct Z_Construct_UScriptStruct_FVaRestCallResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaRestCallResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback = { UE4CodeGen_Private::EPropertyClass::Delegate, "Callback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FVaRestCallResponse, Callback), Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVaRestCallResponse, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request = { UE4CodeGen_Private::EPropertyClass::Object, "Request", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVaRestCallResponse, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VaRestPlugin,
		nullptr,
		&NewStructOps,
		"VaRestCallResponse",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FVaRestCallResponse),
		alignof(FVaRestCallResponse),
		Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVaRestCallResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VaRestCallResponse"), sizeof(FVaRestCallResponse), Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC() { return 169124774U; }
	void UVaRestLibrary::StaticRegisterNativesUVaRestLibrary()
	{
		UClass* Class = UVaRestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Base64Decode", &UVaRestLibrary::execBase64Decode },
			{ "Base64DecodeData", &UVaRestLibrary::execBase64DecodeData },
			{ "Base64Encode", &UVaRestLibrary::execBase64Encode },
			{ "Base64EncodeData", &UVaRestLibrary::execBase64EncodeData },
			{ "CallURL", &UVaRestLibrary::execCallURL },
			{ "LoadJsonFromFile", &UVaRestLibrary::execLoadJsonFromFile },
			{ "PercentEncode", &UVaRestLibrary::execPercentEncode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics
	{
		struct VaRestLibrary_eventBase64Decode_Parms
		{
			FString Source;
			FString Dest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestLibrary_eventBase64Decode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestLibrary_eventBase64Decode_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Dest = { UE4CodeGen_Private::EPropertyClass::Str, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64Decode_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Str, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64Decode_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "DisplayName", "Base64 Decode" },
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
		{ "ToolTip", "Decodes a Base64 string into a FString\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "Base64Decode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VaRestLibrary_eventBase64Decode_Parms), Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Decode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics
	{
		struct VaRestLibrary_eventBase64DecodeData_Parms
		{
			FString Source;
			TArray<uint8> Dest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dest;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Dest_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestLibrary_eventBase64DecodeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestLibrary_eventBase64DecodeData_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest = { UE4CodeGen_Private::EPropertyClass::Array, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64DecodeData_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Str, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64DecodeData_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "DisplayName", "Base64 Decode Data" },
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
		{ "ToolTip", "Decodes a Base64 string into a byte array\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "Base64DecodeData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VaRestLibrary_eventBase64DecodeData_Parms), Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics
	{
		struct VaRestLibrary_eventBase64Encode_Parms
		{
			FString Source;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Str, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64Encode_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "DisplayName", "Base64 Encode" },
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
		{ "ToolTip", "Encodes a FString into a Base64 string\n\n@param Source        The string data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "Base64Encode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VaRestLibrary_eventBase64Encode_Parms), Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics
	{
		struct VaRestLibrary_eventBase64EncodeData_Parms
		{
			TArray<uint8> Data;
			FString Dest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestLibrary_eventBase64EncodeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestLibrary_eventBase64EncodeData_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Dest = { UE4CodeGen_Private::EPropertyClass::Str, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64EncodeData_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64EncodeData_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "DisplayName", "Base64 Encode Data" },
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
		{ "ToolTip", "Encodes a byte array into a Base64 string\n\n@param Dara          The data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "Base64EncodeData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VaRestLibrary_eventBase64EncodeData_Parms), Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics
	{
		struct VaRestLibrary_eventCallURL_Parms
		{
			UObject* WorldContextObject;
			FString URL;
			ERequestVerb Verb;
			ERequestContentType ContentType;
			UVaRestJsonObject* VaRestJson;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaRestJson;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Callback = { UE4CodeGen_Private::EPropertyClass::Delegate, "Callback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, Callback), Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Callback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_VaRestJson = { UE4CodeGen_Private::EPropertyClass::Object, "VaRestJson", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, VaRestJson), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_ContentType = { UE4CodeGen_Private::EPropertyClass::Enum, "ContentType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, ContentType), Z_Construct_UEnum_VaRestPlugin_ERequestContentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_ContentType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Verb = { UE4CodeGen_Private::EPropertyClass::Enum, "Verb", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, Verb), Z_Construct_UEnum_VaRestPlugin_ERequestVerb, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Verb_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_URL_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_VaRestJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_ContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_ContentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Verb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_Verb_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
		{ "ToolTip", "Easy way to process http requests" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "CallURL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VaRestLibrary_eventCallURL_Parms), Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_CallURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_CallURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics
	{
		struct VaRestLibrary_eventLoadJsonFromFile_Parms
		{
			UObject* WorldContextObject;
			FString Path;
			UVaRestJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventLoadJsonFromFile_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventLoadJsonFromFile_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventLoadJsonFromFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
		{ "ToolTip", "Load JSON from formatted text file\n@param Path          File name relative to the Content folder" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "LoadJsonFromFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VaRestLibrary_eventLoadJsonFromFile_Parms), Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics
	{
		struct VaRestLibrary_eventPercentEncode_Parms
		{
			FString Source;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventPercentEncode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Str, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventPercentEncode_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
		{ "ToolTip", "Applies percent-encoding to text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "PercentEncode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VaRestLibrary_eventPercentEncode_Parms), Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_PercentEncode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister()
	{
		return UVaRestLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRestPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64Decode, "Base64Decode" }, // 673859063
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData, "Base64DecodeData" }, // 3068813044
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64Encode, "Base64Encode" }, // 1857182052
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData, "Base64EncodeData" }, // 1033402716
		{ &Z_Construct_UFunction_UVaRestLibrary_CallURL, "CallURL" }, // 2186834295
		{ &Z_Construct_UFunction_UVaRestLibrary_LoadJsonFromFile, "LoadJsonFromFile" }, // 1234822428
		{ &Z_Construct_UFunction_UVaRestLibrary_PercentEncode, "PercentEncode" }, // 2661275401
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaRestLibrary.h" },
		{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
		{ "ToolTip", "Useful tools for REST communications" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRestLibrary_Statics::ClassParams = {
		&UVaRestLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVaRestLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVaRestLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRestLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRestLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestLibrary, 3459013429);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestLibrary(Z_Construct_UClass_UVaRestLibrary, &UVaRestLibrary::StaticClass, TEXT("/Script/VaRestPlugin"), TEXT("UVaRestLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
