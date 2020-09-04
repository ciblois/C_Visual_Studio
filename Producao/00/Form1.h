#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_qtd;
	private: System::Windows::Forms::TextBox^ txt_price;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_total;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmb_class;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ ckb_op1;
	private: System::Windows::Forms::CheckBox^ ckb_op2;
	private: System::Windows::Forms::CheckBox^ ckb_op3;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ rdb_sim;
	private: System::Windows::Forms::RadioButton^ rdb_no;
	private: System::Windows::Forms::Label^ label7;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_qtd = (gcnew System::Windows::Forms::TextBox());
			this->txt_price = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_total = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmb_class = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ckb_op1 = (gcnew System::Windows::Forms::CheckBox());
			this->ckb_op2 = (gcnew System::Windows::Forms::CheckBox());
			this->ckb_op3 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->rdb_sim = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_no = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Inserir Quantidade";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(305, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Preço Unitário";
			// 
			// txt_qtd
			// 
			this->txt_qtd->Location = System::Drawing::Point(60, 69);
			this->txt_qtd->Name = L"txt_qtd";
			this->txt_qtd->Size = System::Drawing::Size(122, 22);
			this->txt_qtd->TabIndex = 2;
			this->txt_qtd->TextChanged += gcnew System::EventHandler(this, &Form1::txt_qtd_TextChanged);
			// 
			// txt_price
			// 
			this->txt_price->Location = System::Drawing::Point(303, 69);
			this->txt_price->Name = L"txt_price";
			this->txt_price->Size = System::Drawing::Size(100, 22);
			this->txt_price->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 67);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_total
			// 
			this->txt_total->Location = System::Drawing::Point(257, 377);
			this->txt_total->Name = L"txt_total";
			this->txt_total->Size = System::Drawing::Size(250, 22);
			this->txt_total->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(254, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Total";
			// 
			// cmb_class
			// 
			this->cmb_class->FormattingEnabled = true;
			this->cmb_class->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Menor", L"Adulto", L"Reformado" });
			this->cmb_class->Location = System::Drawing::Point(60, 170);
			this->cmb_class->Name = L"cmb_class";
			this->cmb_class->Size = System::Drawing::Size(166, 24);
			this->cmb_class->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Escolha uma das opções";
			// 
			// ckb_op1
			// 
			this->ckb_op1->AutoSize = true;
			this->ckb_op1->Location = System::Drawing::Point(303, 152);
			this->ckb_op1->Name = L"ckb_op1";
			this->ckb_op1->Size = System::Drawing::Size(98, 21);
			this->ckb_op1->TabIndex = 9;
			this->ckb_op1->Text = L"checkBox1";
			this->ckb_op1->UseVisualStyleBackColor = true;
			// 
			// ckb_op2
			// 
			this->ckb_op2->AutoSize = true;
			this->ckb_op2->Location = System::Drawing::Point(303, 190);
			this->ckb_op2->Name = L"ckb_op2";
			this->ckb_op2->Size = System::Drawing::Size(98, 21);
			this->ckb_op2->TabIndex = 10;
			this->ckb_op2->Text = L"checkBox2";
			this->ckb_op2->UseVisualStyleBackColor = true;
			// 
			// ckb_op3
			// 
			this->ckb_op3->AutoSize = true;
			this->ckb_op3->Location = System::Drawing::Point(303, 232);
			this->ckb_op3->Name = L"ckb_op3";
			this->ckb_op3->Size = System::Drawing::Size(98, 21);
			this->ckb_op3->TabIndex = 11;
			this->ckb_op3->Text = L"checkBox3";
			this->ckb_op3->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Escalão";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(300, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Extras";
			// 
			// rdb_sim
			// 
			this->rdb_sim->AutoSize = true;
			this->rdb_sim->Location = System::Drawing::Point(83, 273);
			this->rdb_sim->Name = L"rdb_sim";
			this->rdb_sim->Size = System::Drawing::Size(52, 21);
			this->rdb_sim->TabIndex = 14;
			this->rdb_sim->TabStop = true;
			this->rdb_sim->Text = L"Sim";
			this->rdb_sim->UseVisualStyleBackColor = true;
			// 
			// rdb_no
			// 
			this->rdb_no->AutoSize = true;
			this->rdb_no->Location = System::Drawing::Point(157, 273);
			this->rdb_no->Name = L"rdb_no";
			this->rdb_no->Size = System::Drawing::Size(55, 21);
			this->rdb_no->TabIndex = 15;
			this->rdb_no->TabStop = true;
			this->rdb_no->Text = L"Não";
			this->rdb_no->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(57, 232);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Agravamento";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 475);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->rdb_no);
			this->Controls->Add(this->rdb_sim);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ckb_op3);
			this->Controls->Add(this->ckb_op2);
			this->Controls->Add(this->ckb_op1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmb_class);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_total);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_price);
			this->Controls->Add(this->txt_qtd);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txt_qtd_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//float price, price_desc, price_ex, price_final;

		//price = Convert::ToInt16(txt_qtd->Text) * Convert::ToInt16(txt_price->Text);

		double a,b,c,agv,price;
		a, b, c, agv = 0;

		if (ckb_op1->Checked == true) // acrescenta 10 euros
		{
			a = 10;
		}
		if (ckb_op2->Checked == true)
		{
			b = 10;
		}
		if (ckb_op3->Checked == true)
		{
			c = 10;
		}
		if (cmb_class->Text == "Menor")
		{
			price = a + b + c + (Convert::ToInt32(txt_qtd->Text) * Convert::ToInt32(txt_price->Text) * 0.95);
			if (rdb_sim->Checked) price = price * 0.9;
			txt_total->Text = Convert::ToString(price);
		}
		if (cmb_class->Text == "Adulto")
		{
			price = a + b + c + (Convert::ToInt32(txt_qtd->Text) * Convert::ToInt32(txt_price->Text));
			if (rdb_sim->Checked) price = price * 0.9;
			txt_total->Text = Convert::ToString(price);
		}
		if (cmb_class->Text == "Reformado")
		{
			price = a + b + c + (Convert::ToInt32(txt_qtd->Text) * Convert::ToInt32(txt_price->Text) * 0.93);
			if (rdb_sim->Checked) price = price * 0.9;
			txt_total->Text = Convert::ToString(price);
		}
	}
};
}
