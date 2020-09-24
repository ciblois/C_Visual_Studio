#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pizza
	/// </summary>
	public ref class Pizza : public System::Windows::Forms::Form
	{
	public:
		Pizza(void)
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
		~Pizza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbx_pizzas;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_final_price;
	private: System::Windows::Forms::TextBox^ txt_quant;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_price;
	private: System::Windows::Forms::CheckBox^ cbx_azeitonas;
	private: System::Windows::Forms::CheckBox^ cbx_queijo;
	private: System::Windows::Forms::CheckBox^ cbx_pimentos;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ rbn_yes;
	private: System::Windows::Forms::RadioButton^ rdn_no;

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
			this->cbx_pizzas = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_final_price = (gcnew System::Windows::Forms::TextBox());
			this->txt_quant = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_price = (gcnew System::Windows::Forms::Button());
			this->cbx_azeitonas = (gcnew System::Windows::Forms::CheckBox());
			this->cbx_queijo = (gcnew System::Windows::Forms::CheckBox());
			this->cbx_pimentos = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rbn_yes = (gcnew System::Windows::Forms::RadioButton());
			this->rdn_no = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// cbx_pizzas
			// 
			this->cbx_pizzas->FormattingEnabled = true;
			this->cbx_pizzas->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Margarida", L"Napolitana", L"Anchova" });
			this->cbx_pizzas->Location = System::Drawing::Point(59, 73);
			this->cbx_pizzas->Name = L"cbx_pizzas";
			this->cbx_pizzas->Size = System::Drawing::Size(121, 24);
			this->cbx_pizzas->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Choose Your Pizza";
			// 
			// txt_final_price
			// 
			this->txt_final_price->Location = System::Drawing::Point(59, 397);
			this->txt_final_price->Name = L"txt_final_price";
			this->txt_final_price->Size = System::Drawing::Size(305, 22);
			this->txt_final_price->TabIndex = 2;
			this->txt_final_price->TextChanged += gcnew System::EventHandler(this, &Pizza::txt_final_price_TextChanged);
			// 
			// txt_quant
			// 
			this->txt_quant->Location = System::Drawing::Point(264, 73);
			this->txt_quant->Name = L"txt_quant";
			this->txt_quant->Size = System::Drawing::Size(100, 22);
			this->txt_quant->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(264, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Quantity";
			// 
			// btn_price
			// 
			this->btn_price->Location = System::Drawing::Point(59, 340);
			this->btn_price->Name = L"btn_price";
			this->btn_price->Size = System::Drawing::Size(305, 51);
			this->btn_price->TabIndex = 5;
			this->btn_price->Text = L"Calculate";
			this->btn_price->UseVisualStyleBackColor = true;
			this->btn_price->Click += gcnew System::EventHandler(this, &Pizza::btn_price_Click);
			// 
			// cbx_azeitonas
			// 
			this->cbx_azeitonas->AutoSize = true;
			this->cbx_azeitonas->Location = System::Drawing::Point(59, 164);
			this->cbx_azeitonas->Name = L"cbx_azeitonas";
			this->cbx_azeitonas->Size = System::Drawing::Size(69, 21);
			this->cbx_azeitonas->TabIndex = 6;
			this->cbx_azeitonas->Text = L"Olives";
			this->cbx_azeitonas->UseVisualStyleBackColor = true;
			// 
			// cbx_queijo
			// 
			this->cbx_queijo->AutoSize = true;
			this->cbx_queijo->Location = System::Drawing::Point(162, 164);
			this->cbx_queijo->Name = L"cbx_queijo";
			this->cbx_queijo->Size = System::Drawing::Size(78, 21);
			this->cbx_queijo->TabIndex = 7;
			this->cbx_queijo->Text = L"Cheese";
			this->cbx_queijo->UseVisualStyleBackColor = true;
			// 
			// cbx_pimentos
			// 
			this->cbx_pimentos->AutoSize = true;
			this->cbx_pimentos->Location = System::Drawing::Point(281, 164);
			this->cbx_pimentos->Name = L"cbx_pimentos";
			this->cbx_pimentos->Size = System::Drawing::Size(83, 21);
			this->cbx_pimentos->TabIndex = 8;
			this->cbx_pimentos->Text = L"Peppers";
			this->cbx_pimentos->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Extra";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(175, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Have discount\?";
			// 
			// rbn_yes
			// 
			this->rbn_yes->AutoSize = true;
			this->rbn_yes->Location = System::Drawing::Point(137, 271);
			this->rbn_yes->Name = L"rbn_yes";
			this->rbn_yes->Size = System::Drawing::Size(53, 21);
			this->rbn_yes->TabIndex = 11;
			this->rbn_yes->TabStop = true;
			this->rbn_yes->Text = L"Yes";
			this->rbn_yes->UseVisualStyleBackColor = true;
			// 
			// rdn_no
			// 
			this->rdn_no->AutoSize = true;
			this->rdn_no->Location = System::Drawing::Point(268, 271);
			this->rdn_no->Name = L"rdn_no";
			this->rdn_no->Size = System::Drawing::Size(47, 21);
			this->rdn_no->TabIndex = 12;
			this->rdn_no->TabStop = true;
			this->rdn_no->Text = L"No";
			this->rdn_no->UseVisualStyleBackColor = true;
			// 
			// Pizza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 496);
			this->Controls->Add(this->rdn_no);
			this->Controls->Add(this->rbn_yes);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cbx_pimentos);
			this->Controls->Add(this->cbx_queijo);
			this->Controls->Add(this->cbx_azeitonas);
			this->Controls->Add(this->btn_price);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_quant);
			this->Controls->Add(this->txt_final_price);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbx_pizzas);
			this->Name = L"Pizza";
			this->Text = L"Pizza";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txt_final_price_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void btn_price_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int qtd = 0;
		try
		{
			qtd = Convert::ToInt16(txt_quant->Text);
		}
		catch (...)
		{		
			MessageBox::Show("Type the quantity please.");
		}

		//int qtd = Convert::ToInt16(txt_quant->Text);
		double price = 0;

		if (cbx_pizzas->Text == "Margarida")
		{
			price = 6 * qtd;
		}
		if (cbx_pizzas->Text == "Napolitana")
		{
			price = 7 * qtd;
		}
		if (cbx_pizzas->Text == "Anchova")
		{
			price = 8 * qtd;
		}

		//checando os ingredientes extras
		if (cbx_azeitonas->Checked == true)
		{
			price = price + 1*qtd;
		}
		if (cbx_queijo->Checked == true)
		{
			price = price + 1*qtd;
		}
		if (cbx_pimentos->Checked == true)
		{
			price = price + 2*qtd;
		}

		//checando o disconto
		if (rbn_yes->Checked)
		{
			price = price * 0.9;
		}

		txt_final_price->Text = Convert::ToString(price);
	}
};
}
