#pragma once
#include "CoreMinimal.h"
#include "POIIndex.generated.h"

class ARoomAreaBase;

USTRUCT(BlueprintType)
struct FPOIIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomAreaBase* Room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    ROOMSYSTEM_API FPOIIndex();
};

