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
	private: System::Windows::Forms::TextBox^ txt_parc1;
	protected:
	private: System::Windows::Forms::TextBox^ txt_parc2;
	private: System::Windows::Forms::TextBox^ txt_prarc3;
	private: System::Windows::Forms::TextBox^ txt_tot_parc;
	private: System::Windows::Forms::Button^ btn_calc;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::CheckBox^ cbx_parc1;
	private: System::Windows::Forms::CheckBox^ cbx_parc2;
	private: System::Windows::Forms::CheckBox^ cbx_parc3;
	private: System::Windows::Forms::RadioButton^ rbn_somar3;
	private: System::Windows::Forms::RadioButton^ rdb_somar;
	private: System::Windows::Forms::ComboBox^ cbx_imp;

	private: System::Windows::Forms::Label^ label5;



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
			this->txt_parc1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_parc2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_prarc3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_tot_parc = (gcnew System::Windows::Forms::TextBox());
			this->btn_calc = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbx_parc1 = (gcnew System::Windows::Forms::CheckBox());
			this->cbx_parc2 = (gcnew System::Windows::Forms::CheckBox());
			this->cbx_parc3 = (gcnew System::Windows::Forms::CheckBox());
			this->rbn_somar3 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_somar = (gcnew System::Windows::Forms::RadioButton());
			this->cbx_imp = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt_parc1
			// 
			this->txt_parc1->Location = System::Drawing::Point(157, 69);
			this->txt_parc1->Name = L"txt_parc1";
			this->txt_parc1->Size = System::Drawing::Size(100, 22);
			this->txt_parc1->TabIndex = 0;
			// 
			// txt_parc2
			// 
			this->txt_parc2->Location = System::Drawing::Point(157, 136);
			this->txt_parc2->Name = L"txt_parc2";
			this->txt_parc2->Size = System::Drawing::Size(100, 22);
			this->txt_parc2->TabIndex = 1;
			// 
			// txt_prarc3
			// 
			this->txt_prarc3->Location = System::Drawing::Point(157, 203);
			this->txt_prarc3->Name = L"txt_prarc3";
			this->txt_prarc3->Size = System::Drawing::Size(100, 22);
			this->txt_prarc3->TabIndex = 2;
			// 
			// txt_tot_parc
			// 
			this->txt_tot_parc->Location = System::Drawing::Point(157, 397);
			this->txt_tot_parc->Name = L"txt_tot_parc";
			this->txt_tot_parc->Size = System::Drawing::Size(100, 22);
			this->txt_tot_parc->TabIndex = 3;
			this->txt_tot_parc->TextChanged += gcnew System::EventHandler(this, &Form1::txt_tot_parc_TextChanged);
			// 
			// btn_calc
			// 
			this->btn_calc->Location = System::Drawing::Point(41, 339);
			this->btn_calc->Name = L"btn_calc";
			this->btn_calc->Size = System::Drawing::Size(239, 23);
			this->btn_calc->TabIndex = 4;
			this->btn_calc->Text = L"Calcular";
			this->btn_calc->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn_calc->UseVisualStyleBackColor = true;
			this->btn_calc->Click += gcnew System::EventHandler(this, &Form1::btn_calc_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Parcela 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Parcela 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Parcela 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 395);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Total Parcial";
			// 
			// cbx_parc1
			// 
			this->cbx_parc1->AutoSize = true;
			this->cbx_parc1->Location = System::Drawing::Point(291, 69);
			this->cbx_parc1->Name = L"cbx_parc1";
			this->cbx_parc1->Size = System::Drawing::Size(18, 17);
			this->cbx_parc1->TabIndex = 10;
			this->cbx_parc1->UseVisualStyleBackColor = true;
			// 
			// cbx_parc2
			// 
			this->cbx_parc2->AutoSize = true;
			this->cbx_parc2->Location = System::Drawing::Point(291, 136);
			this->cbx_parc2->Name = L"cbx_parc2";
			this->cbx_parc2->Size = System::Drawing::Size(18, 17);
			this->cbx_parc2->TabIndex = 11;
			this->cbx_parc2->UseVisualStyleBackColor = true;
			// 
			// cbx_parc3
			// 
			this->cbx_parc3->AutoSize = true;
			this->cbx_parc3->Location = System::Drawing::Point(291, 203);
			this->cbx_parc3->Name = L"cbx_parc3";
			this->cbx_parc3->Size = System::Drawing::Size(18, 17);
			this->cbx_parc3->TabIndex = 12;
			this->cbx_parc3->UseVisualStyleBackColor = true;
			// 
			// rbn_somar3
			// 
			this->rbn_somar3->AutoSize = true;
			this->rbn_somar3->Location = System::Drawing::Point(368, 100);
			this->rbn_somar3->Name = L"rbn_somar3";
			this->rbn_somar3->Size = System::Drawing::Size(159, 21);
			this->rbn_somar3->TabIndex = 13;
			this->rbn_somar3->TabStop = true;
			this->rbn_somar3->Text = L"Somar as 3 parcelas";
			this->rbn_somar3->UseVisualStyleBackColor = true;
			// 
			// rdb_somar
			// 
			this->rdb_somar->AutoSize = true;
			this->rdb_somar->Location = System::Drawing::Point(368, 179);
			this->rdb_somar->Name = L"rdb_somar";
			this->rdb_somar->Size = System::Drawing::Size(285, 21);
			this->rdb_somar->TabIndex = 14;
			this->rdb_somar->TabStop = true;
			this->rdb_somar->Text = L"Somar apenas as parcelas selecionadas";
			this->rdb_somar->UseVisualStyleBackColor = true;
			// 
			// cbx_imp
			// 
			this->cbx_imp->FormattingEnabled = true;
			this->cbx_imp->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5%", L"10%", L"20%" });
			this->cbx_imp->Location = System::Drawing::Point(159, 287);
			this->cbx_imp->Name = L"cbx_imp";
			this->cbx_imp->Size = System::Drawing::Size(121, 24);
			this->cbx_imp->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 287);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Imposto";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 808);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cbx_imp);
			this->Controls->Add(this->rdb_somar);
			this->Controls->Add(this->rbn_somar3);
			this->Controls->Add(this->cbx_parc3);
			this->Controls->Add(this->cbx_parc2);
			this->Controls->Add(this->cbx_parc1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_calc);
			this->Controls->Add(this->txt_tot_parc);
			this->Controls->Add(this->txt_prarc3);
			this->Controls->Add(this->txt_parc2);
			this->Controls->Add(this->txt_parc1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txt_tot_parc_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void btn_calc_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		double parc1 = Convert::ToDouble(txt_parc1->Text);
		double parc2 = Convert::ToDouble(txt_parc2->Text);
		double parc3 = Convert::ToDouble(txt_prarc3->Text);

		double tot_parc = 0, tot_final = 0;

		if (rbn_somar3->Checked == true)
		{
			//testando as variáveis
			tot_parc = parc1 + parc2 + parc3;
		}
		else
		{
			if (cbx_parc1->Checked == true)
			{
				tot_parc = tot_parc + parc1;
			}
			if (cbx_parc2->Checked == true)
			{
				tot_parc = tot_parc + parc2;
			}
			if (cbx_parc3->Checked == true)
			{
				tot_parc = tot_parc + parc3;
			}
		}

		if (cbx_imp->Text == "5%" | cbx_imp->Text == "10%" | cbx_imp->Text == "20%")
		{
			if (cbx_imp->Text == "5%")
			{
				tot_final = tot_parc * 1.05;
				txt_tot_parc->Text = Convert::ToString(tot_final);
			}
			if (cbx_imp->Text == "10%")
			{
				tot_final = tot_parc * 1.1;
				txt_tot_parc->Text = Convert::ToString(tot_final);
			}
			if (cbx_imp->Text == "20%")
			{
				tot_final = tot_parc * 1.2;
				txt_tot_parc->Text = Convert::ToString(tot_final);
			}
		}
		else
		{
			txt_tot_parc->Text = Convert::ToString(tot_parc);
		}		
	}
};
}
