#include "pch.h"

using namespace System;
using namespace System::IO;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "MainForm.h"
#include "StartForm.h"

using namespace System::Windows::Forms;

[STAThread] int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Directory::CreateDirectory("Settings");
    if (!File::Exists("Settings/pathtovcpkg.json"))
    {
        
    }
    Application::Run(gcnew VCPKGGUI::StartForm());
    return 0;
    Application::Run(gcnew VCPKGGUI::MainForm());
    return 0;
}