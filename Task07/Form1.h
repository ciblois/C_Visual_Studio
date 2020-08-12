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
	private: System::Windows::Forms::RadioButton^ rdb_opt1;
	protected:
	private: System::Windows::Forms::RadioButton^ rdb_opt2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_resposta;

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
			this->rdb_opt1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_opt2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_resposta = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// rdb_opt1
			// 
			this->rdb_opt1->AutoSize = true;
			this->rdb_opt1->Location = System::Drawing::Point(41, 54);
			this->rdb_opt1->Name = L"rdb_opt1";
			this->rdb_opt1->Size = System::Drawing::Size(77, 21);
			this->rdb_opt1->TabIndex = 0;
			this->rdb_opt1->TabStop = true;
			this->rdb_opt1->Text = L"Homem";
			this->rdb_opt1->UseVisualStyleBackColor = true;
			// 
			// rdb_opt2
			// 
			this->rdb_opt2->AutoSize = true;
			this->rdb_opt2->Location = System::Drawing::Point(268, 54);
			this->rdb_opt2->Name = L"rdb_opt2";
			this->rdb_opt2->Size = System::Drawing::Size(72, 21);
			this->rdb_opt2->TabIndex = 1;
			this->rdb_opt2->TabStop = true;
			this->rdb_opt2->Text = L"Mulher";
			this->rdb_opt2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Qual é a resposta\?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_resposta
			// 
			this->txt_resposta->Location = System::Drawing::Point(234, 136);
			this->txt_resposta->Name = L"txt_resposta";
			this->txt_resposta->Size = System::Drawing::Size(132, 22);
			this->txt_resposta->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 786);
			this->Controls->Add(this->txt_resposta);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->rdb_opt2);
			this->Controls->Add(this->rdb_opt1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (rdb_opt1->Checked == true)
		{
			txt_resposta->Text = "Homem";
		}
		else
		{
			txt_resposta->Text = "Mulher";
		}
	}
};
}
