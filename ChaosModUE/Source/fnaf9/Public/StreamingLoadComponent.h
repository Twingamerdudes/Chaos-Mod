#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnLevelStreamingFinishedDelegate.h"
#include "StreamingLoadComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UStreamingLoadComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelStreamingFinished OnLevelStreamingFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurnVolumesOnAfterLoad;
    
public:
    UStreamingLoadComponent();
    UFUNCTION(BlueprintCallable)
    void StartAsyncLoadForLocation(const FVector& WorldLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamingLevels() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAllStreamingVolumes(bool bEnable);
    
};

