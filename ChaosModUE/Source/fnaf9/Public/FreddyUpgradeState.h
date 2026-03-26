#pragma once
#include "CoreMinimal.h"
#include "FreddyUpgradeState.generated.h"

USTRUCT(BlueprintType)
struct FFreddyUpgradeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPowerUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMontyClaws;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasChicaBeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasRoxyEyes;
    
    FNAF9_API FFreddyUpgradeState();
};

