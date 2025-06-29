#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LookAtPlayerComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASHENVANGUARD_API ULookAtPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float Speed{ 400.0f };

public:	
	ULookAtPlayerComponent();

	UPROPERTY(VisibleAnywhere)
	bool bcanRotate{ false };

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};