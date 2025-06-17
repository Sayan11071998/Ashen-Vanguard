#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LockonComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASHENVANGUARD_API ULockonComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	ULockonComponent();

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void StartLockon();

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};