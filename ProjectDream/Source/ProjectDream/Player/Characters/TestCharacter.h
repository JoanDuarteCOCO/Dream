// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "../Actors/Weapon.h"
#include "../Components/HealthComponent.h"
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

	//Variable que pemrite instanciar el Blueprint del arma (Weapon)
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Player)
	TSubclassOf<AWeapon> WeaponBlueprint;



	//Funciones para aplicar la mecania de Dash
	UFUNCTION()
		void Dash();

	UFUNCTION()
		void StopDash();

	UFUNCTION()
		void ResetDash();

	FTimerHandle UnusedHandle;


	//clase del component de salud
	 UHealthComponent* HealthComponent;

	 //Rotar Personaje hacia la direccion del puntero del mouse
	 APlayerController* PlayerControllerRef;

	 UFUNCTION(BlueprintCallable,Category=Player)
	 void RotateCharacter(FVector LookAtTarget);


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

	UFUNCTION(BlueprintCallable,Category="Player")
	void SpawnWeapon();

	//Funcion para la salud
	UFUNCTION(BlueprintCallable,Category="Player")
	void OnHealthChanged(UHealthComponent* OwningHealthComponent, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Player")
	bool bDied = false;

private:
	
	//Propiedades que le pertenecen al jugador

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Player,meta=(AllowPrivateAccess=true))
		USpringArmComponent* BoomCamera = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Player, meta = (AllowPrivateAccess = true))
		UCameraComponent* FollowCamera = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Player,meta=(AllowPrivateAccess = true))
	bool bIsFiring = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player, meta = (AllowPrivateAccess = true))
		float DashDistance = 3000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player, meta = (AllowPrivateAccess = true))
		float DashCooldown = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player, meta = (AllowPrivateAccess = true))
		float DashStop = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player, meta = (AllowPrivateAccess = true))
		float bCanDash = true;


	friend class APlayerHUD;

};
