#include "Animations/ToggleTraceNotifyState.h"
#include "Combat/TraceComponent.h"

UTraceComponent* UToggleTraceNotifyState::GetTraceComponent(USkeletalMeshComponent* MeshComp) const
{
	if (!IsValid(MeshComp) || !IsValid(MeshComp->GetOwner())) { return nullptr; }

	return MeshComp->GetOwner()->FindComponentByClass<UTraceComponent>();
}

void UToggleTraceNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	UTraceComponent* TraceComp = GetTraceComponent(MeshComp);

	if (!IsValid(TraceComp)) { return; }

	TraceComp->bIsAttacking = true;
}

void UToggleTraceNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	UTraceComponent* TraceComp = GetTraceComponent(MeshComp);

	if (!IsValid(TraceComp)) { return; }

	TraceComp->bIsAttacking = false;
}