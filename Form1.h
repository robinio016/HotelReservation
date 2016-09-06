#pragma once
#include "stdafx.h"
#include "Form2.h"
#include "Form3.h"

namespace HotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			Password_txt->PasswordChar='*';
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Email_lbl;
	private: System::Windows::Forms::Label^  Password_lbl;
	private: System::Windows::Forms::Button^  Login_btn;
	private: System::Windows::Forms::Button^  Register_btn;

	protected: 



	private: System::Windows::Forms::TextBox^  Email_txt;
	private: System::Windows::Forms::TextBox^  Password_txt;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DateTimePicker^  Today;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Email_lbl = (gcnew System::Windows::Forms::Label());
			this->Password_lbl = (gcnew System::Windows::Forms::Label());
			this->Login_btn = (gcnew System::Windows::Forms::Button());
			this->Register_btn = (gcnew System::Windows::Forms::Button());
			this->Email_txt = (gcnew System::Windows::Forms::TextBox());
			this->Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Today = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Email_lbl
			// 
			this->Email_lbl->AutoSize = true;
			this->Email_lbl->ForeColor = System::Drawing::Color::Khaki;
			this->Email_lbl->Location = System::Drawing::Point(15, 50);
			this->Email_lbl->Name = L"Email_lbl";
			this->Email_lbl->Size = System::Drawing::Size(66, 29);
			this->Email_lbl->TabIndex = 0;
			this->Email_lbl->Text = L"E-mail";
			// 
			// Password_lbl
			// 
			this->Password_lbl->AutoSize = true;
			this->Password_lbl->ForeColor = System::Drawing::Color::Khaki;
			this->Password_lbl->Location = System::Drawing::Point(15, 100);
			this->Password_lbl->Name = L"Password_lbl";
			this->Password_lbl->Size = System::Drawing::Size(90, 29);
			this->Password_lbl->TabIndex = 1;
			this->Password_lbl->Text = L"Password";
			this->Password_lbl->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// Login_btn
			// 
			this->Login_btn->AccessibleDescription = L"";
			this->Login_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Login_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Login_btn->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Login_btn->Location = System::Drawing::Point(101, 170);
			this->Login_btn->Name = L"Login_btn";
			this->Login_btn->Size = System::Drawing::Size(93, 38);
			this->Login_btn->TabIndex = 2;
			this->Login_btn->Text = L"Login";
			this->Login_btn->UseVisualStyleBackColor = false;
			this->Login_btn->Click += gcnew System::EventHandler(this, &Form1::Login_btn_Click);
			// 
			// Register_btn
			// 
			this->Register_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Register_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Register_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_btn->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Register_btn->Location = System::Drawing::Point(200, 170);
			this->Register_btn->Name = L"Register_btn";
			this->Register_btn->Size = System::Drawing::Size(93, 38);
			this->Register_btn->TabIndex = 3;
			this->Register_btn->Text = L"Register";
			this->Register_btn->UseVisualStyleBackColor = false;
			this->Register_btn->Click += gcnew System::EventHandler(this, &Form1::Register_btn_Click);
			// 
			// Email_txt
			// 
			this->Email_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Email_txt->Location = System::Drawing::Point(120, 57);
			this->Email_txt->Margin = System::Windows::Forms::Padding(5);
			this->Email_txt->Name = L"Email_txt";
			this->Email_txt->Size = System::Drawing::Size(173, 18);
			this->Email_txt->TabIndex = 4;
			// 
			// Password_txt
			// 
			this->Password_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Password_txt->Location = System::Drawing::Point(120, 103);
			this->Password_txt->Name = L"Password_txt";
			this->Password_txt->Size = System::Drawing::Size(173, 22);
			this->Password_txt->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(210, 340);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->groupBox1->Controls->Add(this->Email_lbl);
			this->groupBox1->Controls->Add(this->Password_lbl);
			this->groupBox1->Controls->Add(this->Password_txt);
			this->groupBox1->Controls->Add(this->Login_btn);
			this->groupBox1->Controls->Add(this->Email_txt);
			this->groupBox1->Controls->Add(this->Register_btn);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Angelina", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Khaki;
			this->groupBox1->Location = System::Drawing::Point(259, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(315, 231);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Login";
			// 
			// Today
			// 
			this->Today->Location = System::Drawing::Point(327, 21);
			this->Today->Name = L"Today";
			this->Today->Size = System::Drawing::Size(200, 20);
			this->Today->TabIndex = 8;
			this->Today->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->ClientSize = System::Drawing::Size(586, 395);
			this->Controls->Add(this->Today);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(602, 434);
			this->MinimumSize = System::Drawing::Size(602, 434);
			this->Name = L"Form1";
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Login_btn_Click(System::Object^  sender, System::EventArgs^  e) {

String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from HotelReservationDB.User where Email='"+this->Email_txt->Text+"' and Password='"+this->Password_txt->Text+"'  ;",conDataBase);
MySqlDataReader^ myReader;

try
{
	conDataBase->Open();
	myReader=cmdDataBase->ExecuteReader();
	int count=0;
	while(myReader->Read())
	{
		count=count+1;
	}
	if(count==1)
	{
		 updateValueOnCheckIn();
		 updateValueOnCheckOut();
		MessageBox::Show("Login Successfully");
		this->Hide();
		Form2^ f2= gcnew Form2();
		f2->ShowDialog();
	}
	else if(count>1)
	{
		MessageBox::Show("Password and mail is correct but acces is denied");
	}
	else
	{
		MessageBox::Show("Password and mail is unvalid");
	}
	myReader->Close();
	conDataBase->Close();

}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}

		 }
