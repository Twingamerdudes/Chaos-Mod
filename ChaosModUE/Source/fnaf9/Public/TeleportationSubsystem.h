#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "NormalGlichSwapDelegate.h"
#include "SaveHandlerInterface.h"
#include "SwapFailedDelegate.h"
#include "Templates/SubclassOf.h"
#include "TeleportationSubsystem.generated.h"

class ANavigationData;
class APawn;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class FNAF9_API UTeleportationSubsystem : public UWorldSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTeleporting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInATeleportZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavigationData* NavData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNormalGlichSwap NormalGlitchSwapDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwapFailed SwapFailedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerSaveInNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIInNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AICapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CassieCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCoolDownComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavMeshBlocked;
    
public:
    UTeleportationSubsystem();
    UFUNCTION(BlueprintCallable)
    void TeleportAI(APawn* AIPawn, float CapsuleHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSaveInNormal(bool PlayerSaveInNormal);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInNormalForChapterReplay(bool PlayerInNormal);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInNormal(bool PlayerInNormal);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerInNormal();
    
    UFUNCTION(BlueprintCallable)
    float GetTeleportationDistance();
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerSaveInNormal();
    
    UFUNCTION(BlueprintCallable)
    APawn* GetCurrentAIPawn();
    
    UFUNCTION(BlueprintCallable)
    void ForceTeleport();
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfPlayerCanTeleport();
    
    UFUNCTION(BlueprintCallable)
    bool CanTeleport();
    
    
    // Fix for true pure virtual functions not being implemented
};

