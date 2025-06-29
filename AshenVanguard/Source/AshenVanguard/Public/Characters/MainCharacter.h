#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/MainPlayer.h"
#include "Interfaces/Fighter.h"
#include "MainCharacter.generated.h"

UCLASS()
class ASHENVANGUARD_API AMainCharacter : public ACharacter, public IMainPlayer, public IFighter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnimMontage;

public:
	AMainCharacter();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULockonComponent* LockonComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent* CombatComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTraceComponent* TraceComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBlockComponent* BlockComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPlayerActionsComponent* PlayerActionComp;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	class UPlayerAnimInstance* PlayerAnim;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float GetDamage() override;

	virtual bool HasEnoughStamina(float Cost) override;

	UFUNCTION(BlueprintCallable)
	void HandleDeath();

	virtual void EndLockonWithActor(AActor* ActorRef) override;

	virtual bool CanTakeDamage(AActor* Oppoent) override;
};