#include <string.h>
#pragma once

namespace HotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Web;
	using namespace System::Net::Mail;

	/// <summary>
	/// Description résumée de Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->comboBox1->Items->Add("Algeria");
			this->comboBox1->Items->Add("Argentina");
			this->comboBox1->Items->Add("Armenia");
			this->comboBox1->Items->Add("Bahrain");
			this->comboBox1->Items->Add("Belgium");
			this->comboBox1->Items->Add("Bolivia");
			this->comboBox1->Items->Add("Brazil");
			this->comboBox1->Items->Add("Canada");
			this->comboBox1->Items->Add("Colombia");
			this->comboBox1->Items->Add("Cameron");
			this->comboBox1->Items->Add("Coroitia");
			this->comboBox1->Items->Add("Denmark");
			this->comboBox1->Items->Add("Estonia");
			this->comboBox1->Items->Add("Finland");
			this->comboBox1->Items->Add("France");
			this->comboBox1->Items->Add("Germany");
			this->comboBox1->Items->Add("Greeace");
			this->comboBox1->Items->Add("India");
			this->comboBox1->Items->Add("Iraq");
			this->comboBox1->Items->Add("Italy");
			this->comboBox1->Items->Add("Libya");
			this->comboBox1->Items->Add("Russia");
			this->comboBox1->Items->Add("Other Country");

			this->From_txt->Text="hotelreservation016@yahoo.fr";

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form2()
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
	private: System::Windows::Forms::TextBox^  Note_txt;
	private: System::Windows::Forms::DateTimePicker^  CheckOut_Date;
	private: System::Windows::Forms::DateTimePicker^  CheckIn_Date;
	private: System::Windows::Forms::TextBox^  Code_txt;








	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label8;




	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  Nights_NumericUpDown;
	private: System::Windows::Forms::NumericUpDown^  DoubleBed_NumericUpDown;
	private: System::Windows::Forms::NumericUpDown^  OneBed_NumericUpDown;
	private: System::Windows::Forms::NumericUpDown^  TowBeds_NumericUpDown;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  Email_txt;

	private: System::Windows::Forms::TextBox^  Telephone_txt;

	private: System::Windows::Forms::TextBox^  City_txt;
	private: System::Windows::Forms::TextBox^  Address_txt;



	private: System::Windows::Forms::TextBox^  LastName_txt;

	private: System::Windows::Forms::TextBox^  FirstName_txt;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  Payment;
private: System::Windows::Forms::Label^  Total_lbl;



	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  Total_txt;

private: System::Windows::Forms::TextBox^  Discount_txt;
private: System::Windows::Forms::TextBox^  SubTotal_txt;
private: System::Windows::Forms::TabControl^  tabControl1;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TabPage^  ManageClient;
private: System::Windows::Forms::Button^  Add_btn;
private: System::Windows::Forms::Button^  Update_btn;
private: System::Windows::Forms::Button^  Delete_btn;
private: System::Windows::Forms::Button^  CheckOut_btn;

private: System::Windows::Forms::Button^  checkIn_btn;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::NumericUpDown^  Children_numericUpDown;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::NumericUpDown^  Adults_numericUpDown;
private: System::Windows::Forms::Label^  Adults;
private: System::Windows::Forms::Button^  CheckPrice_btn;
private: System::Windows::Forms::Button^  Generate_btn;
private: System::Windows::Forms::Button^  AllUser_btn;
private: System::Windows::Forms::TabPage^  tabPage2;

private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::Button^  Load_btn;

private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
private: System::Windows::Forms::Button^  Cancel_btn;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::Button^  Send_btn;
private: System::Windows::Forms::RichTextBox^  richTextBox1;

private: System::Windows::Forms::TextBox^  Subject_txt;
private: System::Windows::Forms::TextBox^  To_txt;

private: System::Windows::Forms::TextBox^  From_txt;


private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label27;

private: System::Windows::Forms::Label^  label25;

