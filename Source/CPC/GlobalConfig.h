#pragma once

#include <string>
#include "Util/Misc.h"

struct FGlobalConfig
{
	bool				bEnableAudio;
	bool				bShowScanLineIndicator = false;
	bool				bShowOpcodeValues = false;
	ENumberDisplayMode	NumberDisplayMode = ENumberDisplayMode::HexAitch;
	std::string			LastGame;

	std::string			WorkspaceRoot = "./";
	std::string			SnapshotFolder = "./Games/";
	//std::string			PokesFolder = "./Pokes/";
};

FGlobalConfig& GetGlobalConfig();
bool LoadGlobalConfig(const char* fileName);
bool SaveGlobalConfig(const char* fileName);
