#pragma once
#include "CoreMinimal.h"
#include "GridNodePositionPuzzle.generated.h"

USTRUCT(BlueprintType)
struct FGridNodePositionPuzzle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Col;
    
    FNAF9_API FGridNodePositionPuzzle();
};