private: System::Windows::Forms::SplitContainer^  splitContainer1;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::SplitContainer^  splitContainer2;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
private: System::Windows::Forms::DateTimePicker^  Today;












	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Children_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Nights_NumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->Adults_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->Note_txt = (gcnew System::Windows::Forms::TextBox());
			this->CheckOut_Date = (gcnew System::Windows::Forms::DateTimePicker());
			this->Adults = (gcnew System::Windows::Forms::Label());
			this->CheckIn_Date = (gcnew System::Windows::Forms::DateTimePicker());
			this->Code_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->DoubleBed_NumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->OneBed_NumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->TowBeds_NumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Email_txt = (gcnew System::Windows::Forms::TextBox());
			this->Telephone_txt = (gcnew System::Windows::Forms::TextBox());
			this->City_txt = (gcnew System::Windows::Forms::TextBox());
			this->Address_txt = (gcnew System::Windows::Forms::TextBox());
			this->LastName_txt = (gcnew System::Windows::Forms::TextBox());
			this->FirstName_txt = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Payment = (gcnew System::Windows::Forms::GroupBox());
			this->CheckPrice_btn = (gcnew System::Windows::Forms::Button());
			this->Total_txt = (gcnew System::Windows::Forms::TextBox());
			this->Discount_txt = (gcnew System::Windows::Forms::TextBox());
			this->SubTotal_txt = (gcnew System::Windows::Forms::TextBox());
			this->Total_lbl = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->AllUser_btn = (gcnew System::Windows::Forms::Button());
			this->checkIn_btn = (gcnew System::Windows::Forms::Button());
			this->CheckOut_btn = (gcnew System::Windows::Forms::Button());
			this->ManageClient = (gcnew System::Windows::Forms::TabPage());
			this->Today = (gcnew System::Windows::Forms::DateTimePicker());
			this->Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->Generate_btn = (gcnew System::Windows::Forms::Button());
			this->Delete_btn = (gcnew System::Windows::Forms::Button());
			this->Update_btn = (gcnew System::Windows::Forms::Button());
			this->Add_btn = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Load_btn = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->To_txt = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->Subject_txt = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->From_txt = (gcnew System::Windows::Forms::TextBox());
			this->Send_btn = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Children_numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Nights_NumericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Adults_numericUpDown))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DoubleBed_NumericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->OneBed_NumericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TowBeds_NumericUpDown))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->Payment->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->ManageClient->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Khaki;
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->Children_numericUpDown);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->Nights_NumericUpDown);
			this->groupBox1->Controls->Add(this->Adults_numericUpDown);
			this->groupBox1->Controls->Add(this->Note_txt);
			this->groupBox1->Controls->Add(this->CheckOut_Date);
			this->groupBox1->Controls->Add(this->Adults);
			this->groupBox1->Controls->Add(this->CheckIn_Date);
			this->groupBox1->Controls->Add(this->Code_txt);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->groupBox1->Location = System::Drawing::Point(57, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(379, 350);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"General Information";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(233, 212);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(54, 20);
			this->label23->TabIndex = 16;
			this->label23->Text = L"Children";
			// 
			// Children_numericUpDown
			// 
			this->Children_numericUpDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Children_numericUpDown->Location = System::Drawing::Point(175, 206);
			this->Children_numericUpDown->Name = L"Children_numericUpDown";
			this->Children_numericUpDown->Size = System::Drawing::Size(43, 29);
			this->Children_numericUpDown->TabIndex = 18;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(139, 212);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(30, 20);
			this->label22->TabIndex = 18;
			this->label22->Text = L"and";
			// 
			// Nights_NumericUpDown
			// 
			this->Nights_NumericUpDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Nights_NumericUpDown->Location = System::Drawing::Point(147, 164);
			this->Nights_NumericUpDown->Name = L"Nights_NumericUpDown";
			this->Nights_NumericUpDown->Size = System::Drawing::Size(51, 26);
			this->Nights_NumericUpDown->TabIndex = 10;
			// 
			// Adults_numericUpDown
			// 
			this->Adults_numericUpDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Adults_numericUpDown->Location = System::Drawing::Point(42, 206);
			this->Adults_numericUpDown->Name = L"Adults_numericUpDown";
			this->Adults_numericUpDown->Size = System::Drawing::Size(42, 29);
			this->Adults_numericUpDown->TabIndex = 17;
			// 
			// Note_txt
			// 
			this->Note_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Note_txt->Location = System::Drawing::Point(34, 266);
			this->Note_txt->Multiline = true;
			this->Note_txt->Name = L"Note_txt";
			this->Note_txt->Size = System::Drawing::Size(313, 62);
			this->Note_txt->TabIndex = 9;
			// 
			// CheckOut_Date
			// 
			this->CheckOut_Date->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CheckOut_Date->Location = System::Drawing::Point(147, 124);
			this->CheckOut_Date->Name = L"CheckOut_Date";
			this->CheckOut_Date->Size = System::Drawing::Size(200, 26);
			this->CheckOut_Date->TabIndex = 7;
			// 
			// Adults
			// 
			this->Adults->AutoSize = true;
			this->Adults->Location = System::Drawing::Point(90, 212);
			this->Adults->Name = L"Adults";
			this->Adults->Size = System::Drawing::Size(46, 20);
			this->Adults->TabIndex = 15;
			this->Adults->Text = L"Adults";
			// 
			// CheckIn_Date
			// 
			this->CheckIn_Date->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CheckIn_Date->Location = System::Drawing::Point(147, 82);
			this->CheckIn_Date->Name = L"CheckIn_Date";
			this->CheckIn_Date->Size = System::Drawing::Size(200, 26);
			this->CheckIn_Date->TabIndex = 6;
			// 
			// Code_txt
			// 
			this->Code_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Code_txt->Location = System::Drawing::Point(148, 46);
			this->Code_txt->Name = L"Code_txt";
			this->Code_txt->Size = System::Drawing::Size(199, 26);
			this->Code_txt->TabIndex = 5;
			this->Code_txt->TextChanged += gcnew System::EventHandler(this, &Form2::Code_txt_TextChanged);
			this->Code_txt->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form2::Code_txt_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Note";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nights";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Check Out";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Check In";
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Code";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->DoubleBed_NumericUpDown);
			this->groupBox2->Controls->Add(this->OneBed_NumericUpDown);
			this->groupBox2->Controls->Add(this->TowBeds_NumericUpDown);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->groupBox2->Location = System::Drawing::Point(57, 399);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(379, 176);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Room Type";
			// 
			// DoubleBed_NumericUpDown
			// 
			this->DoubleBed_NumericUpDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DoubleBed_NumericUpDown->Location = System::Drawing::Point(147, 138);
			this->DoubleBed_NumericUpDown->Name = L"DoubleBed_NumericUpDown";
			this->DoubleBed_NumericUpDown->Size = System::Drawing::Size(51, 29);
			this->DoubleBed_NumericUpDown->TabIndex = 13;
			// 
			// OneBed_NumericUpDown
			// 
			this->OneBed_NumericUpDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OneBed_NumericUpDown->Location = System::Drawing::Point(147, 39);
			this->OneBed_NumericUpDown->Name = L"OneBed_NumericUpDown";
			this->OneBed_NumericUpDown->Size = System::Drawing::Size(51, 29);
			this->OneBed_NumericUpDown->TabIndex = 12;
			// 
			// TowBeds_NumericUpDown
			// 
			this->TowBeds_NumericUpDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TowBeds_NumericUpDown->Location = System::Drawing::Point(147, 86);
			this->TowBeds_NumericUpDown->Name = L"TowBeds_NumericUpDown";
			this->TowBeds_NumericUpDown->Size = System::Drawing::Size(51, 29);
			this->TowBeds_NumericUpDown->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(225, 140);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 20);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Type Double Bed";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(225, 88);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 20);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Type 2 Beds";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(32, 140);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 20);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Number of rooms";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(32, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 20);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Number of rooms";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(233, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Type 1 Bed";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Number of rooms";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->Email_txt);
			this->groupBox3->Controls->Add(this->Telephone_txt);
			this->groupBox3->Controls->Add(this->City_txt);
			this->groupBox3->Controls->Add(this->Address_txt);
			this->groupBox3->Controls->Add(this->LastName_txt);
			this->groupBox3->Controls->Add(this->FirstName_txt);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->groupBox3->Location = System::Drawing::Point(521, 30);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(432, 350);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Costumer Information";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(219, 200);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 27);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->Text = L"Chose Your Country";
			// 
			// Email_txt
			// 
			this->Email_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Email_txt->Location = System::Drawing::Point(219, 275);
			this->Email_txt->Name = L"Email_txt";
			this->Email_txt->Size = System::Drawing::Size(169, 26);
			this->Email_txt->TabIndex = 13;
			// 
			// Telephone_txt
			// 
			this->Telephone_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Telephone_txt->Location = System::Drawing::Point(219, 237);
			this->Telephone_txt->Name = L"Telephone_txt";
			this->Telephone_txt->Size = System::Drawing::Size(169, 26);
			this->Telephone_txt->TabIndex = 12;
			// 
			// City_txt
			// 
			this->City_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->City_txt->Location = System::Drawing::Point(219, 163);
			this->City_txt->Name = L"City_txt";
			this->City_txt->Size = System::Drawing::Size(169, 26);
			this->City_txt->TabIndex = 10;
			// 
			// Address_txt
			// 
			this->Address_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Address_txt->Location = System::Drawing::Point(219, 127);
			this->Address_txt->Name = L"Address_txt";
			this->Address_txt->Size = System::Drawing::Size(169, 26);
			this->Address_txt->TabIndex = 9;
			// 
			// LastName_txt
			// 
			this->LastName_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LastName_txt->Location = System::Drawing::Point(219, 85);
			this->LastName_txt->Name = L"LastName_txt";
			this->LastName_txt->Size = System::Drawing::Size(169, 26);
			this->LastName_txt->TabIndex = 8;
			// 
			// FirstName_txt
			// 
			this->FirstName_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FirstName_txt->Location = System::Drawing::Point(219, 50);
			this->FirstName_txt->Name = L"FirstName_txt";
			this->FirstName_txt->Size = System::Drawing::Size(169, 26);
			this->FirstName_txt->TabIndex = 7;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(78, 278);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 20);
			this->label19->TabIndex = 6;
			this->label19->Text = L"E-mail";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(74, 237);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 20);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Telephone";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(74, 200);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(51, 20);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Country";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(89, 166);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 20);
			this->label16->TabIndex = 3;
			this->label16->Text = L"City";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(74, 130);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 20);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Address";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(74, 88);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 20);
			this->label14->TabIndex = 1;
			this->label14->Text = L"LastName";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(74, 53);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 20);
			this->label13->TabIndex = 0;
			this->label13->Text = L"FirstName";
			// 
			// Payment
			// 
			this->Payment->Controls->Add(this->CheckPrice_btn);
			this->Payment->Controls->Add(this->Total_txt);
			this->Payment->Controls->Add(this->Discount_txt);
			this->Payment->Controls->Add(this->SubTotal_txt);
			this->Payment->Controls->Add(this->Total_lbl);
			this->Payment->Controls->Add(this->label21);
			this->Payment->Controls->Add(this->label20);
			this->Payment->Font = (gcnew System::Drawing::Font(L"Angelina", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Payment->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->Payment->Location = System::Drawing::Point(521, 399);
			this->Payment->Name = L"Payment";
			this->Payment->Size = System::Drawing::Size(432, 208);
			this->Payment->TabIndex = 3;
			this->Payment->TabStop = false;
			this->Payment->Text = L"Payment Information";
			// 
			// CheckPrice_btn
			// 
			this->CheckPrice_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->CheckPrice_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CheckPrice_btn->ForeColor = System::Drawing::Color::Transparent;
			this->CheckPrice_btn->Location = System::Drawing::Point(258, 171);
			this->CheckPrice_btn->Name = L"CheckPrice_btn";
			this->CheckPrice_btn->Size = System::Drawing::Size(103, 23);
			this->CheckPrice_btn->TabIndex = 6;
			this->CheckPrice_btn->Text = L"Check Price";
			this->CheckPrice_btn->UseVisualStyleBackColor = false;
			this->CheckPrice_btn->Click += gcnew System::EventHandler(this, &Form2::CheckPrice_btn_Click);
			// 
			// Total_txt
			// 
			this->Total_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Total_txt->Location = System::Drawing::Point(219, 128);
			this->Total_txt->Name = L"Total_txt";
			this->Total_txt->Size = System::Drawing::Size(142, 29);
			this->Total_txt->TabIndex = 5;
			// 
			// Discount_txt
			// 
			this->Discount_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Discount_txt->Location = System::Drawing::Point(219, 85);
			this->Discount_txt->Name = L"Discount_txt";
			this->Discount_txt->Size = System::Drawing::Size(142, 29);
			this->Discount_txt->TabIndex = 4;
			// 
			// SubTotal_txt
			// 
			this->SubTotal_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SubTotal_txt->Location = System::Drawing::Point(219, 38);
			this->SubTotal_txt->Name = L"SubTotal_txt";
			this->SubTotal_txt->Size = System::Drawing::Size(142, 29);
			this->SubTotal_txt->TabIndex = 3;
			// 
			// Total_lbl
			// 
			this->Total_lbl->AutoSize = true;
			this->Total_lbl->Location = System::Drawing::Point(63, 133);
			this->Total_lbl->Name = L"Total_lbl";
			this->Total_lbl->Size = System::Drawing::Size(38, 20);
			this->Total_lbl->TabIndex = 2;
			this->Total_lbl->Text = L"Total";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(63, 88);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(57, 20);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Discount";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(63, 41);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 20);
			this->label20->TabIndex = 0;
			this->label20->Text = L"SubTotal";
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->ManageClient);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Angelina", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(28, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1011, 697);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->BackColor = System::Drawing::Color::Khaki;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage1->Controls->Add(this->splitContainer2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage1->ForeColor = System::Drawing::Color::Black;
			this->tabPage1->Location = System::Drawing::Point(4, 35);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1003, 658);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"News";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Location = System::Drawing::Point(3, 6);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->BackColor = System::Drawing::Color::Khaki;
			this->splitContainer2->Panel1->Controls->Add(this->label31);
			this->splitContainer2->Panel1->Controls->Add(this->pictureBox1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->BackColor = System::Drawing::Color::Khaki;
			this->splitContainer2->Panel2->Controls->Add(this->dateTimePicker2);
			this->splitContainer2->Panel2->Controls->Add(this->dateTimePicker1);
			this->splitContainer2->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer2->Panel2->Controls->Add(this->AllUser_btn);
			this->splitContainer2->Panel2->Controls->Add(this->checkIn_btn);
			this->splitContainer2->Panel2->Controls->Add(this->CheckOut_btn);
			this->splitContainer2->Size = System::Drawing::Size(980, 646);
			this->splitContainer2->SplitterDistance = 161;
			this->splitContainer2->TabIndex = 4;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label31->Location = System::Drawing::Point(12, 14);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(118, 117);
			this->label31->TabIndex = 0;
			this->label31->Text = L"News \r\n   of\r\nToday";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(151, -82);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(823, 240);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarFont = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Location = System::Drawing::Point(3, 177);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker2->TabIndex = 5;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(3, 57);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(209, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::DarkKhaki;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::LemonChiffon;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Olive;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Size = System::Drawing::Size(768, 434);
			this->dataGridView1->TabIndex = 2;
			// 
			// AllUser_btn
			// 
			this->AllUser_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->AllUser_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AllUser_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AllUser_btn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->AllUser_btn->Location = System::Drawing::Point(45, 312);
			this->AllUser_btn->Name = L"AllUser_btn";
			this->AllUser_btn->Size = System::Drawing::Size(102, 41);
			this->AllUser_btn->TabIndex = 3;
			this->AllUser_btn->Text = L"All User";
			this->AllUser_btn->UseVisualStyleBackColor = false;
			this->AllUser_btn->Click += gcnew System::EventHandler(this, &Form2::AllUser_btn_Click_1);
			// 
			// checkIn_btn
			// 
			this->checkIn_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->checkIn_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkIn_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkIn_btn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->checkIn_btn->Location = System::Drawing::Point(45, 95);
			this->checkIn_btn->Name = L"checkIn_btn";
			this->checkIn_btn->Size = System::Drawing::Size(102, 41);
			this->checkIn_btn->TabIndex = 0;
			this->checkIn_btn->Text = L"Check In";
			this->checkIn_btn->UseVisualStyleBackColor = false;
			this->checkIn_btn->Click += gcnew System::EventHandler(this, &Form2::checkIn_btn_Click);
			// 
			// CheckOut_btn
			// 
			this->CheckOut_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->CheckOut_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CheckOut_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CheckOut_btn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->CheckOut_btn->Location = System::Drawing::Point(45, 215);
			this->CheckOut_btn->Name = L"CheckOut_btn";
			this->CheckOut_btn->Size = System::Drawing::Size(102, 41);
			this->CheckOut_btn->TabIndex = 1;
			this->CheckOut_btn->Text = L"Check Out";
			this->CheckOut_btn->UseVisualStyleBackColor = false;
			this->CheckOut_btn->Click += gcnew System::EventHandler(this, &Form2::CheckOut_btn_Click);
			// 
			// ManageClient
			// 
			this->ManageClient->AutoScroll = true;
			this->ManageClient->BackColor = System::Drawing::Color::Khaki;
			this->ManageClient->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ManageClient->Controls->Add(this->Today);
			this->ManageClient->Controls->Add(this->Cancel_btn);
			this->ManageClient->Controls->Add(this->Generate_btn);
			this->ManageClient->Controls->Add(this->Delete_btn);
			this->ManageClient->Controls->Add(this->groupBox1);
			this->ManageClient->Controls->Add(this->Update_btn);
			this->ManageClient->Controls->Add(this->Add_btn);
			this->ManageClient->Controls->Add(this->Payment);
			this->ManageClient->Controls->Add(this->groupBox2);
			this->ManageClient->Controls->Add(this->groupBox3);
			this->ManageClient->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->ManageClient->Location = System::Drawing::Point(4, 35);
			this->ManageClient->Name = L"ManageClient";
			this->ManageClient->Padding = System::Windows::Forms::Padding(3);
			this->ManageClient->Size = System::Drawing::Size(1003, 658);
			this->ManageClient->TabIndex = 1;
			this->ManageClient->Text = L"Manage Client";
			// 
			// Today
			// 
			this->Today->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Today->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Today->Location = System::Drawing::Point(286, 6);
			this->Today->Name = L"Today";
			this->Today->Size = System::Drawing::Size(199, 25);
			this->Today->TabIndex = 10;
			this->Today->Visible = false;
			// 
			// Cancel_btn
			// 
			this->Cancel_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Cancel_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Cancel_btn->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Cancel_btn->Location = System::Drawing::Point(602, 614);
			this->Cancel_btn->Name = L"Cancel_btn";
			this->Cancel_btn->Size = System::Drawing::Size(75, 36);
			this->Cancel_btn->TabIndex = 9;
			this->Cancel_btn->Text = L"Cancel";
			this->Cancel_btn->UseVisualStyleBackColor = false;
			this->Cancel_btn->Click += gcnew System::EventHandler(this, &Form2::Cancel_btn_Click);
			// 
			// Generate_btn
			// 
			this->Generate_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Generate_btn->Enabled = false;
			this->Generate_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Generate_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Generate_btn->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Generate_btn->Location = System::Drawing::Point(714, 614);
			this->Generate_btn->Name = L"Generate_btn";
			this->Generate_btn->Size = System::Drawing::Size(75, 36);
			this->Generate_btn->TabIndex = 8;
			this->Generate_btn->Text = L"Generate";
			this->Generate_btn->UseVisualStyleBackColor = false;
			this->Generate_btn->Click += gcnew System::EventHandler(this, &Form2::Generate_btn_Click);
			// 
			// Delete_btn
			// 
			this->Delete_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Delete_btn->Enabled = false;
			this->Delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Delete_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Delete_btn->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Delete_btn->Location = System::Drawing::Point(481, 614);
			this->Delete_btn->Name = L"Delete_btn";
			this->Delete_btn->Size = System::Drawing::Size(75, 36);
			this->Delete_btn->TabIndex = 7;
			this->Delete_btn->Text = L"Delete";
			this->Delete_btn->UseVisualStyleBackColor = false;
			this->Delete_btn->Click += gcnew System::EventHandler(this, &Form2::Delete_btn_Click);
			// 
			// Update_btn
			// 
			this->Update_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Update_btn->Enabled = false;
			this->Update_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Update_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Update_btn->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Update_btn->Location = System::Drawing::Point(361, 614);
			this->Update_btn->Name = L"Update_btn";
			this->Update_btn->Size = System::Drawing::Size(75, 36);
			this->Update_btn->TabIndex = 6;
			this->Update_btn->Text = L"Update";
			this->Update_btn->UseVisualStyleBackColor = false;
			this->Update_btn->Click += gcnew System::EventHandler(this, &Form2::Update_btn_Click);
			// 
			// Add_btn
			// 
			this->Add_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_btn->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Add_btn->Location = System::Drawing::Point(232, 614);
			this->Add_btn->Name = L"Add_btn";
			this->Add_btn->Size = System::Drawing::Size(75, 36);
			this->Add_btn->TabIndex = 5;
			this->Add_btn->Text = L"Add";
			this->Add_btn->UseVisualStyleBackColor = false;
			this->Add_btn->Click += gcnew System::EventHandler(this, &Form2::Add_btn_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->BackColor = System::Drawing::Color::Khaki;
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage2->Controls->Add(this->splitContainer1);
			this->tabPage2->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->tabPage2->Location = System::Drawing::Point(4, 35);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(1003, 658);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"General Information";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::Khaki;
			this->splitContainer1->Panel1->Controls->Add(this->label30);
			this->splitContainer1->Panel1->Margin = System::Windows::Forms::Padding(0, 0, 0, 3);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::Khaki;
			this->splitContainer1->Panel2->Controls->Add(this->chart1);
			this->splitContainer1->Panel2->Controls->Add(this->Load_btn);
			this->splitContainer1->Panel2->Controls->Add(this->chart2);
			this->splitContainer1->Panel2->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->splitContainer1->Size = System::Drawing::Size(1004, 668);
			this->splitContainer1->SplitterDistance = 135;
			this->splitContainer1->TabIndex = 5;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Angelina", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label30->Location = System::Drawing::Point(280, 58);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(318, 50);
			this->label30->TabIndex = 4;
			this->label30->Text = L"Hotel Capacity Chart";
			this->label30->Click += gcnew System::EventHandler(this, &Form2::label30_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->BackColor = System::Drawing::Color::Khaki;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::Khaki;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(27, 55);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Chocolate;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->IsValueShownAsLabel = true;
			series1->Legend = L"Legend1";
			series1->Name = L"OccupiedRooms";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(441, 383);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Alignment = System::Drawing::ContentAlignment::BottomCenter;
			title1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			title1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			title1->Name = L"Room Status";
			title1->Text = L"Room Information";
			this->chart1->Titles->Add(title1);
			// 
			// Load_btn
			// 
			this->Load_btn->Location = System::Drawing::Point(895, 469);
			this->Load_btn->Name = L"Load_btn";
			this->Load_btn->Size = System::Drawing::Size(75, 50);
			this->Load_btn->TabIndex = 3;
			this->Load_btn->Text = L"Load";
			this->Load_btn->UseVisualStyleBackColor = true;
			this->Load_btn->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::Transparent;
			chartArea2->BackColor = System::Drawing::Color::Khaki;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->BackColor = System::Drawing::Color::Khaki;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(529, 55);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->IsValueShownAsLabel = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(458, 383);
			this->chart2->TabIndex = 2;
			this->chart2->Text = L"chart2";
			title2->Alignment = System::Drawing::ContentAlignment::BottomCenter;
			title2->BackColor = System::Drawing::Color::Transparent;
			title2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			title2->ForeColor = System::Drawing::Color::DarkGoldenrod;
			title2->Name = L"Title1";
			title2->Text = L"Occupied Room Information";
			this->chart2->Titles->Add(title2);
			// 
			// tabPage3
			// 
			this->tabPage3->AutoScroll = true;
			this->tabPage3->BackColor = System::Drawing::Color::Khaki;
			this->tabPage3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Controls->Add(this->groupBox4);
			this->tabPage3->Controls->Add(this->Send_btn);
			this->tabPage3->Controls->Add(this->richTextBox1);
			this->tabPage3->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->tabPage3->Location = System::Drawing::Point(4, 35);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1003, 658);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Contact Client";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Enabled = false;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(365, 84);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(602, 197);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Khaki;
			this->label24->Font = (gcnew System::Drawing::Font(L"Angelina", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label24->Location = System::Drawing::Point(79, 92);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(169, 39);
			this->label24->TabIndex = 16;
			this->label24->Text = L"Contact Client";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(21, 171);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(338, 452);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->To_txt);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->Subject_txt);
			this->groupBox4->Controls->Add(this->label28);
			this->groupBox4->Controls->Add(this->From_txt);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox4->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->groupBox4->Location = System::Drawing::Point(405, 118);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(556, 169);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Send Email";
			// 
			// To_txt
			// 
			this->To_txt->Location = System::Drawing::Point(197, 80);
			this->To_txt->Name = L"To_txt";
			this->To_txt->Size = System::Drawing::Size(301, 29);
			this->To_txt->TabIndex = 9;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(90, 43);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 24);
			this->label25->TabIndex = 1;
			this->label25->Text = L"From";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(90, 87);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(33, 24);
			this->label27->TabIndex = 3;
			this->label27->Text = L"To";
			// 
			// Subject_txt
			// 
			this->Subject_txt->Location = System::Drawing::Point(197, 117);
			this->Subject_txt->Name = L"Subject_txt";
			this->Subject_txt->Size = System::Drawing::Size(301, 29);
			this->Subject_txt->TabIndex = 10;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(93, 124);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(73, 24);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Subject";
			// 
			// From_txt
			// 
			this->From_txt->Enabled = false;
			this->From_txt->Location = System::Drawing::Point(197, 43);
			this->From_txt->Name = L"From_txt";
			this->From_txt->Size = System::Drawing::Size(301, 29);
			this->From_txt->TabIndex = 7;
			// 
			// Send_btn
			// 
			this->Send_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Send_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Send_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Send_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Send_btn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Send_btn.Image")));
			this->Send_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Send_btn->Location = System::Drawing::Point(799, 315);
			this->Send_btn->Name = L"Send_btn";
			this->Send_btn->Padding = System::Windows::Forms::Padding(3, 2, 2, 0);
			this->Send_btn->Size = System::Drawing::Size(104, 45);
			this->Send_btn->TabIndex = 13;
			this->Send_btn->Text = L"Send";
			this->Send_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Send_btn->UseVisualStyleBackColor = false;
			this->Send_btn->Click += gcnew System::EventHandler(this, &Form2::Send_btn_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(405, 387);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(505, 236);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1051, 721);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(1059, 760);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1067, 760);
			this->MinimumSize = System::Drawing::Size(1067, 726);
			this->Name = L"Form2";
			this->Text = L"Hotel System Booking";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form2::Form2_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Children_numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Nights_NumericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Adults_numericUpDown))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DoubleBed_NumericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->OneBed_NumericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TowBeds_NumericUpDown))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->Payment->ResumeLayout(false);
			this->Payment->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ManageClient->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void domainUpDown2_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {

String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select Id,FirstName,LastName,Address,City,Country,Email,CheckIn,CheckOut,Payment from HotelReservationDB.Client;",conDataBase);


MySqlDataReader^ myReader;
MySqlDataReader^ myReader1;
MySqlDataReader^ myReader2;
try
{
	MySqlDataAdapter ^ sda=gcnew MySqlDataAdapter();
	sda->SelectCommand=cmdDataBase;
	DataTable^ dbdataset= gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bSource=gcnew BindingSource();

	bSource->DataSource=dbdataset;
	dataGridView1->DataSource=bSource;
	sda->Update(dbdataset);

	
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
///update occupied rooms
int OccupiedRooms=0;
int OccupiedOneBed=0;
int OccupiedTowBeds=0;
int OccupiedDoubleBed=0;


int EmptyRooms=0;
int EmptyOneBed=0;
int EmptyTowBeds=0;
int EmptyDoubleBed=0;

////update value
 OccupiedOneBed=emptyOneBed("SELECT * FROM hotelreservationdb.Client where IsOccupiedOneBed='Yes';","OneBed");
 OccupiedTowBeds=emptyOneBed("SELECT * FROM hotelreservationdb.Client where IsOccupiedTowBeds='Yes';","TowBeds");
 OccupiedDoubleBed=emptyOneBed("SELECT * FROM hotelreservationdb.Client where IsOccupiedDoubleBed='Yes';","DoubleBed");
 OccupiedRooms=OccupiedOneBed+OccupiedTowBeds+OccupiedDoubleBed;

 EmptyRooms=200-OccupiedRooms;
 EmptyOneBed=60-OccupiedOneBed;
 EmptyTowBeds=60-OccupiedTowBeds;
 EmptyDoubleBed=80-OccupiedDoubleBed;
 //update table on database hotelInformation and Static;
 //update occupiedRooms 
			
 		

try
{
	MySqlCommand^ cmdDataHotelInformationUpdate=gcnew MySqlCommand("Update HotelreservationDB.hotelinformation set OccupiedRooms='"+OccupiedRooms+"',OccupiedOneBed='"+OccupiedOneBed+"',OccupiedTowBeds='"+OccupiedTowBeds+"',OccupiedDoubleBed='"+OccupiedDoubleBed+"' where Id=1 ;",conDataBase);
	
	conDataBase->Open();
			myReader1=cmdDataHotelInformationUpdate->ExecuteReader();
			myReader1->Close();
			//update empty rooms
			MySqlCommand^ cmdDataHotelInformationUpdateForEmtyRooms=gcnew MySqlCommand("Update HotelreservationDB.hotelinformation set OccupiedRooms='"+EmptyRooms+"',OccupiedOneBed='"+EmptyOneBed+"',OccupiedTowBeds='"+EmptyTowBeds+"',OccupiedDoubleBed='"+EmptyDoubleBed+"' where Id=2 ;",conDataBase);
			myReader=cmdDataHotelInformationUpdateForEmtyRooms->ExecuteReader();
			myReader->Close();
			//upadte table statistic to show charts
			MySqlCommand^ cmdDataStatisticOccupiedOneBedUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedOneBed+"' where Id=1 ;",conDataBase);
			MySqlCommand^ cmdDataStatisticOccupiedTowBedsUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedTowBeds+"' where Id=2 ;",conDataBase);
			MySqlCommand^ cmdDataStatisticOccupiedDoubleBedUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedDoubleBed+"' where Id=3 ;",conDataBase);
			myReader2=cmdDataStatisticOccupiedOneBedUpdate->ExecuteReader();
			myReader2->Close();
			myReader2=cmdDataStatisticOccupiedTowBedsUpdate->ExecuteReader();
			myReader2->Close();
			myReader2=cmdDataStatisticOccupiedDoubleBedUpdate->ExecuteReader();
			myReader2->Close();

}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
conDataBase->Close();


