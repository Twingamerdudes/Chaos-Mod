#pragma once
#include "CoreMinimal.h"
#include "AnimatronicState.generated.h"

USTRUCT(BlueprintType)
struct FAnimatronicState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsShattered;
    
    FNAF9_API FAnimatronicState();
};

