#pragma once


namespace UsersControls {

	/// <summary>
	/// Summary for SettingsUserControl
	/// </summary>
	public ref class SettingsUserControl : public System::Windows::Forms::UserControl
	{
	public:
		SettingsUserControl(void)
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
		~SettingsUserControl()
		{
			if (components)
			{
				delete components;
			}
		}

    private:


    private:
        System::Windows::Forms::Label ^ label1;

    private:


    private:


    private:
        System::Windows::Forms::PictureBox ^ pictureBox1;

    private:
        System::Windows::Forms::Panel ^ panel2;

    private:
        System::Windows::Forms::TextBox ^ TextBoxPackage;

    private:
        System::Windows::Forms::TextBox ^ TextPackageName;

    private:
        System::Windows::Forms::Label ^ label2;

    private:
        System::Windows::Forms::Button ^ ConfirmButton;

    private:


    private:
        System::Windows::Forms::Button ^ ButtonShowExplorer;

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
                (gcnew System::ComponentModel::ComponentResourceManager(SettingsUserControl::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->ButtonShowExplorer = (gcnew System::Windows::Forms::Button());
            this->TextBoxPackage = (gcnew System::Windows::Forms::TextBox());
            this->TextPackageName = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->ConfirmButton = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            //
            // label1
            //
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(
                L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(88, 42);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(119, 32);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Settings";
            //
            // pictureBox1
            //
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(46, 39);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(36, 35);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 8;
            this->pictureBox1->TabStop = false;
            //
            // panel2
            //
            this->panel2->BackColor = System::Drawing::Color::DimGray;
            this->panel2->Controls->Add(this->ButtonShowExplorer);
            this->panel2->Controls->Add(this->TextBoxPackage);
            this->panel2->Controls->Add(this->TextPackageName);
            this->panel2->ForeColor = System::Drawing::Color::White;
            this->panel2->Location = System::Drawing::Point(59, 164);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(439, 47);
            this->panel2->TabIndex = 9;
            //
            // ButtonShowExplorer
            //
            this->ButtonShowExplorer->BackColor = System::Drawing::Color::DimGray;
            this->ButtonShowExplorer->BackgroundImage =
                (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"ButtonShowExplorer.BackgroundImage")));
            this->ButtonShowExplorer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
            this->ButtonShowExplorer->FlatAppearance->MouseDownBackColor =
                System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)),
                    static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
            this->ButtonShowExplorer->FlatAppearance->MouseOverBackColor =
                System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                    static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
            this->ButtonShowExplorer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ButtonShowExplorer->Location = System::Drawing::Point(398, 12);
            this->ButtonShowExplorer->Name = L"ButtonShowExplorer";
            this->ButtonShowExplorer->Size = System::Drawing::Size(26, 26);
            this->ButtonShowExplorer->TabIndex = 11;
            this->ButtonShowExplorer->UseVisualStyleBackColor = false;
            this->ButtonShowExplorer->Click += gcnew System::EventHandler(this, &SettingsUserControl::ButtonShowExplorer_Click);
            //
            // TextBoxPackage
            //
            this->TextBoxPackage->BackColor = System::Drawing::Color::DimGray;
            this->TextBoxPackage->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->TextBoxPackage->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14));
            this->TextBoxPackage->ForeColor = System::Drawing::Color::White;
            this->TextBoxPackage->Location = System::Drawing::Point(16, 10);
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
            // label2
            //
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(56, 214);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(102, 17);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Path To VCPKG";
            //
            // ConfirmButton
            //
            this->ConfirmButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->ConfirmButton->FlatAppearance->BorderColor =
                System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                    static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->ConfirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ConfirmButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->ConfirmButton->ForeColor = System::Drawing::Color::White;
            this->ConfirmButton->Location = System::Drawing::Point(59, 497);
            this->ConfirmButton->Name = L"ConfirmButton";
            this->ConfirmButton->Size = System::Drawing::Size(235, 53);
            this->ConfirmButton->TabIndex = 10;
            this->ConfirmButton->Text = L"Confirm";
            this->ConfirmButton->UseVisualStyleBackColor = false;
            this->ConfirmButton->Click += gcnew System::EventHandler(this, &SettingsUserControl::ConfirmButton_Click);
            //
            // SettingsUserControl
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"$this.BackgroundImage")));
            this->Controls->Add(this->ConfirmButton);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label1);
            this->Name = L"SettingsUserControl";
            this->Size = System::Drawing::Size(700, 584);
            this->Load += gcnew System::EventHandler(this, &SettingsUserControl::SettingsUserControl_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
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
    }