///////////////////////////


//chart1 loading

MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("SELECT * FROM hotelreservationdb.hotelinformation  ;",conDataBase);


try
{
	conDataBase->Open();
	myReader=cmdDataBase2->ExecuteReader();
	while(myReader->Read())
	{
		this->chart1->Series["OccupiedRooms"]->Points->AddXY(myReader->GetString("FakeName"),myReader->GetString("OccupiedRooms"));
		
	}

}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
myReader->Close();
conDataBase->Close();
//chart2 loading

MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT * FROM hotelreservationdb.statistic  ;",conDataBase);


try
{
	conDataBase->Open();
	myReader=cmdDataBase1->ExecuteReader();
	while(myReader->Read())
	{
		this->chart2->Series["Series1"]->Points->AddXY(myReader->GetString("BedRoom"),myReader->GetString("Value"));
		
	}

}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}


		 }
private: System::Void checkIn_btn_Click(System::Object^  sender, System::EventArgs^  e) {

String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select Id,FirstName,LastName,Email,CheckIn,CheckOut,Payment from HotelReservationDB.Client where CheckIn ='"+this->dateTimePicker1->Text+"' ;",conDataBase);

try
{
	MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
	sda->SelectCommand=cmdDataBase;
	DataTable^ dbdataset= gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bSource=gcnew BindingSource();

	bSource->DataSource=dbdataset;
	dataGridView1->DataSource=bSource;
	sda->Update(dbdataset);

	
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
		 }
private: System::Void CheckOut_btn_Click(System::Object^  sender, System::EventArgs^  e) {
String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select Id,FirstName,LastName,Email,CheckIn,CheckOut,Payment from HotelReservationDB.Client where CheckOut ='"+this->dateTimePicker2->Text+"' ;",conDataBase);

try
{
	MySqlDataAdapter ^ sda=gcnew MySqlDataAdapter();
	sda->SelectCommand=cmdDataBase;
	DataTable^ dbdataset= gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bSource=gcnew BindingSource();

	bSource->DataSource=dbdataset;
	dataGridView1->DataSource=bSource;
	sda->Update(dbdataset);

	
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
		 }
private: System::Void Add_btn_Click(System::Object^  sender, System::EventArgs^  e) {

int OccupiedRooms=0;
int OccupiedOneBed=0;
int OccupiedTowBeds=0;
int OccupiedDoubleBed=0;
int Adults=0;
int Children=0;


int EmptyRooms=0;
int EmptyOneBed=0;
int EmptyTowBeds=0;
int EmptyDoubleBed=0;
///////////////////////////////
String^ IsOccupiedOneBed="No";
String^	IsOccupiedTowBeds="No";
String^	IsOccupiedDoubleBed="No";
if(this->OneBed_NumericUpDown->Text!="0" && this->CheckIn_Date->MinDate==this->Today->MinDate)
					 {
						 IsOccupiedOneBed="Yes";
					 }
if(this->TowBeds_NumericUpDown->Text!="0" && this->CheckIn_Date->MinDate==this->Today->MinDate)
					 {
						 IsOccupiedTowBeds="Yes";
					 }
if(this->DoubleBed_NumericUpDown->Text!="0" && this->CheckIn_Date->MinDate==this->Today->MinDate)
					 {
						 IsOccupiedDoubleBed="Yes";
					 }
///////////////////////////////////////////



String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);

MySqlCommand^ cmdDataBaseClientInsert=gcnew MySqlCommand("Insert into HotelReservationDB.Client (FirstName,LastName,Address,Telephone,City,Country,Email,Nights,CheckIn,CheckOut,Adults,Children,Payment,Note,OneBed,TowBeds,DoubleBed,IsOccupiedOneBed,IsOccupiedTowBeds,IsOccupiedDoubleBed) values('"+this->FirstName_txt->Text+"','"+this->LastName_txt->Text+"','"+this->Address_txt->Text+"','"+this->Telephone_txt->Text+"','"+this->City_txt->Text+"','"+this->comboBox1->Text+"','"+this->Email_txt->Text+"','"+this->Nights_NumericUpDown->Text+"','"+this->CheckIn_Date->Text+"','"+this->CheckOut_Date->Text+"','"+this->Adults_numericUpDown->Text+"','"+this->Children_numericUpDown->Text+"','"+this->CalculTotal()+"','"+this->Note_txt->Text+"','"+this->OneBed_NumericUpDown->Text+"','"+this->TowBeds_NumericUpDown->Text+"','"+this->DoubleBed_NumericUpDown->Text+"','"+IsOccupiedOneBed+"','"+IsOccupiedTowBeds+"','"+IsOccupiedDoubleBed+"') ;",conDataBase);

MySqlCommand^ cmdDataHotelInformationSelect=gcnew MySqlCommand("select * from HotelreservationDB.hotelinformation where id =1;",conDataBase);

MySqlDataReader^ myReader;
MySqlDataReader^ myReader1;
MySqlDataReader^ myReader2;


if (this->FirstName_txt->Text->Length==0||this->LastName_txt->Text->Length==0||this->Address_txt->Text->Length==0||this->Nights_NumericUpDown->Text=="0"||this->Email_txt->Text->Length==0)
			 {
				 MessageBox::Show("Please inter Client Data : fisrtName,LastName,Address,Telephone,Nights,Email");
			 }
else if(this->Adults_numericUpDown->Text=="0"&&this->Children_numericUpDown->Text=="0")
				 {
					 MessageBox::Show("There is No Person to Reserve Rooms");
				 }
else if(this->OneBed_NumericUpDown->Text=="0"&&this->TowBeds_NumericUpDown->Text=="0"&&this->DoubleBed_NumericUpDown->Text=="0")
					 {
						 MessageBox::Show("No Room Reserved");
					 }
				 
 else
 {

	try
	{
			conDataBase->Open();
			
								///insertion donner
			int par1=System::Int32::Parse(Nights_NumericUpDown->Text);
			if(VerifyAvailableReservation(par1,conDataBase))
			{
								myReader=cmdDataBaseClientInsert->ExecuteReader();
								myReader->Close();
								MessageBox::Show("Inserted Succsessfully");
			
								if(CheckIn_Date->MinDate==this->Today->MinDate)
								{
									myReader=cmdDataHotelInformationSelect->ExecuteReader();
									while(myReader->Read())
									{
									
										OccupiedRooms=myReader->GetInt32("OccupiedRooms")+System::Int32::Parse(this->DoubleBed_NumericUpDown->Text)+System::Int32::Parse(this->OneBed_NumericUpDown->Text)+System::Int32::Parse(this->TowBeds_NumericUpDown->Text);
										OccupiedOneBed=myReader->GetInt32("OccupiedOneBed")+System::Int32::Parse(this->OneBed_NumericUpDown->Text);
										OccupiedTowBeds=myReader->GetInt32("OccupiedTowBeds")+System::Int32::Parse(this->TowBeds_NumericUpDown->Text);
										OccupiedDoubleBed=myReader->GetInt32("OccupiedDoubleBed")+System::Int32::Parse(this->DoubleBed_NumericUpDown->Text);
										Adults=myReader->GetInt32("Adults")+System::Int32::Parse(this->Adults_numericUpDown->Text);
										Children=myReader->GetInt32("Children")+System::Int32::Parse(this->Children_numericUpDown->Text);
									
				
									}
									 OccupiedRooms;
									 MySqlCommand^ cmdDataHotelInformationUpdate=gcnew MySqlCommand("Update HotelreservationDB.hotelinformation set OccupiedRooms='"+OccupiedRooms+"',OccupiedOneBed='"+OccupiedOneBed+"',OccupiedTowBeds='"+OccupiedTowBeds+"',OccupiedDoubleBed='"+OccupiedDoubleBed+"',Adults='"+Adults+"',Children='"+Children+"' where Id=1 ;",conDataBase);

									myReader->Close();
									myReader1=cmdDataHotelInformationUpdate->ExecuteReader();
									myReader1->Close();
									   EmptyRooms=200-OccupiedRooms;
										EmptyOneBed=60-OccupiedOneBed;
										EmptyTowBeds=60-OccupiedTowBeds;
										EmptyDoubleBed=80-OccupiedDoubleBed;

									MySqlCommand^ cmdDataHotelInformationUpdateForEmtyRooms=gcnew MySqlCommand("Update HotelreservationDB.hotelinformation set OccupiedRooms='"+EmptyRooms+"',OccupiedOneBed='"+EmptyOneBed+"',OccupiedTowBeds='"+EmptyTowBeds+"',OccupiedDoubleBed='"+EmptyDoubleBed+"' where Id=2 ;",conDataBase);
									myReader=cmdDataHotelInformationUpdateForEmtyRooms->ExecuteReader();
									myReader->Close();
									//upadte table statistic to show charts
									MySqlCommand^ cmdDataStatisticOccupiedOneBedUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedOneBed+"' where Id=1 ;",conDataBase);
									MySqlCommand^ cmdDataStatisticOccupiedTowBedsUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedTowBeds+"' where Id=2 ;",conDataBase);
									MySqlCommand^ cmdDataStatisticOccupiedDoubleBedUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedDoubleBed+"' where Id=3 ;",conDataBase);
									myReader2=cmdDataStatisticOccupiedOneBedUpdate->ExecuteReader();
									myReader2->Close();
									myReader2=cmdDataStatisticOccupiedTowBedsUpdate->ExecuteReader();
									myReader2->Close();
									myReader2=cmdDataStatisticOccupiedDoubleBedUpdate->ExecuteReader();
									myReader2->Close();

								}
									conDataBase->Close();
								}
					}
					catch(Exception^ ex)
					{
						MessageBox::Show(ex->Message);
					}
	
			 }

		 }


		 ////////////////////////
		 //Fonction CalCulTotal//
		 ///////////////////////
