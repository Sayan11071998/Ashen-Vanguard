#include "Combat/TraceComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Interfaces/Fighter.h"

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

	if (bDebugMode)
	{
		FVector CenterPoint{ UKismetMathLibrary::VLerp(StartSocketLocation, EndSocketLocation, 0.5) };
		
		UKismetSystemLibrary::DrawDebugBox(
			GetWorld(),
			CenterPoint,
			Box.GetExtent(),
			bHasFoundTargets ? FLinearColor::Green : FLinearColor::Red,
			ShapeRotation.Rotator(),
			1.0f,
			2.0f
		);
	}

	if (OutResults.Num() == 0) { return; }

	float CharacterDamage{ 0.0f };

	IFighter* FighterRef{ Cast<IFighter>(GetOwner()) };

	if (FighterRef)
	{
		CharacterDamage = FighterRef->GetDamage();
	}

	UE_LOG(LogTemp, Warning, TEXT("Damage: %f"), CharacterDamage);
}