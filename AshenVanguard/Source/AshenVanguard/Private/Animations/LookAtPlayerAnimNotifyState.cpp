#include "Animations/LookAtPlayerAnimNotifyState.h"
#include "Characters/LookAtPlayerComponent.h"

void ULookAtPlayerAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	AActor* OwnerRef{ MeshComp->GetOwner() };

	if (!IsValid(OwnerRef)) { return; }

	ULookAtPlayerComponent* RotationComp{ OwnerRef->FindComponentByClass<ULookAtPlayerComponent>() };

	if (!IsValid(RotationComp)) { return; }

	RotationComp->bcanRotate = true;
}

void ULookAtPlayerAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	AActor* OwnerRef{ MeshComp->GetOwner() };

	if (!IsValid(OwnerRef)) { return; }

	ULookAtPlayerComponent* RotationComp{ OwnerRef->FindComponentByClass<ULookAtPlayerComponent>() };

	if (!IsValid(RotationComp)) { return; }

	RotationComp->bcanRotate = false;
}