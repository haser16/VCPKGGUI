#pragma once

namespace CppCLRWinFormsProject
{

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public
ref class MainForm : public System::Windows::Forms::Form
{
public:
    MainForm(void) { InitializeComponent(); }

protected:
    ~MainForm()
    {
        if (components)
        {
            delete components;
        }
    }

private:
    UsersControls::MainUserControl ^ mainUserControl1;

private:
    UsersControls::PackagesUserControl ^ packagesUserControl1;

protected:
protected:
private:












private:


private:


private:


private:


private:


private:


private:


private:


private:


private:


private:


private:



private:


    System::ComponentModel::IContainer ^ components;

#pragma region Windows Form Designer generated code

    void InitializeComponent(void)
    {
        this->mainUserControl1 = (gcnew UsersControls::MainUserControl());
        this->packagesUserControl1 = (gcnew UsersControls::PackagesUserControl());
        this->SuspendLayout();
        //
        // mainUserControl1
        //
        this->mainUserControl1->Location = System::Drawing::Point(-6, -15);
        this->mainUserControl1->Name = L"mainUserControl1";
        this->mainUserControl1->Size = System::Drawing::Size(704, 584);
        this->mainUserControl1->TabIndex = 0;
        //
        // packagesUserControl1
        //
        this->packagesUserControl1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
            static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
        this->packagesUserControl1->Location = System::Drawing::Point(704, -15);
        this->packagesUserControl1->Name = L"packagesUserControl1";
        this->packagesUserControl1->Size = System::Drawing::Size(300, 584);
        this->packagesUserControl1->TabIndex = 1;
        //
        // MainForm
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
            static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
        this->ClientSize = System::Drawing::Size(984, 561);
        this->Controls->Add(this->packagesUserControl1);
        this->Controls->Add(this->mainUserControl1);
        this->ForeColor = System::Drawing::Color::White;
        this->MaximizeBox = false;
        this->MinimumSize = System::Drawing::Size(1000, 600);
        this->Name = L"MainForm";
        this->ResumeLayout(false);
    }
#pragma endregion
    /*private: System::Void Install_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ChoosePathButton_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {};
    private: System::Void ChoosePathButton_DoubleClick(System::Object^ sender, System::EventArgs^ e);*/
};
}  // namespace CppCLRWinFormsProject
