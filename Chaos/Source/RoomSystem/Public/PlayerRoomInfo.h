#pragma once
#include "CoreMinimal.h"
#include "PlayerRoomInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlayerRoomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastVisitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTotalTimeSpent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTimeSpentRecent;
    
    ROOMSYSTEM_API FPlayerRoomInfo();
};