private:
	double CalculSubTotal()
{
	return double ((OneBed_NumericUpDown->Value*70 + TowBeds_NumericUpDown->Value *130 +DoubleBed_NumericUpDown->Value *100)*Nights_NumericUpDown->Value);
}
private:
	double CalculDiscount()
	{
		if ((Adults_numericUpDown->Value +Children_numericUpDown->Value)>4)
		{
			return double((Adults_numericUpDown->Value +Children_numericUpDown->Value) * 10);
		}
		else
			return 0;
			
	}
private :
	double  CalculTotal()
	{
		return CalculSubTotal()-CalculDiscount();
	}

	//                            //
	//fin calcul prix            //
	//////////////////////////////





private: System::Void CheckPrice_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			SubTotal_txt->Text=CalculSubTotal().ToString() + " Dinars";
			Discount_txt->Text=CalculDiscount().ToString() + " Dinars";
			Total_txt->Text=CalculTotal().ToString() + " Dinars";
		 }
private: System::Void Generate_btn_Click(System::Object^  sender, System::EventArgs^  e) {

String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from HotelReservationDB.Client where Id='"+this->Code_txt->Text+"' ;",conDataBase);
MySqlDataReader^ myReader;

try
{
	conDataBase->Open();
	myReader=cmdDataBase->ExecuteReader();
	if(myReader->Read())
	{
		FirstName_txt->Text= myReader->GetString("FirstName");
		LastName_txt->Text= myReader->GetString("LastName");
		Address_txt->Text= myReader->GetString("Address");
		City_txt->Text= myReader->GetString("City");
		comboBox1->Text= myReader->GetString("Country");
		Telephone_txt->Text= myReader->GetString("Telephone");
		Email_txt->Text= myReader->GetString("Email");
		CheckIn_Date->Text=myReader->GetString("CheckIn");
		CheckOut_Date->Text=myReader->GetString("CheckOut");
		Nights_NumericUpDown->Text=myReader->GetInt32("Nights").ToString();
		Adults_numericUpDown->Text=myReader->GetInt32("Adults").ToString();
		Children_numericUpDown->Text=myReader->GetInt32("Children").ToString();
		Total_txt->Text= myReader->GetString("Payment");
		Note_txt->Text= myReader->GetString("Note");
		OneBed_NumericUpDown->Text=myReader->GetInt32("OneBed").ToString();
		TowBeds_NumericUpDown->Text=myReader->GetInt32("TowBeds").ToString();
		DoubleBed_NumericUpDown->Text=myReader->GetInt32("DoubleBed").ToString();
	}
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}

Update_btn->Enabled=true;
Delete_btn->Enabled=true;


		 }
