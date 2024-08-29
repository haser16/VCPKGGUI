#pragma once

namespace UsersControls {

	/// <summary>
	/// Summary for PackagesUserControl
	/// </summary>
	public ref class PackagesUserControl : public System::Windows::Forms::UserControl
	{
	public:
		PackagesUserControl(void)
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
		~PackagesUserControl()
		{
			if (components)
			{
				delete components;
			}
		}

    private:
        System::Windows::Forms::Label ^ label4;

    private:
        System::Windows::Forms::FlowLayoutPanel ^ ListOfLibs;

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
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->ListOfLibs = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->SuspendLayout();
            //
            // label4
            //
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(
                L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(15, 17);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(251, 32);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Installed Packages";
            //
            // ListOfLibs
            //
            this->ListOfLibs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(
                (((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) |
                     System::Windows::Forms::AnchorStyles::Left) |
                    System::Windows::Forms::AnchorStyles::Right));
            this->ListOfLibs->AutoScroll = true;
            this->ListOfLibs->Location = System::Drawing::Point(12, 110);
            this->ListOfLibs->Name = L"ListOfLibs";
            this->ListOfLibs->Size = System::Drawing::Size(276, 458);
            this->ListOfLibs->TabIndex = 7;
            //
            // PackagesUserControl
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
                static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
            this->Controls->Add(this->ListOfLibs);
            this->Controls->Add(this->label4);
            this->Name = L"PackagesUserControl";
            this->Size = System::Drawing::Size(300, 584);
            this->Load += gcnew System::EventHandler(this, &PackagesUserControl::PackagesUserControl_Load);
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    private:
        System::Void PackagesUserControl_Load(System::Object ^ sender, System::EventArgs ^ e);
    };
    }
