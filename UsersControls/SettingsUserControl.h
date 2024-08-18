#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


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
        System::Windows::Forms::Button ^ button1;

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
        System::Windows::Forms::Button ^ InstallButton;

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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->ButtonShowExplorer = (gcnew System::Windows::Forms::Button());
            this->TextBoxPackage = (gcnew System::Windows::Forms::TextBox());
            this->TextPackageName = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->InstallButton = (gcnew System::Windows::Forms::Button());
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
            this->label1->Location = System::Drawing::Point(62, 23);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(119, 32);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Settings";
            //
            // button1
            //
            this->button1->BackColor = System::Drawing::Color::Transparent;
            this->button1->FlatAppearance->BorderColor =
                System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)),
                    static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->button1->FlatAppearance->MouseDownBackColor =
                System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
                    static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->button1->FlatAppearance->MouseOverBackColor =
                System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
                    static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->ForeColor = System::Drawing::Color::DimGray;
            this->button1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button1.Image")));
            this->button1->Location = System::Drawing::Point(641, 14);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(43, 41);
            this->button1->TabIndex = 7;
            this->button1->UseVisualStyleBackColor = false;
            //
            // pictureBox1
            //
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(20, 20);
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
            this->panel2->Location = System::Drawing::Point(68, 256);
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
            // label2
            //
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(65, 306);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(102, 17);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Path To VCPKG";
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
            this->InstallButton->Location = System::Drawing::Point(68, 497);
            this->InstallButton->Name = L"InstallButton";
            this->InstallButton->Size = System::Drawing::Size(235, 53);
            this->InstallButton->TabIndex = 10;
            this->InstallButton->Text = L"Confirm";
            this->InstallButton->UseVisualStyleBackColor = false;
            //
            // SettingsUserControl
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"$this.BackgroundImage")));
            this->Controls->Add(this->InstallButton);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label1);
            this->Name = L"SettingsUserControl";
            this->Size = System::Drawing::Size(700, 584);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    private:
        System::Void ButtonShowExplorer_Click(System::Object ^ sender, System::EventArgs ^ e);
    };
    }
