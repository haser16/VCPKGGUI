#pragma once

#include <fstream>
#include "string"
#include "nlohmann/json.hpp"

std::string GetProjectDirectory();

void SavePathToVcpkgStandart()
{
    nlohmann::json j;
    j["path"] = GetProjectDirectory() + "/vcpkg/";
    std::ofstream Writer("Settings/pathtovcpkg.json");
    Writer << j.dump();
    Writer.close();
}

std::string GetProjectDirectory()
{
    std::string filePath = __FILE__;

    size_t LastSlashPos = filePath.find_last_of("/\\");

    if (LastSlashPos != std::string::npos)
    {
        return filePath.substr(0, LastSlashPos).c_str();
    }
}
