#pragma once

#include "CoreMinimal.h"
#include "FTraceSockets.generated.h"

USTRUCT(BlueprintType)
struct ASHENVANGUARD_API FTraceSockets
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere)
	FName Start;

	UPROPERTY(EditAnywhere)
	FName End;

	UPROPERTY(EditAnywhere)
	FName Rotation;
};