private: System::Void Update_btn_Click(System::Object^  sender, System::EventArgs^  e) {


int OccupiedRooms=0;
int OccupiedOneBed=0;
int OccupiedTowBeds=0;
int OccupiedDoubleBed=0;
int Adults=0;
int Children=0;

int OccupiedRoomsByClient=0;
int OccupiedOneBedByClient=0;
int OccupiedTowBedsByClient=0;
int OccupiedDoubleBedByClient=0;
int AdultsByClient=0;
int ChildrenByClient=0;


int EmptyRooms=0;
int EmptyOneBed=0;
int EmptyTowBeds=0;
int EmptyDoubleBed=0;


///////////////////////////////
String^ IsOccupiedOneBed="No";
String^	IsOccupiedTowBeds="No";
String^	IsOccupiedDoubleBed="No";
if(this->OneBed_NumericUpDown->Text!="0" && this->CheckIn_Date->MinDate==this->Today->MinDate)
					 {
						 IsOccupiedOneBed="Yes";
					 }
if(this->TowBeds_NumericUpDown->Text!="0" && this->CheckIn_Date->MinDate==this->Today->MinDate)
					 {
						 IsOccupiedTowBeds="Yes";
					 }
if(this->DoubleBed_NumericUpDown->Text!="0" && this->CheckIn_Date->MinDate==this->Today->MinDate)
					 {
						 IsOccupiedDoubleBed="Yes";
					 }
///////////////////////////////////////////


String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);

