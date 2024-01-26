#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SaveHandlerInterface.generated.h"

class UFNAFSaveData;

UINTERFACE(Blueprintable)
class USaveHandlerInterface : public UInterface {
    GENERATED_BODY()
};

class ISaveHandlerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostGameLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStoreGameData(UFNAFSaveData* SaveDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameDataLoaded(UFNAFSaveData* SaveDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCheckpointSave(UFNAFSaveData* SaveDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCheckpointLoad(UFNAFSaveData* SaveDataObject);
    
};

