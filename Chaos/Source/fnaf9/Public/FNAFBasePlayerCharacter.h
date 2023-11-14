#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "EPlayerPawnType.h"
#include "FNAFPawnTypeProviderInterface.h"
#include "LevelStreamViewpointProvider.h"
#include "FNAFBasePlayerCharacter.generated.h"

UCLASS(Blueprintable)
class FNAF9_API AFNAFBasePlayerCharacter : public ACharacter, public IFNAFPawnTypeProviderInterface, public ILevelStreamViewpointProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerPawnType PawnType;
    
public:
    AFNAFBasePlayerCharacter();
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerWithCameraLocation(const FVector& CameraWorldLocation, float Yaw);
    
    UFUNCTION(BlueprintCallable)
    void TeleportPlayer(const FVector& WorldLocation, float Yaw);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnKillZLevelsLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPlayerPawnType GetPlayerPawnType() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLastSavedLocationAndRotation(FVector& LastSavedLocation, FRotator& LastSavedRotation);
    
    
    // Fix for true pure virtual functions not being implemented
};

