#include "Combat/TraceComponent.h"

UTraceComponent::UTraceComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTraceComponent::BeginPlay()
{
	Super::BeginPlay();

	SkeletalComp = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
}

void UTraceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector StartSocketLocation{ SkeletalComp->GetSocketLocation(Start) };
	FVector EndSocketLocation{ SkeletalComp->GetSocketLocation(End) };
	FQuat ShapeRotation{ SkeletalComp->GetSocketQuaternion(Rotation) };

	TArray<FHitResult> OutResults;
	double WeaponDistance{ FVector::Distance(StartSocketLocation, EndSocketLocation) };
	FVector BoxHalfExtent{ BoxCollisionLength, BoxCollisionLength, WeaponDistance };
	BoxHalfExtent /= 2;
	FCollisionShape Box{ FCollisionShape::MakeBox(BoxHalfExtent) };
	FCollisionQueryParams IgnoreParams{
		FName {TEXT("Ignore Params")},
		false,
		GetOwner()
	};

	bool bHasFoundTargets{ GetWorld()->SweepMultiByChannel(
		OutResults,
		StartSocketLocation,
		EndSocketLocation,
		ShapeRotation,
		ECollisionChannel::ECC_GameTraceChannel1,
		Box,
		IgnoreParams
	) };

	if (bHasFoundTargets)
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("Target Found")
		);
	}
}