#pragma once

namespace UsersControls
{

/// <summary>
/// Summary for SettingsUserControl
/// </summary>
public
ref class SettingsUserControl : public System::Windows::Forms::UserControl
{
public:
    SettingsUserControl(void)
    {
        InitializeComponent();
        //
        // TODO: Add the constructor code here
        //
    }

protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~SettingsUserControl()
    {
        if (components)
        {
            delete components;
        }
    }

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
    System::Windows::Forms::PictureBox ^ pictureBox1;

private:
    System::Windows::Forms::PictureBox ^ pictureBox2;

private:
    System::Windows::Forms::PictureBox ^ pictureBox6;

private:
    System::Windows::Forms::TextBox ^ TextBoxPackage;

private:


private:


private:
    System::Windows::Forms::Button ^ ButtonShowExplorer;

private:
    System::Windows::Forms::PictureBox ^ pictureBox3;

private:
    System::Windows::Forms::Button ^ ConfirmButton;

private:
    System::Windows::Forms::RadioButton ^ RadioRu;

private:
    System::Windows::Forms::RadioButton ^ RadioEn;

public:


private:
private:


private:


private:


private:
    System::Windows::Forms::PictureBox ^ pictureBox4;

private:


private:


private:


private:


private:


private:


private:
protected:
private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager ^ resources =
            (gcnew System::ComponentModel::ComponentResourceManager(SettingsUserControl::typeid));
        this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
        this->TextBoxPackage = (gcnew System::Windows::Forms::TextBox());
        this->ButtonShowExplorer = (gcnew System::Windows::Forms::Button());
        this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
        this->ConfirmButton = (gcnew System::Windows::Forms::Button());
        this->RadioRu = (gcnew System::Windows::Forms::RadioButton());
        this->RadioEn = (gcnew System::Windows::Forms::RadioButton());
        this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox6))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox3))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox4))->BeginInit();
        this->SuspendLayout();
        //
        // pictureBox1
        //
        this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
        this->pictureBox1->Location = System::Drawing::Point(251, 60);
        this->pictureBox1->Name = L"pictureBox1";
        this->pictureBox1->Size = System::Drawing::Size(200, 40);
        this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
        this->pictureBox1->TabIndex = 13;
        this->pictureBox1->TabStop = false;
        //
        // pictureBox2
        //
        this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox2.Image")));
        this->pictureBox2->Location = System::Drawing::Point(184, 42);
        this->pictureBox2->Name = L"pictureBox2";
        this->pictureBox2->Size = System::Drawing::Size(79, 72);
        this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
        this->pictureBox2->TabIndex = 14;
        this->pictureBox2->TabStop = false;
        //
        // pictureBox6
        //
        this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox6.Image")));
        this->pictureBox6->Location = System::Drawing::Point(36, 170);
        this->pictureBox6->Name = L"pictureBox6";
        this->pictureBox6->Size = System::Drawing::Size(447, 75);
        this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
        this->pictureBox6->TabIndex = 27;
        this->pictureBox6->TabStop = false;
        //
        // TextBoxPackage
        //
        this->TextBoxPackage->BackColor = System::Drawing::Color::White;
        this->TextBoxPackage->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->TextBoxPackage->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18.25F));
        this->TextBoxPackage->ForeColor = System::Drawing::Color::OrangeRed;
        this->TextBoxPackage->Location = System::Drawing::Point(59, 192);
        this->TextBoxPackage->Name = L"TextBoxPackage";
        this->TextBoxPackage->Size = System::Drawing::Size(351, 28);
        this->TextBoxPackage->TabIndex = 28;
        //
        // ButtonShowExplorer
        //
        this->ButtonShowExplorer->BackColor = System::Drawing::Color::White;
        this->ButtonShowExplorer->FlatAppearance->BorderColor = System::Drawing::Color::White;
        this->ButtonShowExplorer->FlatAppearance->MouseDownBackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
        this->ButtonShowExplorer->FlatAppearance->MouseOverBackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
        this->ButtonShowExplorer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->ButtonShowExplorer->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"ButtonShowExplorer.Image")));
        this->ButtonShowExplorer->Location = System::Drawing::Point(416, 192);
        this->ButtonShowExplorer->Name = L"ButtonShowExplorer";
        this->ButtonShowExplorer->Size = System::Drawing::Size(33, 28);
        this->ButtonShowExplorer->TabIndex = 30;
        this->ButtonShowExplorer->UseVisualStyleBackColor = false;
        this->ButtonShowExplorer->Click += gcnew System::EventHandler(this, &SettingsUserControl::ButtonShowExplorer_Click);
        //
        // pictureBox3
        //
        this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox3.Image")));
        this->pictureBox3->Location = System::Drawing::Point(36, 246);
        this->pictureBox3->Name = L"pictureBox3";
        this->pictureBox3->Size = System::Drawing::Size(134, 17);
        this->pictureBox3->TabIndex = 31;
        this->pictureBox3->TabStop = false;
        //
        // ConfirmButton
        //
        this->ConfirmButton->Cursor = System::Windows::Forms::Cursors::Default;
        this->ConfirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->ConfirmButton->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 20.25F));
        this->ConfirmButton->ForeColor = System::Drawing::Color::White;
        this->ConfirmButton->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"ConfirmButton.Image")));
        this->ConfirmButton->Location = System::Drawing::Point(24, 500);
        this->ConfirmButton->Name = L"ConfirmButton";
        this->ConfirmButton->Size = System::Drawing::Size(290, 63);
        this->ConfirmButton->TabIndex = 32;
        this->ConfirmButton->Text = L"Confirm";
        this->ConfirmButton->UseVisualStyleBackColor = true;
        this->ConfirmButton->Click += gcnew System::EventHandler(this, &SettingsUserControl::ConfirmButton_Click);
        //
        // RadioRu
        //
        this->RadioRu->Appearance = System::Windows::Forms::Appearance::Button;
        this->RadioRu->AutoSize = true;
        this->RadioRu->BackColor = System::Drawing::Color::Black;
        this->RadioRu->FlatAppearance->CheckedBackColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
        this->RadioRu->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"RadioRu.Image")));
        this->RadioRu->Location = System::Drawing::Point(36, 354);
        this->RadioRu->Name = L"RadioRu";
        this->RadioRu->Size = System::Drawing::Size(134, 26);
        this->RadioRu->TabIndex = 33;
        this->RadioRu->UseVisualStyleBackColor = false;
        //
        // RadioEn
        //
        this->RadioEn->Appearance = System::Windows::Forms::Appearance::Button;
        this->RadioEn->AutoSize = true;
        this->RadioEn->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"RadioEn.Image")));
        this->RadioEn->Location = System::Drawing::Point(36, 392);
        this->RadioEn->Name = L"RadioEn";
        this->RadioEn->Size = System::Drawing::Size(134, 26);
        this->RadioEn->TabIndex = 34;
        this->RadioEn->UseVisualStyleBackColor = true;
        //
        // pictureBox4
        //
        this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox4.Image")));
        this->pictureBox4->Location = System::Drawing::Point(36, 305);
        this->pictureBox4->Name = L"pictureBox4";
        this->pictureBox4->Size = System::Drawing::Size(162, 28);
        this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
        this->pictureBox4->TabIndex = 35;
        this->pictureBox4->TabStop = false;
        //
        // SettingsUserControl
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::White;
        this->Controls->Add(this->pictureBox4);
        this->Controls->Add(this->RadioEn);
        this->Controls->Add(this->RadioRu);
        this->Controls->Add(this->ConfirmButton);
        this->Controls->Add(this->pictureBox3);
        this->Controls->Add(this->ButtonShowExplorer);
        this->Controls->Add(this->TextBoxPackage);
        this->Controls->Add(this->pictureBox6);
        this->Controls->Add(this->pictureBox2);
        this->Controls->Add(this->pictureBox1);
        this->Name = L"SettingsUserControl";
        this->Size = System::Drawing::Size(700, 584);
        this->Load += gcnew System::EventHandler(this, &SettingsUserControl::SettingsUserControl_Load);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox6))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox3))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox4))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();
    }
#pragma endregion
private:
    System::Void SettingsUserControl_Load(System::Object ^ sender, System::EventArgs ^ e);
    System::Void ButtonShowExplorer_Click(System::Object ^ sender, System::EventArgs ^ e);

private:
    System::Void ConfirmButton_Click(System::Object ^ sender, System::EventArgs ^ e);
};
}  // namespace UsersControls
