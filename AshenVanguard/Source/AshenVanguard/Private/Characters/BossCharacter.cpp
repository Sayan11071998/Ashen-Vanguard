#include "Characters/BossCharacter.h"
#include "Characters/StatsComponent.h"

ABossCharacter::ABossCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
}

void ABossCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ABossCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABossCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ABossCharacter::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect)
{
	if (DetectedPawn != PawnToDetect) { return; }

	UE_LOG(LogTemp, Warning, TEXT("Player Detected!"));
}