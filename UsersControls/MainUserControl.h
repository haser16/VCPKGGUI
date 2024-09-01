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
    System::Windows::Forms::Splitter ^ splitter1;

protected:
private:


private:
    System::Windows::Forms::PictureBox ^ pictureBox1;

private:


private:
    System::Windows::Forms::PictureBox ^ pictureBox5;

private:


private:
    System::Windows::Forms::Panel ^ panel1;

private:


private:


private:
    System::Windows::Forms::PictureBox ^ pictureBox2;

private:


private:


private:
    System::Windows::Forms::PictureBox ^ pictureBox3;

private:
    System::Windows::Forms::Button ^ DownloadButton;

public:


private:
private:


private:


private:
    System::Windows::Forms::PictureBox ^ pictureBox6;

private:
    System::Windows::Forms::TextBox ^ textBox1;

private:
    System::Windows::Forms::PictureBox ^ pictureBox4;

private:


private:


private:


private:


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


private:


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
        this->splitter1 = (gcnew System::Windows::Forms::Splitter());
        this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
        this->DownloadButton = (gcnew System::Windows::Forms::Button());
        this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox5))->BeginInit();
        this->panel1->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox6))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox3))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox4))->BeginInit();
        this->SuspendLayout();
        //
        // splitter1
        //
        this->splitter1->Location = System::Drawing::Point(0, 0);
        this->splitter1->Name = L"splitter1";
        this->splitter1->Size = System::Drawing::Size(3, 580);
        this->splitter1->TabIndex = 5;
        this->splitter1->TabStop = false;
        //
        // pictureBox1
        //
        this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
        this->pictureBox1->Location = System::Drawing::Point(262, 66);
        this->pictureBox1->Name = L"pictureBox1";
        this->pictureBox1->Size = System::Drawing::Size(200, 40);
        this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
        this->pictureBox1->TabIndex = 11;
        this->pictureBox1->TabStop = false;
        //
        // pictureBox5
        //
        this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
        this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox5.Image")));
        this->pictureBox5->Location = System::Drawing::Point(172, 47);
        this->pictureBox5->Name = L"pictureBox5";
        this->pictureBox5->Size = System::Drawing::Size(75, 76);
        this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
        this->pictureBox5->TabIndex = 14;
        this->pictureBox5->TabStop = false;
        this->pictureBox5->Click += gcnew System::EventHandler(this, &MainUserControl::pictureBox5_Click);
        //
        // panel1
        //
        this->panel1->BackColor = System::Drawing::Color::White;
        this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
        this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
        this->panel1->Controls->Add(this->pictureBox4);
        this->panel1->Controls->Add(this->textBox1);
        this->panel1->Controls->Add(this->pictureBox6);
        this->panel1->Controls->Add(this->pictureBox3);
        this->panel1->Controls->Add(this->DownloadButton);
        this->panel1->Controls->Add(this->pictureBox2);
        this->panel1->Controls->Add(this->pictureBox5);
        this->panel1->Controls->Add(this->pictureBox1);
        this->panel1->Controls->Add(this->splitter1);
        this->panel1->Location = System::Drawing::Point(0, 0);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(704, 584);
        this->panel1->TabIndex = 1;
        //
        // textBox1
        //
        this->textBox1->BackColor = System::Drawing::Color::White;
        this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->textBox1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18.25F));
        this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
        this->textBox1->Location = System::Drawing::Point(63, 237);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(399, 28);
        this->textBox1->TabIndex = 25;
        //
        // pictureBox6
        //
        this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox6.Image")));
        this->pictureBox6->Location = System::Drawing::Point(40, 215);
        this->pictureBox6->Name = L"pictureBox6";
        this->pictureBox6->Size = System::Drawing::Size(447, 75);
        this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
        this->pictureBox6->TabIndex = 24;
        this->pictureBox6->TabStop = false;
        //
        // pictureBox3
        //
        this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox3.Image")));
        this->pictureBox3->Location = System::Drawing::Point(408, 333);
        this->pictureBox3->Name = L"pictureBox3";
        this->pictureBox3->Size = System::Drawing::Size(246, 230);
        this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
        this->pictureBox3->TabIndex = 20;
        this->pictureBox3->TabStop = false;
        //
        // DownloadButton
        //
        this->DownloadButton->Cursor = System::Windows::Forms::Cursors::Default;
        this->DownloadButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->DownloadButton->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 20.25F));
        this->DownloadButton->ForeColor = System::Drawing::Color::White;
        this->DownloadButton->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"DownloadButton.Image")));
        this->DownloadButton->Location = System::Drawing::Point(24, 500);
        this->DownloadButton->Name = L"DownloadButton";
        this->DownloadButton->Size = System::Drawing::Size(290, 63);
        this->DownloadButton->TabIndex = 19;
        this->DownloadButton->Text = L"Download";
        this->DownloadButton->UseVisualStyleBackColor = true;
        this->DownloadButton->Click += gcnew System::EventHandler(this, &MainUserControl::DownloadButton_Click);
        //
        // pictureBox2
        //
        this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox2.Image")));
        this->pictureBox2->Location = System::Drawing::Point(-78, 344);
        this->pictureBox2->Name = L"pictureBox2";
        this->pictureBox2->Size = System::Drawing::Size(480, 360);
        this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
        this->pictureBox2->TabIndex = 18;
        this->pictureBox2->TabStop = false;
        this->pictureBox2->Visible = false;
        //
        // pictureBox4
        //
        this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox4.Image")));
        this->pictureBox4->Location = System::Drawing::Point(54, 296);
        this->pictureBox4->Name = L"pictureBox4";
        this->pictureBox4->Size = System::Drawing::Size(126, 18);
        this->pictureBox4->TabIndex = 26;
        this->pictureBox4->TabStop = false;
        //
        // MainUserControl
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->Controls->Add(this->panel1);
        this->Name = L"MainUserControl";
        this->Size = System::Drawing::Size(704, 584);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox5))->EndInit();
        this->panel1->ResumeLayout(false);
        this->panel1->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox6))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox3))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox4))->EndInit();
        this->ResumeLayout(false);
    }
#pragma endregion

private:
    System::Void pictureBox5_Click(System::Object ^ sender, System::EventArgs ^ e);
    System::Void DownloadButton_Click(System::Object ^ sender, System::EventArgs ^ e);
};
}  // namespace UsersControls
