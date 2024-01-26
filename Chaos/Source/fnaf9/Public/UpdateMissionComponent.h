#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UpdateMissionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UUpdateMissionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionStateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSave;
    
public:
    UUpdateMissionComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMetCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMissionName() const;
    
};

