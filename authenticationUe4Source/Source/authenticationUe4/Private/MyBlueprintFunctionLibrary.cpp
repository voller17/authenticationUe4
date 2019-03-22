// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"



/*UVaRestRequestJSON *Rq = UVaRestRequestJSON::ConstructRequest(this);
Rq->SetVerb(ERequestVerb(0));
Rq->SetContentType(ERequestContentType(0));
RqResult = NewObject<UVaRestJsonObject>();
Rq->SetRequestObject(RqResult);
RqResult = Rq->GetResponseObject();
FLatentActionInfo ActionInfo;
ActionInfo.CallbackTarget = this;
ActionInfo.ExecutionFunction = "ApplyURLCallBack";
ActionInfo.Linkage = 0;
ActionInfo.UUID = 123;
Rq->ApplyURL("http://localhost/api/g_userinfo.php?apireqkey=CD15BC97E2292F3C6AFECC921B5A6A9DFE010793664181D74E9597DC1140057C4C70DEDA246D1A41201F93BA764870B24C202A1AFA38711D8421C7019DC954C2&func=getinfo_username&req=df38558de3dea99ce98954473e7e049d4796bf4ba164e87fb57ea3e73d5a62f6337f09c05f901183f183542c46ebd692567286b418f6f0d530373dd8cb94fad1", RqResult, this, ActionInfo);
//set timer 0.5sec*/
/*
UVaRestJsonObject* UMyBlueprintFunctionLibrary::ApplyURL(FString ServerURL, FString ApiKey, FString UserSessionKey)
{

	/*UVaRestRequestJSON *Rq = UVaRestRequestJSON::ConstructRequest(this);	

	Rq->SetVerb(ERequestVerb(0));
	Rq->SetContentType(ERequestContentType(0));
	RqResult = NewObject<UVaRestJsonObject>();
	Rq->SetRequestObject(RqResult);
	RqResult = Rq->GetResponseObject();
	FLatentActionInfo ActionInfo;
	ActionInfo.CallbackTarget = this;
	ActionInfo.ExecutionFunction = "ApplyURLCallBack";
	ActionInfo.Linkage = 0;
	ActionInfo.UUID = 123;
	Rq->ApplyURL("http://localhost/api/g_userinfo.php?apireqkey=CD15BC97E2292F3C6AFECC921B5A6A9DFE010793664181D74E9597DC1140057C4C70DEDA246D1A41201F93BA764870B24C202A1AFA38711D8421C7019DC954C2&func=getinfo_username&req=df38558de3dea99ce98954473e7e049d4796bf4ba164e87fb57ea3e73d5a62f6337f09c05f901183f183542c46ebd692567286b418f6f0d530373dd8cb94fad1", RqResult, this, ActionInfo);
	
	if (RqResult)
	{
		ClientMessage(FString::FromInt(RqResult->GetFieldNames().Num()));
		//ClientMessage(RqResult->GetField("characteristics")->AsString());
		FString* StrPtr = RqResult->GetFieldNames().GetData();
		for (int i = 0; i < RqResult->GetFieldNames().Num(); i++)
		{
			ClientMessage(*RqResult->GetFieldNames().GetData()[i]);
			ClientMessage(RqResult->GetField(*RqResult->GetFieldNames().GetData()[i])->AsString());
			//RqResult->GetFieldNames().Last(0)
			//RqResult->GetFieldNames().Max()


		}

	}
	else
		ClientMessage("novalid get field");
}*/
