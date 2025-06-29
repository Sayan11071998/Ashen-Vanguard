#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyProjectile.generated.h"

UCLASS()
class ASHENVANGUARD_API AEnemyProjectile : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class UParticleSystem* HitTemplate;

	UPROPERTY(EditAnyWhere)
	float Damage{ 10.0f };
	
public:	
	AEnemyProjectile();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void HandleBeginOverlap(AActor* OtherActor);

	UFUNCTION()
	void DestroyProjectile();
};