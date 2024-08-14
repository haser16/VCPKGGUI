#include "pch.h"
#include "Form1.h"
#include "string"
#include "msclr/marshal_cppstd.h"

//std::string GetProjectDirectory();
//
//System::Void CppCLRWinFormsProject::Form1::Install_Click(System::Object^ sender, System::EventArgs^ e)
//{
//	std::string Command = "pushd " + msclr::interop::marshal_as<std::string>(TextPathToVCPKG->Text) + " & " + ".\\vcpkg install " + msclr::interop::marshal_as<std::string>(TextBox_Package->Text);
//	system(Command.c_str());
//}

//System::Void CppCLRWinFormsProject::Form1::ChoosePathButton_DoubleClick(System::Object^ sender, System::EventArgs^ e)
//{
//	FolderBrowserDialog^ Dialog = gcnew FolderBrowserDialog();
//	Dialog->ShowDialog();
//	TextPathToVCPKG->Text = Dialog->SelectedPath;
//}

//std::string GetProjectDirectory()
//{
//	std::string filePath = __FILE__;
//
//	size_t lastSlashPos = filePath.find_last_of("/\\");
//
//	if (lastSlashPos != std::string::npos)
//	{
//		return filePath.substr(0, lastSlashPos).c_str();
//	}
//}

System::Void CppCLRWinFormsProject::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
    int yOffset = 24;

    auto File = System::IO::File::OpenText("Libs.txt");

    while (!File->EndOfStream)
    {
        System::String^ Line = File->ReadLine();

        if (Line == nullptr || Line->Trim()->Length == 0) {
            continue;
        }

        System::Windows::Forms::Label^ Label = gcnew System::Windows::Forms::Label();
        Label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(204)));
        Label->Text = Line;
        Label->Size = System::Drawing::Size(250, 24);
        Label->Location = System::Drawing::Point(3, yOffset);
        ListOfLibs->Controls->Add(Label);

        yOffset += 30;
    }
}

System::Void CppCLRWinFormsProject::Form1::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process^ Proces = gcnew System::Diagnostics::Process();
    Proces->Start("https://vcpkg.io/en/packages");
}

System::Void CppCLRWinFormsProject::Form1::InstallButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    //std::string Command = "pushd " + msclr::interop::marshal_as<std::string>(TextPathToVCPKG->Text) + " & " + ".\\vcpkg install " + msclr::interop::marshal_as<std::string>(TextBoxPackage->Text);
    //system(Command.c_str());
}
