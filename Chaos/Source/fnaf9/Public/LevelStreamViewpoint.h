#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OnViewpointLevelsLoadedDelegate.h"
#include "LevelStreamViewpoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API ULevelStreamViewpoint : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnViewpointLevelsLoaded OnLevelsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStreamingEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStreamOnActivePawn;
    
    ULevelStreamViewpoint();
    UFUNCTION(BlueprintCallable)
    void SetStreamingEnable(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelManagerUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetStreamingLevelNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyLevelsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllLevelsLoaded() const;
    
};

