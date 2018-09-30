// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VARESTPLUGIN_VaRestTypes_generated_h
#error "VaRestTypes.generated.h already included, missing '#pragma once' in VaRestTypes.h"
#endif
#define VARESTPLUGIN_VaRestTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID authenticationUe4_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestTypes_h


#define FOREACH_ENUM_EREQUESTSTATUS(op) \
	op(ERequestStatus::NotStarted) \
	op(ERequestStatus::Processing) \
	op(ERequestStatus::Failed) \
	op(ERequestStatus::Failed_ConnectionError) \
	op(ERequestStatus::Succeeded) 
#define FOREACH_ENUM_EREQUESTCONTENTTYPE(op) \
	op(ERequestContentType::x_www_form_urlencoded_url) \
	op(ERequestContentType::x_www_form_urlencoded_body) \
	op(ERequestContentType::json) \
	op(ERequestContentType::binary) 
#define FOREACH_ENUM_EREQUESTVERB(op) \
	op(ERequestVerb::GET) \
	op(ERequestVerb::POST) \
	op(ERequestVerb::PUT) \
	op(ERequestVerb::DEL) \
	op(ERequestVerb::CUSTOM) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
