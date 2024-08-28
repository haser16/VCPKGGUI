#include "pch.h"
#include "StartUserControl.h"
#include "iostream"
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <codecvt>
#include <locale>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

std::wstring StringToWString(const std::string& str)
{
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    return converter.from_bytes(str);
}

bool ExecuteHiddenCommand(const std::string& command)
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    si.dwFlags |= STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_HIDE;

    ZeroMemory(&pi, sizeof(pi));

    std::wstring wcommand = StringToWString(command);

    std::vector<wchar_t> cmd(wcommand.begin(), wcommand.end());
    cmd.push_back(L'\0');

    if (!CreateProcessW(NULL,  //
            cmd.data(),        //
            NULL,              //
            NULL,              //
            FALSE,             //
            0,                 //
            NULL,              //
            NULL,              //
            &si,               //
            &pi)               //
    )
    {
        std::cerr << "CreateProcess failed (" << GetLastError() << ").\n";
        return false;
    }

    WaitForSingleObject(pi.hProcess, INFINITE);

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return true;
}

System::Void UsersControls::StartUserControl::ThrInstallVcpkg(Object ^ data)
{
    bool Answer = ExecuteHiddenCommand("git --version");

    if (!Answer)
    {
        MessageBox::Show("Please, install git on this machine!");
    }
    else if (Answer)
    {
        ExecuteHiddenCommand("git clone https://github.com/microsoft/vcpkg.git");
        ExecuteHiddenCommand("cd vcpkg & bootstrap-vcpkg.bat");
    }
    LoadingGif->Visible = false;
    WaitLabel->Text = "Success";
    WaitLabel->Location = System::Drawing::Point(330, 365);
}

System::Void UsersControls::StartUserControl::ButtonInstallVcpkg_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    LoadingGif->Visible = true;
    WaitLabel->Visible = true;
    Thread ^ t = gcnew Thread(gcnew ParameterizedThreadStart(this, &StartUserControl::ThrInstallVcpkg));
    t->Start();
}
