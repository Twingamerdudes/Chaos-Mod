#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RaytracingUtils.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FNAF9_API URaytracingUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URaytracingUtils();
private:
    UFUNCTION(BlueprintCallable)
    static void SetSkeletalMeshRenderInRaytracing(bool bRenderInRaytracing, USkeletalMeshComponent* MeshComponent);
    
};

