#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UsersControls {

	/// <summary>
	/// Summary for SettingsUserContol
	/// </summary>
	public ref class SettingsUserContol : public System::Windows::Forms::UserControl
	{
	public:
		SettingsUserContol(void)
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
		~SettingsUserContol()
		{
			if (components)
			{
				delete components;
			}
		}

    private:
        System::Windows::Forms::Label ^ label1;

    protected:
    private:
        System::Windows::Forms::FlowLayoutPanel ^ ListOfLibs;

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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->ListOfLibs = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->SuspendLayout();
            //
            // label1
            //
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(50, 26);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(197, 28);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Installed Libraries";
            //
            // ListOfLibs
            //
            this->ListOfLibs->Location = System::Drawing::Point(21, 111);
            this->ListOfLibs->Name = L"ListOfLibs";
            this->ListOfLibs->Size = System::Drawing::Size(255, 450);
            this->ListOfLibs->TabIndex = 1;
            //
            // SettingsUserContol
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
                static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
            this->Controls->Add(this->ListOfLibs);
            this->Controls->Add(this->label1);
            this->Name = L"SettingsUserContol";
            this->Size = System::Drawing::Size(300, 584);
            this->Load += gcnew System::EventHandler(this, &SettingsUserContol::SettingsUserContol_Load);
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    private:
        System::Void SettingsUserContol_Load(System::Object ^ sender, System::EventArgs ^ e);
    };
    }
