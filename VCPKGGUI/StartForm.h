#pragma once

namespace VCPKGGUI
{
public
ref class StartForm : public System::Windows::Forms::Form
{
public:
    StartForm(void) { InitializeComponent(); }

protected:
    ~StartForm()
    {
        if (components)
        {
            delete components;
        }
    }

private:
    UsersControls::StartUserControl ^ startUserControl1;

private:
    System::Windows::Forms::Button ^ ButtonContinue;

protected:
private:


    System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
    void InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager ^ resources =
            (gcnew System::ComponentModel::ComponentResourceManager(StartForm::typeid));
        this->startUserControl1 = (gcnew UsersControls::StartUserControl());
        this->ButtonContinue = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        //
        // startUserControl1
        //
        this->startUserControl1->BackColor = System::Drawing::Color::White;
        this->startUserControl1->Location = System::Drawing::Point(-6, -29);
        this->startUserControl1->MaximumSize = System::Drawing::Size(799, 539);
        this->startUserControl1->MinimumSize = System::Drawing::Size(799, 539);
        this->startUserControl1->Name = L"startUserControl1";
        this->startUserControl1->Size = System::Drawing::Size(799, 539);
        this->startUserControl1->TabIndex = 0;
        //
        // ButtonContinue
        //
        this->ButtonContinue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
            static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
        this->ButtonContinue->FlatAppearance->BorderColor = System::Drawing::Color::OldLace;
        this->ButtonContinue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->ButtonContinue->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
        this->ButtonContinue->ForeColor = System::Drawing::Color::White;
        this->ButtonContinue->Location = System::Drawing::Point(547, 443);
        this->ButtonContinue->Name = L"ButtonContinue";
        this->ButtonContinue->Size = System::Drawing::Size(186, 45);
        this->ButtonContinue->TabIndex = 5;
        this->ButtonContinue->Text = L"Continue";
        this->ButtonContinue->UseVisualStyleBackColor = false;
        this->ButtonContinue->Click += gcnew System::EventHandler(this, &StartForm::ButtonContinue_Click);
        //
        // StartForm
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
        this->ClientSize = System::Drawing::Size(783, 500);
        this->Controls->Add(this->ButtonContinue);
        this->Controls->Add(this->startUserControl1);
        this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(resources->GetObject(L"$this.Icon")));
        this->MaximizeBox = false;
        this->MaximumSize = System::Drawing::Size(799, 539);
        this->MinimumSize = System::Drawing::Size(799, 539);
        this->Name = L"StartForm";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"VCPKGGUI";
        this->ResumeLayout(false);
    }
#pragma endregion
private:
    System::Void ButtonContinue_Click(System::Object ^ sender, System::EventArgs ^ e);
};
}  // namespace VCPKGGUI
