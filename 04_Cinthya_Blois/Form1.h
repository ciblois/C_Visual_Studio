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

	protected:

	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::ListBox^ lbx_listA;
	private: System::Windows::Forms::ListBox^ lbx_listB;
	private: System::Windows::Forms::Button^ btn_numbers;
	private: System::Windows::Forms::Button^ btn_count;
	private: System::Windows::Forms::TextBox^ txt_count;
	private: System::Windows::Forms::Button^ btn_max;
	private: System::Windows::Forms::RadioButton^ rbn_first;
	private: System::Windows::Forms::RadioButton^ rbn_last;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbx_oddeven;
	private: System::Windows::Forms::CheckBox^ ckb_odd;
	private: System::Windows::Forms::CheckBox^ ckb_even;





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
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->lbx_listA = (gcnew System::Windows::Forms::ListBox());
			this->lbx_listB = (gcnew System::Windows::Forms::ListBox());
			this->btn_numbers = (gcnew System::Windows::Forms::Button());
			this->btn_count = (gcnew System::Windows::Forms::Button());
			this->txt_count = (gcnew System::Windows::Forms::TextBox());
			this->btn_max = (gcnew System::Windows::Forms::Button());
			this->rbn_first = (gcnew System::Windows::Forms::RadioButton());
			this->rbn_last = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbx_oddeven = (gcnew System::Windows::Forms::ComboBox());
			this->ckb_odd = (gcnew System::Windows::Forms::CheckBox());
			this->ckb_even = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(24, 38);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(135, 36);
			this->btn_clear->TabIndex = 2;
			this->btn_clear->Text = L"Clear Lists";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &Form1::btn_clear_Click);
			// 
			// lbx_listA
			// 
			this->lbx_listA->FormattingEnabled = true;
			this->lbx_listA->ItemHeight = 16;
			this->lbx_listA->Location = System::Drawing::Point(205, 38);
			this->lbx_listA->Name = L"lbx_listA";
			this->lbx_listA->Size = System::Drawing::Size(213, 580);
			this->lbx_listA->TabIndex = 3;
			// 
			// lbx_listB
			// 
			this->lbx_listB->FormattingEnabled = true;
			this->lbx_listB->ItemHeight = 16;
			this->lbx_listB->Location = System::Drawing::Point(720, 34);
			this->lbx_listB->Name = L"lbx_listB";
			this->lbx_listB->Size = System::Drawing::Size(236, 580);
			this->lbx_listB->TabIndex = 4;
			// 
			// btn_numbers
			// 
			this->btn_numbers->Location = System::Drawing::Point(24, 111);
			this->btn_numbers->Name = L"btn_numbers";
			this->btn_numbers->Size = System::Drawing::Size(135, 103);
			this->btn_numbers->TabIndex = 5;
			this->btn_numbers->Text = L"Add 10 random numbers between 0 and 20";
			this->btn_numbers->UseVisualStyleBackColor = true;
			this->btn_numbers->Click += gcnew System::EventHandler(this, &Form1::btn_numbers_Click);
			// 
			// btn_count
			// 
			this->btn_count->Location = System::Drawing::Point(88, 646);
			this->btn_count->Name = L"btn_count";
			this->btn_count->Size = System::Drawing::Size(125, 65);
			this->btn_count->TabIndex = 6;
			this->btn_count->Text = L"Show the amount of numebrs in the list";
			this->btn_count->UseVisualStyleBackColor = true;
			this->btn_count->Click += gcnew System::EventHandler(this, &Form1::btn_count_Click);
			// 
			// txt_count
			// 
			this->txt_count->Location = System::Drawing::Point(468, 667);
			this->txt_count->Name = L"txt_count";
			this->txt_count->Size = System::Drawing::Size(249, 22);
			this->txt_count->TabIndex = 7;
			// 
			// btn_max
			// 
			this->btn_max->Location = System::Drawing::Point(277, 646);
			this->btn_max->Name = L"btn_max";
			this->btn_max->Size = System::Drawing::Size(125, 65);
			this->btn_max->TabIndex = 8;
			this->btn_max->Text = L"Show the major number";
			this->btn_max->UseVisualStyleBackColor = true;
			this->btn_max->Click += gcnew System::EventHandler(this, &Form1::btn_max_Click);
			// 
			// rbn_first
			// 
			this->rbn_first->AutoSize = true;
			this->rbn_first->Location = System::Drawing::Point(527, 89);
			this->rbn_first->Name = L"rbn_first";
			this->rbn_first->Size = System::Drawing::Size(56, 21);
			this->rbn_first->TabIndex = 9;
			this->rbn_first->TabStop = true;
			this->rbn_first->Text = L"First";
			this->rbn_first->UseVisualStyleBackColor = true;
			this->rbn_first->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbn_first_CheckedChanged);
			// 
			// rbn_last
			// 
			this->rbn_last->AutoSize = true;
			this->rbn_last->Location = System::Drawing::Point(625, 89);
			this->rbn_last->Name = L"rbn_last";
			this->rbn_last->Size = System::Drawing::Size(56, 21);
			this->rbn_last->TabIndex = 10;
			this->rbn_last->TabStop = true;
			this->rbn_last->Text = L"Last";
			this->rbn_last->UseVisualStyleBackColor = true;
			this->rbn_last->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbn_last_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(527, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Options to fullfill List B";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// cbx_oddeven
			// 
			this->cbx_oddeven->FormattingEnabled = true;
			this->cbx_oddeven->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Odd", L"Even" });
			this->cbx_oddeven->Location = System::Drawing::Point(527, 151);
			this->cbx_oddeven->Name = L"cbx_oddeven";
			this->cbx_oddeven->Size = System::Drawing::Size(154, 24);
			this->cbx_oddeven->TabIndex = 12;
			this->cbx_oddeven->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cbx_oddeven_SelectedIndexChanged);
			// 
			// ckb_odd
			// 
			this->ckb_odd->AutoSize = true;
			this->ckb_odd->Location = System::Drawing::Point(624, 241);
			this->ckb_odd->Name = L"ckb_odd";
			this->ckb_odd->Size = System::Drawing::Size(57, 21);
			this->ckb_odd->TabIndex = 13;
			this->ckb_odd->Text = L"Odd";
			this->ckb_odd->UseVisualStyleBackColor = true;
			this->ckb_odd->CheckedChanged += gcnew System::EventHandler(this, &Form1::ckb_odd_CheckedChanged);
			// 
			// ckb_even
			// 
			this->ckb_even->AutoSize = true;
			this->ckb_even->Location = System::Drawing::Point(527, 241);
			this->ckb_even->Name = L"ckb_even";
			this->ckb_even->Size = System::Drawing::Size(62, 21);
			this->ckb_even->TabIndex = 14;
			this->ckb_even->Text = L"Even";
			this->ckb_even->UseVisualStyleBackColor = true;
			this->ckb_even->CheckedChanged += gcnew System::EventHandler(this, &Form1::ckb_even_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1085, 768);
			this->Controls->Add(this->ckb_even);
			this->Controls->Add(this->ckb_odd);
			this->Controls->Add(this->cbx_oddeven);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rbn_last);
			this->Controls->Add(this->rbn_first);
			this->Controls->Add(this->btn_max);
			this->Controls->Add(this->txt_count);
			this->Controls->Add(this->btn_count);
			this->Controls->Add(this->btn_numbers);
			this->Controls->Add(this->lbx_listB);
			this->Controls->Add(this->lbx_listA);
			this->Controls->Add(this->btn_clear);
			this->Name = L"Form1";
			this->Text = L"Final_Task";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Esse botão irá apagar o conteúdo das 2 listas
		lbx_listA->Items->Clear();
		lbx_listB->Items->Clear();
	}
	private: System::Void btn_numbers_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//gerar 10 números aleatórios para lista A entre 0 e 20
		Random^ r = gcnew Random();
		int n = 0;

		//o método  next, gera um valor entre os 2 limites, no caso 0 e 20:
		for (size_t i = 0; i < 10; i++)
		{
			n = r->Next(0, 20);
			lbx_listA->Items->Add(n);
		}
	}
	private: System::Void btn_count_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txt_count->Text = "The number of elements is " + Convert::ToString(lbx_listA->Items->Count);
	}
	private: System::Void btn_max_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int max = 0; //inicializando uma variável para encontrar o maior valor da lista A
		int count = lbx_listA->Items->Count; //número de elementos da lista
		txt_count->Text = " "; //limpar a textbox
		
		for (size_t i = 0; i < count; i++) //correr a lista
		{
			if (i == 0)
			{
				max = (Convert::ToInt16(lbx_listA->Items[i]));
			}
			if ((Convert::ToInt16(lbx_listA->Items[i])) > max)
			{
				max = (Convert::ToInt16(lbx_listA->Items[i]));
			}
		}
		txt_count->Text = Convert::ToString("The max number is " + max);
	}
	private: System::Void rbn_first_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		//checar se a opção ta marcada
		if (rbn_first->Checked)
		{
			lbx_listB->Items->Add(lbx_listA->Items[0]); //0 para pegar o primeiro elemento da lista A
		}
	}
	private: System::Void rbn_last_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		int count = lbx_listA->Items->Count; //número de elementos da lista
		
		if (rbn_last->Checked) //checar se a opção ta marcada
		{
			lbx_listB->Items->Add(lbx_listA->Items[count-1]); //count - 1 para pegar o último elemento da lista A
		}
	}
	private: System::Void cbx_oddeven_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		int count = lbx_listA->Items->Count; //número de elementos da lista
		
		if (cbx_oddeven->Text == "Even")
		{
			for (size_t i = 0; i < count; i++)
			{
				if (Convert::ToInt16(lbx_listA->Items[i]) % 2 == 0) //checando condição de ser par
				{
					lbx_listB->Items->Add(lbx_listA->Items[i]); //add na lista
				}
			}
		}
		if (cbx_oddeven->Text == "Odd")
		{
			for (size_t i = 0; i < count; i++)
			{
				if (Convert::ToInt16(lbx_listA->Items[i]) % 2 != 0) //checando condição de ser ímpar
				{
					lbx_listB->Items->Add(lbx_listA->Items[i]); //add na lista
				}
			}
		}
	}
	private: System::Void ckb_even_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		txt_count->Text = " "; //limpar a textbox
		int count = lbx_listA->Items->Count; //número de elementos da lista
		int sum = 0; //inicializando uma variável para fazer a soma

		if (ckb_even->Checked)
		{
			for (size_t i = 0; i < count; i++)
			{
				sum = sum + Convert::ToInt16(lbx_listA->Items[i]);
				txt_count->Text = Convert::ToString("Sum of even numbers: " + sum);
			}
		}

		if (ckb_odd->Checked && ckb_even->Checked)//checando se as 2 checkedbox estão marcadas
		{
			for (size_t i = 0; i < count; i++)
			{
				sum = sum + Convert::ToInt16(lbx_listA->Items[i]); //somando todos os items
			}
			txt_count->Text = Convert::ToString("The sum of all the numbers is : " + sum);
		}
	}
	private: System::Void ckb_odd_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		txt_count->Text = " "; //limpar a textbox
		int count = lbx_listA->Items->Count; //número de elementos da lista
		int sum = 0; //inicializando uma variável para fazer a soma

		if (ckb_odd->Checked)
		{
			for (size_t i = 0; i < count; i++)
			{
				if (Convert::ToInt16(lbx_listA->Items[i]) % 2 == 0) //checando condição de ser par
				{
					sum = sum + Convert::ToInt16(lbx_listA->Items[i]); //somando os items pares
				}
			}
			txt_count->Text = Convert::ToString("Sum of odd numbers: " + sum);
		}
		if (ckb_odd->Checked && ckb_even->Checked) //checando se as 2 checkedbox estão marcadas
		{
			for (size_t i = 0; i < count; i++)
			{
				sum = sum + Convert::ToInt16(lbx_listA->Items[i]); //somando todos os itens
			}
			txt_count->Text = Convert::ToString("The sum of all the numbers is : " + sum);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
