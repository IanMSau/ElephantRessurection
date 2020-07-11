// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseGhostHunter.generated.h"

UCLASS()
class AIRSNOOPER_API ABaseGhostHunter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseGhostHunter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character", meta = (AllowPrivateAccess = "true"))
	int Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character", meta = (AllowPrivateAccess = "true"))
	int MaxMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character", meta = (AllowPrivateAccess = "true"))
	int Sanity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character", meta = (AllowPrivateAccess = "true"))
	float BaseAccuracy;

	
};
