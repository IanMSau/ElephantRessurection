// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AirSnooperGameMode.generated.h"

UCLASS(minimalapi)
class AAirSnooperGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAirSnooperGameMode();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game Mode Stats", meta = (AllowPrivateAccess = "true"))
  float LevelTimer{ 100.0f };

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game Mode Stats", meta = (AllowPrivateAccess = "true"))
  bool TimeStarted{ false };

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game Mode Stats", meta = (AllowPrivateAccess = "true"))
  int TargetScore{ 1000 };

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game Mode Stats", meta = (AllowPrivateAccess = "true"))
  int CurrentScore{ 0 };
};



