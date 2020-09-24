#pragma once
#include "Pizza.h"
#include "Caculator.h"

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pizzaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ calculatorToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pizzaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->programsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(640, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// programsToolStripMenuItem
			// 
			this->programsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->calculatorToolStripMenuItem,
					this->pizzaToolStripMenuItem
			});
			this->programsToolStripMenuItem->Name = L"programsToolStripMenuItem";
			this->programsToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->programsToolStripMenuItem->Text = L"Programs";
			// 
			// pizzaToolStripMenuItem
			// 
			this->pizzaToolStripMenuItem->Name = L"pizzaToolStripMenuItem";
			this->pizzaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->pizzaToolStripMenuItem->Text = L"Pizza";
			this->pizzaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pizzaToolStripMenuItem_Click);
			// 
			// calculatorToolStripMenuItem
			// 
			this->calculatorToolStripMenuItem->Name = L"calculatorToolStripMenuItem";
			this->calculatorToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->calculatorToolStripMenuItem->Text = L"Calculator";
			this->calculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::calculatorToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 628);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"UFCD_0809";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pizzaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		ProjetoCLR::Pizza form_Pizza;
		form_Pizza.ShowDialog();
		this->Show();
	}
	private: System::Void calculatorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		ProjetoCLR::Caculator Cal;
		Cal.ShowDialog();
		this->Show();
	}
};
}
