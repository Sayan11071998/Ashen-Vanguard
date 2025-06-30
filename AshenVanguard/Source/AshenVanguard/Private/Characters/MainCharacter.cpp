#include "Characters/MainCharacter.h"
#include "Animations/PlayerAnimInstance.h"
#include "Characters/StatsComponent.h"
#include "Combat/LockonComponent.h"
#include "Combat/CombatComponent.h"
#include "Combat/TraceComponent.h"
#include "Combat/BlockComponent.h"
#include "Characters/PlayerActionsComponent.h"
#include "Characters/EStat.h"

AMainCharacter::AMainCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	LockonComp = CreateDefaultSubobject<ULockonComponent>(TEXT("Lockon Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	BlockComp = CreateDefaultSubobject<UBlockComponent>(TEXT("Block Component"));
	PlayerActionComp = CreateDefaultSubobject<UPlayerActionsComponent>(TEXT("Player Action Component"));
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlayerAnim = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
}

void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

float AMainCharacter::GetDamage()
{
	return StatsComp->Stats[EStat::Strength];
}

bool AMainCharacter::HasEnoughStamina(float Cost)
{
	return StatsComp->Stats[EStat::Stamina] >= Cost;
}

void AMainCharacter::HandleDeath()
{
	PlayAnimMontage(DeathAnimMontage);
	DisableInput(GetController<APlayerController>());
}

void AMainCharacter::EndLockonWithActor(AActor* ActorRef)
{
	if (LockonComp->CurrentTargetActor != ActorRef) { return; }

	LockonComp->EndLockon();
}

bool AMainCharacter::CanTakeDamage(AActor* Oppoent)
{
	if (PlayerActionComp->bIsRollActive) { return false; }
	if (PlayerAnim->bIsBlocking) { return BlockComp->Check(Oppoent); }

	return true;
}

void AMainCharacter::PlayHurtAnim(TSubclassOf<class UCameraShakeBase> CameraShakeTemplate)
{
	PlayAnimMontage(HurtAnimMontage);

	if (CameraShakeTemplate)
	{
		GetController<APlayerController>()->ClientStartCameraShake(CameraShakeTemplate);
	}
}