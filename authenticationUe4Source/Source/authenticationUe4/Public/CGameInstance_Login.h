// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CGameInstance_Login.generated.h"

/**
 * 
 */
UCLASS()
class AUTHENTICATIONUE4_API UCGameInstance_Login : public UGameInstance
{
	GENERATED_BODY()

//public:
	//UCGameInstance_Login(const FObjectInitializer& ObjectInitializer);

		UPROPERTY(EditDefaultsOnly, Category = "ServerVariables")
		FString UserSessionKey = "http://localhost/api/";

	UPROPERTY(EditDefaultsOnly, Category = "ServerVariables")
		FString APIKey = "CD15BC97E2292F3C6AFECC921B5A6A9DFE010793664181D74E9597DC1140057C4C70DEDA246D1A41201F93BA764870B24C202A1AFA38711D8421C7019DC954C2";

	UPROPERTY(EditDefaultsOnly, Category = "ServerVariables")
		FString ServerURL = "df38558de3dea99ce98954473e7e049d4796bf4ba164e87fb57ea3e73d5a62f6337f09c05f901183f183542c46ebd692567286b418f6f0d530373dd8cb94fad1";

	// BlueprintCallable доступ в блюпринтах
public:
	UFUNCTION(BlueprintCallable)
		void SetUserSessionKey(FString lUserSessionKey);
public:
	UFUNCTION(BlueprintCallable)
		void SetAPIKey(FString lAPIKey);
public:
	UFUNCTION(BlueprintCallable)
		void SetServerURL(FString lServerURL);
public:
	UFUNCTION(BlueprintCallable)
		FString GetUserSessionKey();
public:
	UFUNCTION(BlueprintCallable)
		FString GetAPIKey();
public:
	UFUNCTION(BlueprintCallable)
		FString GetServerURL();
	
	
	
	
};
