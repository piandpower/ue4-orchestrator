#pragma once

#include "Core.h"
#include "Engine.h"
#include "Tickable.h"

// UE4
#include "Json.h"
#include "LevelEditor.h"
#include "IPlatformFilePak.h"
#include "FileManagerGeneric.h"
#include "StreamingNetworkPlatformFile.h"
#include "Runtime/AssetRegistry/Public/AssetRegistryModule.h"

#if WITH_EDITOR
#  include "Editor.h"
#  include "Editor/LevelEditor/Public/ILevelViewport.h"
#  include "Editor/LevelEditor/Public/LevelEditorActions.h"
#  include "Editor/UnrealEd/Public/LevelEditorViewport.h"
#endif

////////////////////////////////////////////////////////////////////////////////

typedef struct mg_str               mg_str_t;
typedef struct http_message         http_message_t;
typedef FLevelEditorModule          FLvlEditor;
typedef FModuleManager              FManager;
typedef FActorComponentTickFunction FTickFn;

////////////////////////////////////////////////////////////////////////////////

#define T                   TEXT
#define LOG(fmt, ...)       UE_LOG(LogUE4Orc, Log, TEXT(fmt), __VA_ARGS__)
