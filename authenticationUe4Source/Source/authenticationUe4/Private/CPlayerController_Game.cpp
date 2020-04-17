// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayerController_Game.h"
#include "UnrealNetwork.h"
#include "authenticationUe4Character.h"
#include "VaRestJsonValue.h"
#include "VaRestRequestJSON.h"
#include "VaRestJsonObject.h"
#include "GameLibrary.h"
#include "Json.h"







ACPlayerController_Game::ACPlayerController_Game()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
}

bool ACPlayerController_Game::GetUserDataFromServer_Validate()//проверка на валидность функции чисто для репликации
{

	// Optionally validate the request and return false if the function should not be run.
	return true;
}

bool ACPlayerController_Game::ClientControllerEndInit_Validate()//проверка на валидность функции чисто для репликации
{

	// Optionally validate the request and return false if the function should not be run.
	return true;
}

bool ACPlayerController_Game::ServerControllerEndInit_Validate()//проверка на валидность функции чисто для репликации
{

	// Optionally validate the request and return false if the function should not be run.
	return true;
}

bool ACPlayerController_Game::SetUserSessionKeyOnServer_Validate(const FString& LUserSessionKey)//проверка на валидность функции чисто для репликации
{
	return true;
}

void ACPlayerController_Game::PrintRole()// функция выводит в консоль клиент или сервер выполняет код
{
	switch (Role)
	{
	case ROLE_None:
		ClientMessage("ROLE_None");
		break;
	case ROLE_SimulatedProxy:
		ClientMessage("ROLE_Remote");
		break;
	case ROLE_AutonomousProxy:
		ClientMessage("ROLE_Remote");
		break;
	case ROLE_Authority:
		ClientMessage("ROLE_Authority");
		break;
	case ROLE_MAX:
		ClientMessage("ROLE_MAX");
		break;

	default:
		ClientMessage("Error - default ROLE");
		break;
	}
}


void ACPlayerController_Game::Tick(float DeltaTime)//	EventTick
{
	Super::Tick(DeltaTime);
}


void ACPlayerController_Game::BeginPlay()//						BeginPlay
{
	Super::BeginPlay();				
	//https: //www.tomlooman.com/using-timers-in-ue4/
	//https: //docs.unrealengine.com/en-us/Programming/UnrealArchitecture/Timers
	GetWorldTimerManager().SetTimer(BeginPlayTimerHandle, this, &ACPlayerController_Game::StartInit, 0.5f, false);//таймер на 0.5 секунд до начала инициализации
}

void ACPlayerController_Game::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACPlayerController_Game, UserSessionKey/*какие именно переменные должны реплецироваться*/);
}


 void ACPlayerController_Game::StartInit()//	StartInit Первая функция после BeginPlay начало инициализации контроллера и данных
{	 
	if (Role >= ROLE_Authority)
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


 void ACPlayerController_Game::ClientControllerEndInit_Implementation()//	EndInit  функция завершения инициация контроллера
 {
	 PrintRole();
	 if (Role < ROLE_Authority)//Server репликация сетим данные персонажу что контроллер проинициализирован
	 {
		 HideLoadScreen();
	 }	 
 }

 void ACPlayerController_Game::ServerControllerEndInit_Implementation()//	EndInit  функция завершения инициация контроллера
 {
	 PrintRole();
	 if (Role >= ROLE_Authority)//Server репликация сетим данные персонажу что контроллер проинициализирован
	 {
		 AauthenticationUe4Character* Ue4Character = Cast<AauthenticationUe4Character>(GetPawn());
		 bEndInit = true;
		 Ue4Character->bControllerEndInit = true;
		 Ue4Character->ClientCharaterStartInit();
	 }
	 ClientControllerEndInit();
 }
 
 

void ACPlayerController_Game::ServerToGetUserSessionKey_Implementation()//имплементация функции на клиенте Берем UserSessionKey у клиента из gameInstace 
																		// и отправляем серверу для авторизации и получения данных																			
{	
	if (Role < ROLE_Authority)
	{
		UCGameInstance_Login* SGI = Cast<UCGameInstance_Login>(GetGameInstance());
		if (SGI)
		{
			PrintRole();
			ClientMessage("SessionKey = "+SGI->GetUserSessionKey());	
			SetUserSessionKeyOnServer(SGI->GetUserSessionKey());
		}
	}			
}


void ACPlayerController_Game::SetUserSessionKeyOnServer_Implementation(const FString& LUserSessionKey)//имплементация функции на Сервере Сохраняем UserSessionKey на сервере
																									//для дальнейшей работы с ним
{
	if (Role >= ROLE_Authority)
	{

		if (LUserSessionKey.Len() > 0)
		{
			UserSessionKey = LUserSessionKey;
			GetUserDataFromServer();
		}
	}
}


void ACPlayerController_Game::GetUserDataFromServer_Implementation()//имплементация функции на Сервере получаем данные с сервера через UserSessionKey и сохраняем их
{
	UE_LOG(LogTemp, Error, TEXT("GetUserName log"));
	if (Role >= ROLE_Authority)
	{
		if (RqResult)
		{	
			AauthenticationUe4Character* Ue4Character = Cast<AauthenticationUe4Character>(GetPawn());
			Ue4Character->SetUserName(RqResult->GetField("username")->AsString());
			//ClientMessage("Character name: "+RqResult->GetField("username")->AsString());
			//ClientMessage("characteristics: " + RqResult->GetField("characteristics")->AsString());	
			ClientMessage("&func=getinfo_username = succsess");
			
			UGameLibrary::StringToStruct(RqResult->GetField("characteristics")->AsString());
			GetWorldTimerManager().SetTimer(BeginPlayTimerHandle, this, &ACPlayerController_Game::ServerControllerEndInit, 0.2f, false);//таймер на 0.5 секунд до начала инициализации
			//ServerControllerEndInit();			
			//UGameLibrary y;
			//StringToStruct("characteristics");
			//y.StringToStruct(RqResult->GetField("characteristics")->AsString());
			//UGameStructs.StringToStruct(APIKey);

			//StringToStruct(APIKey);	
			
		}
		else
		{
			UVaRestRequestJSON *Rq = UVaRestRequestJSON::ConstructRequest(this);
			Rq->SetVerb(ERequestVerb(0));
			Rq->SetContentType(ERequestContentType(0));
			RqResult = NewObject<UVaRestJsonObject>();
			Rq->SetRequestObject(RqResult);
			RqResult = Rq->GetResponseObject();			
			FLatentActionInfo ActionInfo;
			ActionInfo.CallbackTarget = this;
			ActionInfo.ExecutionFunction = "GetUserDataFromServer";// ВНИМАНИЕ тут имя функции, при смене названия поправить тут тоже
			ActionInfo.Linkage = 0;
			ActionInfo.UUID = 123;	
			Rq->ApplyURL(ServerURL + "g_userinfo.php?apireqkey=" + APIKey + "&func=getinfo_username&req=" + UserSessionKey, RqResult, this, ActionInfo);
			//GetWorldTimerManager().SetTimer(BeginPlayTimerHandle, this, &ACPlayerController_Game::GetUserDataFromServer, 0.9f, false);//таймер на 0.5 секунд до начала инициализации			
		}
		//ServerControllerEndInit();
		
	}
	//ClientControllerEndInit();
}