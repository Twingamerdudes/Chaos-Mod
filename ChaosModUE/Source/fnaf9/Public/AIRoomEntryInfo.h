#pragma once
#include "CoreMinimal.h"
#include "AIRoomEntryInfo.generated.h"

class APawn;
class ARoomAreaBase;

USTRUCT(BlueprintType)
struct FAIRoomEntryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* AIPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomAreaBase* RoomEntering;
    
    FNAF9_API FAIRoomEntryInfo();
};

