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
    UsersControls::MainUserControl ^ mainUserControl1;

    System::ComponentModel::IContainer ^ components;

private:


public:
private:


private:
    UsersControls::SettingsUserControl ^ settingsUserControl1;

public:
    System::Windows::Forms::Button ^ SettingsButton;

private:
    UsersControls::NotificationUserControl ^ notificationUserControl1;

public:
private:
private:
public:
private:
    UsersControls::PackagesUserControl ^ packagesUserControl1;

#pragma region Windows Form Designer generated code

    void InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager ^ resources =
            (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
        this->mainUserControl1 = (gcnew UsersControls::MainUserControl());
        this->packagesUserControl1 = (gcnew UsersControls::PackagesUserControl());
        this->settingsUserControl1 = (gcnew UsersControls::SettingsUserControl());
        this->SettingsButton = (gcnew System::Windows::Forms::Button());
        this->notificationUserControl1 = (gcnew UsersControls::NotificationUserControl());
        this->SuspendLayout();
        //
        // mainUserControl1
        //
        this->mainUserControl1->Location = System::Drawing::Point(-6, -15);
        this->mainUserControl1->Name = L"mainUserControl1";
        this->mainUserControl1->Size = System::Drawing::Size(704, 584);
        this->mainUserControl1->TabIndex = 2;
        //
        // packagesUserControl1
        //
        this->packagesUserControl1->BackColor = System::Drawing::Color::White;
        this->packagesUserControl1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->packagesUserControl1->Location = System::Drawing::Point(690, -15);
        this->packagesUserControl1->Name = L"packagesUserControl1";
        this->packagesUserControl1->Size = System::Drawing::Size(307, 584);
        this->packagesUserControl1->TabIndex = 5;
        //
        // settingsUserControl1
        //
        this->settingsUserControl1->BackColor = System::Drawing::Color::White;
        this->settingsUserControl1->Location = System::Drawing::Point(-2, -15);
        this->settingsUserControl1->Name = L"settingsUserControl1";
        this->settingsUserControl1->Size = System::Drawing::Size(700, 584);
        this->settingsUserControl1->TabIndex = 22;
        //
        // SettingsButton
        //
        this->SettingsButton->BackColor = System::Drawing::Color::White;
        this->SettingsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
        this->SettingsButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
        this->SettingsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->SettingsButton->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"SettingsButton.Image")));
        this->SettingsButton->Location = System::Drawing::Point(632, 12);
        this->SettingsButton->Name = L"SettingsButton";
        this->SettingsButton->Size = System::Drawing::Size(38, 37);
        this->SettingsButton->TabIndex = 23;
        this->SettingsButton->UseVisualStyleBackColor = false;
        this->SettingsButton->Click += gcnew System::EventHandler(this, &MainForm::SettingsButton_Click);
        //
        // notificationUserControl1
        //
        this->notificationUserControl1->BackColor = System::Drawing::SystemColors::Control;
        this->notificationUserControl1->Location = System::Drawing::Point(-2, -15);
        this->notificationUserControl1->Name = L"notificationUserControl1";
        this->notificationUserControl1->Size = System::Drawing::Size(704, 584);
        this->notificationUserControl1->TabIndex = 24;
        //
        // MainForm
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::White;
        this->ClientSize = System::Drawing::Size(984, 561);
        this->Controls->Add(this->notificationUserControl1);
        this->Controls->Add(this->SettingsButton);
        this->Controls->Add(this->settingsUserControl1);
        this->Controls->Add(this->packagesUserControl1);
        this->Controls->Add(this->mainUserControl1);
        this->ForeColor = System::Drawing::Color::White;
        this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(resources->GetObject(L"$this.Icon")));
        this->MaximizeBox = false;
        this->MinimumSize = System::Drawing::Size(1000, 600);
        this->Name = L"MainForm";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"VCPKG GUI";
        this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
        this->ResumeLayout(false);
    }
#pragma endregion

public:
    System::Void SettingsButton_Click(System::Object ^ sender, System::EventArgs ^ e);
    System::Void AddNotify();

private:
    System::Void MainForm_Load(System::Object ^ sender, System::EventArgs ^ e) { settingsUserControl1->Visible = false;
        notificationUserControl1->Visible = false;
    }
};
}  // namespace VCPKGGUI
