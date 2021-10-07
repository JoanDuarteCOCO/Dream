// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "TestCharacter.generated.h"

UCLASS()
class PROJECTDREAM_API ATestCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATestCharacter();


	//Funciones para retornar los componentes , si se llega a neceitar en algun momento
	FORCEINLINE USpringArmComponent* GetBoomCamera() const { return BoomCamera; }

	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Funciones de Movimiento Enfrente y Lateral
	UFUNCTION(BlueprintCallable, Category = "Player")
		void MoveForward(float Value);

	UFUNCTION(BlueprintCallable, Category = "Player")
		void MoveRight(float Value);

	UFUNCTION(BlueprintCallable,Category="Player")
	void Fire();

private:
	
	//Propiedades que le pertenecen al jugador

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Player,meta=(AllowPrivateAccess=true))
		USpringArmComponent* BoomCamera = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Player, meta = (AllowPrivateAccess = true))
		UCameraComponent* FollowCamera = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Player,meta=(AllowPrivateAccess = true))
	bool bIsFiring = false;


};
