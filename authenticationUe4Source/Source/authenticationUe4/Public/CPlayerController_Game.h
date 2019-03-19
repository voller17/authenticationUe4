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
	void SetUserSessionKeyServer(const FString& LUserSessionKey);
	virtual bool SetUserSessionKeyServer_Validate(const FString& LUserSessionKey);
	virtual void SetUserSessionKeyServer_Implementation(const FString& LUserSessionKey);


public:
UFUNCTION(Server, Reliable, WithValidation)
	void GetUserName();
virtual void GetUserName_Implementation();//имплементация функции на клиенте
virtual bool GetUserName_Validate();


UFUNCTION()
	void StartInit();

UFUNCTION()
	UVaRestJsonObject* ApllyUrl(FString UrlField);

					//Variables******
UPROPERTY()
	UCGameInstance_Login* SGI;
		
UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ReplicatedVariables|UserData")
	bool EndInit;

UPROPERTY()
	UVaRestJsonValue* RqValue;

UPROPERTY()
	UVaRestJsonObject* RqResult;
public:
UPROPERTY()
	AauthenticationUe4Character* Ue4Character;

UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ServerVariables")
	FString UserSessionKey;

UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ServerVariables")
	FString APIKey;

UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ServerVariables")
	FString ServerURL;

UPROPERTY()
	FTimerHandle BeginPlayTimerHandle;
	
};
