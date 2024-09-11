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
using namespace nlohmann;
using namespace msclr::interop;

System::Void UsersControls::SettingsUserControl::SettingsUserControl_Load(System::Object ^ sender, System::EventArgs ^ e)
{
    String ^ Path = gcnew String("Settings/pathtovcpkg.json");
    if (File::Exists(Path))
    {
        auto File = IO::File::OpenText("Settings/pathtovcpkg.json");
        String ^ Text = File->ReadToEnd();
        File->Close();

        json j = nlohmann::json::parse(marshal_as<std::string>(Text));

        std::string VCPKG = j["path"];
        String ^ PathVCPKG = gcnew String(VCPKG.c_str());
        TextBoxPackage->Text = PathVCPKG;
        
        std::string Language = j["language"];
        if (Language == "en-EN")
        {
            RadioEn->Checked = true;
        }
        else if (Language == "ru-RU")
        {
            RadioRu->Checked = true;
        }
    }
}

System::Void UsersControls::SettingsUserControl::ButtonShowExplorer_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    FolderBrowserDialog ^ Dialog = gcnew FolderBrowserDialog();
    Dialog->ShowDialog();
    TextBoxPackage->Text = Dialog->SelectedPath;
}

System::Void UsersControls::SettingsUserControl::ConfirmButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    json j;
    j["path"] = marshal_as<std::string>(TextBoxPackage->Text);
    j["language"] = RadioRu->Checked ? "ru-RU" : "en-EN";
    StreamWriter ^ writer = gcnew StreamWriter("Settings/pathtovcpkg.json");
    String ^ Path = gcnew String(j.dump().c_str());
    writer->WriteLine(Path);
    writer->Close();
    this->Visible = false;
}
