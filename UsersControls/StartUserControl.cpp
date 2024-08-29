#include "pch.h"
#include "StartUserControl.h"
#include <iostream>
#include <string>
#include "fstream"
#include "stdio.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;


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
    }
}

System::Void UsersControls::StartUserControl::ButtonInstallVcpkg_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    LoadingGif->Visible = true;
    WaitLabel->Visible = true;
    Thread ^ t = gcnew Thread(gcnew ParameterizedThreadStart(this, &StartUserControl::ThrInstallVcpkg));
    t->Start();
    
}