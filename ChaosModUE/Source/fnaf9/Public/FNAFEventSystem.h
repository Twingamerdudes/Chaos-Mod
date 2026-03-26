#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SaveHandlerInterface.h"
#include "FNAFEventSystem.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class FNAF9_API UFNAFEventSystem : public UGameInstanceSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UFNAFEventSystem();
    UFUNCTION(BlueprintCallable)
    void UnpauseEventSystem();
    
    UFUNCTION(BlueprintCallable)
    void StoreEventTriggered(FName EventTag);
    
    UFUNCTION(BlueprintCallable)
    void StopEventTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartEventTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetEventTimeSeconds(float MinTimeBetweenEvents, float MaxTimeBetweenEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetEventActorWeight(float NewWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAudioComponent(UAudioComponent* EventSoundCue);
    
    UFUNCTION(BlueprintCallable)
    void PauseEventSystem();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAudioFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEventBeenTriggered(FName EventTag) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

