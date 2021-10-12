// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"
#include "../Characters/TestCharacter.h"


APlayerHUD::APlayerHUD()
{

}

void APlayerHUD::DrawHUD()
{
	Super::DrawHUD();

	if (ATestCharacter* player = Cast<ATestCharacter>(GetOwningPawn()))
	{
		AddFloat(L"Velocity: ",player->GetVelocity().Size() / 100.0f);
		AddFloat(L"Dash Timer: ",player->DashCooldown);
		//AddFloat(L"Dash Timer: ", player->DashStop);
	}
}