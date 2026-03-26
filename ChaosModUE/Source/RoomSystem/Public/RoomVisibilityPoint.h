#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomVisibilityPoint.generated.h"

USTRUCT(BlueprintType)
struct FRoomVisibilityPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IndexToVisiblePoints;
    
    ROOMSYSTEM_API FRoomVisibilityPoint();
};

