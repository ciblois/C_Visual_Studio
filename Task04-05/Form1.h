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
	private: System::Windows::Forms::ComboBox^ cbo_cidade;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_escolha;

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
			this->cbo_cidade = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_escolha = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Escolher uma cidade:";
			// 
			// cbo_cidade
			// 
			this->cbo_cidade->FormattingEnabled = true;
			this->cbo_cidade->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Braga", L"Barcelos", L"Viana do Castelo", L"Porto",
					L"Guimarães"
			});
			this->cbo_cidade->Location = System::Drawing::Point(225, 38);
			this->cbo_cidade->Name = L"cbo_cidade";
			this->cbo_cidade->Size = System::Drawing::Size(218, 24);
			this->cbo_cidade->TabIndex = 1;
			this->cbo_cidade->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cbo_cidade_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 63);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Qual foi a escolha\?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_escolha
			// 
			this->txt_escolha->Location = System::Drawing::Point(225, 139);
			this->txt_escolha->Name = L"txt_escolha";
			this->txt_escolha->Size = System::Drawing::Size(218, 22);
			this->txt_escolha->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 559);
			this->Controls->Add(this->txt_escolha);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cbo_cidade);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cbo_cidade_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txt_escolha->Text = cbo_cidade->Text;
	}
	};
}