MySqlCommand^ cmdDataBaseClientUpdate=gcnew MySqlCommand("Update HotelReservationDB.Client set FirstName='"+this->FirstName_txt->Text+"',LastName='"+this->LastName_txt->Text+"',Address='"+this->Address_txt->Text+"',Telephone='"+this->Telephone_txt->Text+"',City='"+this->City_txt->Text+"',Country='"+this->comboBox1->Text+"',Email='"+this->Email_txt->Text+"',Nights='"+this->Nights_NumericUpDown->Text+"',CheckIn='"+this->CheckIn_Date->Text+"',CheckOut='"+this->CheckOut_Date->Text+"',Adults='"+this->Adults_numericUpDown->Text+"',Children='"+this->Children_numericUpDown->Text+"',Payment='"+this->CalculTotal()+"',Note='"+this->Note_txt->Text+"',OneBed='"+this->OneBed_NumericUpDown->Text+"',TowBeds='"+this->TowBeds_NumericUpDown->Text+"',DoubleBed='"+this->DoubleBed_NumericUpDown->Text+"', IsOccupiedOneBed='"+IsOccupiedOneBed+"',IsOccupiedTowBeds='"+IsOccupiedTowBeds+"',IsOccupiedDoubleBed='"+IsOccupiedDoubleBed+"'  where Id='"+this->Code_txt->Text+"';",conDataBase);
MySqlCommand^ cmdDataBaseClientselect=gcnew MySqlCommand("select * from HotelReservationDB.Client where id='"+Code_txt->Text+"';",conDataBase);
MySqlCommand^ cmdDataBaseHotelInformationselect=gcnew MySqlCommand("select * from hotelreservationdb.hotelinformation where id=1;",conDataBase);


MySqlDataReader^ myReader;
MySqlDataReader^ myReader1;

if (this->FirstName_txt->Text->Length==0||this->LastName_txt->Text->Length==0||this->Address_txt->Text->Length==0||this->Nights_NumericUpDown->Text=="0"||this->Email_txt->Text->Length==0)
			 {
				 MessageBox::Show("Please inter Client Data : fisrtName,LastName,Address,Telephone,Nights,Email");
			 }
else if(this->Adults_numericUpDown->Text=="0"&&this->Children_numericUpDown->Text=="0")
				 {
					 MessageBox::Show("There is No Person to Reserve Rooms");
				 }
else if(this->OneBed_NumericUpDown->Text=="0"&&this->TowBeds_NumericUpDown->Text=="0"&&this->DoubleBed_NumericUpDown->Text=="0")
					 {
						 MessageBox::Show("No Room Reserved");
					 }
				 
 else
 {

try
{
			conDataBase->Open();
			int par1=System::Int32::Parse(Nights_NumericUpDown->Text);
			if(VerifyAvailableReservation(par1,conDataBase))
			{
			//selectioner les valeur du client
			myReader1=cmdDataBaseClientselect->ExecuteReader();
			while(myReader1->Read())
			{
				OccupiedOneBedByClient=myReader1->GetInt32("OneBed");
				OccupiedTowBedsByClient=myReader1->GetInt32("TowBeds");
				OccupiedDoubleBedByClient=myReader1->GetInt32("DoubleBed");
				AdultsByClient=myReader1->GetInt32("Adults");
				ChildrenByClient=myReader1->GetInt32("Children");
				
			}
			myReader1->Close();

				//selectioner les informations sur les chambres
			myReader1=cmdDataBaseHotelInformationselect->ExecuteReader();
			if(CheckIn_Date->MinDate==this->Today->MinDate)
			{
				while(myReader1->Read())
				{
					OccupiedRooms=myReader1->GetInt32("OccupiedRooms");
					OccupiedOneBed=myReader1->GetInt32("OccupiedOneBed");
					OccupiedTowBeds=myReader1->GetInt32("OccupiedTowBeds");
					OccupiedDoubleBed=myReader1->GetInt32("OccupiedDoubleBed");
					Adults=myReader1->GetInt32("Adults");
					Children=myReader1->GetInt32("Children");
				
				}
				myReader1->Close();
				//refraichir les informations sur les chambre suite a la modificaion

					   // eleminer les valeur anciennces
							OccupiedRooms-=OccupiedRoomsByClient;
							OccupiedOneBed-=OccupiedOneBedByClient;
							OccupiedTowBeds-=OccupiedTowBedsByClient;
							OccupiedDoubleBed-=OccupiedDoubleBedByClient;
							Adults-=AdultsByClient;
							Children-=ChildrenByClient;
							//ajouter les nouvelle valeur

				//update base de donnee pour 
		
							OccupiedRooms=OccupiedRooms+System::Int32::Parse(OneBed_NumericUpDown->Text)+System::Int32::Parse(TowBeds_NumericUpDown->Text)+System::Int32::Parse(DoubleBed_NumericUpDown->Text);
							OccupiedOneBed+=System::Int32::Parse(OneBed_NumericUpDown->Text);
							OccupiedTowBeds+=System::Int32::Parse(TowBeds_NumericUpDown->Text);
							OccupiedDoubleBed+=System::Int32::Parse(DoubleBed_NumericUpDown->Text);
							Adults+=System::Int32::Parse(Adults_numericUpDown->Text);
							Children+=System::Int32::Parse(Children_numericUpDown->Text);
		
				// update emty room
					EmptyRooms=200-OccupiedRooms;
					EmptyOneBed=60-OccupiedOneBed;
					EmptyTowBeds=60-OccupiedTowBeds;
					EmptyDoubleBed=80-OccupiedDoubleBed;

				//update database on hotelinformation table
				MySqlCommand^ cmdDataHotelInformationUpdate=gcnew MySqlCommand("Update HotelreservationDB.hotelinformation set OccupiedRooms='"+OccupiedRooms+"',OccupiedOneBed='"+OccupiedOneBed+"',OccupiedTowBeds='"+OccupiedTowBeds+"',OccupiedDoubleBed='"+OccupiedDoubleBed+"',Adults='"+Adults+"',Children='"+Children+"' where Id=1 ;",conDataBase);
				myReader1=cmdDataBaseHotelInformationselect->ExecuteReader();
				myReader1->Close();

				//update empty room in database
				MySqlCommand^ cmdDataHotelInformationUpdateForEmtyRooms=gcnew MySqlCommand("Update HotelreservationDB.hotelinformation set OccupiedRooms='"+EmptyRooms+"',OccupiedOneBed='"+EmptyOneBed+"',OccupiedTowBeds='"+EmptyTowBeds+"',OccupiedDoubleBed='"+EmptyDoubleBed+"' where Id=2 ;",conDataBase);
				myReader1=cmdDataHotelInformationUpdateForEmtyRooms->ExecuteReader();
				myReader1->Close();

			
				//upadte table statistic to show charts
				MySqlCommand^ cmdDataStatisticOccupiedOneBedUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedOneBed+"' where Id=1 ;",conDataBase);
				MySqlCommand^ cmdDataStatisticOccupiedTowBedsUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedTowBeds+"' where Id=2 ;",conDataBase);
				MySqlCommand^ cmdDataStatisticOccupiedDoubleBedUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedDoubleBed+"' where Id=3 ;",conDataBase);
				myReader1=cmdDataStatisticOccupiedOneBedUpdate->ExecuteReader();
				myReader1->Close();
				myReader1=cmdDataStatisticOccupiedTowBedsUpdate->ExecuteReader();
				myReader1->Close();
				myReader1=cmdDataStatisticOccupiedDoubleBedUpdate->ExecuteReader();
				myReader1->Close();


				///update le champs du client
				myReader=cmdDataBaseClientUpdate->ExecuteReader();
				myReader->Close();
				MessageBox::Show("Updated Succsessfully");
				conDataBase->Close();
			}
			}
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
}
		 }
