#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FNAFAchievementUtils.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UFNAFAchievementUtils : public UObject {
    GENERATED_BODY()
public:
    UFNAFAchievementUtils();
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllAchievements();
    
};

