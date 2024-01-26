#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECameraAngleFlags.h"
#include "CameraHelperFunctions.generated.h"

class UObject;

UCLASS(Blueprintable)
class FNAF9_API UCameraHelperFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraHelperFunctions();
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationInCameraView(const UObject* WorldContextObject, const FVector& Location, ECameraAngleFlags CameraAngles, float& OutHorizontalAngle, float& OutVerticalAngle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLocationAnglesFromCamera(const UObject* WorldContextObject, const FVector& Location, float& OutHorizontalAngle, float& OutVerticalAngle);
    
};

