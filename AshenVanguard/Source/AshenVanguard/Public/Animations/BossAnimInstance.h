#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BossAnimInstance.generated.h"

UCLASS()
class ASHENVANGUARD_API UBossAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float currentSpeed{ 0.0f };

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCharging{ false };
};