#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "EMMAnimCategory.h"
#include "OnMMDetectedDelegate.h"
#include "MoonmanSpawnPoint.generated.h"

class AMoonmanSpawnPoint;
class ATriggerBox;
class UAnimSequence;
class UBillboardComponent;
class UVisualSourceComponent;

UCLASS(Blueprintable)
class FNAF9_API AMoonmanSpawnPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisualSourceComponent* VisualSource;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMMDetected OnMMDetected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool b_CanSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMMAnimCategory MMAnimCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> MMAnimSeq_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFollowPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAimHeadAtPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPopUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSingleUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBox*> MMColliderActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float probabilityOfSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float originalProbabilityOfSpawn;
    
public:
    AMoonmanSpawnPoint();
    UFUNCTION(BlueprintCallable)
    void SetSpawnProbability(float tempProbability);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldFollowPlayer(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetMMAnimCategory(const EMMAnimCategory In);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTriggered(bool isTriggered);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStationary(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSpawned(bool IsSpawned);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSingleUse(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMMDetected(bool IsSkeletonDetected);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAnimLoop(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSpawnedOnce(bool HasSpawnedOnce);
    
    UFUNCTION(BlueprintCallable)
    void SetHasLookedOnce(bool HasLookedOnce);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSpawn(bool canSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SetCanPopUp(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetAimHeadAtPlayer(bool In);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSetAIDisplay(bool enable);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetSpawnProbability();
    
    UFUNCTION(BlueprintCallable)
    float GetOriginalProbability();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAnimSequence*> GetMMAnimSeq_Array() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMMAnimCategory GetMMAnimCategory() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsTriggered();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsStationary();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSpawned();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSingleUse();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsMMDetected();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFollowPlayerTrue();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAnimLoop();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasSpawnedOnce();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasLookedOnce();
    
    UFUNCTION(BlueprintCallable)
    bool GetCanSpawn();
    
    UFUNCTION(BlueprintCallable)
    bool GetCanPopUp();
    
    UFUNCTION(BlueprintCallable)
    bool GetAimHeadAtPlayer();
    
    UFUNCTION(BlueprintCallable)
    void DetectTheSpawnPoint(AMoonmanSpawnPoint* passed_HitActor, bool passed_bVisible);
    
};

