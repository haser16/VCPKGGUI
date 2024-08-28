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


protected:
private:


protected: 


protected:
private:


private:
    System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
    void InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager ^ resources =
            (gcnew System::ComponentModel::ComponentResourceManager(StartForm::typeid));
        this->startUserControl1 = (gcnew UsersControls::StartUserControl());
        this->SuspendLayout();
        //
        // startUserControl1
        //
        this->startUserControl1->BackColor = System::Drawing::Color::White;
        this->startUserControl1->Location = System::Drawing::Point(-2, -37);
        this->startUserControl1->MaximumSize = System::Drawing::Size(799, 539);
        this->startUserControl1->MinimumSize = System::Drawing::Size(799, 539);
        this->startUserControl1->Name = L"startUserControl1";
        this->startUserControl1->Size = System::Drawing::Size(799, 539);
        this->startUserControl1->TabIndex = 0;
        //
        // StartForm
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
        this->ClientSize = System::Drawing::Size(783, 500);
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
};
}  // namespace VCPKGGUI
