#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PathPointProvider.generated.h"

UINTERFACE(Blueprintable)
class FNAF9_API UPathPointProvider : public UInterface {
    GENERATED_BODY()
};

class FNAF9_API IPathPointProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPointType(int32 PointIndex, int32 PointType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPointLocation(int32 PointIndex, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemovePointConnection(int32 PointIndex, int32 PointToDisconnectIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemovePoint(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetPointType(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<int32> GetPointsConnectedTo(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetPointLocation(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLinearColor GetPointColor(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNumberOfPathPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FText> GetAvailablePointTypes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPointConnection(int32 PointIndex, int32 PointToConnectIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 AddPoint(const FVector& Location);
    
};

