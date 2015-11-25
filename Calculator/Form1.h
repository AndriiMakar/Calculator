#pragma once
#define _USE_MATH_DEFINES 
#include <math.h>
#include <stdio.h>




namespace Calculator {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  button38;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 22);
			this->textBox1->MaxLength = 8;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(487, 31);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(155, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(37, 27);
			this->button2->TabIndex = 2;
			this->button2->Text = L"exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(146, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"%";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(213, 59);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 38);
			this->button4->TabIndex = 4;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(12, 104);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 38);
			this->button5->TabIndex = 5;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(79, 104);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 38);
			this->button6->TabIndex = 6;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(146, 104);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 38);
			this->button7->TabIndex = 7;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(213, 104);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(61, 38);
			this->button8->TabIndex = 8;
			this->button8->Text = L"*";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(12, 148);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(61, 38);
			this->button9->TabIndex = 9;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(79, 148);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(61, 38);
			this->button10->TabIndex = 10;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(146, 148);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(61, 38);
			this->button11->TabIndex = 11;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(213, 148);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(61, 38);
			this->button12->TabIndex = 12;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(12, 192);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(61, 38);
			this->button13->TabIndex = 13;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(79, 192);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(61, 38);
			this->button14->TabIndex = 14;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(146, 192);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(61, 38);
			this->button15->TabIndex = 15;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(213, 192);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(61, 38);
			this->button16->TabIndex = 16;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(12, 236);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(61, 38);
			this->button17->TabIndex = 17;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(79, 236);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(61, 38);
			this->button18->TabIndex = 18;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(146, 236);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(128, 38);
			this->button19->TabIndex = 19;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 22;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(6, 19);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(35, 28);
			this->button20->TabIndex = 23;
			this->button20->Text = L"x^y";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button26);
			this->groupBox1->Controls->Add(this->button29);
			this->groupBox1->Controls->Add(this->button25);
			this->groupBox1->Controls->Add(this->button24);
			this->groupBox1->Controls->Add(this->button23);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Location = System::Drawing::Point(290, 60);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(105, 61);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(39, 33);
			this->button26->TabIndex = 5;
			this->button26->Text = L"tg";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(150, 61);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(35, 33);
			this->button29->TabIndex = 26;
			this->button29->Text = L"Pi";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(57, 61);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(38, 33);
			this->button25->TabIndex = 4;
			this->button25->Text = L"cos";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(6, 61);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(35, 33);
			this->button24->TabIndex = 3;
			this->button24->Text = L"sin";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(128, 10);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(55, 33);
			this->button23->TabIndex = 2;
			this->button23->Text = L"n!";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(67, 10);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(55, 33);
			this->button22->TabIndex = 1;
			this->button22->Text = L"lg";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(6, 10);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 33);
			this->button21->TabIndex = 0;
			this->button21->Text = L"ln";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->button30);
			this->groupBox2->Controls->Add(this->button27);
			this->groupBox2->Controls->Add(this->button28);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Location = System::Drawing::Point(290, 166);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 53);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(0, 70);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 38);
			this->groupBox3->TabIndex = 28;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button30->Location = System::Drawing::Point(156, 19);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(38, 28);
			this->button30->TabIndex = 28;
			this->button30->Text = L"1/x";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(58, 19);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(37, 28);
			this->button27->TabIndex = 26;
			this->button27->Text = L"x^2";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(112, 19);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(38, 28);
			this->button28->TabIndex = 27;
			this->button28->Text = L"x^3";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(79, 59);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(61, 38);
			this->button31->TabIndex = 27;
			this->button31->Text = L"CE";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button35);
			this->groupBox4->Controls->Add(this->button32);
			this->groupBox4->Controls->Add(this->button34);
			this->groupBox4->Controls->Add(this->button33);
			this->groupBox4->Location = System::Drawing::Point(290, 225);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 50);
			this->groupBox4->TabIndex = 28;
			this->groupBox4->TabStop = false;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(146, 12);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(39, 32);
			this->button35->TabIndex = 32;
			this->button35->Text = L"M+";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Form1::button35_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(6, 12);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(45, 32);
			this->button32->TabIndex = 29;
			this->button32->Text = L"MC";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(105, 12);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(35, 32);
			this->button34->TabIndex = 31;
			this->button34->Text = L"MS";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Form1::button34_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(57, 12);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(36, 32);
			this->button33->TabIndex = 30;
			this->button33->Text = L"MR";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(12, 280);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(61, 34);
			this->button36->TabIndex = 29;
			this->button36->Text = L"-+";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Form1::button36_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Вага", L"Об\'єм", L"Довжина"});
			this->listBox1->Location = System::Drawing::Point(498, 22);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 56);
			this->listBox1->TabIndex = 30;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 33;
			this->label6->Text = L"3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 34;
			this->label7->Text = L"4";
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(498, 84);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(75, 23);
			this->button37->TabIndex = 35;
			this->button37->Text = L"Convert";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Form1::button37_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 14);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(80, 17);
			this->radioButton1->TabIndex = 36;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"т | м^3 | км";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 36);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(91, 17);
			this->radioButton2->TabIndex = 37;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"цен | дц^3 | м";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 53);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(92, 17);
			this->radioButton3->TabIndex = 38;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"кг | см^3 | см";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 76);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(90, 17);
			this->radioButton4->TabIndex = 39;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"г | мм^3 | мм";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(43, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 20);
			this->textBox2->TabIndex = 40;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(43, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(57, 20);
			this->textBox3->TabIndex = 41;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(43, 66);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(57, 20);
			this->textBox4->TabIndex = 42;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(43, 92);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(57, 20);
			this->textBox5->TabIndex = 43;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"1";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton1);
			this->groupBox5->Controls->Add(this->radioButton2);
			this->groupBox5->Controls->Add(this->radioButton3);
			this->groupBox5->Controls->Add(this->radioButton4);
			this->groupBox5->Location = System::Drawing::Point(498, 113);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(110, 100);
			this->groupBox5->TabIndex = 44;
			this->groupBox5->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Controls->Add(this->textBox5);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->textBox4);
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->textBox3);
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Location = System::Drawing::Point(498, 225);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(105, 116);
			this->groupBox6->TabIndex = 45;
			this->groupBox6->TabStop = false;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(79, 277);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(61, 37);
			this->button38->TabIndex = 46;
			this->button38->Text = L"sqrt";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &Form1::button38_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 347);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Калькулятор";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double a, b;
		int dod,vid,mno,dil,ste,mod,mem,sqrt1;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 a=0.0;
               b=0.0;
               textBox1->Text="";
               dod=0;
               vid=0;
               mno=0;
               dil=0;
               ste=0;
               a=0;
               b=0;
               mod=0;
			//	 this->textBox1->Clear();
				 this->label1->Text="";
				  this->label2->Text="";
				   this->label3->Text="";
			 }

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 a=Convert::ToDouble(textBox1->Text);
			 label1->Text=textBox1->Text;
			 label2->Text="+";

               textBox1->Text="";
               dod=1;

		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {

			 a=Convert::ToDouble(textBox1->Text);
               label1->Text=textBox1->Text;
			 label2->Text="-";
			 textBox1->Text="";
               vid=1;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

a=Convert::ToDouble(textBox1->Text);
label1->Text=textBox1->Text;
			 label2->Text="*";               
textBox1->Text="";
               mno=1;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

a=Convert::ToDouble(textBox1->Text);
label1->Text=textBox1->Text;
			 label2->Text="/";               
textBox1->Text="";
               dil=1;
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		
			 textBox1->AppendText("0");
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->AppendText("1");
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		 textBox1->AppendText("2");
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		 textBox1->AppendText("3");
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		 textBox1->AppendText("4");
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->AppendText("5");
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		 textBox1->AppendText("6");
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText("7");
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->AppendText("8");
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->AppendText("9");
		 }

