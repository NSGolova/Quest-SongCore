#pragma once

#include "custom-types/shared/macros.hpp"
#include "GlobalNamespace/CustomBeatmapLevelCollection.hpp"

DECLARE_CLASS_CODEGEN(SongCore::SongLoader, CustomBeatmapLevelCollection, GlobalNamespace::CustomBeatmapLevelCollection,
    DECLARE_CTOR(ctor);

    public:
        static CustomBeatmapLevelCollection* New();
)