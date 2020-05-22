#pragma once
#include <cmath>
bool button1 = false;
bool button2 = false;
bool button3 = false;
bool button4 = false;
bool button5 = false;
bool button6 = false;

namespace Lab32zadanie2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;	
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ right;
	private: System::Windows::Forms::Panel^ head;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ novoeosn;
	private: System::Windows::Forms::Button^ stepen;
	private: System::Windows::Forms::Button^ delen;
	private: System::Windows::Forms::Button^ umno;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::Panel^ Info1;
	private: System::Windows::Forms::Button^ InfoButton;
	private: System::Windows::Forms::Label^ Text1;
	private: System::Windows::Forms::Label^ Text2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ Text3;
	private: System::Windows::Forms::PictureBox^ str5;
	private: System::Windows::Forms::PictureBox^ str4;
	private: System::Windows::Forms::PictureBox^ str3;
	private: System::Windows::Forms::PictureBox^ str2;
	private: System::Windows::Forms::PictureBox^ str1;
	private: System::Windows::Forms::Label^ label6;












	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->right = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->info = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->novoeosn = (gcnew System::Windows::Forms::Button());
			this->stepen = (gcnew System::Windows::Forms::Button());
			this->delen = (gcnew System::Windows::Forms::Button());
			this->umno = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->head = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Info1 = (gcnew System::Windows::Forms::Panel());
			this->str5 = (gcnew System::Windows::Forms::PictureBox());
			this->str4 = (gcnew System::Windows::Forms::PictureBox());
			this->str3 = (gcnew System::Windows::Forms::PictureBox());
			this->str2 = (gcnew System::Windows::Forms::PictureBox());
			this->str1 = (gcnew System::Windows::Forms::PictureBox());
			this->Text3 = (gcnew System::Windows::Forms::Label());
			this->Text2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->InfoButton = (gcnew System::Windows::Forms::Button());
			this->Text1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->right->SuspendLayout();
			this->head->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->Info1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(165, 48);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(67, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(34, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(303, 43);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(69, 22);
			this->textBox4->TabIndex = 4;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(266, 48);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(34, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(212, 31);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(165, 48);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(179, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 35);
			this->label2->TabIndex = 8;
			this->label2->Text = L"\?";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(378, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 35);
			this->label1->TabIndex = 7;
			this->label1->Text = L"=";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(46, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Операнд 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(238, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 23);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Операнд 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(408, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 23);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Результат";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(416, 43);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(84, 22);
			this->textBox5->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(466, 48);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(34, 22);
			this->textBox6->TabIndex = 16;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(503, 43);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(69, 22);
			this->textBox7->TabIndex = 15;
			this->textBox7->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(412, 31);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(165, 48);
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// right
			// 
			this->right->BackColor = System::Drawing::Color::SlateGray;
			this->right->Controls->Add(this->label6);
			this->right->Controls->Add(this->info);
			this->right->Controls->Add(this->label9);
			this->right->Controls->Add(this->novoeosn);
			this->right->Controls->Add(this->stepen);
			this->right->Controls->Add(this->delen);
			this->right->Controls->Add(this->umno);
			this->right->Controls->Add(this->minus);
			this->right->Controls->Add(this->plus);
			this->right->Controls->Add(this->head);
			this->right->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->right->Dock = System::Windows::Forms::DockStyle::Right;
			this->right->Location = System::Drawing::Point(589, 0);
			this->right->Name = L"right";
			this->right->Size = System::Drawing::Size(204, 401);
			this->right->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(65, 377);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 22);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Minimize";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->info->Location = System::Drawing::Point(17, 377);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(45, 22);
			this->info->TabIndex = 25;
			this->info->Text = L"Info";
			this->info->Click += gcnew System::EventHandler(this, &MyForm::info_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(153, 377);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 22);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Exit";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// novoeosn
			// 
			this->novoeosn->BackColor = System::Drawing::Color::SlateGray;
			this->novoeosn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->novoeosn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->novoeosn->Location = System::Drawing::Point(21, 323);
			this->novoeosn->Name = L"novoeosn";
			this->novoeosn->Size = System::Drawing::Size(171, 51);
			this->novoeosn->TabIndex = 24;
			this->novoeosn->Text = L"Переход к новому основанию";
			this->novoeosn->UseVisualStyleBackColor = false;
			this->novoeosn->Click += gcnew System::EventHandler(this, &MyForm::novoeosn_Click);
			// 
			// stepen
			// 
			this->stepen->BackColor = System::Drawing::Color::SlateGray;
			this->stepen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stepen->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->stepen->Location = System::Drawing::Point(21, 268);
			this->stepen->Name = L"stepen";
			this->stepen->Size = System::Drawing::Size(171, 50);
			this->stepen->TabIndex = 23;
			this->stepen->Text = L"Возведение в степень";
			this->stepen->UseVisualStyleBackColor = false;
			this->stepen->Click += gcnew System::EventHandler(this, &MyForm::stepen_Click);
			// 
			// delen
			// 
			this->delen->BackColor = System::Drawing::Color::SlateGray;
			this->delen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delen->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->delen->Location = System::Drawing::Point(21, 225);
			this->delen->Name = L"delen";
			this->delen->Size = System::Drawing::Size(171, 39);
			this->delen->TabIndex = 22;
			this->delen->Text = L"Деление";
			this->delen->UseVisualStyleBackColor = false;
			this->delen->Click += gcnew System::EventHandler(this, &MyForm::delen_Click);
			// 
			// umno
			// 
			this->umno->BackColor = System::Drawing::Color::SlateGray;
			this->umno->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umno->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->umno->Location = System::Drawing::Point(21, 181);
			this->umno->Name = L"umno";
			this->umno->Size = System::Drawing::Size(171, 39);
			this->umno->TabIndex = 21;
			this->umno->Text = L"Умножение";
			this->umno->UseVisualStyleBackColor = false;
			this->umno->Click += gcnew System::EventHandler(this, &MyForm::umno_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::SlateGray;
			this->minus->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->minus->Location = System::Drawing::Point(21, 136);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(171, 39);
			this->minus->TabIndex = 20;
			this->minus->Text = L"Разность";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::SlateGray;
			this->plus->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->plus->Location = System::Drawing::Point(21, 92);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(171, 39);
			this->plus->TabIndex = 19;
			this->plus->Text = L"Сложение";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// head
			// 
			this->head->BackColor = System::Drawing::Color::DarkOrange;
			this->head->Controls->Add(this->label8);
			this->head->Controls->Add(this->pictureBox4);
			this->head->Controls->Add(this->label7);
			this->head->Location = System::Drawing::Point(1, 0);
			this->head->Name = L"head";
			this->head->Size = System::Drawing::Size(205, 79);
			this->head->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label8->Location = System::Drawing::Point(121, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Logarithm";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(5, 17);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(44, 45);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::Info;
			this->label7->Location = System::Drawing::Point(45, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 32);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Calculator";
			// 
			// Info1
			// 
			this->Info1->BackColor = System::Drawing::Color::LightSlateGray;
			this->Info1->Controls->Add(this->str5);
			this->Info1->Controls->Add(this->str4);
			this->Info1->Controls->Add(this->str3);
			this->Info1->Controls->Add(this->str2);
			this->Info1->Controls->Add(this->str1);
			this->Info1->Controls->Add(this->Text3);
			this->Info1->Controls->Add(this->Text2);
			this->Info1->Controls->Add(this->pictureBox5);
			this->Info1->Controls->Add(this->InfoButton);
			this->Info1->Controls->Add(this->Text1);
			this->Info1->Location = System::Drawing::Point(-3, 79);
			this->Info1->Name = L"Info1";
			this->Info1->Size = System::Drawing::Size(592, 325);
			this->Info1->TabIndex = 18;
			this->Info1->Visible = false;
			// 
			// str5
			// 
			this->str5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"str5.Image")));
			this->str5->Location = System::Drawing::Point(540, 19);
			this->str5->Name = L"str5";
			this->str5->Size = System::Drawing::Size(144, 270);
			this->str5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->str5->TabIndex = 28;
			this->str5->TabStop = false;
			// 
			// str4
			// 
			this->str4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"str4.Image")));
			this->str4->Location = System::Drawing::Point(309, 0);
			this->str4->Name = L"str4";
			this->str4->Size = System::Drawing::Size(82, 38);
			this->str4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->str4->TabIndex = 27;
			this->str4->TabStop = false;
			// 
			// str3
			// 
			this->str3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"str3.Image")));
			this->str3->Location = System::Drawing::Point(123, -2);
			this->str3->Name = L"str3";
			this->str3->Size = System::Drawing::Size(77, 38);
			this->str3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->str3->TabIndex = 26;
			this->str3->TabStop = false;
			// 
			// str2
			// 
			this->str2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"str2.Image")));
			this->str2->Location = System::Drawing::Point(231, 3);
			this->str2->Name = L"str2";
			this->str2->Size = System::Drawing::Size(72, 35);
			this->str2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->str2->TabIndex = 25;
			this->str2->TabStop = false;
			// 
			// str1
			// 
			this->str1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"str1.Image")));
			this->str1->Location = System::Drawing::Point(70, 0);
			this->str1->Name = L"str1";
			this->str1->Size = System::Drawing::Size(74, 63);
			this->str1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->str1->TabIndex = 24;
			this->str1->TabStop = false;
			// 
			// Text3
			// 
			this->Text3->AutoSize = true;
			this->Text3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Text3->ForeColor = System::Drawing::Color::White;
			this->Text3->Location = System::Drawing::Point(335, 234);
			this->Text3->Name = L"Text3";
			this->Text3->Size = System::Drawing::Size(205, 19);
			this->Text3->TabIndex = 23;
			this->Text3->Text = L"© Ваганов И. А., 2020 год";
			this->Text3->Visible = false;
			// 
			// Text2
			// 
			this->Text2->AutoSize = true;
			this->Text2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Text2->ForeColor = System::Drawing::Color::White;
			this->Text2->Location = System::Drawing::Point(24, 71);
			this->Text2->Name = L"Text2";
			this->Text2->Size = System::Drawing::Size(504, 154);
			this->Text2->TabIndex = 22;
			this->Text2->Text = resources->GetString(L"Text2.Text");
			this->Text2->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(146, 37);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(38, 32);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 21;
			this->pictureBox5->TabStop = false;
			// 
			// InfoButton
			// 
			this->InfoButton->BackColor = System::Drawing::Color::SlateGray;
			this->InfoButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->InfoButton->Location = System::Drawing::Point(215, 270);
			this->InfoButton->Name = L"InfoButton";
			this->InfoButton->Size = System::Drawing::Size(191, 40);
			this->InfoButton->TabIndex = 20;
			this->InfoButton->Text = L"Приступить к работе";
			this->InfoButton->UseVisualStyleBackColor = false;
			this->InfoButton->Visible = false;
			this->InfoButton->Click += gcnew System::EventHandler(this, &MyForm::InfoButton_Click);
			// 
			// Text1
			// 
			this->Text1->AutoSize = true;
			this->Text1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Text1->ForeColor = System::Drawing::Color::White;
			this->Text1->Location = System::Drawing::Point(184, 41);
			this->Text1->Name = L"Text1";
			this->Text1->Size = System::Drawing::Size(283, 24);
			this->Text1->TabIndex = 0;
			this->Text1->Text = L"Калькулятор логарифмов";
			this->Text1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(793, 401);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->right);
			this->Controls->Add(this->Info1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->right->ResumeLayout(false);
			this->right->PerformLayout();
			this->head->ResumeLayout(false);
			this->head->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->Info1->ResumeLayout(false);
			this->Info1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->str1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool Protect()
		{
			for (int i = 0; i < textBox1->Text->Length; i++)
			{
				if (((textBox1->Text[i] >= '0' &&textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',' || textBox1->Text[i] == '.'))) {}
				else return false;
			}
			for (int i = 0; i < textBox2->Text->Length; i++)
			{
				if ((textBox2->Text[i] >= '0' && textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',' || textBox2->Text[i] == '.')) {}
				else return false;
			}
			for (int i = 0; i < textBox3->Text->Length; i++)
			{
				if ((textBox3->Text[i] >= '0' && textBox3->Text[i] <= '9') || (textBox3->Text[i] == ',' || textBox3->Text[i] == '.')) {}
				else return false;
			}
			for (int i = 0; i < textBox4->Text->Length; i++)
			{
				if ((textBox4->Text[i] >= '0' && textBox4->Text[i] <= '9') || (textBox4->Text[i] == ',' || textBox4->Text[i] == '.')) {}
				else return false;
			}
			return true;
		}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (Protect())
		{
			if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "")
			{
				if (button1)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					button1 = true;
					button2 = false;
					button3 = false;
					button4 = false;
					button5 = false;
					button6 = false;
					label2->Text = L"+";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button2)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) - (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					button1 = false;
					button2 = true;
					button3 = false;
					button4 = false;
					button5 = false;
					button6 = false;
					label2->Text = L"-";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button3)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) * (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					button1 = false;
					button2 = false;
					button3 = true;
					button4 = false;
					button5 = false;
					button6 = false;
					label2->Text = L"*";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;

				}
				else if (button4)
				{
				textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) / (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
				button1 = false;
				button2 = false;
				button3 = false;
				button4 = true;
				button5 = false;
				button6 = false;
				label2->Text = L"/";
				textBox2->Left = 67;
				textBox2->Top = 48;
				textBox1->Left = 104;
				textBox1->Top = 43;
				label3->Text = L"Операнд 1";
				label3->Left = 46;
				label3->Top = 5;
				label4->Text = L"Операнд 2";
				label4->Left = 238;
				label4->Top = 5;
				label5->Text = L"Результат";
				label5->Left = 408;
				label5->Top = 5;
				label1->Text = "=";
				label1->Left = 378;
				label1->Top = 35;
				textBox5->Left = 416;
				textBox5->Top = 43;
				pictureBox1->Visible = true;
				textBox1->Visible = true;
				textBox5->Visible = true;
				textBox6->Visible = false;
				textBox7->Visible = false;
				pictureBox3->Visible = false;
				textBox2->Visible = true;
				textBox3->Visible = true;

				}
				else if (button5)
				{
				textBox5->Text = Convert::ToString(pow((log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))), (Convert::ToDouble(textBox2->Text))));
				button1 = false;
				button2 = false;
				button3 = false;
				button4 = false;
				button5 = true;
				button6 = false;
				pictureBox1->Visible = false;
				textBox6->Visible = false;
				textBox7->Visible = false;
				pictureBox3->Visible = false;
				textBox2->Left = 400;
				textBox2->Top = 16;
				label5->Text = L"";
				label3->Text = L"";
				label4->Text = L"Операнд 1";
				label2->Text = L"(";
				label1->Text = L")  =  ";
				textBox5->Left = 460;
				textBox1->Visible = false;
				textBox5->Visible = true;
				textBox2->Visible = true;
				textBox3->Visible = true;
				}
				else if (button6)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					button1 = false;
					button2 = false;
					button3 = false;
					button4 = false;
					button5 = false;
					button6 = true;
					textBox1->Visible = true;
					textBox5->Visible = false;
					pictureBox1->Visible = true;
					textBox2->Left = 67;
					textBox2->Top = 48;
					label3->Text = L"Новое основание";
					label4->Text = L"Операнд 1";
					label5->Text = L"Операнд 2";
					label2->Text = L"=";
					label1->Text = L"*";
					textBox6->Visible = true;
					textBox7->Visible = true;
					pictureBox3->Visible = true;
					textBox4->Text = Convert::ToString(textBox1->Text);
					textBox6->Text = Convert::ToString(textBox2->Text);
					textBox7->Text = Convert::ToString(textBox3->Text);
					textBox1->Left = 104;
					textBox1->Top = 43;
				}
			}
			else textBox5->Text = "Операнды не определены!";
		}
		else
			MessageBox::Show("Ошибка ввода", "Ошибка");

	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Protect() && Convert::ToDouble(textBox4->Text) != 1)
		{
			if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "")
			{
				if (button1)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = true;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"+";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button2)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) - (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = true;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"-";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button3)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) * (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = true;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"*";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;

				}
				else if (button4)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) / (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = true;
					 button5 = false;
					 button6 = false;
					label2->Text = L"/";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;

				}
				else if (button5)
				{
					textBox5->Text = Convert::ToString(pow((log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))), (Convert::ToDouble(textBox2->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = true;
					 button6 = false;
					pictureBox1->Visible = false;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Left = 400;
					textBox2->Top = 16;
					label5->Text = L"";
					label3->Text = L"";
					label4->Text = L"Операнд 1";
					label2->Text = L"(";
					label1->Text = L")  =  ";
					textBox5->Left = 460;
					textBox1->Visible = false;
					textBox5->Visible = true;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button6)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = true;
					textBox1->Visible = true;
					textBox5->Visible = false;
					pictureBox1->Visible = true;
					textBox2->Left = 67;
					textBox2->Top = 48;
					label3->Text = L"Новое основание";
					label4->Text = L"Операнд 1";
					label5->Text = L"Операнд 2";
					label2->Text = L"=";
					label1->Text = L"*";
					textBox6->Visible = true;
					textBox7->Visible = true;
					pictureBox3->Visible = true;
					textBox4->Text = Convert::ToString(textBox1->Text);
					textBox6->Text = Convert::ToString(textBox2->Text);
					textBox7->Text = Convert::ToString(textBox3->Text);
					textBox1->Left = 104;
					textBox1->Top = 43;
				}
				

			}else textBox5->Text = "Операнды не определены!";
			
		}
		else
			MessageBox::Show("Ошибка ввода", "Ошибка");
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Protect())
		{
			if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "")
			{
				if (button1)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = true;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"+";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button2)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) - (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = true;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"-";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button3)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) * (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = true;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"*";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;

				}
				else if (button4)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) / (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = true;
					 button5 = false;
					 button6 = false;
					label2->Text = L"/";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;

				}
				else if (button5)
				{
					textBox5->Text = Convert::ToString(pow((log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))), (Convert::ToDouble(textBox2->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = true;
					 button6 = false;
					pictureBox1->Visible = false;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Left = 400;
					textBox2->Top = 16;
					label5->Text = L"";
					label3->Text = L"";
					label4->Text = L"Операнд 1";
					label2->Text = L"(";
					label1->Text = L")  =  ";
					textBox5->Left = 460;
					textBox1->Visible = false;
					textBox5->Visible = true;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button6)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = true;
					textBox1->Visible = true;
					textBox5->Visible = false;
					pictureBox1->Visible = true;
					textBox2->Left = 67;
					textBox2->Top = 48;
					label3->Text = L"Новое основание";
					label4->Text = L"Операнд 1";
					label5->Text = L"Операнд 2";
					label2->Text = L"=";
					label1->Text = L"*";
					textBox6->Visible = true;
					textBox7->Visible = true;
					pictureBox3->Visible = true;
					textBox4->Text = Convert::ToString(textBox1->Text);
					textBox6->Text = Convert::ToString(textBox2->Text);
					textBox7->Text = Convert::ToString(textBox3->Text);
					textBox1->Left = 104;
					textBox1->Top = 43;
				}
				
			
			}	
			else textBox5->Text = "Операнды не определены!";
		}
		else
			MessageBox::Show("Ошибка ввода", "Ошибка");
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Protect())
		{
			if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "")
			{
				if (button1)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = true;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"+";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button2)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) - (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = true;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"-";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button3)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) * (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = true;
					 button4 = false;
					 button5 = false;
					 button6 = false;
					label2->Text = L"*";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;

				}
				else if (button4)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) / (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = true;
					 button5 = false;
					 button6 = false;
					label2->Text = L"/";
					textBox2->Left = 67;
					textBox2->Top = 48;
					textBox1->Left = 104;
					textBox1->Top = 43;
					label3->Text = L"Операнд 1";
					label3->Left = 46;
					label3->Top = 5;
					label4->Text = L"Операнд 2";
					label4->Left = 238;
					label4->Top = 5;
					label5->Text = L"Результат";
					label5->Left = 408;
					label5->Top = 5;
					label1->Text = "=";
					label1->Left = 378;
					label1->Top = 35;
					textBox5->Left = 416;
					textBox5->Top = 43;
					pictureBox1->Visible = true;
					textBox1->Visible = true;
					textBox5->Visible = true;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Visible = true;
					textBox3->Visible = true;

				}
				else if (button5)
				{
					textBox5->Text = Convert::ToString(pow((log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))), (Convert::ToDouble(textBox2->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = true;
					 button6 = false;
					pictureBox1->Visible = false;
					textBox6->Visible = false;
					textBox7->Visible = false;
					pictureBox3->Visible = false;
					textBox2->Left = 400;
					textBox2->Top = 16;
					label5->Text = L"";
					label3->Text = L"";
					label4->Text = L"Операнд 1";
					label2->Text = L"(";
					label1->Text = L")  =  ";
					textBox5->Left = 460;
					textBox1->Visible = false;
					textBox5->Visible = true;
					textBox2->Visible = true;
					textBox3->Visible = true;
				}
				else if (button6)
				{
					textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
					 button1 = false;
					 button2 = false;
					 button3 = false;
					 button4 = false;
					 button5 = false;
					 button6 = true;
					textBox1->Visible = true;
					textBox5->Visible = false;
					pictureBox1->Visible = true;
					textBox2->Left = 67;
					textBox2->Top = 48;
					label3->Text = L"Новое основание";
					label4->Text = L"Операнд 1";
					label5->Text = L"Операнд 2";
					label2->Text = L"=";
					label1->Text = L"*";
					textBox6->Visible = true;
					textBox7->Visible = true;
					pictureBox3->Visible = true;
					textBox4->Text = Convert::ToString(textBox1->Text);
					textBox6->Text = Convert::ToString(textBox2->Text);
					textBox7->Text = Convert::ToString(textBox3->Text);
					textBox1->Left = 104;
					textBox1->Top = 43;
				}
			
			}
			else textBox5->Text = "Операнды не определены!";
		}
		else
			MessageBox::Show("Ошибка ввода", "Ошибка");
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
		 button1 = true;
		 button2 = false;
		 button3 = false;
		 button4 = false;
		 button5 = false;
		 button6 = false;
		label2->Text = L"+";
		textBox2->Left = 67;
		textBox2->Top = 48;
		textBox1->Left = 104;
		textBox1->Top = 43;
		label3->Text = L"Операнд 1";
		label3->Left = 46;
		label3->Top = 5;
		label4->Text = L"Операнд 2";
		label4->Left = 238;
		label4->Top = 5;
		label5->Text = L"Результат";
		label5->Left = 408;
		label5->Top = 5;
		label1->Text = "=";
		label1->Left = 378;
		label1->Top = 35;
		textBox5->Left = 416;
		textBox5->Top = 43;
		pictureBox1->Visible = true;
		textBox1->Visible = true;
		textBox5->Visible = true;
		textBox6->Visible = false;
		textBox7->Visible = false;
		pictureBox3->Visible = false;
		textBox2->Visible = true;
		textBox3->Visible = true;
	}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) - (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
	 button1 = false;
	 button2 = true;
	 button3 = false;
	 button4 = false;
	 button5 = false;
	 button6 = false;
	label2->Text = L"-";
	textBox2->Left = 67;
	textBox2->Top = 48;
	textBox1->Left = 104;
	textBox1->Top = 43;
	label3->Text = L"Операнд 1";
	label3->Left = 46;
	label3->Top = 5;
	label4->Text = L"Операнд 2";
	label4->Left = 238;
	label4->Top = 5;
	label5->Text = L"Результат";
	label5->Left = 408;
	label5->Top = 5;
	label1->Text = "=";
	label1->Left = 378;
	label1->Top = 35;
	textBox5->Left = 416;
	textBox5->Top = 43;
	pictureBox1->Visible = true;
	textBox1->Visible = true;
	textBox5->Visible = true;
	textBox6->Visible = false;
	textBox7->Visible = false;
	pictureBox3->Visible = false;
	textBox2->Visible = true;
	textBox3->Visible = true;
}
private: System::Void umno_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) * (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
	 button1 = false;
	 button2 = false;
	 button3 = true;
	 button4 = false;
	 button5 = false;
	 button6 = false;
	label2->Text = L"*";
	textBox2->Left = 67;
	textBox2->Top = 48;
	textBox1->Left = 104;
	textBox1->Top = 43;
	label3->Text = L"Операнд 1";
	label3->Left = 46;
	label3->Top = 5;
	label4->Text = L"Операнд 2";
	label4->Left = 238;
	label4->Top = 5;
	label5->Text = L"Результат";
	label5->Left = 408;
	label5->Top = 5;
	label1->Text = "=";
	label1->Left = 378;
	label1->Top = 35;
	textBox5->Left = 416;
	textBox5->Top = 43;
	pictureBox1->Visible = true;
	textBox1->Visible = true;
	textBox5->Visible = true;
	textBox6->Visible = false;
	textBox7->Visible = false;
	pictureBox3->Visible = false;
	textBox2->Visible = true;
	textBox3->Visible = true;
}
private: System::Void delen_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) / (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
	 button1 = false;
	 button2 = false;
	 button3 = false;
	 button4 = true;
	 button5 = false;
	 button6 = false;
	label2->Text = L"/";
	textBox2->Left = 67;
	textBox2->Top = 48;
	textBox1->Left = 104;
	textBox1->Top = 43;
	label3->Text = L"Операнд 1";
	label3->Left = 46;
	label3->Top = 5;
	label4->Text = L"Операнд 2";
	label4->Left = 238;
	label4->Top = 5;
	label5->Text = L"Результат";
	label5->Left = 408;
	label5->Top = 5;
	label1->Text = "=";
	label1->Left = 378;
	label1->Top = 35;
	textBox5->Left = 416;
	textBox5->Top = 43;
	pictureBox1->Visible = true;
	textBox1->Visible = true;
	textBox5->Visible = true;
	textBox6->Visible = false;
	textBox7->Visible = false;
	pictureBox3->Visible = false;
	textBox2->Visible = true;
	textBox3->Visible = true;
}
private: System::Void stepen_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = Convert::ToString(pow((log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))), (Convert::ToDouble(textBox2->Text))));
	 button1 = false;
	 button2 = false;
	 button3 = false;
	 button4 = false;
	 button5 = true;
	 button6 = false;
	pictureBox1->Visible = false;
	textBox6->Visible = false;
	textBox7->Visible = false;
	pictureBox3->Visible = false;
	textBox2->Left = 400;
	textBox2->Top = 16;
	label5->Text = L"";
	label3->Text = L"";
	label4->Text = L"Операнд 1";
	label2->Text = L"(";
	label1->Text = L")  =  ";
	textBox5->Left = 460;
	textBox1->Visible = false;
	textBox5->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
}
private: System::Void novoeosn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = Convert::ToString((log(Convert::ToDouble(textBox1->Text)) / log(Convert::ToDouble(textBox2->Text))) + (log(Convert::ToDouble(textBox4->Text)) / log(Convert::ToDouble(textBox3->Text))));
	 button1 = false;
	 button2 = false;
	 button3 = false;
	 button4 = false;
	 button5 = false;
	 button6 = true;
	textBox1->Visible = true;
	textBox5->Visible = false;
	pictureBox1->Visible = true;
	textBox2->Left = 67;
	textBox2->Top = 48;
	label3->Text = L"Новое основание";
	label4->Text = L"Операнд 1";
	label5->Text = L"Операнд 2";
	label2->Text = L"=";
	label1->Text = L"*";
	textBox6->Visible = true;
	textBox7->Visible = true;
	pictureBox3->Visible = true;
	textBox4->Text = Convert::ToString(textBox1->Text);
	textBox6->Text = Convert::ToString(textBox2->Text);
	textBox7->Text = Convert::ToString(textBox3->Text);
	textBox1->Left = 104;
	textBox1->Top = 43;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void info_Click(System::Object^ sender, System::EventArgs^ e) {
	Info1->Visible = true;
	InfoButton->Visible = true;
	Text1->Visible = true;
	Text2->Visible = true;
	Text3->Visible = true;
	str1->Visible = true;
	str2->Visible = true;
	str3->Visible = true;
	str4->Visible = true;
	str5->Visible = true;
}
private: System::Void InfoButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Info1->Visible = false;
	InfoButton->Visible = false;
	Text1->Visible = false;
	Text2->Visible = false;
	Text3->Visible = false;
	str1->Visible = false;
	str2->Visible = false;
	str3->Visible = false;
	str4->Visible = false;
	str5->Visible = false;
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
};
}
