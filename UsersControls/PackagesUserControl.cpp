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
        Label->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18.25F));
        Label->ForeColor = System::Drawing::Color::OrangeRed;
        Label->Text = Line;
        Label->Size = System::Drawing::Size(230, 30);
        Label->Location = System::Drawing::Point(3, yOffset);
        ListOfLibs->Controls->Add(Label);

        System::Windows::Forms::Button ^ Button = gcnew System::Windows::Forms::Button();
        Button->FlatAppearance->BorderColor = System::Drawing::Color::IndianRed;
        Button->FlatAppearance->MouseDownBackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
        Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
        Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F));
        Button->Image = Image::FromFile("../Images/btn-more.png");
        Button->Location = System::Drawing::Point(3, yOffset);
        Button->Name = L"button1";
        Button->Size = System::Drawing::Size(20, 23);
        Button->TabIndex = 0;
        Button->UseVisualStyleBackColor = true;
        ListOfLibs->Controls->Add(Button);

        yOffset += 30;
    }
    File->Close();
}
