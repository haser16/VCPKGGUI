#include "pch.h"
#include "StartUserControl.h"
#include <iostream>
#include <string>
#include "fstream"
#include "stdio.h"
#include "nlohmann/json.hpp"
#include "msclr/marshal_cppstd.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

std::string GetProjectDirectory()
{
    std::string filePath = __FILE__;

    size_t lastSlashPos = filePath.find_last_of("/\\");

    if (lastSlashPos != std::string::npos)
    {
        return filePath.substr(0, lastSlashPos).c_str();
    }
}

System::Void UsersControls::StartUserControl::ThrInstallVcpkg(Object ^ data)
{
    int Answer = system("git --version");

    if (Answer > 0)
    {
        MessageBox::Show("Please, install git on this machine!");
    }
    else if (!Answer)
    {
        system("git clone https://github.com/microsoft/vcpkg.git");
        system("vcpkg\\bootstrap-vcpkg.bat");
        std::string IntegrateInstall = "cd vcpkg & vcpkg integrate install > ../requirements.txt";
        system(IntegrateInstall.c_str());

        std::ifstream Requirements("requirements.txt");
        std::ofstream CmakeFile("vcpkg/CMAKE.txt");
        char ch;
        bool bActive = false;
        while (Requirements.get(ch))
        {
            if (bActive && ch == '"')
            {
                CmakeFile << ch;
                bActive = false;
                break;
            }
            else if (ch == '"')
            {
                bActive = true;
            }
            if (bActive)
            {
                CmakeFile << ch;
            }
        }
        Requirements.close();
        CmakeFile.close();
        File::Delete("requirements.txt");

        LoadingGif->Visible = false;
        WaitLabel->Text = "Success";
        WaitLabel->Location = System::Drawing::Point(330, 365);

        nlohmann::json j;
        j["path"] = GetProjectDirectory() + "\\vcpkg\\";
        j["language"] = "en-EN";
        StreamWriter ^ writer = gcnew StreamWriter("Settings/pathtovcpkg.json");
        String ^ Path = gcnew String(j.dump().c_str());
        writer->WriteLine(Path);
        writer->Close();
    }
}

System::Void UsersControls::StartUserControl::ButtonInstallVcpkg_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    LoadingGif->Visible = true;
    WaitLabel->Visible = true;
    Thread ^ t = gcnew Thread(gcnew ParameterizedThreadStart(this, &StartUserControl::ThrInstallVcpkg));
    t->Start();
}