#include "Characters/AI/BTT_RageAttack.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"

EBTNodeResult::Type UBTT_RageAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ACharacter* CharacterRef{ OwnerComp.GetAIOwner()->GetPawn<ACharacter>()};

	if (!IsValid(CharacterRef)) { return EBTNodeResult::Failed; }

	CharacterRef->PlayAnimMontage(AnimMontage);

	double RandomValue{ UKismetMathLibrary::RandomFloat()};

	if (RandomValue > Threshold)
	{
		Threshold = 0.9;
		UE_LOG(LogTemp, Warning, TEXT("Charging At the Player"));
	}
	else
	{
		Threshold -= 0.1;
	}

	return EBTNodeResult::Succeeded;
}