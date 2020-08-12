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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ txt_resultados;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_resultados = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Listar números até 10 com passos de 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_resultados
			// 
			this->txt_resultados->Location = System::Drawing::Point(31, 552);
			this->txt_resultados->Name = L"txt_resultados";
			this->txt_resultados->Size = System::Drawing::Size(874, 22);
			this->txt_resultados->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 70);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Listar números até 100 com passos de 5";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(31, 483);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(874, 51);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Limpar listagem";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(288, 45);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(269, 70);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Listar números de 1000 a 900 com passos de 10";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(288, 164);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(269, 70);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Listar números de 100 a 200 com passos de 10, exceto o 120";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(288, 265);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(269, 70);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Listar números de 1000 a 2000 com passos de 50, exceto o 1150 e o 1200";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(663, 45);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(242, 70);
			this->button7->TabIndex = 7;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(663, 164);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(242, 70);
			this->button8->TabIndex = 8;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 630);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txt_resultados);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i = 1;

		do
		{
			txt_resultados->Text = txt_resultados->Text + Convert::ToString(i) + ", ";
			i++;
		} while (i<=10);

		//return 0;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txt_resultados->Text = "";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i = 5;

		do
		{
			txt_resultados->Text = txt_resultados->Text + Convert::ToString(i) + ", ";
			i = i + 5;
		} while (i<=100);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i = 1000;

		do
		{
			txt_resultados->Text = txt_resultados->Text + Convert::ToString(i) + ", ";
			i = i - 10;
		} while (i>=900);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i = 100;

		do
		{
			if (i!=120) 
			{
				txt_resultados->Text = txt_resultados->Text + Convert::ToString(i) + ", ";
			}

			i = i + 10;

		} while (i<=200);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i = 1000;

		do
		{
			if (i!=1150 && i!=1200)
			{
				txt_resultados->Text = txt_resultados->Text + Convert::ToString(i) + ", ";
			}
			i = i + 50;
		} while (i<=2000);
	}
};
}
