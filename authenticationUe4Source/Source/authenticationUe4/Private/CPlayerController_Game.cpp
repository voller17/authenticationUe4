// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayerController_Game.h"
#include "UnrealNetwork.h"
#include "authenticationUe4Character.h"
#include "VaRestJsonValue.h"







ACPlayerController_Game::ACPlayerController_Game()
{
	PrimaryActorTick.bCanEverTick = true;
}

//						BeginPlay



void ACPlayerController_Game::BeginPlay()
{
	Super::BeginPlay();
	UCGameInstance_Login* SGI = Cast<UCGameInstance_Login>(GetGameInstance());	
		//set timer 0.5sec
	//https: //www.tomlooman.com/using-timers-in-ue4/
	//https: //docs.unrealengine.com/en-us/Programming/UnrealArchitecture/Timers
	GetWorldTimerManager().SetTimer(BeginPlayTimerHandle, this, &ACPlayerController_Game::StartInit, 0.5f, false);
	
}
//						Tick



void ACPlayerController_Game::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//									StartInit


 void ACPlayerController_Game::StartInit()
{
	 GetWorldTimerManager().ClearTimer(BeginPlayTimerHandle);
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

 UVaRestJsonObject* ACPlayerController_Game::ApllyUrl(FString UrlField)
 {
	 UVaRestRequestJSON Rq;
	 Rq.ConstructRequestExt(this, ERequestVerb(0), ERequestContentType(0));
	 RqResult = Rq.GetResponseObject();	 
	 FLatentActionInfo ActionInfo;
	 return RqResult;
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
	UVaRestJsonObject* RqResult = ApllyUrl(ServerURL+"g_userinfo.php?apireqkey="+APIKey+"&func="+"getinfo_username&req="+UserSessionKey);
	if(RqValue)	RqValue = RqResult->GetField("username");
	else return;// тут надо выводить лог что , что то пошло не так))
	AauthenticationUe4Character* Ue4Character = Cast<AauthenticationUe4Character>(GetPawn());
	Ue4Character->SetUserName(RqValue->AsString());
}

bool ACPlayerController_Game::GetUserName_Validate()
{

	// Optionally validate the request and return false if the function should not be run.
	return true;
}
