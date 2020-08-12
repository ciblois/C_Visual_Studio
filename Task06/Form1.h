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
	private: System::Windows::Forms::CheckBox^ cbx_opt1;
	private: System::Windows::Forms::CheckBox^ cbx_opt2;


	private: System::Windows::Forms::CheckBox^ cbx_opt3;
	private: System::Windows::Forms::CheckBox^ cbx_opt4;
	private: System::Windows::Forms::Button^ button1;
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
			this->cbx_opt1 = (gcnew System::Windows::Forms::CheckBox());
			this->cbx_opt2 = (gcnew System::Windows::Forms::CheckBox());
			this->cbx_opt3 = (gcnew System::Windows::Forms::CheckBox());
			this->cbx_opt4 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_resultado = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cbx_opt1
			// 
			this->cbx_opt1->AutoSize = true;
			this->cbx_opt1->Location = System::Drawing::Point(46, 43);
			this->cbx_opt1->Name = L"cbx_opt1";
			this->cbx_opt1->Size = System::Drawing::Size(77, 21);
			this->cbx_opt1->TabIndex = 0;
			this->cbx_opt1->Text = L"Futebol";
			this->cbx_opt1->UseVisualStyleBackColor = true;
			// 
			// cbx_opt2
			// 
			this->cbx_opt2->AutoSize = true;
			this->cbx_opt2->Location = System::Drawing::Point(46, 89);
			this->cbx_opt2->Name = L"cbx_opt2";
			this->cbx_opt2->Size = System::Drawing::Size(83, 21);
			this->cbx_opt2->TabIndex = 1;
			this->cbx_opt2->Text = L"Natação";
			this->cbx_opt2->UseVisualStyleBackColor = true;
			// 
			// cbx_opt3
			// 
			this->cbx_opt3->AutoSize = true;
			this->cbx_opt3->Location = System::Drawing::Point(46, 137);
			this->cbx_opt3->Name = L"cbx_opt3";
			this->cbx_opt3->Size = System::Drawing::Size(81, 21);
			this->cbx_opt3->TabIndex = 3;
			this->cbx_opt3->Text = L"Ciclismo";
			this->cbx_opt3->UseVisualStyleBackColor = true;
			// 
			// cbx_opt4
			// 
			this->cbx_opt4->AutoSize = true;
			this->cbx_opt4->Location = System::Drawing::Point(46, 189);
			this->cbx_opt4->Name = L"cbx_opt4";
			this->cbx_opt4->Size = System::Drawing::Size(82, 21);
			this->cbx_opt4->TabIndex = 4;
			this->cbx_opt4->Text = L"Bicicleta";
			this->cbx_opt4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 74);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Quantos foram selecionados\?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_resultado
			// 
			this->txt_resultado->Location = System::Drawing::Point(322, 267);
			this->txt_resultado->Name = L"txt_resultado";
			this->txt_resultado->Size = System::Drawing::Size(48, 22);
			this->txt_resultado->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 832);
			this->Controls->Add(this->txt_resultado);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cbx_opt4);
			this->Controls->Add(this->cbx_opt3);
			this->Controls->Add(this->cbx_opt2);
			this->Controls->Add(this->cbx_opt1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//bool	flag; declaracao de variável booleana (são do tipo 0 ou 1 / true ou false)
		int contador;	//variável que vai contar as checkboxs
		contador = 0;	//fazer o programa contar do zero

		if (cbx_opt1->Checked == true)
		{
			contador = contador + 1;
		}

		if (cbx_opt2->Checked == true)
		{
			contador = contador + 1;
		}

		if (cbx_opt3->Checked == true)
		{
			contador = contador++;
		}

		if (cbx_opt4->Checked == true)
		{
			contador = contador++;
		}

		txt_resultado->Text = Convert::ToString(contador);
	}
};
}
