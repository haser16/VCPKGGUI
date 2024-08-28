#include "pch.h"
#include "PackagesUserControl.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

System::Void UsersControls::PackagesUserControl::PackagesUserControl_Load(System::Object ^ sender, System::EventArgs ^ e)
{
    int yOffset = 24;
    if (!File::Exists("Settings/Libs.txt"))
    {
        File::Create("Settings/Libs.txt")->Close();
    }

    auto File = System::IO::File::OpenText("Settings/Libs.txt");

    while (!File->EndOfStream)
    {
        System::String ^ Line = File->ReadLine();

        if (Line == nullptr || Line->Trim()->Length == 0)
        {
            continue;
        }

        System::Windows::Forms::Label ^ Label = gcnew System::Windows::Forms::Label();
        Label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        Label->Text = Line;
        Label->Size = System::Drawing::Size(250, 24);
        Label->Location = System::Drawing::Point(3, yOffset);
        ListOfLibs->Controls->Add(Label);

        yOffset += 30;
    }
    File->Close();
}
