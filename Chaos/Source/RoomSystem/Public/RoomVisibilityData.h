#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RoomVisibilityPoint.h"
#include "RoomVisibilityData.generated.h"

UCLASS(Blueprintable)
class ROOMSYSTEM_API URoomVisibilityData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomVisibilityPoint> RoomVisibilityPoints;
    
    URoomVisibilityData();
};

