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
	private: System::Windows::Forms::ListBox^ lbx_numbers;
	protected:
	private: System::Windows::Forms::Button^ btn_gerador;
	private: System::Windows::Forms::Button^ btn_generate100;
	private: System::Windows::Forms::Button^ btn_clean;

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
			this->lbx_numbers = (gcnew System::Windows::Forms::ListBox());
			this->btn_gerador = (gcnew System::Windows::Forms::Button());
			this->btn_generate100 = (gcnew System::Windows::Forms::Button());
			this->btn_clean = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbx_numbers
			// 
			this->lbx_numbers->FormattingEnabled = true;
			this->lbx_numbers->ItemHeight = 16;
			this->lbx_numbers->Location = System::Drawing::Point(40, 56);
			this->lbx_numbers->Name = L"lbx_numbers";
			this->lbx_numbers->Size = System::Drawing::Size(156, 420);
			this->lbx_numbers->TabIndex = 0;
			// 
			// btn_gerador
			// 
			this->btn_gerador->Location = System::Drawing::Point(202, 122);
			this->btn_gerador->Name = L"btn_gerador";
			this->btn_gerador->Size = System::Drawing::Size(275, 45);
			this->btn_gerador->TabIndex = 1;
			this->btn_gerador->Text = L"Generate a number between 0 and 100";
			this->btn_gerador->UseVisualStyleBackColor = true;
			this->btn_gerador->Click += gcnew System::EventHandler(this, &Form1::btn_gerador_Click);
			// 
			// btn_generate100
			// 
			this->btn_generate100->Location = System::Drawing::Point(202, 188);
			this->btn_generate100->Name = L"btn_generate100";
			this->btn_generate100->Size = System::Drawing::Size(275, 45);
			this->btn_generate100->TabIndex = 2;
			this->btn_generate100->Text = L"Generate number between 100 and 200";
			this->btn_generate100->UseVisualStyleBackColor = true;
			this->btn_generate100->Click += gcnew System::EventHandler(this, &Form1::btn_generate100_Click);
			// 
			// btn_clean
			// 
			this->btn_clean->Location = System::Drawing::Point(202, 56);
			this->btn_clean->Name = L"btn_clean";
			this->btn_clean->Size = System::Drawing::Size(275, 45);
			this->btn_clean->TabIndex = 3;
			this->btn_clean->Text = L"Clean List";
			this->btn_clean->UseVisualStyleBackColor = true;
			this->btn_clean->Click += gcnew System::EventHandler(this, &Form1::btn_clean_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 629);
			this->Controls->Add(this->btn_clean);
			this->Controls->Add(this->btn_generate100);
			this->Controls->Add(this->btn_gerador);
			this->Controls->Add(this->lbx_numbers);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
		int GeraInteiro(int limite_inferior, int limite_superior)
		{//para form:
			//para gerar números aleatórios;
			//r será um objeto da class Random
			Random^ r = gcnew Random();
			int n;

			//o método  next, gera um valor entre s 2 limites:
			n = r->Next(limite_inferior, limite_superior);
			return n;
		}
	private: System::Void btn_gerador_Click(System::Object^ sender, System::EventArgs^ e) 
	{		
		int i;
		i = GeraInteiro(0, 100);
		lbx_numbers->Items->Add(i);
	}
	private: System::Void btn_generate100_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int j;
		j = GeraInteiro(100,200);
		lbx_numbers->Items->Add(j);
	}
	private: System::Void btn_clean_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		lbx_numbers->Items->Clear();
	}
};
}
