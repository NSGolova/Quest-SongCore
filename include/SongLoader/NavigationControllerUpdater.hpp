#pragma once

#include "custom-types/shared/macros.hpp"
#include "System/Object.hpp"
#include "System/IDisposable.hpp"
#include "Zenject/IInitializable.hpp"
#include "GlobalNamespace/LevelFilteringNavigationController.hpp"
#include "SongLoader/RuntimeSongLoader.hpp"
#include <vector>

DECLARE_CLASS_CODEGEN_INTERFACES(SongCore::SongLoader, NavigationControllerUpdater, System::Object, std::vector<Il2CppClass*>({classof(System::IDisposable*), classof(Zenject::IInitializable*)}),
    DECLARE_OVERRIDE_METHOD_MATCH(void, Initialize, &Zenject::IInitializable::Initialize);
    DECLARE_OVERRIDE_METHOD_MATCH(void, Dispose, &System::IDisposable::Dispose);

    DECLARE_INSTANCE_FIELD_PRIVATE(RuntimeSongLoader*, _runtimeSongLoader);
    DECLARE_INSTANCE_FIELD_PRIVATE(GlobalNamespace::LevelFilteringNavigationController*, _levelFilteringNavigationController);

    DECLARE_CTOR(ctor, RuntimeSongLoader* runtimeSongLoader, GlobalNamespace::LevelFilteringNavigationController* levelFilteringNavigationController);

    private:
        void CustomLevelPacksRefreshed(SongCoreCustomBeatmapLevelPackCollection* collection);
)
