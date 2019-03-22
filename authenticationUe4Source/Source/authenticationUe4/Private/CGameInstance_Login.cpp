// Fill out your copyright notice in the Description page of Project Settings.

#include "CGameInstance_Login.h"
#include "authenticationUe4.h"
#include "Engine/GameInstance.h"




/*UCGameInstance_Login::UCGameInstance_Login(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) 
{

}
*/

void UCGameInstance_Login::SetUserSessionKey(FString lUserSessionKey)
{
	UserSessionKey = lUserSessionKey;	
}

void UCGameInstance_Login::SetAPIKey(FString lAPIKey)
{
	APIKey = lAPIKey;
}

void UCGameInstance_Login::SetServerURL(FString lServerURL)
{
	ServerURL = lServerURL;
}

FString UCGameInstance_Login::GetUserSessionKey()
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.5f, FColor::Yellow, FString::Printf(TEXT("11111")));
	return UserSessionKey;
}

FString UCGameInstance_Login::GetAPIKey()
{
	return APIKey;
}

FString UCGameInstance_Login::GetServerURL()
{
	return ServerURL;
}


