// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGhostHunter.h"

// Sets default values
ABaseGhostHunter::ABaseGhostHunter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ABaseGhostHunter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGhostHunter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseGhostHunter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

