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
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	protected:



	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;



	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;



	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ comma;
	private: System::Windows::Forms::Button^ add;



	private: System::Windows::Forms::Button^ sub;

	private: System::Windows::Forms::Button^ mult;

	private: System::Windows::Forms::Button^ div;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ C;



	private: System::Windows::Forms::Button^ CE;

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
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->comma = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->mult = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->C = (gcnew System::Windows::Forms::Button());
			this->CE = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->equation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// seven
			// 
			this->seven->Location = System::Drawing::Point(13, 48);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(35, 35);
			this->seven->TabIndex = 0;
			this->seven->TabStop = false;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->seven->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// eight
			// 
			this->eight->Location = System::Drawing::Point(54, 48);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(35, 35);
			this->eight->TabIndex = 1;
			this->eight->TabStop = false;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->eight->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// nine
			// 
			this->nine->Location = System::Drawing::Point(95, 48);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(35, 35);
			this->nine->TabIndex = 2;
			this->nine->TabStop = false;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->nine->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// four
			// 
			this->four->Location = System::Drawing::Point(13, 89);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(35, 35);
			this->four->TabIndex = 3;
			this->four->TabStop = false;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->four->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// five
			// 
			this->five->Location = System::Drawing::Point(54, 89);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(35, 35);
			this->five->TabIndex = 4;
			this->five->TabStop = false;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->five->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// six
			// 
			this->six->Location = System::Drawing::Point(95, 89);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(35, 35);
			this->six->TabIndex = 5;
			this->six->TabStop = false;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->six->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// one
			// 
			this->one->Location = System::Drawing::Point(13, 130);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(35, 35);
			this->one->TabIndex = 6;
			this->one->TabStop = false;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->one->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// two
			// 
			this->two->Location = System::Drawing::Point(54, 130);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(35, 35);
			this->two->TabIndex = 7;
			this->two->TabStop = false;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->two->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// three
			// 
			this->three->Location = System::Drawing::Point(95, 130);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(35, 35);
			this->three->TabIndex = 8;
			this->three->TabStop = false;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->three->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// zero
			// 
			this->zero->Location = System::Drawing::Point(12, 171);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(77, 35);
			this->zero->TabIndex = 9;
			this->zero->TabStop = false;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->zero->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// comma
			// 
			this->comma->Location = System::Drawing::Point(95, 171);
			this->comma->Name = L"comma";
			this->comma->Size = System::Drawing::Size(35, 35);
			this->comma->TabIndex = 10;
			this->comma->TabStop = false;
			this->comma->Text = L",";
			this->comma->UseVisualStyleBackColor = true;
			this->comma->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			this->comma->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// add
			// 
			this->add->Location = System::Drawing::Point(136, 171);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(35, 35);
			this->add->TabIndex = 14;
			this->add->TabStop = false;
			this->add->Text = L"+";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			this->add->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// sub
			// 
			this->sub->Location = System::Drawing::Point(136, 130);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(35, 35);
			this->sub->TabIndex = 13;
			this->sub->TabStop = false;
			this->sub->Text = L"-";
			this->sub->UseVisualStyleBackColor = true;
			this->sub->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			this->sub->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// mult
			// 
			this->mult->Location = System::Drawing::Point(136, 89);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(35, 35);
			this->mult->TabIndex = 12;
			this->mult->TabStop = false;
			this->mult->Text = L"*";
			this->mult->UseVisualStyleBackColor = true;
			this->mult->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			this->mult->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// div
			// 
			this->div->Location = System::Drawing::Point(136, 48);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(35, 35);
			this->div->TabIndex = 11;
			this->div->TabStop = false;
			this->div->Text = L"/";
			this->div->UseVisualStyleBackColor = true;
			this->div->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			this->div->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// equal
			// 
			this->equal->Location = System::Drawing::Point(177, 130);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(35, 76);
			this->equal->TabIndex = 17;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = true;
			this->equal->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// C
			// 
			this->C->Location = System::Drawing::Point(177, 89);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(35, 35);
			this->C->TabIndex = 16;
			this->C->TabStop = false;
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = true;
			this->C->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			this->C->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// CE
			// 
			this->CE->Location = System::Drawing::Point(177, 48);
			this->CE->Name = L"CE";
			this->CE->Size = System::Drawing::Size(35, 35);
			this->CE->TabIndex = 15;
			this->CE->TabStop = false;
			this->CE->Text = L"CE";
			this->CE->UseVisualStyleBackColor = true;
			this->CE->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			this->CE->Enter += gcnew System::EventHandler(this, &Form1::Do_Nothing);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(13, 13);
			this->result->Name = L"result";
			this->result->ReadOnly = true;
			this->result->Size = System::Drawing::Size(199, 26);
			this->result->TabIndex = 18;
			this->result->TabStop = false;
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
			this->Controls->Add(this->equal);
			this->Controls->Add(this->C);
			this->Controls->Add(this->CE);
			this->Controls->Add(this->add);
			this->Controls->Add(this->sub);
			this->Controls->Add(this->mult);
			this->Controls->Add(this->div);
			this->Controls->Add(this->comma);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		equation->Focus();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Do_Nothing(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonAll_Click(System::Object^ sender, System::EventArgs^ e) {
		if (result->Text == "0" || operation_pressed ) {
			result->Clear();
		}
		operation_pressed = false;
		Button^ b = (Button^)sender;
		if (b->Text == ",") {
			if (!result->Text->Contains(",")) {
				result->Text = result->Text + b->Text;
			}
		}
		else {
			result->Text = result->Text + b->Text;
		}

		
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) { // CE
		result->Text = "0";
	}
	private: System::Void operator_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ b = (Button^)sender;
		equal->Focus();

		if (value != 0) {

			equal->PerformClick();
			operation_pressed = true;
			operation = b->Text;
			equation->Text = value + " " + operation;

		}
		else {
			operation = b->Text;
			value = System::Convert::ToDouble(result->Text->ToString());
			operation_pressed = true;
			equation->Text = value + " " + operation;
		}
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) { // =

		
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
		value = System::Convert::ToDouble(result->Text);
		operation = "";

	}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) { // C
	result->Text = "0";
	value = 0;
	equation->Text = "";
}
	private: System::Void Form1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
		if (e->KeyChar.ToString() == "1") {
			one->PerformClick();

		}
		else if (e->KeyChar.ToString() == "2") {
			two->PerformClick();

		}
		else if (e->KeyChar.ToString() == "3") {
			three->PerformClick();

		}
		else if (e->KeyChar.ToString() == "4") {
			four->PerformClick();

		}
		else if (e->KeyChar.ToString() == "5") {
			five->PerformClick();

		}
		else if (e->KeyChar.ToString() == "6") {
			six->PerformClick();

		}
		else if (e->KeyChar.ToString() == "7") {
			seven->PerformClick();

		}
		else if (e->KeyChar.ToString() == "8") {
			eight->PerformClick();

		}
		else if (e->KeyChar.ToString() == "9") {
			nine->PerformClick();

		}
		else if (e->KeyChar.ToString() == "0") {
			zero->PerformClick();

		}
		else if (e->KeyChar.ToString() == "/") {
			div->PerformClick();

		}
		else if (e->KeyChar.ToString() == "*") {
			mult->PerformClick();

		}
		else if (e->KeyChar.ToString() == "-") {
			sub->PerformClick();

		}
		else if (e->KeyChar.ToString() == "+") {
			add->PerformClick();

		}
		else if (e->KeyChar.ToString() == ",") {
			comma->PerformClick();

		}
		else if (e->KeyChar.ToString() == ((char)127).ToString()) { //del btn
			C->PerformClick();

		}
	}
};
}
