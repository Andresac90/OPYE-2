// Copyright Epic Games, Inc. All Rights Reserved.


#include "OPYE2PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "OPYE2CameraManager.h"

AOPYE2PlayerController::AOPYE2PlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = AOPYE2CameraManager::StaticClass();
}

void AOPYE2PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
