// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealNetwork.h"
#include "CPlayerController_Game.h"




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

 //									ServerToGetUserSessionKey



void ACPlayerController_Game::ServerToGetUserSessionKey_Implementation()//������������� ������� �� �������
{
	//�������� ��������� ���� �� ���� �������� � �������� ������
	//(������� ���������� � ������� � �������� ������ �� ������)
	SetUserSessionKeyServer(SGI->GetUserSessionKey());
		// This function is only called on the server (where Role == ROLE_Authority), called over the network by clients.
}

//									SetUserSessionKeyServer


void ACPlayerController_Game::SetUserSessionKeyServer_Implementation(const FString& LUserSessionKey)//������������� ������� �� �������
{
	UserSessionKey = LUserSessionKey;
	GetUserName();	
}


bool ACPlayerController_Game::SetUserSessionKeyServer_Validate(const FString& LUserSessionKey)
{
	return true;
}

//								GetUserName



void ACPlayerController_Game::GetUserName_Implementation()//������������� ������� �� �������
{
	
}

bool ACPlayerController_Game::GetUserName_Validate()
{

	// Optionally validate the request and return false if the function should not be run.
	return true;
}
