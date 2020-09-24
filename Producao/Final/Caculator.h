#pragma once
#include <math.h>

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Caculator
	/// </summary>
	public ref class Caculator : public System::Windows::Forms::Form
	{
	public:
		Caculator(void)
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
		~Caculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ txt_num1;
	private: System::Windows::Forms::TextBox^ txt_num2;
	private: System::Windows::Forms::TextBox^ txt_res;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txt_num1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_num2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_res = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(89, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sum";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Caculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(232, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Substraction";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Caculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(232, 367);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Division";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Caculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(79, 367);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 42);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Multiplication";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Caculator::button4_Click);
			// 
			// txt_num1
			// 
			this->txt_num1->Location = System::Drawing::Point(87, 77);
			this->txt_num1->Name = L"txt_num1";
			this->txt_num1->Size = System::Drawing::Size(100, 22);
			this->txt_num1->TabIndex = 4;
			// 
			// txt_num2
			// 
			this->txt_num2->Location = System::Drawing::Point(250, 77);
			this->txt_num2->Name = L"txt_num2";
			this->txt_num2->Size = System::Drawing::Size(100, 22);
			this->txt_num2->TabIndex = 5;
			// 
			// txt_res
			// 
			this->txt_res->Location = System::Drawing::Point(161, 185);
			this->txt_res->Name = L"txt_res";
			this->txt_res->Size = System::Drawing::Size(100, 22);
			this->txt_res->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Type Number 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(244, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Type Number 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(158, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Result";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(89, 455);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 51);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Fatorial Number 1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Caculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(232, 455);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 51);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Fatorial Number 2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Caculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(89, 550);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 51);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Square Root Number 1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Caculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(232, 550);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 51);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Square Root Number 2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Caculator::button8_Click);
			// 
			// Caculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 719);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_res);
			this->Controls->Add(this->txt_num2);
			this->Controls->Add(this->txt_num1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Caculator";
			this->Text = L"s";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//criando as variáveis que serão os números para efetuar cáculos
		double num1 = 0, num2 = 0;
		try
		{
			num1 = Convert::ToDouble(txt_num1->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 1");
		}

		try
		{
			num2 = Convert::ToDouble(txt_num2->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 2");
		}
		
		//variável soma
		double sum = num1 + num2;

		txt_res->Text = Convert::ToString(sum);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{ 
		//criando as variáveis que serão os números para efetuar cáculos
		double num1 = 0, num2 = 0;
		try
		{
			num1 = Convert::ToDouble(txt_num1->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 1");
		}

		try
		{
			num2 = Convert::ToDouble(txt_num2->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 2");
		}
		
		//limpando caixa de texto
		txt_res->Text = " ";
		//efetuando a funçao do botão
		double sub = num1 - num2;
		//mostrando a resposta
		txt_res->Text = Convert::ToString(sub);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//criando as variáveis que serão os números para efetuar cáculos
		double num1 = 0, num2 = 0;
		try
		{
			num1 = Convert::ToDouble(txt_num1->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 1");
		}

		try
		{
			num2 = Convert::ToDouble(txt_num2->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 2");
		}
		txt_res->Text = " ";
		double div = num1 / num2;
		txt_res->Text = Convert::ToString(div);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//criando as variáveis que serão os números para efetuar cáculos
		double num1 = 0, num2 = 0;
		try
		{
			num1 = Convert::ToDouble(txt_num1->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 1");
		}

		try
		{
			num2 = Convert::ToDouble(txt_num2->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 2");
		}
		txt_res->Text = " ";
		double mult = num1 * num2;
		txt_res->Text = Convert::ToString(mult);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//criando as variáveis que serão os números para efetuar cáculos
		double num1 = 0;
		try
		{
			num1 = Convert::ToDouble(txt_num1->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 1");
		}
		
		double fat1 = 1;
		
		while (num1 > 1)
		{
			fat1 = fat1 * num1;
			num1 = num1 - 1;
		}
		txt_res->Text = Convert::ToString(fat1);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//criando as variáveis que serão os números para efetuar cáculos
		double num2 = 0;
		try
		{
			num2 = Convert::ToDouble(txt_num2->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 2");
		}

		double fat2 = 1;

		while (num2 > 1)
		{
			fat2 = fat2 * num2;
			num2 = num2 - 1;
		}
		txt_res->Text = Convert::ToString(fat2);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//criando as variáveis que serão os números para efetuar cáculos
		double num1 = 0;
		try
		{
			num1 = Convert::ToDouble(txt_num1->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 1");
		}

		double sqrt1 = sqrt(num1);

		txt_res->Text = Convert::ToString(sqrt1);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//criando as variáveis que serão os números para efetuar cáculos
		double num2 = 0;
		try
		{
			num2 = Convert::ToDouble(txt_num2->Text);
		}
		catch (...)
		{
			MessageBox::Show("Type a number in the box 2");
		}

		double sqrt2 = sqrt(num2);

		txt_res->Text = Convert::ToString(sqrt2);
	}
};
}
