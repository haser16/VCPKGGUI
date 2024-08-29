#pragma once

namespace UsersControls {

	/// <summary>
	/// Summary for StartUserControl
	/// </summary>
public
ref class StartUserControl : public System::Windows::Forms::UserControl
	{
	public:
		StartUserControl(void)
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
		~StartUserControl()
		{
			if (components)
			{
				delete components;
			}
		}

    private:
        System::Windows::Forms::PictureBox ^ pictureBox1;

    protected:
    private:


    private:


    private:


    private:
        System::Windows::Forms::Button ^ ButtonInstallVcpkg;

    private:
        System::Windows::Forms::Button ^ ButtonContinue;

    private:
        System::Windows::Forms::PictureBox ^ LoadingGif;

    private:


    private:
        System::Windows::Forms::PictureBox ^ pictureBox2;

    private:
        System::Windows::Forms::PictureBox ^ pictureBox4;

    private:
        System::Windows::Forms::PictureBox ^ pictureBox5;

    private:
        System::Windows::Forms::Label ^ label1;

    private:
        System::Windows::Forms::Label ^ WaitLabel;

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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager ^ resources =
                (gcnew System::ComponentModel::ComponentResourceManager(StartUserControl::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->ButtonInstallVcpkg = (gcnew System::Windows::Forms::Button());
            this->ButtonContinue = (gcnew System::Windows::Forms::Button());
            this->LoadingGif = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->WaitLabel = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->LoadingGif))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            //
            // pictureBox1
            //
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(-44, 100);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(318, 307);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            //
            // ButtonInstallVcpkg
            //
            this->ButtonInstallVcpkg->BackColor = System::Drawing::Color::Gray;
            this->ButtonInstallVcpkg->FlatAppearance->BorderColor = System::Drawing::Color::OldLace;
            this->ButtonInstallVcpkg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ButtonInstallVcpkg->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
            this->ButtonInstallVcpkg->ForeColor = System::Drawing::Color::White;
            this->ButtonInstallVcpkg->Location = System::Drawing::Point(48, 473);
            this->ButtonInstallVcpkg->Name = L"ButtonInstallVcpkg";
            this->ButtonInstallVcpkg->Size = System::Drawing::Size(186, 45);
            this->ButtonInstallVcpkg->TabIndex = 3;
            this->ButtonInstallVcpkg->Text = L"Install vcpkg";
            this->ButtonInstallVcpkg->UseVisualStyleBackColor = false;
            this->ButtonInstallVcpkg->Click += gcnew System::EventHandler(this, &StartUserControl::ButtonInstallVcpkg_Click);
            //
            // ButtonContinue
            //
            this->ButtonContinue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->ButtonContinue->FlatAppearance->BorderColor = System::Drawing::Color::OldLace;
            this->ButtonContinue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ButtonContinue->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
            this->ButtonContinue->ForeColor = System::Drawing::Color::White;
            this->ButtonContinue->Location = System::Drawing::Point(553, 473);
            this->ButtonContinue->Name = L"ButtonContinue";
            this->ButtonContinue->Size = System::Drawing::Size(186, 45);
            this->ButtonContinue->TabIndex = 4;
            this->ButtonContinue->Text = L"Continue";
            this->ButtonContinue->UseVisualStyleBackColor = false;
            //
            // LoadingGif
            //
            this->LoadingGif->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"LoadingGif.Image")));
            this->LoadingGif->Location = System::Drawing::Point(280, 260);
            this->LoadingGif->Name = L"LoadingGif";
            this->LoadingGif->Size = System::Drawing::Size(225, 113);
            this->LoadingGif->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->LoadingGif->TabIndex = 5;
            this->LoadingGif->TabStop = false;
            this->LoadingGif->Visible = false;
            //
            // pictureBox2
            //
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(513, -35);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(359, 361);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 6;
            this->pictureBox2->TabStop = false;
            //
            // pictureBox4
            //
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(218, -120);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(278, 278);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox4->TabIndex = 7;
            this->pictureBox4->TabStop = false;
            //
            // pictureBox5
            //
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(256, 425);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(278, 278);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox5->TabIndex = 8;
            this->pictureBox5->TabStop = false;
            //
            // label1
            //
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 25.75F));
            this->label1->ForeColor = System::Drawing::Color::DarkOrange;
            this->label1->Location = System::Drawing::Point(286, 184);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(210, 40);
            this->label1->TabIndex = 0;
            this->label1->Text = L"VCPKGGUI";
            //
            // WaitLabel
            //
            this->WaitLabel->AutoSize = true;
            this->WaitLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->WaitLabel->ForeColor = System::Drawing::Color::DarkOrange;
            this->WaitLabel->Location = System::Drawing::Point(350, 365);
            this->WaitLabel->Name = L"WaitLabel";
            this->WaitLabel->Size = System::Drawing::Size(75, 32);
            this->WaitLabel->TabIndex = 9;
            this->WaitLabel->Text = L"Wait";
            this->WaitLabel->Visible = false;
            //
            // StartUserControl
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->Controls->Add(this->WaitLabel);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->LoadingGif);
            this->Controls->Add(this->ButtonContinue);
            this->Controls->Add(this->ButtonInstallVcpkg);
            this->Controls->Add(this->pictureBox1);
            this->MaximumSize = System::Drawing::Size(799, 539);
            this->MinimumSize = System::Drawing::Size(799, 539);
            this->Name = L"StartUserControl";
            this->Size = System::Drawing::Size(799, 539);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->LoadingGif))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    private:
        System::Void ButtonInstallVcpkg_Click(System::Object ^ sender, System::EventArgs ^ e);
        System::Void ThrInstallVcpkg(Object ^ data);
    };
    }
