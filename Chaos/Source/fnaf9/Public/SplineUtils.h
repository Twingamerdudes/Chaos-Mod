#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SplineUtils.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class FNAF9_API USplineUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USplineUtils();
private:
    UFUNCTION(BlueprintCallable)
    static float GetApproxDistanceClosestToWorldLocation(FVector Pos_WS, const USplineComponent* Spline);
    
};

