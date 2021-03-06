// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UnrealNetwork.h"
#include "GameLibrary.h"
#include "authenticationUe4Character.generated.h"

UCLASS(config=Game)
class AauthenticationUe4Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	AauthenticationUe4Character();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;


//My Variables ------------------------------------------------------------------------------------------------------------>
	public:
	UPROPERTY(EditDefaultsOnly, Replicated, BlueprintReadWrite)
		FString UserName;	
	UPROPERTY(Replicated)
		bool bControllerEndInit;
protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	virtual void BeginPlay() override;

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//My FUNCTION ------------------------------------------------------------------------------------------------------------>
	UFUNCTION()
		void SetUserName(FString Name);
	UFUNCTION(unreliable, NetMulticast/*, WithValidation*/)
		void ClientCharaterStartInit();
	virtual void ClientCharaterStartInit_Implementation();//������������� ������� �� �������
	//virtual bool ClientCharaterStartInit_Validate();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)//BlueprintCosmetic ���������� ������ �� �������
		void ClientCharaterEndInit();
	virtual void ClientCharaterEndInit_Implementation();//������������� ������� �� �������
	virtual bool ClientCharaterEndInit_Validate();
};

