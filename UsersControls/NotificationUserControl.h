#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UsersControls {

	/// <summary>
	/// Summary for NotificationUserControl
	/// </summary>
	public ref class NotificationUserControl : public System::Windows::Forms::UserControl
	{
	public:
		NotificationUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NotificationUserControl()
		{
			if (components)
			{
				delete components;
			}
		}

    private:
        System::Windows::Forms::PictureBox ^ pictureBox1;

    public:
        System::Windows::Forms::TextBox ^ ErrorText;

    private:
        System::Windows::Forms::Button ^ ContinueButton;

    public: 

    private: 

    private:


    protected:
    private:


    private:


    private:
        System::Windows::Forms::PictureBox ^ pictureBox2;

    private:
        System::Windows::Forms::PictureBox ^ pictureBox3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager ^ resources =
                (gcnew System::ComponentModel::ComponentResourceManager(NotificationUserControl::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->ErrorText = (gcnew System::Windows::Forms::TextBox());
            this->ContinueButton = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            //
            // pictureBox1
            //
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(166, 242);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(400, 300);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            //
            // ErrorText
            //
            this->ErrorText->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->ErrorText->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 18.25F));
            this->ErrorText->ForeColor = System::Drawing::Color::OrangeRed;
            this->ErrorText->Location = System::Drawing::Point(213, 329);
            this->ErrorText->Multiline = true;
            this->ErrorText->Name = L"ErrorText";
            this->ErrorText->Size = System::Drawing::Size(313, 55);
            this->ErrorText->TabIndex = 1;
            this->ErrorText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            //
            // ContinueButton
            //
            this->ContinueButton->FlatAppearance->BorderColor =
                System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                    static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->ContinueButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ContinueButton->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"ContinueButton.Image")));
            this->ContinueButton->Location = System::Drawing::Point(256, 454);
            this->ContinueButton->Name = L"ContinueButton";
            this->ContinueButton->Size = System::Drawing::Size(239, 32);
            this->ContinueButton->TabIndex = 2;
            this->ContinueButton->UseVisualStyleBackColor = true;
            this->ContinueButton->Click += gcnew System::EventHandler(this, &NotificationUserControl::ContinueButton_Click);
            //
            // pictureBox2
            //
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(280, 32);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(176, 163);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 3;
            this->pictureBox2->TabStop = false;
            //
            // pictureBox3
            //
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(270, 201);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(200, 40);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox3->TabIndex = 4;
            this->pictureBox3->TabStop = false;
            //
            // NotificationUserControl
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->ContinueButton);
            this->Controls->Add(this->ErrorText);
            this->Controls->Add(this->pictureBox1);
            this->Name = L"NotificationUserControl";
            this->Size = System::Drawing::Size(704, 584);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private:
        System::Void ContinueButton_Click(System::Object ^ sender, System::EventArgs ^ e);
    };
    }