private: System::Void Delete_btn_Click(System::Object^  sender, System::EventArgs^  e) {


String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);

MySqlCommand^ cmdDataBaseClientUpdate=gcnew MySqlCommand("delete from HotelReservationDB.Client where Id='"+this->Code_txt->Text+"';",conDataBase);


MySqlDataReader^ myReader;
MySqlDataReader^ myReader1;

try
{
			conDataBase->Open();
	 // Initializes the variables to pass to the MessageBox::Show method.
         String^ message = "Do You Really want to Delete this Client?";
         String^ caption = "Delete";
         MessageBoxButtons buttons = MessageBoxButtons::YesNo;
         System::Windows::Forms::DialogResult result;

         // Displays the MessageBox.
         result = MessageBox::Show( this, message, caption, buttons );
         if ( result == System::Windows::Forms::DialogResult::Yes )
         {
			 

			
int OccupiedRooms=0;
int OccupiedOneBed=0;
int OccupiedTowBeds=0;
int OccupiedDoubleBed=0;
int Adults=0;
int Children=0;

int OccupiedRoomsByClient=0;
int OccupiedOneBedByClient=0;
int OccupiedTowBedsByClient=0;
int OccupiedDoubleBedByClient=0;
int AdultsByClient=0;
int ChildrenByClient=0;


int EmptyRooms=0;
int EmptyOneBed=0;
int EmptyTowBeds=0;
int EmptyDoubleBed=0;

/// selectionner valeur du client
MySqlCommand^ cmdDataBaseClientselect=gcnew MySqlCommand("select * from HotelReservationDB.Client where id='"+Code_txt->Text+"';",conDataBase);

myReader1=cmdDataBaseClientselect->ExecuteReader();
			while(myReader1->Read())
			{
				OccupiedOneBedByClient=myReader1->GetInt32("OneBed");
				OccupiedTowBedsByClient=myReader1->GetInt32("TowBeds");
				OccupiedDoubleBedByClient=myReader1->GetInt32("DoubleBed");
				AdultsByClient=myReader1->GetInt32("Adults");
				ChildrenByClient=myReader1->GetInt32("Children");
				
			}
			myReader1->Close();

			//selectioner les informations sur les chambres
			MySqlCommand^ cmdDataBaseHotelInformationselect=gcnew MySqlCommand("select * from hotelreservationdb.hotelinformation where id=1;",conDataBase);

			myReader1=cmdDataBaseHotelInformationselect->ExecuteReader();
			while(myReader1->Read())
			{
				OccupiedRooms=myReader1->GetInt32("OccupiedRooms");
				OccupiedOneBed=myReader1->GetInt32("OccupiedOneBed");
				OccupiedTowBeds=myReader1->GetInt32("OccupiedTowBeds");
				OccupiedDoubleBed=myReader1->GetInt32("OccupiedDoubleBed");
				Adults=myReader1->GetInt32("Adults");
				Children=myReader1->GetInt32("Children");
				
			}
			myReader1->Close();
			//refraichir les informations sur les chambre suite a la suppression

			       // eleminer les valeur anciennces
						OccupiedRooms-=OccupiedRoomsByClient;
						OccupiedOneBed-=OccupiedOneBedByClient;
						OccupiedTowBeds-=OccupiedTowBedsByClient;
						OccupiedDoubleBed-=OccupiedDoubleBedByClient;
						Adults-=AdultsByClient;
						Children-=ChildrenByClient;
		// update emty room
				EmptyRooms=200-OccupiedRooms;
				EmptyOneBed=60-OccupiedOneBed;
				EmptyTowBeds=60-OccupiedTowBeds;
				EmptyDoubleBed=80-OccupiedDoubleBed;
			MySqlCommand^ cmdDataHotelInformationUpdate=gcnew MySqlCommand("Update HotelreservationDB.hotelinformation set OccupiedRooms='"+OccupiedRooms+"',OccupiedOneBed='"+OccupiedOneBed+"',OccupiedTowBeds='"+OccupiedTowBeds+"',OccupiedDoubleBed='"+OccupiedDoubleBed+"',Adults='"+Adults+"',Children='"+Children+"' where Id=1 ;",conDataBase);
			myReader1=cmdDataBaseHotelInformationselect->ExecuteReader();
			myReader1->Close();

			//update empty room in database
			MySqlCommand^ cmdDataHotelInformationUpdateForEmtyRooms=gcnew MySqlCommand("Update HotelreservationDB.hotelinformation set OccupiedRooms='"+EmptyRooms+"',OccupiedOneBed='"+EmptyOneBed+"',OccupiedTowBeds='"+EmptyTowBeds+"',OccupiedDoubleBed='"+EmptyDoubleBed+"' where Id=2 ;",conDataBase);
			myReader1=cmdDataHotelInformationUpdateForEmtyRooms->ExecuteReader();
			myReader1->Close();

			//upadte table statistic to show charts
			MySqlCommand^ cmdDataStatisticOccupiedOneBedUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedOneBed+"' where Id=1 ;",conDataBase);
			MySqlCommand^ cmdDataStatisticOccupiedTowBedsUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedTowBeds+"' where Id=2 ;",conDataBase);
			MySqlCommand^ cmdDataStatisticOccupiedDoubleBedUpdate=gcnew MySqlCommand("Update HotelreservationDB.statistic set Value='"+OccupiedDoubleBed+"' where Id=3 ;",conDataBase);
			myReader1=cmdDataStatisticOccupiedOneBedUpdate->ExecuteReader();
			myReader1->Close();
			myReader1=cmdDataStatisticOccupiedTowBedsUpdate->ExecuteReader();
			myReader1->Close();
			myReader1=cmdDataStatisticOccupiedDoubleBedUpdate->ExecuteReader();
			myReader1->Close();

			///delete
			myReader=cmdDataBaseClientUpdate->ExecuteReader();
			myReader->Close();
			MessageBox::Show("Deleted Succsessfully");


			//vider les champs
			Code_txt->Text="";
			Nights_NumericUpDown->Text="";
			Adults_numericUpDown->Text="";
			Children_numericUpDown->Text="";
			Note_txt->Text="";
			OneBed_NumericUpDown->Text="";
			TowBeds_NumericUpDown->Text="";
			DoubleBed_NumericUpDown->Text="";
			FirstName_txt->Text="";
			LastName_txt->Text="";
			Address_txt->Text="";
			City_txt->Text="";
			comboBox1->Text="";
			Telephone_txt->Text="";
			Email_txt->Text="";
			SubTotal_txt->Text="";
			Discount_txt->Text="";
			Total_txt->Text="";




         }

			
			
			conDataBase->Close();
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
		 }


