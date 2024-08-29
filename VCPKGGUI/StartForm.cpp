#include "pch.h"
#include "StartForm.h"
#include "MainForm.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

System::Void VCPKGGUI::StartForm::ButtonContinue_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    this->Hide();
    VCPKGGUI::MainForm ^ MainForm = gcnew VCPKGGUI::MainForm();
    MainForm->Show();
}
