// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestRequestJSON;
class UObject;
enum class ERequestVerb : uint8;
enum class ERequestContentType : uint8;
class UVaRestJsonObject;
#ifdef VARESTPLUGIN_VaRestLibrary_generated_h
#error "VaRestLibrary.generated.h already included, missing '#pragma once' in VaRestLibrary.h"
#endif
#define VARESTPLUGIN_VaRestLibrary_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVaRestCallResponse_Statics; \
	VARESTPLUGIN_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_13_DELEGATE \
struct _Script_VaRestPlugin_eventVaRestCallDelegate_Parms \
{ \
	UVaRestRequestJSON* Request; \
}; \
static inline void FVaRestCallDelegate_DelegateWrapper(const FScriptDelegate& VaRestCallDelegate, UVaRestRequestJSON* Request) \
{ \
	_Script_VaRestPlugin_eventVaRestCallDelegate_Parms Parms; \
	Parms.Request=Request; \
	VaRestCallDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallURL) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_ENUM(ERequestVerb,Z_Param_Verb); \
		P_GET_ENUM(ERequestContentType,Z_Param_ContentType); \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_VaRestJson); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVaRestLibrary::CallURL(Z_Param_WorldContextObject,Z_Param_URL,ERequestVerb(Z_Param_Verb),ERequestContentType(Z_Param_ContentType),Z_Param_VaRestJson,FVaRestCallDelegate(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadJsonFromFile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=UVaRestLibrary::LoadJsonFromFile(Z_Param_WorldContextObject,Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBase64DecodeData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64DecodeData(Z_Param_Source,Z_Param_Out_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBase64EncodeData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64EncodeData(Z_Param_Out_Data,Z_Param_Out_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBase64Decode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64Decode(Z_Param_Source,Z_Param_Out_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBase64Encode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVaRestLibrary::Base64Encode(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPercentEncode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVaRestLibrary::PercentEncode(Z_Param_Source); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallURL) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_ENUM(ERequestVerb,Z_Param_Verb); \
		P_GET_ENUM(ERequestContentType,Z_Param_ContentType); \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_VaRestJson); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVaRestLibrary::CallURL(Z_Param_WorldContextObject,Z_Param_URL,ERequestVerb(Z_Param_Verb),ERequestContentType(Z_Param_ContentType),Z_Param_VaRestJson,FVaRestCallDelegate(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadJsonFromFile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=UVaRestLibrary::LoadJsonFromFile(Z_Param_WorldContextObject,Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBase64DecodeData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64DecodeData(Z_Param_Source,Z_Param_Out_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBase64EncodeData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64EncodeData(Z_Param_Out_Data,Z_Param_Out_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBase64Decode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Dest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64Decode(Z_Param_Source,Z_Param_Out_Dest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBase64Encode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVaRestLibrary::Base64Encode(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPercentEncode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVaRestLibrary::PercentEncode(Z_Param_Source); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestLibrary(); \
	friend struct Z_Construct_UClass_UVaRestLibrary_Statics; \
public: \
	DECLARE_CLASS(UVaRestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVaRestLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestLibrary(); \
	friend struct Z_Construct_UClass_UVaRestLibrary_Statics; \
public: \
	DECLARE_CLASS(UVaRestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVaRestLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestLibrary(UVaRestLibrary&&); \
	NO_API UVaRestLibrary(const UVaRestLibrary&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestLibrary(UVaRestLibrary&&); \
	NO_API UVaRestLibrary(const UVaRestLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_43_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
