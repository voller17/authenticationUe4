// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core.h"
#include "Components/ActorComponent.h"
#include "GameLibrary.h"
#include "CPlayerController_Game.h"
#include "MyCCharacteristics_Comp.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AUTHENTICATIONUE4_API UMyCCharacteristics_Comp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyCCharacteristics_Comp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FCharacterData BaseCharacteristics;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	
	UPROPERTY()
		bool SlowedRecoveryStamina;

	UPROPERTY()
		FTimerHandle TimerRecovery;

/////////////////////////////////////////////

private:
	UFUNCTION(Server, Reliable, WithValidation)
		
		void Recovery();
	virtual bool Recovery_Validate();
	virtual void Recovery_Implementation();
		
};