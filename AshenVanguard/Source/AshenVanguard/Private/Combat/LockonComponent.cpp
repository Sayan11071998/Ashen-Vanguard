#include "Combat/LockonComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/SpringArmComponent.h"
#include "Interfaces/Enemy.h"

ULockonComponent::ULockonComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULockonComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerRef = GetOwner<ACharacter>();
	Controller = GetWorld()->GetFirstPlayerController();
	MovementComp = OwnerRef->GetCharacterMovement();
	SpringArmComp = OwnerRef->FindComponentByClass<USpringArmComponent>();
}

void ULockonComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!IsValid(CurrentTargetActor)) { return; }

	FVector CurrentLocation{ OwnerRef->GetActorLocation() };
	FVector TargetLocation{ CurrentTargetActor->GetActorLocation() };

	double TargetDistace{ FVector::Distance(CurrentLocation, TargetLocation)};

	if (TargetDistace >= BreakDistance)
	{
		EndLockon();
		return;
	}

	TargetLocation.Z -= 125.0;

	FRotator NewRotation{ UKismetMathLibrary::FindLookAtRotation(
		CurrentLocation, TargetLocation
	) };

	Controller->SetControlRotation(NewRotation);
}

void ULockonComponent::StartLockon(float Radius)
{
	FHitResult OutResult;
	FVector CurrentLocation{ OwnerRef->GetActorLocation() };
	FCollisionShape Sphere{ FCollisionShape::MakeSphere(Radius)};
	FCollisionQueryParams IgnoreParams{
		FName{ TEXT("Ignore Collision Params")},
		false,
		OwnerRef
	};

	bool bHasFoundTarget{ GetWorld()->SweepSingleByChannel(
		OutResult,
		CurrentLocation,
		CurrentLocation,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel1,
		Sphere,
		IgnoreParams
	) };

	if (!bHasFoundTarget) { return; }

	if (!OutResult.GetActor()->Implements<UEnemy>()) { return; }

	CurrentTargetActor = OutResult.GetActor();

	Controller->SetIgnoreLookInput(true);
	MovementComp->bOrientRotationToMovement = false;
	MovementComp->bUseControllerDesiredRotation = true;

	SpringArmComp->TargetOffset = FVector{ 0.0, 0.0, 100.0 };

	IEnemy::Execute_OnSelect(CurrentTargetActor);

	OnUpdatedTargetDelegate.Broadcast(CurrentTargetActor);
}

void ULockonComponent::EndLockon()
{
	IEnemy::Execute_OnDeselect(CurrentTargetActor);

	CurrentTargetActor = nullptr;

	MovementComp->bOrientRotationToMovement = true;
	MovementComp->bUseControllerDesiredRotation = false;

	SpringArmComp->TargetOffset = FVector::ZeroVector;

	Controller->ResetIgnoreLookInput();

	OnUpdatedTargetDelegate.Broadcast(CurrentTargetActor);
}

void ULockonComponent::ToggleLockon(float Radius)
{
	if (IsValid(CurrentTargetActor))
	{
		EndLockon();
	}
	else
	{
		StartLockon();
	}
}