#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UVEmitterInterface.generated.h"

UINTERFACE(Blueprintable)
class UUVEmitterInterface : public UInterface {
    GENERATED_BODY()
};

class IUVEmitterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetUVLight(const FVector& InTargetLocation, const bool InOverridePrecision, const float& InPrecisionOverrideValue, FVector& OutLocation, float& OutStrength);
    
};

