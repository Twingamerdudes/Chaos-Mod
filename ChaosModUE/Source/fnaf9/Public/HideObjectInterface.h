#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHideObjectType.h"
#include "HideObjectInterface.generated.h"

class AActor;
class ACharacter;
class APawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UHideObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IHideObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSearch(APawn* SearcherPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayBotSearchSound(AActor* SearcherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerLeave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerHide(ACharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnterExitPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSearchLocation(FVector& Location, FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EHideObjectType GetHideType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHideLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ACharacter* GetHiddenPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndSearch();
    
};

