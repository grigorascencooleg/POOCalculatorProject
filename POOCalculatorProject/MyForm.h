#pragma once

namespace POOCalculatorProject {

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
	private: System::Windows::Forms::TextBox^ tbDisplay;
	private: System::Windows::Forms::Button^ btnBackspace;
	protected:


	private: System::Windows::Forms::Button^ btnClear;


	private: System::Windows::Forms::Button^ btnPlusMin;
	private: System::Windows::Forms::Button^ btnCE;


	private: System::Windows::Forms::Button^ btnPlus;

	private: System::Windows::Forms::Button^ btnNumber9;


	private: System::Windows::Forms::Button^ btnNumber8;

	private: System::Windows::Forms::Button^ btnNumber7;
	private: System::Windows::Forms::Button^ btnMin;


	private: System::Windows::Forms::Button^ btnNumber6;

	private: System::Windows::Forms::Button^ btnNumber5;

	private: System::Windows::Forms::Button^ btnNumber4;


	private: System::Windows::Forms::Button^ btnNumber3;

	private: System::Windows::Forms::Button^ btnNumber2;

	private: System::Windows::Forms::Button^ btnNumber1;
	private: System::Windows::Forms::Button^ btnMult;




	private: System::Windows::Forms::Button^ btnEqual;

	private: System::Windows::Forms::Button^ btnDot;

