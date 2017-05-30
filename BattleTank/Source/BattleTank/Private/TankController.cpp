// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankController.h"

ATank* ATankController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}