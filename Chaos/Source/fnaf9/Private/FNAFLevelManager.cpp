#include "FNAFLevelManager.h"

void UFNAFLevelManager::UnregisterStreamingSource(USceneComponent* SceneComponent) {
}

void UFNAFLevelManager::UnregisterPawnStreamingSource(USceneComponent* SceneComponent) {
}

void UFNAFLevelManager::SetPlayerPawn(APawn* PlayerPawn) {
}

void UFNAFLevelManager::SetLevelStreamingEnable(bool bEnable) {
}

void UFNAFLevelManager::RemoveLevelsFromStreamingSource(const USceneComponent* StreamingSource) {
}

void UFNAFLevelManager::RemoveLevelArray(const TArray<ULevelStreaming*>& Levels) {
}

void UFNAFLevelManager::RemoveLevel(ULevelStreaming* LevelToUnload) {
}

void UFNAFLevelManager::RemoveAllLevels() {
}

void UFNAFLevelManager::RegisterStreamingSource(USceneComponent* SceneComponent) {
}

void UFNAFLevelManager::RegisterPawnStreamingSource(USceneComponent* SceneComponent) {
}

bool UFNAFLevelManager::IsLevelStreamingEnable() {
    return false;
}

TArray<USceneComponent*> UFNAFLevelManager::GetStreamingSources() const {
    return TArray<USceneComponent*>();
}

TArray<FName> UFNAFLevelManager::GetLevelNamesForComponent(const USceneComponent* SceneComponent) const {
    return TArray<FName>();
}

void UFNAFLevelManager::AddLevelToLoad(ULevelStreaming* LevelToLoad) {
}

void UFNAFLevelManager::AddLevelsFromStreamingSourceToLoad(const USceneComponent* StreamingSource) {
}

void UFNAFLevelManager::AddLevelArrayToLoad(const TArray<ULevelStreaming*>& LevelsToLoad) {
}

UFNAFLevelManager::UFNAFLevelManager() {
}

