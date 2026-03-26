#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DoorEntryRequirements.h"
#include "EConditionFailReason.h"
#include "EDoorSide.h"
#include "OnDoorLockStateChangedDelegate.h"
#include "OnInitialOpenDelegate.h"
#include "OnOpenCloseDoorDelegate.h"
#include "OnPawnEnteredDoorDelegate.h"
#include "OnPawnExitedDoorDelegate.h"
#include "PawnInDoorwayInfo.h"
#include "DoorComponent.generated.h"

class AActor;
class AFNAFBasePlayerCharacter;
class APawn;
class UDoorComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UDoorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorEntryRequirements NormalDoorEntryRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorEntryRequirements ChowdaDoorEntryRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnEnteredDoor OnPawnEnteredDoor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnExitedDoor OnPawnExitedDoor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialOpen OnInitialOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenCloseDoor OnOpenDoor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenCloseDoor OnCloseDoor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorLockStateChanged OnPlayerLockStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorLockStateChanged OnAILockStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockedForAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockedForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APawn*, FPawnInDoorwayInfo> PawnsInDoorway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PlayerBlocker;
    
public:
    UDoorComponent();
    UFUNCTION(BlueprintCallable)
    void SetSecurityLevel(int32 NewSecurityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerBlocker(UPrimitiveComponent* InPlayerBlocker);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedForPlayer(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedForAI(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetAutomaticDoorEnableForPlayer(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutomaticDoorEnableForAI(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void PawnExitedDoor(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void PawnEnteredDoor(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedForPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedForAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasMetConditions(AFNAFBasePlayerCharacter* BasePlayerCharacter, bool& bConditionsMet, EConditionFailReason& FailReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDoorInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetPawnsInDoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAutomaticDoorEnabledForPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAutomaticDoorEnabledForAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDoorSide GetDoorSideFromLocation(const FVector& WorldLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDoorSide GetDoorSideFromActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDoorEntryRequirements GetCurrentRequirements() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceOpen();
    
    UFUNCTION(BlueprintCallable)
    void ForceClose();
    
    UFUNCTION(BlueprintCallable)
    void CopyConditions(UDoorComponent* OtherDoorComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanPawnOpenDoor(APawn* Pawn, bool& bOutConditionsMet, EConditionFailReason& OutFailReason) const;
    
};