private: System::Void Register_btn_Click(System::Object^  sender, System::EventArgs^  e) {

		//this->Hide();
		Form3^ f3= gcnew Form3();
		f3->ShowDialog();
		 }

/////////////////////////////////////////
//update value of isoccupiedtypebed/////
//////////////////////////////
private:void updateValueOnCheckIn()
				 {
String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Update HotelReservationDB.Client set IsOccupiedOneBed='Yes' where OneBed>0 and CheckIn='"+this->Today->Text+"';",conDataBase);
MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Update HotelReservationDB.Client set IsOccupiedTowBeds='Yes' where TowBeds>0 and CheckIn='"+this->Today->Text+"';",conDataBase);
MySqlCommand^ cmdDataBase3=gcnew MySqlCommand("Update HotelReservationDB.Client set IsOccupiedDoubleBed='Yes' where DoubleBed>0 and CheckIn='"+this->Today->Text+"';",conDataBase);

MySqlDataReader^ myReader;

try
{
	conDataBase->Open();
	myReader=cmdDataBase1->ExecuteReader();
	myReader->Close();
	myReader=cmdDataBase2->ExecuteReader();
	myReader->Close();
	myReader=cmdDataBase3->ExecuteReader();
	myReader->Close();

}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}

				 }

private:void updateValueOnCheckOut()
				 {
String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Update HotelReservationDB.Client set IsOccupiedOneBed='No' where OneBed>0 and CheckOut='"+this->Today->Text+"';",conDataBase);
MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Update HotelReservationDB.Client set IsOccupiedTowBeds='No' where TowBeds>0 and CheckOut='"+this->Today->Text+"';",conDataBase);
MySqlCommand^ cmdDataBase3=gcnew MySqlCommand("Update HotelReservationDB.Client set IsOccupiedDoubleBed='No' where DoubleBed>0 and CheckOut='"+this->Today->Text+"';",conDataBase);

MySqlDataReader^ myReader;

try
{
	conDataBase->Open();
	myReader=cmdDataBase1->ExecuteReader();
	myReader->Close();
	myReader=cmdDataBase2->ExecuteReader();
	myReader->Close();
	myReader=cmdDataBase3->ExecuteReader();
	myReader->Close();

}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}

		}

};
}

