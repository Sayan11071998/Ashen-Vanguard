#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MainPlayer.generated.h"

UINTERFACE(MinimalAPI)
class UMainPlayer : public UInterface
{
	GENERATED_BODY()
};

class ASHENVANGUARD_API IMainPlayer
{
	GENERATED_BODY()
public:
	virtual bool HasEnoughStamina(float Cost) { return true; }
};