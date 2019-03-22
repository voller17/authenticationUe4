// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameStructs.generated.h"

/**
 * 
 */


USTRUCT(BlueprintType)
struct FCharacterData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Health = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RecoveryHealth = 2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxStamina =200;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Stamina =200;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RecoveryStamina =4;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxManna =400;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Manna =400;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RecoveryManna =8;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float PhysicalResist =50;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MagicResist =10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float AffectionResist =0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Karma =0;
};

UCLASS()
class AUTHENTICATIONUE4_API UGameStructs : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
		FCharacterData StringToStruct(FString data);
	
};

