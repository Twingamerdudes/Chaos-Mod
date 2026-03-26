#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionMarker.generated.h"

UCLASS(Blueprintable)
class FNAF9_API AMissionMarker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionStateIndex;
    
public:
    AMissionMarker();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMissionName() const;
    
};

