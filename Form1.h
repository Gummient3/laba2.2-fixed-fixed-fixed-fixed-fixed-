#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		


		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		Double value = 0;
		String^ operation = "";
	private: System::Windows::Forms::Label^ equation;
	protected:

	protected:
		bool operation_pressed = false;
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ result;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->equation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(54, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(95, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 89);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(54, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 35);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(95, 89);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(13, 130);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 35);
			this->button7->TabIndex = 6;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(54, 130);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(35, 35);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(95, 130);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(35, 35);
			this->button9->TabIndex = 8;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(12, 171);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(77, 35);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(95, 171);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(35, 35);
			this->button11->TabIndex = 10;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(136, 171);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(35, 35);
			this->button12->TabIndex = 14;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(136, 130);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(35, 35);
			this->button13->TabIndex = 13;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(136, 89);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(35, 35);
			this->button14->TabIndex = 12;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(136, 48);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(35, 35);
			this->button15->TabIndex = 11;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(177, 130);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(35, 76);
			this->button16->TabIndex = 17;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(177, 89);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(35, 35);
			this->button17->TabIndex = 16;
			this->button17->Text = L"C";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(177, 48);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(35, 35);
			this->button18->TabIndex = 15;
			this->button18->Text = L"CE";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(13, 13);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(199, 26);
			this->result->TabIndex = 18;
			this->result->Text = L"0";
			this->result->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// equation
			// 
			this->equation->AutoSize = true;
			this->equation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equation->Location = System::Drawing::Point(12, 13);
			this->equation->Name = L"equation";
			this->equation->Size = System::Drawing::Size(0, 20);
			this->equation->TabIndex = 19;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(224, 216);
			this->Controls->Add(this->equation);
			this->Controls->Add(this->result);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonAll_Click(System::Object^ sender, System::EventArgs^ e) {
		if (result->Text == "0" || operation_pressed ) {
			result->Clear();
		}
		operation_pressed = false;
		Button^ b = (Button^)sender;

		result->Text = result->Text + b->Text;
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) { // CE
		result->Text = "0";
	}
	private: System::Void operator_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ b = (Button^)sender;
		operation = b->Text;
		value = System::Convert::ToDouble(result->Text->ToString());
		operation_pressed = true;
		equation->Text = value + " " + operation;

	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) { // =
		//operation_pressed = false;
		equation->Text = "";

		if (operation == "+") {
			result->Text = (value + System::Convert::ToDouble(result->Text)).ToString();

		}
		else if (operation == "-") {
			result->Text = (value - System::Convert::ToDouble(result->Text)).ToString();

		}
		else if (operation == "*") {
			result->Text = (value * System::Convert::ToDouble(result->Text)).ToString();

		}
		else if (operation == "/") {
			result->Text = (value / System::Convert::ToDouble(result->Text)).ToString();

		} // else if end
		//operation_pressed = false;

	}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) { // C
	result->Text = "0";
	value = 0;
}
};
}
