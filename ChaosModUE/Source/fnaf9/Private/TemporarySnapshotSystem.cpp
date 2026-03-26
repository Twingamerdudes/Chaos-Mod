#include "TemporarySnapshotSystem.h"

void UTemporarySnapshotSystem::SetUseSnapshot(bool UseSnapshot) {
}

void UTemporarySnapshotSystem::SetInitializeOnPost(bool Initialize) {
}

void UTemporarySnapshotSystem::SetAlternativeTranform(FTransform AltTranform) {
}

bool UTemporarySnapshotSystem::GetUseSnapshot() {
    return false;
}

FDLCSaveSnapshotData UTemporarySnapshotSystem::GetTemporaryGameStateSnapshot() {
    return FDLCSaveSnapshotData{};
}

void UTemporarySnapshotSystem::CreateTemporaryGameStateSnapshot() {
}

UTemporarySnapshotSystem::UTemporarySnapshotSystem() {
}

