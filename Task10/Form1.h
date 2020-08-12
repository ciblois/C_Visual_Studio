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
	private: System::Windows::Forms::TextBox^ txt_resultado;
	private: System::Windows::Forms::Label^ label1;
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
			this->txt_resultado = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->button1->Location = System::Drawing::Point(26, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Listar números de 1 a 10";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_resultado
			// 
			this->txt_resultado->Location = System::Drawing::Point(26, 494);
			this->txt_resultado->Name = L"txt_resultado";
			this->txt_resultado->Size = System::Drawing::Size(939, 22);
			this->txt_resultado->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(435, 529);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Listagem de números";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(26, 447);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(939, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Limpar a lista";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(26, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 66);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Listar números de 5 a 100 com passos de 5";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(314, 38);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(256, 66);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Listar números de 1000 a 900 com passos de 10";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(314, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(256, 66);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Listar números de 100 a 200 com passos de 10, exceto o 120";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(314, 239);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(256, 66);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Listar números de 1000 a 2000 com passos de 50, exceto 1150 e o 1200";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(673, 38);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(292, 66);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Listar números de 1 a 100 divisíveis por 5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(673, 141);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(292, 66);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Listar números de 0 a 100 divisíveis por 6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(993, 573);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_resultado);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i;
		i = 1;

		while (i <= 10)
		{
			txt_resultado->Text = txt_resultado->Text + Convert::ToString(i) + ", ";
			i++;
		}
	
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txt_resultado->Text = "";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i;
		i = 5;
		
		while (i<=100)
		{
			txt_resultado->Text = txt_resultado->Text + Convert::ToString(i) + ", ";
			i = i + 5;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i;
		i = 1000;

		while (i>=900)
		{
			txt_resultado->Text = txt_resultado->Text + Convert::ToString(i) + ", ";
			i = i - 10;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i;
		i = 100;

		while (i<=200)
		{
			if (i != 120) 
			{
				txt_resultado->Text = txt_resultado->Text + Convert::ToString(i) + ", ";
			}

			i = i + 10;
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i;
		i = 1000;

		while (i<=2000)
		{
			if (i !=1150 && i != 1200)
			{
				txt_resultado->Text = txt_resultado->Text + Convert::ToString(i) + ", ";
			}

			i = i + 50;
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i;
		i = 1;

		while (i<=100)
		{
			if (i % 5 == 0) 
			{
				txt_resultado->Text = txt_resultado->Text + Convert::ToString(i) + ", ";
			}

			i++;
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int i = 1;
		
		while (i<=100)
		{
			if (i % 2 ==0 && i % 3 == 0) 
			{
				txt_resultado->Text = txt_resultado->Text + Convert::ToString(i) + ", ";
			}

			i++;
		}
	}
};
}
