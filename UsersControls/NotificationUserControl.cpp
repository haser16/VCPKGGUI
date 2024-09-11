#include "pch.h"
#include "NotificationUserControl.h"

System::Void UsersControls::NotificationUserControl::ContinueButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    this->Hide();
    ErrorText->Text = "";
}
