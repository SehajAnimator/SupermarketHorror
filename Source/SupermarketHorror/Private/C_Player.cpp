// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Player.h"

AC_Player::AC_Player()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AC_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

void AC_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

