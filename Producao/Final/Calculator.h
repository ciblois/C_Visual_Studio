#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_num1;
	protected:
	private: System::Windows::Forms::TextBox^ txt_num2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ txt_res;

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
			this->txt_num2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txt_res = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txt_num1
			// 
			this->txt_num1->Location = System::Drawing::Point(81, 51);
			this->txt_num1->Name = L"txt_num1";
			this->txt_num1->Size = System::Drawing::Size(100, 22);
			this->txt_num1->TabIndex = 0;
			// 
			// txt_num2
			// 
			this->txt_num2->Location = System::Drawing::Point(265, 51);
			this->txt_num2->Name = L"txt_num2";
			this->txt_num2->Size = System::Drawing::Size(100, 22);
			this->txt_num2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(40, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 52);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(189, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 52);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(341, 125);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 52);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(490, 125);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 52);
			this->button4->TabIndex = 5;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// txt_res
			// 
			this->txt_res->Location = System::Drawing::Point(533, 50);
			this->txt_res->Name = L"txt_res";
			this->txt_res->Size = System::Drawing::Size(100, 22);
			this->txt_res->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 776);
			this->Controls->Add(this->txt_res);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_num2);
			this->Controls->Add(this->txt_num1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//criando variáveis para efetuar cálculos
		double num1 = 0;
		double num2 = 0;
	}
};
}
