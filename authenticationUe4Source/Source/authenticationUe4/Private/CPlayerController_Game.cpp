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

bool ACPlayerController_Game::GetUserDataFromServer_Validate()//�������� �� ���������� ������� ����� ��� ����������
{

	// Optionally validate the request and return false if the function should not be run.
	return true;
}

bool ACPlayerController_Game::SetUserSessionKeyOnServer_Validate(const FString& LUserSessionKey)//�������� �� ���������� ������� ����� ��� ����������
{
	return true;
}

void ACPlayerController_Game::PrintRole()// ������� ������� � ������� ������ ��� ������ ��������� ���
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
	GetWorldTimerManager().SetTimer(BeginPlayTimerHandle, this, &ACPlayerController_Game::StartInit, 0.5f, false);//������ �� 0.5 ������ �� ������ �������������
}



 void ACPlayerController_Game::StartInit()//	StartInit ������ ������� ����� BeginPlay ������ ������������� ����������� � ������
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
 

void ACPlayerController_Game::ServerToGetUserSessionKey_Implementation()//������������� ������� �� ������� ����� UserSessionKey � ������� �� gameInstace 
																		// � ���������� ������� ��� ����������� � ��������� ������																			
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


void ACPlayerController_Game::SetUserSessionKeyOnServer_Implementation(const FString& LUserSessionKey)//������������� ������� �� ������� ��������� UserSessionKey �� �������
																									//��� ���������� ������ � ���
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


void ACPlayerController_Game::GetUserDataFromServer_Implementation()//������������� ������� �� ������� �������� ������ � ������� ����� UserSessionKey � ��������� ��
{
	UE_LOG(LogTemp, Error, TEXT("GetUserName log"));
	if (Role >= ROLE_Authority)
	{
		if (RqResult)
		{	
			AauthenticationUe4Character* Ue4Character = Cast<AauthenticationUe4Character>(GetPawn());
			Ue4Character->SetUserName(RqResult->GetField("username")->AsString());
			ClientMessage("Character name: "+RqResult->GetField("username")->AsString());
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
			ActionInfo.ExecutionFunction = "GetUserDataFromServer";// �������� ��� ��� �������, ��� ����� �������� ��������� ��� ����
			ActionInfo.Linkage = 0;
			ActionInfo.UUID = 123;			
			Rq->ApplyURL(ServerURL+"g_userinfo.php?apireqkey="+APIKey+"&func=getinfo_username&req="+UserSessionKey, RqResult, this, ActionInfo);
			
		}
	}
}