	private: System::Windows::Forms::Button^ btnNumber0;
	private: System::Windows::Forms::Button^ button13;

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
			this->tbDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnPlusMin = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnNumber9 = (gcnew System::Windows::Forms::Button());
			this->btnNumber8 = (gcnew System::Windows::Forms::Button());
			this->btnNumber7 = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnNumber6 = (gcnew System::Windows::Forms::Button());
			this->btnNumber5 = (gcnew System::Windows::Forms::Button());
			this->btnNumber4 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->btnNumber3 = (gcnew System::Windows::Forms::Button());
			this->btnNumber2 = (gcnew System::Windows::Forms::Button());
			this->btnNumber1 = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnNumber0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbDisplay
			// 
			this->tbDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDisplay->Location = System::Drawing::Point(54, 26);
			this->tbDisplay->Margin = System::Windows::Forms::Padding(5);
			this->tbDisplay->Name = L"tbDisplay";
			this->tbDisplay->Size = System::Drawing::Size(337, 45);
			this->tbDisplay->TabIndex = 0;
			this->tbDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tbDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::tbDisplay_TextChanged);
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBackspace->Location = System::Drawing::Point(74, 89);
			this->btnBackspace->Margin = System::Windows::Forms::Padding(5);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(63, 42);
			this->btnBackspace->TabIndex = 1;
			this->btnBackspace->Text = L"⌫";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &MyForm::btnBackspace_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(147, 89);
			this->btnClear->Margin = System::Windows::Forms::Padding(5);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(63, 42);
			this->btnClear->TabIndex = 2;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnPlusMin
			// 
			this->btnPlusMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusMin->Location = System::Drawing::Point(293, 89);
			this->btnPlusMin->Margin = System::Windows::Forms::Padding(5);
			this->btnPlusMin->Name = L"btnPlusMin";
			this->btnPlusMin->Size = System::Drawing::Size(63, 42);
			this->btnPlusMin->TabIndex = 4;
			this->btnPlusMin->Text = L"+-";
			this->btnPlusMin->UseVisualStyleBackColor = true;
			this->btnPlusMin->Click += gcnew System::EventHandler(this, &MyForm::btnPlusMin_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(220, 89);
			this->btnCE->Margin = System::Windows::Forms::Padding(5);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(63, 42);
			this->btnCE->TabIndex = 3;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(293, 141);
			this->btnPlus->Margin = System::Windows::Forms::Padding(5);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(63, 42);
			this->btnPlus->TabIndex = 8;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::funOperators);
			// 
			// btnNumber9
			// 
			this->btnNumber9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber9->Location = System::Drawing::Point(220, 141);
			this->btnNumber9->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber9->Name = L"btnNumber9";
			this->btnNumber9->Size = System::Drawing::Size(63, 42);
			this->btnNumber9->TabIndex = 7;
			this->btnNumber9->Text = L"9";
			this->btnNumber9->UseVisualStyleBackColor = true;
			this->btnNumber9->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// btnNumber8
			// 
			this->btnNumber8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber8->Location = System::Drawing::Point(147, 141);
			this->btnNumber8->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber8->Name = L"btnNumber8";
			this->btnNumber8->Size = System::Drawing::Size(63, 42);
			this->btnNumber8->TabIndex = 6;
			this->btnNumber8->Text = L"8";
			this->btnNumber8->UseVisualStyleBackColor = true;
			this->btnNumber8->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// btnNumber7
			// 
			this->btnNumber7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber7->Location = System::Drawing::Point(74, 141);
			this->btnNumber7->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber7->Name = L"btnNumber7";
			this->btnNumber7->Size = System::Drawing::Size(63, 42);
			this->btnNumber7->TabIndex = 5;
			this->btnNumber7->Text = L"7";
			this->btnNumber7->UseVisualStyleBackColor = true;
			this->btnNumber7->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// btnMin
			// 
			this->btnMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMin->Location = System::Drawing::Point(293, 193);
			this->btnMin->Margin = System::Windows::Forms::Padding(5);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(63, 42);
			this->btnMin->TabIndex = 12;
			this->btnMin->Text = L"-";
			this->btnMin->UseVisualStyleBackColor = true;
			this->btnMin->Click += gcnew System::EventHandler(this, &MyForm::funOperators);
			// 
			// btnNumber6
			// 
			this->btnNumber6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber6->Location = System::Drawing::Point(220, 193);
			this->btnNumber6->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber6->Name = L"btnNumber6";
			this->btnNumber6->Size = System::Drawing::Size(63, 42);
			this->btnNumber6->TabIndex = 11;
			this->btnNumber6->Text = L"6";
			this->btnNumber6->UseVisualStyleBackColor = true;
			this->btnNumber6->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// btnNumber5
			// 
			this->btnNumber5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber5->Location = System::Drawing::Point(147, 193);
			this->btnNumber5->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber5->Name = L"btnNumber5";
			this->btnNumber5->Size = System::Drawing::Size(63, 42);
			this->btnNumber5->TabIndex = 10;
			this->btnNumber5->Text = L"5";
			this->btnNumber5->UseVisualStyleBackColor = true;
			this->btnNumber5->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// btnNumber4
			// 
			this->btnNumber4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber4->Location = System::Drawing::Point(74, 193);
			this->btnNumber4->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber4->Name = L"btnNumber4";
			this->btnNumber4->Size = System::Drawing::Size(63, 42);
			this->btnNumber4->TabIndex = 9;
			this->btnNumber4->Text = L"4";
			this->btnNumber4->UseVisualStyleBackColor = true;
			this->btnNumber4->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(293, 245);
			this->button13->Margin = System::Windows::Forms::Padding(5);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(63, 42);
			this->button13->TabIndex = 16;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::funOperators);
			// 
			// btnNumber3
			// 
			this->btnNumber3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber3->Location = System::Drawing::Point(220, 245);
			this->btnNumber3->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber3->Name = L"btnNumber3";
			this->btnNumber3->Size = System::Drawing::Size(63, 42);
			this->btnNumber3->TabIndex = 15;
			this->btnNumber3->Text = L"3";
			this->btnNumber3->UseVisualStyleBackColor = true;
			this->btnNumber3->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// btnNumber2
			// 
			this->btnNumber2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber2->Location = System::Drawing::Point(147, 245);
			this->btnNumber2->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber2->Name = L"btnNumber2";
			this->btnNumber2->Size = System::Drawing::Size(63, 42);
			this->btnNumber2->TabIndex = 14;
			this->btnNumber2->Text = L"2";
			this->btnNumber2->UseVisualStyleBackColor = true;
			this->btnNumber2->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// btnNumber1
			// 
			this->btnNumber1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber1->Location = System::Drawing::Point(74, 245);
			this->btnNumber1->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber1->Name = L"btnNumber1";
			this->btnNumber1->Size = System::Drawing::Size(63, 42);
			this->btnNumber1->TabIndex = 13;
			this->btnNumber1->Text = L"1";
			this->btnNumber1->UseVisualStyleBackColor = true;
			this->btnNumber1->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// btnMult
			// 
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(293, 297);
			this->btnMult->Margin = System::Windows::Forms::Padding(5);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(63, 42);
			this->btnMult->TabIndex = 20;
			this->btnMult->Text = L"/";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::funOperators);
			// 
			// btnEqual
			// 
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(220, 297);
			this->btnEqual->Margin = System::Windows::Forms::Padding(5);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(63, 42);
			this->btnEqual->TabIndex = 19;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btnDot
			// 
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(147, 297);
			this->btnDot->Margin = System::Windows::Forms::Padding(5);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(63, 42);
			this->btnDot->TabIndex = 18;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btnNumber0
			// 
			this->btnNumber0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber0->Location = System::Drawing::Point(74, 297);
			this->btnNumber0->Margin = System::Windows::Forms::Padding(5);
			this->btnNumber0->Name = L"btnNumber0";
			this->btnNumber0->Size = System::Drawing::Size(63, 42);
			this->btnNumber0->TabIndex = 17;
			this->btnNumber0->Text = L"0";
			this->btnNumber0->UseVisualStyleBackColor = true;
			this->btnNumber0->Click += gcnew System::EventHandler(this, &MyForm::funNumbersOnly);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 409);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnNumber0);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btnNumber3);
			this->Controls->Add(this->btnNumber2);
			this->Controls->Add(this->btnNumber1);
			this->Controls->Add(this->btnMin);
			this->Controls->Add(this->btnNumber6);
			this->Controls->Add(this->btnNumber5);
			this->Controls->Add(this->btnNumber4);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnNumber9);
			this->Controls->Add(this->btnNumber8);
			this->Controls->Add(this->btnNumber7);
			this->Controls->Add(this->btnPlusMin);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->tbDisplay);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstnum, secondnum, answer;
		String^ charOp;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void funNumbersOnly(System::Object^ sender, System::EventArgs^ e) {
	Button^ numb = safe_cast<Button^>(sender);

	if (tbDisplay->Text == "0") {
		tbDisplay->Text  = numb->Text;
	}
	else {
		tbDisplay->Text = tbDisplay->Text + numb->Text;
	}
}
private: System::Void funOperators(System::Object^ sender, System::EventArgs^ e) {
	
	Button^ Aop = safe_cast<Button^>(sender);
	firstnum = Double::Parse(tbDisplay->Text);
	tbDisplay->Text = "";
	charOp = Aop->Text;
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tbDisplay->Text = "0";
}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	tbDisplay->Text = "0";
}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!tbDisplay->Text->Contains(".")) {
		tbDisplay->Text = tbDisplay->Text + ".";
	}
}
private: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbDisplay->Text->Length>0) {
		tbDisplay->Text = tbDisplay->Text->Remove(tbDisplay->Text->Length-1,1);
	}
}
private: System::Void tbDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (tbDisplay -> Text == "") {
		tbDisplay->Text = "0";
	}
}
private: System::Void btnPlusMin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbDisplay->Text->Contains("-")) {
		tbDisplay->Text = tbDisplay->Text->Remove(0, 1);
	}
	else {
		tbDisplay->Text = "-" + tbDisplay->Text;
	}
}
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	secondnum = Double::Parse(tbDisplay->Text);
	if (charOp == "+") {
		answer = firstnum + secondnum;
	}
	else if (charOp == "-") {
		answer = firstnum - secondnum;
	}
	else if (charOp == "*") {
		answer = firstnum * secondnum;
	}
	else if (charOp == "/") {
		answer = firstnum / secondnum;
		
	}
	tbDisplay->Text = System::Convert::ToString(answer);
}
};
}
