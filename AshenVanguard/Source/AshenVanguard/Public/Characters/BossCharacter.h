#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Enemy.h"
#include "Characters/EEnemyState.h"
#include "Interfaces/Fighter.h"
#include "BossCharacter.generated.h"

UCLASS()
class ASHENVANGUARD_API ABossCharacter : public ACharacter, public IEnemy, public IFighter
{
	GENERATED_BODY()

	class UBlackboardComponent* BlackboardComp;
	class AAIController* ControllerRef;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EEnemyState> InitialState;

	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnimation;

public:
	ABossCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStatsComponent* StatsComp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCombatComponent* CombatComp;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect);

	UFUNCTION()
	void HandlePlayerDeath();

	UFUNCTION(BlueprintCallable)
	void HandleDeath();

	UFUNCTION()
	void FinishDeathAnim();

	virtual void Attack() override;

	virtual float GetDamage() override;

	virtual float GetAnimationDuration() override;

	virtual float GetMeleeRange() override;
};