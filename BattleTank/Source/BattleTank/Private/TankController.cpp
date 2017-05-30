// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankController.h"

void ATankController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller possessing: %s"), *(ControlledTank->GetName()));
	}
}

ATank* ATankController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}