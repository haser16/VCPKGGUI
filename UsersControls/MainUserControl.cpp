#include "pch.h"
#include "MainUserControl.h"
#include "string"
#include "msclr/marshal_cppstd.h"
#include "nlohmann/json.hpp"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

// std::string GetProjectDirectory()
//{
//	std::string filePath = __FILE__;
//
//	size_t lastSlashPos = filePath.find_last_of("/\\");
//
//	if (lastSlashPos != std::string::npos)
//	{
//		return filePath.substr(0, lastSlashPos).c_str();
//	}
// }

System::Void UsersControls::MainUserControl::pictureBox1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    System::Diagnostics::Process ^ Proces = gcnew System::Diagnostics::Process();
    Proces->Start("https://vcpkg.io/en/packages");
}

System::Void UsersControls::MainUserControl::InstallButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    auto File = System::IO::File::OpenText("Settings/pathtovcpkg.json");
    std::string VCPKG;

    while (!File->EndOfStream)
    {
        System::String ^ Line = File->ReadLine();
        nlohmann::json j = nlohmann::json::parse(msclr::interop::marshal_as<std::string>(Line));
        VCPKG = j["path"];
    }
    File->Close();

    std::string Command = "pushd " + VCPKG + " & " + ".\\vcpkg install " + msclr::interop::marshal_as<std::string>(TextBoxPackage->Text);
    msclr::interop::marshal_as<std::string>(TextBoxPackage->Text);
    int Exit = system(Command.c_str());
    if (Exit > 0)
    {
        MessageBox::Show("Something wents wrong!");
    }
    else if (!Exit)
    {
        StreamWriter ^ writer = gcnew StreamWriter("Settings/Libs.txt", true);
        writer->WriteLine(TextBoxPackage->Text);
        writer->Close();
    }
}
