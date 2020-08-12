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
	private: System::Windows::Forms::Button^ btn_list10;
	private: System::Windows::Forms::TextBox^ txt_list;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_list100;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;



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
			this->btn_list10 = (gcnew System::Windows::Forms::Button());
			this->txt_list = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_list100 = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_list10
			// 
			this->btn_list10->Location = System::Drawing::Point(40, 41);
			this->btn_list10->Name = L"btn_list10";
			this->btn_list10->Size = System::Drawing::Size(192, 52);
			this->btn_list10->TabIndex = 0;
			this->btn_list10->Text = L"Listar números de 1 a 10";
			this->btn_list10->UseVisualStyleBackColor = true;
			this->btn_list10->Click += gcnew System::EventHandler(this, &Form1::btn_list10_Click);
			// 
			// txt_list
			// 
			this->txt_list->Location = System::Drawing::Point(40, 509);
			this->txt_list->Name = L"txt_list";
			this->txt_list->Size = System::Drawing::Size(883, 22);
			this->txt_list->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(382, 477);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Resultado da Lista Selecionada";
			// 
			// btn_list100
			// 
			this->btn_list100->Location = System::Drawing::Point(40, 124);
			this->btn_list100->Name = L"btn_list100";
			this->btn_list100->Size = System::Drawing::Size(192, 53);
			this->btn_list100->TabIndex = 3;
			this->btn_list100->Text = L"Listar números de 1 a 100 com passos de 5";
			this->btn_list100->UseVisualStyleBackColor = true;
			this->btn_list100->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(144, 546);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(664, 35);
			this->btn_clear->TabIndex = 4;
			this->btn_clear->Text = L"Limpar Resultado";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(314, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 52);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Listar números de 1000 a 900 com passos de 10";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_2);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(314, 124);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(276, 52);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Listar números de 100 a 200 com passos de 10, exceto o 120";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(314, 204);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(276, 53);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Listar números de 1000 a 2000 com passos de 50, exceto o 150 e o 200";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(685, 41);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(238, 52);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Listar números divisíveis por 5 no intervalo de 100 a 200";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(685, 124);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(238, 52);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Listar números divisíveis por 6 no intervalo de 0 a 100";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(979, 608);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_list100);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_list);
			this->Controls->Add(this->btn_list10);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		txt_list->Text = "";
	}
	private: System::Void btn_list10_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 1; i <=10; i++)
		{
			txt_list->Text = txt_list->Text + Convert::ToString(i) + ", ";
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int y = 5; y <= 100; y=y+5)
		{
			//txt_list->Text = "";
			txt_list->Text = txt_list->Text + Convert::ToString(y) + ", ";
		}
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int z = 1000; z >= 900; z = z - 10)
		{
			txt_list->Text = txt_list->Text + Convert::ToString(z) + ", ";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 100;  i<= 200; i = i + 10)
		{
			if(i != 120)
			// if(i == 120)
			{
				txt_list->Text = txt_list->Text + Convert::ToString(i) + ", ";
				//i = i + 10;
			}

			//txt_list->Text = txt_list->Text + Convert::ToString(i) + ", ";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 1000; i <= 2000; i=i+50)
		{
			if (i!=1150 && i!=1200)
			{
				txt_list->Text = txt_list->Text + Convert::ToString(i) + ", ";
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 100; i <= 200; i++)
		{
			if (i % 5 == 0) 
			{
				txt_list->Text = txt_list->Text + Convert::ToString(i) + ", ";
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i <= 100; i++)
		{
			if (i % 2 == 0 && i % 3 ==0)
			{
				txt_list->Text = txt_list->Text + Convert::ToString(i) + ", ";
			}
		}
	}
};
}
