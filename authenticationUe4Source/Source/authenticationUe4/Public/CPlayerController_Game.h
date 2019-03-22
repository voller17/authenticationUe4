// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Core.h"
#include "GameFramework/PlayerController.h"
#include "CGameInstance_Login.h"
#include "VaRestRequestJSON.h"
#include "VaRestJsonObject.h"
#include "VaRestLibrary.h"
#include "VaRestSettings.h"
#include "Private/VaRestPluginPrivatePCH.h"
#include "UnrealString.h"
#include "CPlayerController_Game.generated.h"

class UVaRestJsonValue;
class AauthenticationUe4Character;
class UVaRestRequestJSON;
class UVaRestJsonObject;


/**
 * 
 */
UCLASS()
class AUTHENTICATIONUE4_API ACPlayerController_Game : public APlayerController
{
	GENERATED_BODY()

	//Functions******
public:
	ACPlayerController_Game();
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


												// https://wiki.unrealengine.com/Replication 
												//https://wiki.unrealengine.com/Networking/Replication
												//GetUserSessionKey Client
public:
UFUNCTION(reliable, client)
	void ServerToGetUserSessionKey();//обьявление самой функции
	virtual void ServerToGetUserSessionKey_Implementation();//обьявление её имплементация на клиенте

public:
UFUNCTION(Server, Reliable, WithValidation)
												//https://forums.unrealengine.com/development-discussion/c-gameplay-programming/1389108-fstring-and-rpc-compile-error
	void SetUserSessionKeyOnServer(const FString& LUserSessionKey);
	virtual bool SetUserSessionKeyOnServer_Validate(const FString& LUserSessionKey);
	virtual void SetUserSessionKeyOnServer_Implementation(const FString& LUserSessionKey);


public:
UFUNCTION(Server, Reliable, WithValidation)
	void GetUserDataFromServer();
virtual void GetUserDataFromServer_Implementation();//имплементация функции на клиенте
virtual bool GetUserDataFromServer_Validate();


UFUNCTION()
	void StartInit();

UFUNCTION()
	void PrintRole();//printRole (Authority)

					//Variables******
UPROPERTY()
	UCGameInstance_Login* SGI;
UPROPERTY()
	UVaRestJsonObject* RqResult;
		
UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ReplicatedVariables|UserData")
	bool EndInit;

UPROPERTY()
	UVaRestJsonValue* RqValue;

public:
UPROPERTY()
	AauthenticationUe4Character* Ue4Character;

UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ServerVariables")
	FString UserSessionKey;

UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ServerVariables")
	FString APIKey = "CD15BC97E2292F3C6AFECC921B5A6A9DFE010793664181D74E9597DC1140057C4C70DEDA246D1A41201F93BA764870B24C202A1AFA38711D8421C7019DC954C2";

UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ServerVariables")
	FString ServerURL= "http://localhost/api/";

UPROPERTY()
	FTimerHandle BeginPlayTimerHandle;
	
};
