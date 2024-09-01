#include "pch.h"
#include "SettingsUserControl.h"
#include "nlohmann/json.hpp"
#include "msclr/marshal_cppstd.h"
#include "string"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

System::Void UsersControls::SettingsUserControl::SettingsUserControl_Load(System::Object ^ sender, System::EventArgs ^ e)
{
    System::String ^ Path = gcnew String("Settings/pathtovcpkg.json");
    if (File::Exists(Path))
    {
        auto File = System::IO::File::OpenText("Settings/pathtovcpkg.json");

        while (!File->EndOfStream)
        {
            System::String ^ Line = File->ReadLine();
            nlohmann::json j = nlohmann::json::parse(msclr::interop::marshal_as<std::string>(Line));
            std::string VCPKG = j["path"];
            String ^ PathVCPKG = gcnew String(VCPKG.c_str());
            TextBoxPackage->Text = PathVCPKG;
        }
        File->Close();
    }
    RadioEn->Checked = true;
}

System::Void UsersControls::SettingsUserControl::ButtonShowExplorer_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    FolderBrowserDialog ^ Dialog = gcnew FolderBrowserDialog();
    Dialog->ShowDialog();
    TextBoxPackage->Text = Dialog->SelectedPath;
}

System::Void UsersControls::SettingsUserControl::ConfirmButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    nlohmann::json j;
    j["path"] = msclr::interop::marshal_as<std::string>(TextBoxPackage->Text);
    StreamWriter ^ writer = gcnew StreamWriter("Settings/pathtovcpkg.json");
    String ^ Path = gcnew String(j.dump().c_str());
    writer->WriteLine(Path);
    writer->Close();
    this->Visible = false;
}