private: System::Void Code_txt_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		
			
		 
		 }
private: System::Void Code_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {


			  
			 if (this->Code_txt->Text->Length==0)
			 {
				 Generate_btn->Enabled=false;
			 }
			 else
			 {
				 Generate_btn->Enabled=true;
			 }
		 }
private: System::Void AllUser_btn_Click(System::Object^  sender, System::EventArgs^  e) {

String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select Id,FirstName,LastName,Address,City,Country,Email,CheckIn,CheckOut,Payment from HotelReservationDB.Client  ;",conDataBase);

try
{
	MySqlDataAdapter ^ sda=gcnew MySqlDataAdapter();
	sda->SelectCommand=cmdDataBase;
	DataTable^ dbdataset= gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bSource=gcnew BindingSource();

	bSource->DataSource=dbdataset;
	dataGridView1->DataSource=bSource;
	sda->Update(dbdataset);

	
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}

		 }
private: System::Void AllUser_btn_Click_1(System::Object^  sender, System::EventArgs^  e) {
String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select Id,FirstName,LastName,Address,City,Country,Email,CheckIn,CheckOut,Payment from HotelReservationDB.Client;",conDataBase);

try
{
	MySqlDataAdapter ^ sda=gcnew MySqlDataAdapter();
	sda->SelectCommand=cmdDataBase;
	DataTable^ dbdataset= gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bSource=gcnew BindingSource();

	bSource->DataSource=dbdataset;
	dataGridView1->DataSource=bSource;
	sda->Update(dbdataset);

	
}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}

		 }
private: System::Void vScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
		 }
 private:
   void InitializeMyScrollBar()
   {
      // Create and initialize a VScrollBar.
      VScrollBar^ vScrollBar1 = gcnew VScrollBar;

      // Dock the scroll bar to the right side of the form.
      vScrollBar1->Dock = DockStyle::Right;

      // Add the scroll bar to the form.
      Controls->Add( vScrollBar1 );
   }

		
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {



			 ////////////effacer les points de chart
			 this->chart1->Series["OccupiedRooms"]->Points->Clear();
			 this->chart2->Series["Series1"]->Points->Clear();


			 //////loading charts////
String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);


//chart1 loading

MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("SELECT * FROM hotelreservationdb.hotelinformation  ;",conDataBase);
MySqlDataReader^ myReader;

try
{
	conDataBase->Open();
	myReader=cmdDataBase2->ExecuteReader();
	while(myReader->Read())
	{
		this->chart1->Series["OccupiedRooms"]->Points->AddXY(myReader->GetString("FakeName"),myReader->GetString("OccupiedRooms"));
		
	}

}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
myReader->Close();
conDataBase->Close();
//chart2 loading

MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT * FROM hotelreservationdb.statistic  ;",conDataBase);


try
{
	conDataBase->Open();
	myReader=cmdDataBase1->ExecuteReader();
	while(myReader->Read())
	{
		this->chart2->Series["Series1"]->Points->AddXY(myReader->GetString("BedRoom"),myReader->GetString("Value"));
		
	}

}
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}


this->chart1->Refresh() ;
this->chart1->Refresh() ;
		 }


private: System::Void Form2_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		 Application::Exit();
		 }
private: System::Void Cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {//vider les champs
			Code_txt->Text="";
			Nights_NumericUpDown->Text="";
			Adults_numericUpDown->Text="";
			Children_numericUpDown->Text="";
			Note_txt->Text="";
			OneBed_NumericUpDown->Text="";
			TowBeds_NumericUpDown->Text="";
			DoubleBed_NumericUpDown->Text="";
			FirstName_txt->Text="";
			LastName_txt->Text="";
			Address_txt->Text="";
			City_txt->Text="";
			comboBox1->Text="";
			Telephone_txt->Text="";
			Email_txt->Text="";
			SubTotal_txt->Text="";
			Discount_txt->Text="";
			Total_txt->Text="";
		 }

private: System::Void Send_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 ///////

			 pictureBox3->Visible = true;
			 pictureBox3->Enabled = true;
			 
			 
			
			try
			{
			 MailMessage^ mail=gcnew MailMessage("hotelreservation016@yahoo.fr",To_txt->Text,Subject_txt->Text,richTextBox1->Text);
			 //SmtpServer = mtp.company.com;Ex: Gamil- smtp.gmail.com| Yahoo- smtp.yahoo.com
			 SmtpClient^ client= gcnew SmtpClient("smtp.mail.yahoo.com");
			 //Port 587 is the preferred port for mail submission.Port 25 is widely abused by malware to spread worms and spam.
			 //As a result,many ISPs are restricting its use. le mec a testé ce port mais il n'apas marché.
			 client->Port=25;
			 client->Credentials= gcnew System::Net::NetworkCredential("hotelreservation016@yahoo.fr","projetdete2015");
			 //port 587 allows you to use ssl connection.
			 client->EnableSsl=true;
			 client->Send(mail);

		     
			 pictureBox3->Visible = false;
			 pictureBox3->Enabled = false;
			 
			 MessageBox::Show("Mail Sent!","Success",MessageBoxButtons::OK);
			}
			catch(Exception^ ex)
			{
	
			    pictureBox3->Visible = false;
				pictureBox3->Enabled = false;
				MessageBox::Show(ex->Message);
			}

		 }
private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
		 }





////////////////////////////////////////////////
////////function to calculate empty rooms//////
//////////////////////////////////////////////
//"SELECT * FROM hotelreservationdb.Client where IsOccupiedOneBed=Yes  ;"
private: int emptyOneBed(String^ commande,String^ TypeRoom)
	{
		int count=0;
		String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase=gcnew MySqlCommand(commande,conDataBase);
		MySqlDataReader^ myReader;

	try
	{
		conDataBase->Open();
		myReader=cmdDataBase->ExecuteReader();
		while(myReader->Read())
		{
			count+=myReader->GetInt32(TypeRoom);
		}

	}
	catch(Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
		return count;
	}

private: bool VerifyAvailableReservation(int numberOfNights,MySqlConnection^ conDataBase)
	{
		int count=0;
		int OccupiedRooms=0;
		int OccupiedOneBed=0;
		int OccupiedTowBeds=0;
		int OccupiedDoubleBed=0;

int OccupiedOneBedBefore=0;
int OccupiedTowBedsBefore=0;
int OccupiedDoubleBedBefore=0;


////update value
 OccupiedOneBedBefore=emptyOneBed("SELECT * FROM hotelreservationdb.Client where IsOccupiedOneBed='Yes';","OneBed");
 OccupiedTowBedsBefore=emptyOneBed("SELECT * FROM hotelreservationdb.Client where IsOccupiedTowBeds='Yes';","TowBeds");
 OccupiedDoubleBedBefore=emptyOneBed("SELECT * FROM hotelreservationdb.Client where IsOccupiedDoubleBed='Yes';","DoubleBed");



for(int i=0;i<=numberOfNights;i++)
{
		String^ day="";
		DateTime date;
		DateTime date1;
		count=0;
		OccupiedRooms=0;
		OccupiedOneBed=0;
		OccupiedTowBeds=0;
		OccupiedDoubleBed=0;
		date=CheckIn_Date->Value;
		date1=CheckIn_Date->Value;
		CheckIn_Date->Value=date.AddDays(i);
		day=CheckIn_Date->Text->ToString();
		CheckIn_Date->Value=date1;
		
		MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM hotelreservationdb.Client where CheckIn='"+day+"'  ;",conDataBase);
		MySqlDataReader^ myReader4;

	try
	{
		
		myReader4=cmdDataBase->ExecuteReader();
		while(myReader4->Read())
		{
			count+=1;
			if(myReader4->GetInt32("OneBed")!=0)
			{
				OccupiedOneBed+=myReader4->GetInt32("OneBed");
				OccupiedOneBedBefore+=OccupiedOneBed;//ajouter les reservations des lits d'aujourdhui aux lits dejaaoccupé
				
			}
		    if(myReader4->GetInt32("TowBeds")!=0)
			{
				OccupiedTowBeds+=myReader4->GetInt32("TowBeds");
				OccupiedTowBedsBefore+=OccupiedOneBed;
			}
			if(myReader4->GetInt32("DoubleBed")!=0)
			{
				OccupiedDoubleBed+=myReader4->GetInt32("DoubleBed");
				OccupiedDoubleBedBefore+=OccupiedOneBed;
			}
		}

	   if(OccupiedOneBedBefore>60)
	   {
		   MessageBox::Show("OneBed room are not available");
		   return false;
	   }
	   else if(OccupiedTowBedsBefore>60)
	   {
		   MessageBox::Show("TowBeds room are not available");
		   return false;
	   }
	    else if(OccupiedDoubleBedBefore>80)
	   {
		   MessageBox::Show("DoubleBed room are not available");
		   return false;
	   }
		else
		{
			myReader4->Close();
			return true;
		}
	}
	catch(Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	myReader4->Close();
}
		return false;
	}

};
}
