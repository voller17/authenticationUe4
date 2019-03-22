// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayerController_Game.h"
#include "UnrealNetwork.h"
#include "authenticationUe4Character.h"
#include "VaRestJsonValue.h"
#include "VaRestRequestJSON.h"
#include "VaRestJsonObject.h"
#include "Json.h"







ACPlayerController_Game::ACPlayerController_Game()
{
	PrimaryActorTick.bCanEverTick = true;
}

//						BeginPlay



void ACPlayerController_Game::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG(LogTemp, Error, TEXT("Begin play LOG"));
	//ClientMessage("Begin play LOG");

	/*TSharedPtr<FJsonObject> JsonParsed;
	JsonParsed = MakeShareable(new FJsonObject);
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create("http://localhost/api/g_userinfo.php?apireqkey=CD15BC97E2292F3C6AFECC921B5A6A9DFE010793664181D74E9597DC1140057C4C70DEDA246D1A41201F93BA764870B24C202A1AFA38711D8421C7019DC954C2&func=getinfo_username&req=df38558de3dea99ce98954473e7e049d4796bf4ba164e87fb57ea3e73d5a62f6337f09c05f901183f183542c46ebd692567286b418f6f0d530373dd8cb94fad1");
	
	if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
	ClientMessage("Json answer = " + JsonParsed->GetStringField("username"));
	else
	ClientMessage("Json answer = huesli");
	//JsonParsed->GetStringField("username");*/

	
	/*Rq.ConstructRequestExt(this, ERequestVerb(0), ERequestContentType(0));
	/*RqResult = Rq.GetResponseObject();	
	/*FLatentActionInfo ActionInfo;
	UVaRestJsonObject* RqResult = ApllyUrl(ServerURL + "g_userinfo.php?apireqkey=" + APIKey + "&func=" + "getinfo_username&req=" + UserSessionKey);
	/*if (RqValue)
		ClientMessage("RqValue valid"); //RqValue = RqResult->GetField("username");
	else 
		ClientMessage("RqValue novalid");*/

	/*AauthenticationUe4Character* Ue4Character = Cast<AauthenticationUe4Character>(GetPawn());
	Ue4Character->SetUserName(RqValue->AsString());*/

	UCGameInstance_Login* SGI = Cast<UCGameInstance_Login>(GetGameInstance());	

	UVaRestRequestJSON *Rq = UVaRestRequestJSON::ConstructRequest(this);
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
		//set timer 0.5sec
	//https: //www.tomlooman.com/using-timers-in-ue4/
	//https: //docs.unrealengine.com/en-us/Programming/UnrealArchitecture/Timers
	GetWorldTimerManager().SetTimer(BeginPlayTimerHandle, this, &ACPlayerController_Game::StartInit, 0.5f, false);

}

void ACPlayerController_Game::ApplyURLCallBack()
{
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
}


//						Tick



void ACPlayerController_Game::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//									StartInit


 void ACPlayerController_Game::StartInit()
{
	/* GetWorldTimerManager().ClearTimer(BeginPlayTimerHandle);

	 if (RqResult)
	 {
		 ClientMessage(FString::FromInt(RqResult->GetFieldNames().Max()));
		 ClientMessage(RqResult->GetField("characteristics")->AsString());
		 for (int i = 0; i < RqResult->GetFieldNames().Max(); i++)
		 {
			 ClientMessage(*RqResult->GetFieldNames().GetData());
		 }
		
	 }
	 	 else
	 ClientMessage("novalid get field");*/
	 //Rq.ConstructRequestExt(this, ERequestVerb(0), ERequestContentType(0));

	 //print string 0.5sec
	 //https: //answers.unrealengine.com/questions/419732/print-to-screen-using-c.html
	 //GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, FString::Printf(TEXT("hello")));

	if (Role < ROLE_Authority)
	{
		//GetUserSessionKey Client
		ServerToGetUserSessionKey();
	}
	else
	{
		//UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
		//https: //forums.unrealengine.com/development-discussion/c-gameplay-programming/106709-how-to-set-input-mode-in-c
		SetInputMode(FInputModeGameOnly());
	}
}




 //									ServerToGetUserSessionKey



void ACPlayerController_Game::ServerToGetUserSessionKey_Implementation()//имплементация функции на клиенте
{
	//Получаем сессионый ключ из гейм инстанса и передаем дальше
	//(Функция вызывается у клиента и передает данные на сервер)
	SetUserSessionKeyServer(SGI->GetUserSessionKey());
		// This function is only called on the server (where Role == ROLE_Authority), called over the network by clients.
}

//									SetUserSessionKeyServer


void ACPlayerController_Game::SetUserSessionKeyServer_Implementation(const FString& LUserSessionKey)//имплементация функции на клиенте
{
	
	if (LUserSessionKey.Len() > 0)
	{
		UserSessionKey = LUserSessionKey;
		GetUserName();
	}
}


bool ACPlayerController_Game::SetUserSessionKeyServer_Validate(const FString& LUserSessionKey)
{
	return true;
}

//								GetUserName



void ACPlayerController_Game::GetUserName_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("GetUserName log"));
	//UVaRestJsonObject* RqResult = ApllyUrl(ServerURL+"g_userinfo.php?apireqkey="+APIKey+"&func="+"getinfo_username&req="+UserSessionKey);
	//if(RqValue)	RqValue = RqResult->GetField("username");
	//else return;// тут надо выводить лог что , что то пошло не так))
	AauthenticationUe4Character* Ue4Character = Cast<AauthenticationUe4Character>(GetPawn());
	//Ue4Character->SetUserName(RqValue->AsString());
}

bool ACPlayerController_Game::GetUserName_Validate()
{

	// Optionally validate the request and return false if the function should not be run.
	return true;
}


