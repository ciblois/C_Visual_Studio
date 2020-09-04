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
	private: System::Windows::Forms::TextBox^ txt_num1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_num2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_soma;
	private: System::Windows::Forms::Label^ txt_label_idade;
	private: System::Windows::Forms::TextBox^ txt_idade;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_resultado;



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
			this->txt_num1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_num2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_soma = (gcnew System::Windows::Forms::TextBox());
			this->txt_label_idade = (gcnew System::Windows::Forms::Label());
			this->txt_idade = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_resultado = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txt_num1
			// 
			this->txt_num1->Location = System::Drawing::Point(64, 54);
			this->txt_num1->Name = L"txt_num1";
			this->txt_num1->Size = System::Drawing::Size(100, 22);
			this->txt_num1->TabIndex = 0;
			this->txt_num1->TextChanged += gcnew System::EventHandler(this, &Form1::txt_num1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Número 1";
			// 
			// txt_num2
			// 
			this->txt_num2->Location = System::Drawing::Point(64, 123);
			this->txt_num2->Name = L"txt_num2";
			this->txt_num2->Size = System::Drawing::Size(100, 22);
			this->txt_num2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Número 2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(182, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 69);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Somar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_soma
			// 
			this->txt_soma->Location = System::Drawing::Point(341, 88);
			this->txt_soma->Name = L"txt_soma";
			this->txt_soma->Size = System::Drawing::Size(100, 22);
			this->txt_soma->TabIndex = 5;
			// 
			// txt_label_idade
			// 
			this->txt_label_idade->AutoSize = true;
			this->txt_label_idade->Location = System::Drawing::Point(64, 242);
			this->txt_label_idade->Name = L"txt_label_idade";
			this->txt_label_idade->Size = System::Drawing::Size(153, 17);
			this->txt_label_idade->TabIndex = 6;
			this->txt_label_idade->Text = L"Inttroduza a sua idade:";
			// 
			// txt_idade
			// 
			this->txt_idade->Location = System::Drawing::Point(84, 262);
			this->txt_idade->Name = L"txt_idade";
			this->txt_idade->Size = System::Drawing::Size(100, 22);
			this->txt_idade->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(232, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 42);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Clique aqui!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// txt_resultado
			// 
			this->txt_resultado->Location = System::Drawing::Point(411, 252);
			this->txt_resultado->Name = L"txt_resultado";
			this->txt_resultado->Size = System::Drawing::Size(205, 22);
			this->txt_resultado->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 500);
			this->Controls->Add(this->txt_resultado);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txt_idade);
			this->Controls->Add(this->txt_label_idade);
			this->Controls->Add(this->txt_soma);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_num2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_num1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txt_soma->Text = 
			Convert::ToString(
			Convert::ToInt16(txt_num1->Text) + Convert::ToInt16(txt_num2->Text)
			);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int idade;

		idade = Convert::ToInt16(txt_idade->Text);

		if (idade < 18)
		{
			txt_resultado->Text = "Menor de idade.";
		}
		else
		{
			//idade >= 18;
			txt_resultado->Text = "Maior de idade.";
		}
	
	}
private: System::Void txt_num1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
