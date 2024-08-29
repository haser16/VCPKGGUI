#pragma once

namespace VCPKGGUI
{

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

public:


private:


public:
private:


private:
    System::Windows::Forms::Button ^ SettingsButton;

public:
    UsersControls::PackagesUserControl ^ packagesUserControl1;

private:
private:
    UsersControls::MainUserControl ^ mainUserControl1;

public:
private:
    UsersControls::SettingsUserControl ^ settingsUserControl1;

private:
public:
    System::ComponentModel::IContainer ^ components;

#pragma region Windows Form Designer generated code

    void InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager ^ resources =
            (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
        this->SettingsButton = (gcnew System::Windows::Forms::Button());
        this->packagesUserControl1 = (gcnew UsersControls::PackagesUserControl());
        this->mainUserControl1 = (gcnew UsersControls::MainUserControl());
        this->settingsUserControl1 = (gcnew UsersControls::SettingsUserControl());
        this->SuspendLayout();
        //
        // SettingsButton
        //
        this->SettingsButton->BackColor = System::Drawing::Color::DimGray;
        this->SettingsButton->BackgroundImage =
            (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"SettingsButton.BackgroundImage")));
        this->SettingsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
        this->SettingsButton->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
        this->SettingsButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
        this->SettingsButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
        this->SettingsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->SettingsButton->Location = System::Drawing::Point(640, 28);
        this->SettingsButton->Name = L"SettingsButton";
        this->SettingsButton->Size = System::Drawing::Size(31, 30);
        this->SettingsButton->TabIndex = 4;
        this->SettingsButton->UseVisualStyleBackColor = false;
        this->SettingsButton->Click += gcnew System::EventHandler(this, &MainForm::SettingsButton_Click);
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
        // mainUserControl1
        //
        this->mainUserControl1->Location = System::Drawing::Point(-6, -15);
        this->mainUserControl1->Name = L"mainUserControl1";
        this->mainUserControl1->Size = System::Drawing::Size(704, 584);
        this->mainUserControl1->TabIndex = 2;
        //
        // settingsUserControl1
        //
        this->settingsUserControl1->BackgroundImage =
            (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"settingsUserControl1.BackgroundImage")));
        this->settingsUserControl1->Location = System::Drawing::Point(-6, -15);
        this->settingsUserControl1->Name = L"settingsUserControl1";
        this->settingsUserControl1->Size = System::Drawing::Size(700, 584);
        this->settingsUserControl1->TabIndex = 3;
        this->settingsUserControl1->Visible = false;
        //
        // MainForm
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
            static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
        this->ClientSize = System::Drawing::Size(984, 561);
        this->Controls->Add(this->SettingsButton);
        this->Controls->Add(this->settingsUserControl1);
        this->Controls->Add(this->mainUserControl1);
        this->Controls->Add(this->packagesUserControl1);
        this->ForeColor = System::Drawing::Color::White;
        this->MaximizeBox = false;
        this->MinimumSize = System::Drawing::Size(1000, 600);
        this->Name = L"MainForm";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"VCPKG GUI";
        this->ResumeLayout(false);
    }
#pragma endregion
    /*private: System::Void Install_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ChoosePathButton_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {};
    private: System::Void ChoosePathButton_DoubleClick(System::Object^ sender, System::EventArgs^ e);*/

private:
    System::Void SettingsButton_Click(System::Object ^ sender, System::EventArgs ^ e);
};
}  // namespace CppCLRWinFormsProject