private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 label3->Text=textBox1->Text;
			 b=Convert::ToDouble(textBox1->Text);
               if(dod==1)textBox1->Text=(a+b).ToString();
               if(vid==1)textBox1->Text=(a-b).ToString();
               if(mno==1)textBox1->Text=(a*b).ToString();
               if(dil==1)textBox1->Text=(a/b).ToString();
               if(ste==1)textBox1->Text=(pow(a,b)).ToString();
               if(mod==1)textBox1->Text=((int)a%(int)b).ToString();
               dod=0;
               vid=0;
               mno=0;
               dil=0;
             ste=0;
               a=0; b=0;
              mod=0;  
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->AppendText(".");
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 a=Convert::ToDouble(textBox1->Text);
             label1->Text=textBox1->Text;
			 label2->Text="%";  
			 textBox1->Text="";
               mod=1;
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 a=Convert::ToDouble(textBox1->Text);
               label1->Text=textBox1->Text;
			 label2->Text="^"; 
			 textBox1->Text="";
               ste=1;
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 label2->Text=textBox1->Text;
textBox1->Text=log(Convert::ToDouble(textBox1->Text)).ToString();
 
		 label1->Text="ln"; 
	
		 }

		 private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		label2->Text=textBox1->Text;
		textBox1->Text=log10(Convert::ToDouble(textBox1->Text)).ToString();
		label1->Text="log";
				  }

	    private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
					
					   a=Convert::ToDouble(textBox1->Text);  
					 for(double i=a-1;i>0;i--){a=a*i;};
					 
					   textBox1->Text=(a).ToString();

		 }

	private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
				 label2->Text=textBox1->Text;
				 textBox1->Text=sin(Convert::ToDouble(textBox1->Text)*M_PI/180).ToString();
				 label1->Text="sin";
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			  label2->Text=textBox1->Text;
			 textBox1->Text=cos(Convert::ToDouble(textBox1->Text)*M_PI/180).ToString();
		 label1->Text="cos";
		 }



