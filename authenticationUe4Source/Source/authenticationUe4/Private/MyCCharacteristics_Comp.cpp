// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealNetwork.h"
#include "CPlayerController_Game.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "MyCCharacteristics_Comp.h"


// Sets default values for this component's properties
UMyCCharacteristics_Comp::UMyCCharacteristics_Comp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMyCCharacteristics_Comp::BeginPlay()
{
	Super::BeginPlay();

	//GetWorldTimerManager().SetTimer(TimerRecovery, this, &UMyCCharacteristics_Comp::Recovery, 1, true);//таймер на 1 секунду для самовосстановления параметров персонажа
		// ...
	
}


// Called every frame
void UMyCCharacteristics_Comp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UMyCCharacteristics_Comp::Recovery_Validate()
{
	return true;
}

void UMyCCharacteristics_Comp::Recovery_Implementation()
{

}

