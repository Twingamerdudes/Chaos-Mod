#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELevelArea.h"
#include "EMissionStatus.h"
#include "FNAFMissionInfo.h"
#include "FNAFMissionState.h"
#include "FNAFMissionTaskInfo.h"
#include "OnMissionUpdatedDelegateDelegate.h"
#include "SaveHandlerInterface.h"
#include "FNAFMissionSystem.generated.h"

class AMissionMarker;
class UDataTable;

UCLASS(Blueprintable)
class FNAF9_API UFNAFMissionSystem : public UGameInstanceSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionUpdatedDelegate OnNewActiveMissionAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionUpdatedDelegate OnActiveMissionRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionUpdatedDelegate OnActiveMissionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionUpdatedDelegate OnMissionCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionTaskDataTable;
    
public:
    UFNAFMissionSystem();
    UFUNCTION(BlueprintCallable)
    void SetupNewGame();
    
    UFUNCTION(BlueprintCallable)
    void SetMissionInfoState(const FName& MissionName, int32 InfoState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveMission(const FName& MissionName);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMissionUpdate(const FName& MissionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidMission(const FName& MissionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionActiveOrCompleted(const FName& MissionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSurvivalMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletedMission(const FName& MissionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveMission(const FName& MissionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFNAFMissionState> GetTrackedMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTaskTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTaskInfo(const FName& TaskName, FFNAFMissionTaskInfo& OutMissionTaskInfo, bool& OutValidTask) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTaskByIndex(const FName& MissionName, int32 TaskIndex, FFNAFMissionTaskInfo& OutMissionTaskInfo, bool& OutValidTask) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetMissionTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionState(const FName& MissionName, FFNAFMissionState& OutMissionState, bool& OutValidMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionInfo(const FName& MissionName, FFNAFMissionInfo& OutMissionInfo, bool& OutValidMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionFromTask(const FName& TaskName, FFNAFMissionInfo& OutMissionInfo, bool& OutValidMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionFromMessage(const FName& MessageName, FName& OutMissionName, int32& OutMissionStateIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMissionMarker*> GetMarkersForMission(const FName& MissionName, int32 MissionStateIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFNAFMissionState> GetCompletedMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAreaMarkerCounts(TMap<ELevelArea, int32>& MapOfCounts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllMissionNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMissionMarker*> GetAllMissionMarkers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMissionMarker*> GetAllCurrentMarkers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFNAFMissionState> GetActiveMissions() const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteMissionTask(const FName& MissionName, int32 TaskIndex);
    
    UFUNCTION(BlueprintCallable)
    void CompleteMission(const FName& MissionName);
    
    UFUNCTION(BlueprintCallable)
    void BranchMissionStatus(const FName& MissionName, EMissionStatus& Status);
    
    UFUNCTION(BlueprintCallable)
    void AddActiveMission(const FName& MissionName);
    
    
    // Fix for true pure virtual functions not being implemented
};

