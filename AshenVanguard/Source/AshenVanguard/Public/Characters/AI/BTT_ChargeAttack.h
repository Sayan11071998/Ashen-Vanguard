#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ChargeAttack.generated.h"

UCLASS()
class ASHENVANGUARD_API UBTT_ChargeAttack : public UBTTaskNode
{
	GENERATED_BODY()

	class UBossAnimInstance* BossAnim;

	AAIController* ControllerRef;
	ACharacter* CharacterRef;
	FScriptDelegate MoveCompletedDelegate;

	UPROPERTY(EditAnywhere)
	float AcceptableRadius{ 100.0f };

	UPROPERTY(EditAnywhere)
	float ChargeWalkSpeed{ 2000.0f };
	
	float OriginalWalkSpeed;
	bool bIsFinished{ false };

protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

public:
	UBTT_ChargeAttack();

	UFUNCTION()
	void HandleMoveCompleted();

	UFUNCTION()
	void FinishAttackTask();
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	void ChargetAtPlayer();
};