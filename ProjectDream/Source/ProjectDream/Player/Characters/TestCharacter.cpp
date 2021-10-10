// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCharacter.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoomCamera = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	BoomCamera->SetupAttachment(RootComponent);
	BoomCamera->SetUsingAbsoluteRotation(true);
	BoomCamera->bDoCollisionTest = false;
	BoomCamera->TargetArmLength = 800.0f;
	BoomCamera->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Follow Camera"));
	FollowCamera->SetupAttachment(BoomCamera, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;


	//AutoPossessPlayer = EAutoReceiveInput::Player0;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//Mejorando el movimiento del jugador
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

}

// Called when the game starts or when spawned
void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();


	//Aqui se manda a llamar lafuncionpara spawnear el arma en el brazo del player cuando inicie el juego
	SpawnWeapon();
	
}

//Funcion para declarar los Inputs de los controlesy WASD, se puede modificar desde lainterfaz de UE pero quize experimentar XD
#pragma region Funcion para generar los Inputs

static void InitializeInputs()
{
	bool bindingAdded = false;

	if (bindingAdded == false)
	{
		bindingAdded = true;


		//Estableciendo Entradas del teclado
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(FName("MoveForward"), EKeys::W, 1.0f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(FName("MoveForward"), EKeys::S, -1.0f));
		//UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(FName("MoveForward"), EKeys::Gamepad_LeftY, 1.0f));

		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(FName("MoveRight"), EKeys::D, 1.0f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(FName("MoveRight"), EKeys::A, -1.0f));
		//UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(FName("MoveRight"), EKeys::Gamepad_RightX, 1.0f));


		//Generarndo Inputs para Acciones (Disparos,Salto,etc...)
		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping(FName("Fire"),EKeys::LeftMouseButton));
	}
}

#pragma endregion



// Called every frame
void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent != nullptr);

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InitializeInputs();

	//Entradas para Movimiento
	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &ATestCharacter::MoveForward);
	PlayerInputComponent->BindAxis(FName("MoveRight"), this, &ATestCharacter::MoveRight);

	//Entradas para Acciones (Disparos,etc...)
	PlayerInputComponent->BindAction(FName("Fire"),EInputEvent::IE_Pressed,this,&ATestCharacter::Fire);
}


#pragma region Funciones del Movimiento del Jugador

void ATestCharacter::MoveForward(float Value)
{
	if ((Value != 0.0f) && Controller != nullptr)
	{
		FRotator Rotation{ Controller->GetControlRotation() };
		FRotator Yaw{ 0.0f,Rotation.Yaw,0.0f };

		FVector Direction{ FRotationMatrix{Yaw}.GetUnitAxis(EAxis::X) };

		AddMovementInput(Direction * Value);

	}
}

void ATestCharacter::MoveRight(float Value)
{
	if ((Value != 0.0f) && Controller != nullptr)
	{
		FRotator Rotation{ Controller->GetControlRotation() };
		FRotator Yaw{ 0.0f,Rotation.Yaw,0.0f };

		FVector Direction{ FRotationMatrix{Yaw}.GetUnitAxis(EAxis::Y) };

		AddMovementInput(Direction * Value);
	}
}



#pragma endregion


#pragma region Funciones de Acciones (Disparos,etc...)

void ATestCharacter::Fire()
{
	bIsFiring = true;

	if (AWeapon* WP = Cast<AWeapon>(UGameplayStatics::GetActorOfClass(this,AWeapon::StaticClass())))
	{
		WP->WeaponFire();
	}

}


//Spawnear arma en el brazo del player
void ATestCharacter::SpawnWeapon()
{
	
	if (WeaponBlueprint)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Instigator = GetInstigator();
		SpawnParameters.Owner = this;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AWeapon* Weapon = GetWorld()->SpawnActor<AWeapon>(WeaponBlueprint, GetActorLocation(), GetActorRotation(), SpawnParameters);
		Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("WeaponSocket"));
	}

	
}

#pragma endregion





