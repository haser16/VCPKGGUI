#include "pch.h"
#include "MainForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

System::Void VCPKGGUI::MainForm::SettingsButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    bool Settings = settingsUserControl1->Visible;
    if (!Settings)
    {
        settingsUserControl1->Visible = true;
    }
    else
    {
        settingsUserControl1->Visible = false;
    }
}

System::Void VCPKGGUI::MainForm::AddNotify()
{
    UsersControls::NotificationUserControl ^ Notify = gcnew UsersControls::NotificationUserControl();
    Notify->BackColor = System::Drawing::SystemColors::Control;
    Notify->Location = System::Drawing::Point(-29, -15);
    Notify->Name = L"notificationUserControl1";
    Notify->Size = System::Drawing::Size(704, 584);
    Notify->TabIndex = 6;
    this->Controls->Add(Notify);
}
