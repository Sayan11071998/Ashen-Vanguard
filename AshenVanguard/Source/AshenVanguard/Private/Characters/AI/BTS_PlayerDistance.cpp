#include "Characters/AI/BTS_PlayerDistance.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTS_PlayerDistance::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	FVector CurrentLocation{ OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation() };
	FVector Playerocation{ GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation() };

	float Distance{ static_cast<float>(FVector::Distance(CurrentLocation, Playerocation)) };

	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(TEXT("Distance"), Distance);
}