// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"
#include "../Characters/TestCharacter.h"
#include "../Components/HealthComponent.h"
#include "Kismet/GameplayStatics.h"


APlayerHUD::APlayerHUD()
{

}

void APlayerHUD::DrawHUD()
{
	Super::DrawHUD();


	UHealthComponent* health = Cast<UHealthComponent>(UGameplayStatics::GetObjectClass(UHealthComponent::StaticClass()));

	if (ATestCharacter* player = Cast<ATestCharacter>(GetOwningPawn()))
	{
		AddFloat(L"Velocity: ",player->GetVelocity().Size() / 100.0f);
		//AddFloat(L"Health: ",health->CurrentHealth);
		//AddFloat(L"Dash Timer: ", player->DashStop);
	}
}