private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			  label2->Text=textBox1->Text;
			 textBox1->Text=tan(Convert::ToDouble(textBox1->Text)*M_PI/180).ToString();
		 label1->Text="tan";
		 }
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text=pow(Convert::ToDouble(textBox1->Text),2).ToString();
		 }
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=pow(Convert::ToDouble(textBox1->Text),3).ToString();
		 }
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=(M_PI).ToString();
		 }
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=(1/(Convert::ToDouble(textBox1->Text))).ToString();
		 }
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="";
		 }

private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			 mem=0.0;
		 }
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=mem.ToString();
		 }
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
			 mem=Convert::ToDouble(textBox1->Text);
		 }
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			 mem=mem+Convert::ToDouble(textBox1->Text);
		 }
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			  a=Convert::ToDouble(textBox1->Text);  
					a=a-a-a;
					 textBox1->Text=(a).ToString();
		 }

private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ str;
			  
               if((listBox1->SelectedIndex==0)&&(radioButton1->Checked==true)){
                     str=textBox2->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox3->Text=(Convert::ToDouble(str)*100).ToString();
                     textBox4->Text=(Convert::ToDouble(str)*1000).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*1000000).ToString();
               }
               if((listBox1->SelectedIndex==0)&&(radioButton2->Checked==true)){
                     str=textBox3->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/100).ToString();
                     textBox4->Text=(Convert::ToDouble(str)*10).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*10000).ToString();
               }
               if((listBox1->SelectedIndex==0)&&(radioButton3->Checked==true)){
                     str=textBox4->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/1000).ToString();
                     textBox3->Text=(Convert::ToDouble(str)/10).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*1000).ToString();
               }
               if((listBox1->SelectedIndex==0)&&(radioButton4->Checked==true)){
                     str=textBox5->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/1000000).ToString();
                     textBox3->Text=(Convert::ToDouble(str)/10000).ToString();
                     textBox4->Text=(Convert::ToDouble(str)/1000).ToString();
               }
               if((listBox1->SelectedIndex==1)&&(radioButton1->Checked==true)){
                     str=textBox2->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox3->Text=(Convert::ToDouble(str)*1000).ToString();
                     textBox4->Text=(Convert::ToDouble(str)*1000000).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*1000000000).ToString();
               }
               if((listBox1->SelectedIndex==1)&&(radioButton2->Checked==true)){
                     str=textBox3->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/1000).ToString();
                     textBox4->Text=(Convert::ToDouble(str)*1000).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*1000000).ToString();
               }
               if((listBox1->SelectedIndex==1)&&(radioButton3->Checked==true)){
                     str=textBox4->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/100000).ToString();
                     textBox3->Text=(Convert::ToDouble(str)/100).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*10).ToString();
               }
               if((listBox1->SelectedIndex==1)&&(radioButton4->Checked==true)){
                     str=textBox5->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/100000).ToString();
                     textBox3->Text=(Convert::ToDouble(str)/1000000).ToString();
                     textBox4->Text=(Convert::ToDouble(str)/1000).ToString();
               }
               if((listBox1->SelectedIndex==2)&&(radioButton4->Checked==true)){
                     str=textBox5->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/1000000).ToString();
                     textBox3->Text=(Convert::ToDouble(str)/1000).ToString();
                     textBox4->Text=(Convert::ToDouble(str)/10).ToString();
               }
               if((listBox1->SelectedIndex==2)&&(radioButton1->Checked==true)){
                     str=textBox2->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox3->Text=(Convert::ToDouble(str)*1000).ToString();
                     textBox4->Text=(Convert::ToDouble(str)*100000).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*1000000).ToString();
               }
               if((listBox1->SelectedIndex==2)&&(radioButton2->Checked==true)){
                     str=textBox3->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/1000).ToString();
                     textBox4->Text=(Convert::ToDouble(str)*100).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*1000).ToString();
               }
               if((listBox1->SelectedIndex==2)&&(radioButton3->Checked==true)){
                     str=textBox4->Text;
                     if(str->IndexOf(',')==-1) str=String::Concat(str,",0");
                     textBox2->Text=(Convert::ToDouble(str)/100000).ToString();
                     textBox3->Text=(Convert::ToDouble(str)/100).ToString();
                     textBox5->Text=(Convert::ToDouble(str)*10).ToString();
               }
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 if(listBox1->SelectedIndex==0){
                     label4->Text="т";
                     label5->Text="цен";
                     label6->Text="кг";
                     label7->Text="г";
               }
               if(listBox1->SelectedIndex==1){
                     label4->Text="м^3";
                     label5->Text="дц^3";
                     label6->Text="см^3";
                     label7->Text="мм^3";
               }
               if(listBox1->SelectedIndex==2){
                     label4->Text="км";
                     label5->Text="м";
                     label6->Text="см";
                     label7->Text="мм";
               }
			   
		 }
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
			 	  sqrt1=Convert::ToDouble(textBox1->Text);  
				 
				 
				  textBox1->Text=Convert::ToString(Math::Sqrt(sqrt1));
		 }
};
}

