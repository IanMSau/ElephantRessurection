// Copyright Epic Games, Inc. All Rights Reserved.

#include "AirSnooperPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "AirSnooperCharacter.h"
#include "Engine/World.h"

AAirSnooperPlayerController::AAirSnooperPlayerController()
{
	bShowMouseCursor = true;
	underControl = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AAirSnooperPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor && underControl)
	{
		MoveToMouseCursor();
	}
}

void AAirSnooperPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &AAirSnooperPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &AAirSnooperPlayerController::OnSetDestinationReleased);

	InputComponent->BindAction("Temp", IE_Pressed, this, &AAirSnooperPlayerController::ToggleControl);
	// support touch devices
	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AAirSnooperPlayerController::MoveToTouchLocation);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AAirSnooperPlayerController::MoveToTouchLocation);

	InputComponent->BindAction("ResetVR", IE_Pressed, this, &AAirSnooperPlayerController::OnResetVR);
}

void AAirSnooperPlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AAirSnooperPlayerController::ToggleControl()
{
	if (underControl)
	{
		underControl = false;
		StopMovement();
	}
	else
	{
		underControl = true;
	}
	AAirSnooperCharacter* MyCharacter = Cast<AAirSnooperCharacter>(GetPawn());
	if (MyCharacter)
	{
		MyCharacter->updateControl(underControl);
	}
}

void AAirSnooperPlayerController::MoveToMouseCursor()
{
	
	// Trace to see what is under the mouse cursor
	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(Hit.ImpactPoint);
	}
}

void AAirSnooperPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(HitResult.ImpactPoint);
	}
}

void AAirSnooperPlayerController::StopMovement()
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MyPawn->GetActorLocation());
	}
}

void AAirSnooperPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
		if ((Distance > 120.0f))
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
		}
	}
}

void AAirSnooperPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}

void AAirSnooperPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}
