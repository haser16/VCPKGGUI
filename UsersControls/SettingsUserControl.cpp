#include "pch.h"
#include "SettingsUserControl.h"

System::Void UsersControls::SettingsUserControl::ButtonShowExplorer_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    FolderBrowserDialog ^ Dialog = gcnew FolderBrowserDialog();
    Dialog->ShowDialog();
    TextBoxPackage->Text = Dialog->SelectedPath;
}
