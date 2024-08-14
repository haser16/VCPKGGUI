#include "pch.h"
//#include "Form1.h"
//#include "string"
//#include "msclr/marshal_cppstd.h"
// #include "Form1.h"

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
