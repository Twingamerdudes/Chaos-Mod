#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConditionCheckInterface.h"
#include "EMissionStatus.h"
#include "FNAFMissionInfo.h"
#include "FNAFMissionState.h"
#include "OnMissionStateConditionMetDelegateDelegate.h"
#include "MissionStateCondition.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UMissionStateCondition : public UActorComponent, public IConditionCheckInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStateConditionMetDelegate OnMissionConditionMet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStateConditionMetDelegate OnMissionConditionAlreadyMet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStateConditionMetDelegate OnMissionConditionUnMet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionStatus MissionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMissionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMissionState;
    
    UMissionStateCondition();
private:
    UFUNCTION(BlueprintCallable)
    void OnMissionUpdated(const FName& InMissionName, const FFNAFMissionState& MissionState, const FFNAFMissionInfo& MissionInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMetConditions() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

