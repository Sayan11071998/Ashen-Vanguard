#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
	FOnAttackPerformedSignature,
	UCombatComponent,
	OnAttackPerformedDelegate,
	float,
	Amount
);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASHENVANGUARD_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

	ACharacter* CharacterRef;

	UPROPERTY(EditAnywhere)
	TArray<UAnimMontage*> AttackAnimations;

	UPROPERTY(VisibleAnywhere)
	int ComboCounter{ 0 };

	UPROPERTY(VisibleAnywhere)
	bool bCanAttack{ true };

	UPROPERTY(EditAnywhere)
	float StaminaCost{ 5.0f };

public:	
	UCombatComponent();

	UPROPERTY(BlueprintAssignable)
	FOnAttackPerformedSignature OnAttackPerformedDelegate;

	float AnimDuration;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ComboAttack();

	UFUNCTION(BlueprintCallable)
	void HandleResetAttack();

	void RandomAttack();
};