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


    private:
        System::Windows::Forms::FlowLayoutPanel ^ ListOfLibs;

    private:
        System::Windows::Forms::PictureBox ^ pictureBox1;

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
                (gcnew System::ComponentModel::ComponentResourceManager(PackagesUserControl::typeid));
            this->ListOfLibs = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
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
            // pictureBox1
            //
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(8, 51);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(285, 36);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 8;
            this->pictureBox1->TabStop = false;
            //
            // PackagesUserControl
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->ListOfLibs);
            this->Name = L"PackagesUserControl";
            this->Size = System::Drawing::Size(300, 584);
            this->Load += gcnew System::EventHandler(this, &PackagesUserControl::PackagesUserControl_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
        }
#pragma endregion
    private:
        System::Void PackagesUserControl_Load(System::Object ^ sender, System::EventArgs ^ e);
    };
    }
