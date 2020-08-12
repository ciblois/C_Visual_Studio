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
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_count;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txt_add_nome;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ txt_add_city;
	private: System::Windows::Forms::TextBox^ txt_add_year;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ txt_busca;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button7;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_count = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_add_nome = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txt_add_city = (gcnew System::Windows::Forms::TextBox());
			this->txt_add_year = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->txt_busca = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(29, 370);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(584, 324);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nome";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Cidade";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ano Nasc.";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(378, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Eliminar todos os elementos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(29, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(205, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Contar os elementos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// txt_count
			// 
			this->txt_count->Location = System::Drawing::Point(251, 83);
			this->txt_count->Name = L"txt_count";
			this->txt_count->Size = System::Drawing::Size(91, 22);
			this->txt_count->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(29, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(584, 24);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Adicionar 4 linhas na Grid";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// txt_add_nome
			// 
			this->txt_add_nome->Location = System::Drawing::Point(348, 130);
			this->txt_add_nome->Name = L"txt_add_nome";
			this->txt_add_nome->Size = System::Drawing::Size(265, 22);
			this->txt_add_nome->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(29, 129);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(205, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Inserir na lista";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// txt_add_city
			// 
			this->txt_add_city->Location = System::Drawing::Point(348, 159);
			this->txt_add_city->Name = L"txt_add_city";
			this->txt_add_city->Size = System::Drawing::Size(265, 22);
			this->txt_add_city->TabIndex = 7;
			// 
			// txt_add_year
			// 
			this->txt_add_year->Location = System::Drawing::Point(348, 188);
			this->txt_add_year->Name = L"txt_add_year";
			this->txt_add_year->Size = System::Drawing::Size(265, 22);
			this->txt_add_year->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(251, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Nome";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(251, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Cidade";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(251, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Ano Nasc.";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(29, 222);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(205, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(230, 254);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(205, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Localiza este nome";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// txt_busca
			// 
			this->txt_busca->Location = System::Drawing::Point(29, 274);
			this->txt_busca->Name = L"txt_busca";
			this->txt_busca->Size = System::Drawing::Size(176, 22);
			this->txt_busca->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Inserir aqui o nome";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(230, 284);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(205, 23);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Elimina a linha com esse nome";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 728);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_busca);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_add_year);
			this->Controls->Add(this->txt_add_city);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txt_add_nome);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txt_count);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->Rows->Clear();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txt_count->Text = Convert::ToString(dataGridView1->Rows->Count-1);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->Rows->Add("Tico", "Portp", "1999");
		dataGridView1->Rows->Add("Teco", "Braga", "1999");
		dataGridView1->Rows->Add("Donald", "Guimarães", "1989");
		dataGridView1->Rows->Add("Margarida", "Viana do Castelo", "1993");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->Rows->Add(txt_add_nome->Text, txt_add_city->Text, txt_add_year->Text);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int L = dataGridView1->Rows->Count; //total de linhas da grid
		L = L - 1; //a linha vazia final é contabilizada pelo count, assim eliminamos-a

		
		int p = -1; //guarda a posição da grid onde o nome for encontrado

		for (int i = 0; i < L; i++)
		{
			if (txt_busca->Text->ToUpper() == dataGridView1->Rows[i]->Cells[0]->Value->ToString()->ToUpper())
			{
				p = i;	
			}
		}
		if (p == 1)
		{
			MessageBox::Show("Este nome contêm na lista");
		}
		else
		{
			MessageBox::Show("Este nome não contêm na lista");
		}

		txt_busca->Text = " ";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int L = dataGridView1->Rows->Count; //total de linhas da grid
		L = L - 1; //a linha vazia final é contabilizada pelo count, assim eliminamos-a


		int p = -1; //guarda a posição da grid onde o nome for encontrado

		for (int i = 0; i < L; i++)
		{
			if (txt_busca->Text->ToUpper() == dataGridView1->Rows[i]->Cells[0]->Value->ToString()->ToUpper())
			{
				p = i;
				dataGridView1->Rows->RemoveAt(p);
				MessageBox::Show("Removido");
			}
		}	
		txt_busca->Text = " ";
	}
};
}
