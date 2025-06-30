#include "Characters/BossCharacter.h"
#include "Characters/StatsComponent.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Combat/CombatComponent.h"
#include "Characters/MainCharacter.h"
#include "BrainComponent.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"

ABossCharacter::ABossCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
}

void ABossCharacter::BeginPlay()
{
	Super::BeginPlay();

	ControllerRef = GetController<AAIController>();

	BlackboardComp = ControllerRef->GetBlackboardComponent();
	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), InitialState);

	GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter>()
		->StatsComp->OnZeroHealthDelegate.AddDynamic(this, &ABossCharacter::HandlePlayerDeath);
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
	EEnemyState CurrentState{ static_cast<EEnemyState>(BlackboardComp->GetValueAsEnum(TEXT("CurrentState"))) };
	
	if (DetectedPawn != PawnToDetect || CurrentState != EEnemyState::Idle) { return; }

	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyState::Range);
}

float ABossCharacter::GetDamage()
{
	return StatsComp->Stats[EStat::Strength];
}

void ABossCharacter::Attack()
{
	CombatComp->RandomAttack();
}

float ABossCharacter::GetAnimationDuration()
{
	return CombatComp->AnimDuration;
}

float ABossCharacter::GetMeleeRange()
{
	return StatsComp->Stats[EStat::MeleeRange];
}

void ABossCharacter::HandlePlayerDeath()
{
	ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyState::GameOver);
}

void ABossCharacter::HandleDeath()
{
	float Duration = PlayAnimMontage(DeathAnimation);
	ControllerRef->GetBrainComponent()->StopLogic("defeated");
	FindComponentByClass<UCapsuleComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	FTimerHandle DestroyTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, this, &ABossCharacter::FinishDeathAnim, Duration, false);

	IMainPlayer* PlayerRef{ GetWorld()->GetFirstPlayerController()->GetPawn<IMainPlayer>() };

	if (!PlayerRef) { return; }

	PlayerRef->EndLockonWithActor(this);
}

void ABossCharacter::FinishDeathAnim()
{
	Destroy();
}