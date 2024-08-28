#pragma once

namespace UsersControls
{

/// <summary>
/// Summary for MainUserControl
/// </summary>
public
ref class MainUserControl : public System::Windows::Forms::UserControl
{
public:
    MainUserControl(void)
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
    ~MainUserControl()
    {
        if (components)
        {
            delete components;
        }
    }

private:
    System::Windows::Forms::Panel ^ panel1;

protected:
private:
    System::Windows::Forms::Splitter ^ splitter1;

private:
private:
private:
    System::Windows::Forms::Button ^ InstallButton;

private:
    System::Windows::Forms::Label ^ label2;

private:
    System::Windows::Forms::PictureBox ^ pictureBox1;

private:
    System::Windows::Forms::Panel ^ panel2;

private:
    System::Windows::Forms::TextBox ^ TextBoxPackage;

private:
    System::Windows::Forms::TextBox ^ TextPackageName;

private:
    System::Windows::Forms::Label ^ label1;

private:
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
            (gcnew System::ComponentModel::ComponentResourceManager(MainUserControl::typeid));
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->splitter1 = (gcnew System::Windows::Forms::Splitter());
        this->InstallButton = (gcnew System::Windows::Forms::Button());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
        this->panel2 = (gcnew System::Windows::Forms::Panel());
        this->TextBoxPackage = (gcnew System::Windows::Forms::TextBox());
        this->TextPackageName = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->panel1->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
        this->panel2->SuspendLayout();
        this->SuspendLayout();
        //
        // panel1
        //
        this->panel1->BackColor = System::Drawing::Color::Gray;
        this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"panel1.BackgroundImage")));
        this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
        this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
        this->panel1->Controls->Add(this->splitter1);
        this->panel1->Controls->Add(this->InstallButton);
        this->panel1->Controls->Add(this->label2);
        this->panel1->Controls->Add(this->pictureBox1);
        this->panel1->Controls->Add(this->panel2);
        this->panel1->Controls->Add(this->label1);
        this->panel1->Location = System::Drawing::Point(0, 0);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(704, 584);
        this->panel1->TabIndex = 1;
        //
        // splitter1
        //
        this->splitter1->Location = System::Drawing::Point(0, 0);
        this->splitter1->Name = L"splitter1";
        this->splitter1->Size = System::Drawing::Size(3, 580);
        this->splitter1->TabIndex = 5;
        this->splitter1->TabStop = false;
        //
        // InstallButton
        //
        this->InstallButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
            static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
        this->InstallButton->FlatAppearance->BorderColor =
            System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
        this->InstallButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->InstallButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->InstallButton->ForeColor = System::Drawing::Color::White;
        this->InstallButton->Location = System::Drawing::Point(75, 489);
        this->InstallButton->Name = L"InstallButton";
        this->InstallButton->Size = System::Drawing::Size(235, 53);
        this->InstallButton->TabIndex = 3;
        this->InstallButton->Text = L"Install";
        this->InstallButton->UseVisualStyleBackColor = false;
        this->InstallButton->Click += gcnew System::EventHandler(this, &MainUserControl::InstallButton_Click);
        //
        // label2
        //
        this->label2->AutoSize = true;
        this->label2->BackColor = System::Drawing::Color::Transparent;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->label2->ForeColor = System::Drawing::Color::White;
        this->label2->Location = System::Drawing::Point(58, 212);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(91, 17);
        this->label2->TabIndex = 1;
        this->label2->Text = L"Library Name";
        //
        // pictureBox1
        //
        this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
        this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
        this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
        this->pictureBox1->Location = System::Drawing::Point(41, 43);
        this->pictureBox1->Name = L"pictureBox1";
        this->pictureBox1->Size = System::Drawing::Size(33, 32);
        this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
        this->pictureBox1->TabIndex = 2;
        this->pictureBox1->TabStop = false;
        //
        // panel2
        //
        this->panel2->BackColor = System::Drawing::Color::DimGray;
        this->panel2->Controls->Add(this->TextBoxPackage);
        this->panel2->Controls->Add(this->TextPackageName);
        this->panel2->ForeColor = System::Drawing::Color::White;
        this->panel2->Location = System::Drawing::Point(61, 162);
        this->panel2->Name = L"panel2";
        this->panel2->Size = System::Drawing::Size(439, 47);
        this->panel2->TabIndex = 1;
        //
        // TextBoxPackage
        //
        this->TextBoxPackage->BackColor = System::Drawing::Color::DimGray;
        this->TextBoxPackage->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->TextBoxPackage->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14));
        this->TextBoxPackage->ForeColor = System::Drawing::Color::White;
        this->TextBoxPackage->Location = System::Drawing::Point(16, 13);
        this->TextBoxPackage->Name = L"TextBoxPackage";
        this->TextBoxPackage->Size = System::Drawing::Size(408, 25);
        this->TextBoxPackage->TabIndex = 0;
        //
        // TextPackageName
        //
        this->TextPackageName->BackColor = System::Drawing::Color::DimGray;
        this->TextPackageName->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->TextPackageName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14));
        this->TextPackageName->ForeColor = System::Drawing::Color::White;
        this->TextPackageName->Location = System::Drawing::Point(16, 13);
        this->TextPackageName->Name = L"TextPackageName";
        this->TextPackageName->Size = System::Drawing::Size(408, 25);
        this->TextPackageName->TabIndex = 0;
        //
        // label1
        //
        this->label1->AutoSize = true;
        this->label1->BackColor = System::Drawing::Color::Transparent;
        this->label1->Font = (gcnew System::Drawing::Font(
            L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label1->ForeColor = System::Drawing::Color::White;
        this->label1->Location = System::Drawing::Point(71, 43);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(248, 32);
        this->label1->TabIndex = 0;
        this->label1->Text = L"VCPKG Instalation";
        //
        // MainUserControl
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->Controls->Add(this->panel1);
        this->Name = L"MainUserControl";
        this->Size = System::Drawing::Size(704, 584);
        this->panel1->ResumeLayout(false);
        this->panel1->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
        this->panel2->ResumeLayout(false);
        this->panel2->PerformLayout();
        this->ResumeLayout(false);
    }
#pragma endregion

private:
    System::Void UsersControls::MainUserControl::pictureBox1_Click(System::Object ^ sender, System::EventArgs ^ e);
    System::Void InstallButton_Click(System::Object ^ sender, System::EventArgs ^ e);
};
}  // namespace UsersControls
