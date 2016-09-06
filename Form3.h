#pragma once

namespace HotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();

			Password_txt->PasswordChar='*';
			ConfirmPassword_txt->PasswordChar='*';
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Password_txt;



	private: System::Windows::Forms::TextBox^  Email_txt;
	private: System::Windows::Forms::TextBox^  LastName_txt;


	private: System::Windows::Forms::TextBox^  FirstName_txt;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  Cancel_btn;
	private: System::Windows::Forms::Button^  Add_btn;
	private: System::Windows::Forms::TextBox^  ConfirmPassword_txt;

	private: System::Windows::Forms::Button^  Previous_btn;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->Add_btn = (gcnew System::Windows::Forms::Button());
			this->ConfirmPassword_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->Email_txt = (gcnew System::Windows::Forms::TextBox());
			this->LastName_txt = (gcnew System::Windows::Forms::TextBox());
			this->FirstName_txt = (gcnew System::Windows::Forms::TextBox());
			this->Previous_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Cancel_btn);
			this->groupBox1->Controls->Add(this->Add_btn);
			this->groupBox1->Controls->Add(this->ConfirmPassword_txt);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Password_txt);
			this->groupBox1->Controls->Add(this->Email_txt);
			this->groupBox1->Controls->Add(this->LastName_txt);
			this->groupBox1->Controls->Add(this->FirstName_txt);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Angelina", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Khaki;
			this->groupBox1->Location = System::Drawing::Point(61, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(339, 323);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"User Registration";
			// 
			// Cancel_btn
			// 
			this->Cancel_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Cancel_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_btn->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Cancel_btn->Location = System::Drawing::Point(220, 271);
			this->Cancel_btn->Name = L"Cancel_btn";
			this->Cancel_btn->Size = System::Drawing::Size(93, 35);
			this->Cancel_btn->TabIndex = 13;
			this->Cancel_btn->Text = L"Cancel";
			this->Cancel_btn->UseVisualStyleBackColor = false;
			this->Cancel_btn->Click += gcnew System::EventHandler(this, &Form3::Cancel_btn_Click);
			// 
			// Add_btn
			// 
			this->Add_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Add_btn->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Add_btn->Location = System::Drawing::Point(121, 271);
			this->Add_btn->Name = L"Add_btn";
			this->Add_btn->Size = System::Drawing::Size(93, 35);
			this->Add_btn->TabIndex = 12;
			this->Add_btn->Text = L"Add";
			this->Add_btn->UseVisualStyleBackColor = false;
			this->Add_btn->Click += gcnew System::EventHandler(this, &Form3::Add_btn_Click);
			// 
			// ConfirmPassword_txt
			// 
			this->ConfirmPassword_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ConfirmPassword_txt->Location = System::Drawing::Point(162, 207);
			this->ConfirmPassword_txt->Name = L"ConfirmPassword_txt";
			this->ConfirmPassword_txt->Size = System::Drawing::Size(151, 26);
			this->ConfirmPassword_txt->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Angelina", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label5->Location = System::Drawing::Point(19, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 22);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Confirm Password";
			this->label5->Click += gcnew System::EventHandler(this, &Form3::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Angelina", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label4->Location = System::Drawing::Point(54, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Angelina", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label3->Location = System::Drawing::Point(57, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"E-mail";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Angelina", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label2->Location = System::Drawing::Point(57, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"LastName";
			this->label2->Click += gcnew System::EventHandler(this, &Form3::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Angelina", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(52, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 22);
			this->label1->TabIndex = 6;
			this->label1->Text = L"FirstName";
			// 
			// Password_txt
			// 
			this->Password_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Password_txt->Location = System::Drawing::Point(162, 162);
			this->Password_txt->Name = L"Password_txt";
			this->Password_txt->Size = System::Drawing::Size(151, 26);
			this->Password_txt->TabIndex = 3;
			// 
			// Email_txt
			// 
			this->Email_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Email_txt->Location = System::Drawing::Point(162, 124);
			this->Email_txt->Name = L"Email_txt";
			this->Email_txt->Size = System::Drawing::Size(151, 26);
			this->Email_txt->TabIndex = 2;
			// 
			// LastName_txt
			// 
			this->LastName_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LastName_txt->Location = System::Drawing::Point(162, 84);
			this->LastName_txt->Name = L"LastName_txt";
			this->LastName_txt->Size = System::Drawing::Size(151, 26);
			this->LastName_txt->TabIndex = 1;
			// 
			// FirstName_txt
			// 
			this->FirstName_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FirstName_txt->Location = System::Drawing::Point(162, 46);
			this->FirstName_txt->Name = L"FirstName_txt";
			this->FirstName_txt->Size = System::Drawing::Size(151, 26);
			this->FirstName_txt->TabIndex = 0;
			// 
			// Previous_btn
			// 
			this->Previous_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Previous_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Previous_btn->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Previous_btn->Location = System::Drawing::Point(312, 368);
			this->Previous_btn->MaximumSize = System::Drawing::Size(88, 25);
			this->Previous_btn->MinimumSize = System::Drawing::Size(88, 25);
			this->Previous_btn->Name = L"Previous_btn";
			this->Previous_btn->Size = System::Drawing::Size(88, 25);
			this->Previous_btn->TabIndex = 1;
			this->Previous_btn->Text = L"Previous";
			this->Previous_btn->UseVisualStyleBackColor = false;
			this->Previous_btn->Click += gcnew System::EventHandler(this, &Form3::Previous_btn_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->ClientSize = System::Drawing::Size(484, 405);
			this->Controls->Add(this->Previous_btn);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form3";
			this->Text = L"Register";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form3::Form3_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Add_btn_Click(System::Object^  sender, System::EventArgs^  e) {

String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBaseUserInsert=gcnew MySqlCommand("Insert into HotelReservationDB.User (FirstName,LastName,Email,Role,Password) values('"+this->FirstName_txt->Text+"','"+this->LastName_txt->Text+"','"+this->Email_txt->Text+"','U','"+this->Password_txt->Text+"') ;",conDataBase);//voir role ' ' ou '" "'
MySqlDataReader^ myReader;

try
{
	//if()//traitement champ requis email et passsword
	if(this->Password_txt->Text==this->ConfirmPassword_txt->Text)
	{
		conDataBase->Open();
		myReader=cmdDataBaseUserInsert->ExecuteReader();
		MessageBox::Show("added successfully");
		myReader->Close();
	}	
	else
	{
		MessageBox::Show("password and confirm Password are not the same");
	}
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}


		 }
private: System::Void Cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			this->FirstName_txt->Text="";
			this->LastName_txt->Text="";
			this->Email_txt->Text="";
			this->Password_txt->Text="";
			this->ConfirmPassword_txt->Text="";
		 }

private: System::Void Previous_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			
			
		 }
private: System::Void Form3_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

			 this->Hide();
		 }
};
}
