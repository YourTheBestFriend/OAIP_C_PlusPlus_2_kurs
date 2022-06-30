#pragma once

namespace Lab29 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->Text = "������� � MS Word �������� �.� �-992";
			this->richTextBox1->Multiline = true;
			this->richTextBox1->TabIndex = 0;
			this->button1->TabIndex = 1;
			this->button2->TabIndex = 2;
			this->button1->Text = "�������� ����������";
			this->button2->Text = "������� �������� MS Word";
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������� ����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(274, 476);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"������� �������� MS Word";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(426, 458);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(491, 34);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(238, 326);
			this->textBox1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(583, 397);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1078, 561);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		auto word1 = gcnew Microsoft::Office::Interop::Word::Application(); // �������� ������ ���������� ������  Microsoft::Office::Interop::Word::Application() 
		word1->Visible = false; // ������� ���������� ��������� ����
		Object^ t = Type::Missing; // ��������� t ���� ������ �������� �������������� ������ Object ���������������� "������" ���������
		auto document = word1->Documents->Add(t, t, t, t); // � ��������� word ������� ����� ������ ��������
		document->Words->First->InsertBefore(this->richTextBox1->Text);
		document->CheckSpelling(t, t, t, t, t, t, t, t, t, t, t, t); // �������� ���������� ���������� �������� CheakSpelling
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ������� ��� �������� ������ defult ������
		String^ correctText = document->Content->Text; // Text ��� default // ����������� ����� �� ���� ��������� � ������� ������� Content � Text
		this->richTextBox1->Text = correctText->Replace("\r", ""); // ������������ ����� ������� � richTextBox1
		Boolean^ tt = false; // ������������ ���������� ����������� ���� ������ 
		// tt = Microsoft::Office::Interop::Word::WdSaveFormat::wdDoNotSaveChanges; // �������� ��������� word ��� ���������� (��� ���� ���� �����������) - ��� � � ������� ���� ����������
		word1->Documents->Close(tt, t, t); // ��������� �������� � ��������� ����
		word1->Quit(tt, t, t); // ��������� ��������� word ��� ���������� ��������� � �������, � ������� �������� ���������� �������� CheckSpelling()
		word1 = nullptr; // ������� ��������� �� ��������� word. ����� ���������� ����� ������ ��� ��������� ���������� ������������
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			array<String^>^ izdelia = {"�������� �����", "������� �������", "������ � �������� � �����", "������� � ��������", "������� ��������� � ��������"}; // ���������� ������ �� �����
 			array<String^>^ cena = {"2 �.","3 �.","1 �.","5 �.","4 �.","2 �."}; 
			auto word2 = gcnew Microsoft::Office::Interop::Word::Application(); // ������ ��������� ������ Microsoft::Office::Interop::Word::Application 
			word2->Visible = true; // ����������� ���������� ��������� word
			auto t = Type::Missing; // ��������� t ��� ������ �������� �������������� ������ Object ���������������� "������" ���������
			auto document2 = word2->Documents->Add(t, t, t, t); // �������� � word ������ ������� � �������� ������ ������� "���������" � ������ ������� ����� ������ ��� �����
			word2->Selection->TypeText("\t\t\t\t������� ��������"); // � ������� ������� ��� ��������� ������  ������������ - ���� �����
			System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior; ///////////////////////////////////////////////////////////////////////////////////////////////////////////// � ���������� ��������� ���� ��������� ��������� ���������� ������� ����� ������� 
			System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent; // ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////  � ���������� ��������� ���� ��������� ��������� ��������������� ��������� ������� ����� ������� ��� ������������ � ��� �����
			word2->ActiveDocument->Tables->Add(word2->Selection->Range, 5, 2, t1, t2); // � �������� ���� �������� ������� �� 10 �����, 2 ������� � ������������ ������� ����� ��� ������������ � ��� ���������� � ���������� ������� ���� ������ ����� �� ����� �����
			for (int i = 0; i < 5; i++) //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// ���������� ������� �� 10 �����
			{
				try // ������������ ���������� 
				{
					// ����� Range or default - ������ ��� �������� ������ --------- default ����� ������ ������
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 1)->Range->InsertAfter(izdelia[i]); // ����� InsertAfter() ��� ��������� ������ �� ������� ����� � ������1 ��������� ������ �������1
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 2)->Range->InsertAfter(cena[i]); // ����� InsertAfter() ��� ��������� ������ �� ������� ����� � ������2 ��������� ������ �������1
				}
				catch (System::Runtime::InteropServices::COMException^ e) // ���������� ���������� ������ � ������ ����� COM-�������
				{
					richTextBox1->Text += i.ToString() + ' ' + e->Message + '\t';// ��������� � richTextBox1 ��������� �� �������������� ��������
					i--; // ��� �������� ���������� �������������� ���������, �� �� ���� ��������� ������� ������������ ���������� ��������� ����� ��������� ���� try-catch ��������� ������ ����� � ��������� ��������� �������� �����, �� ��� ���� ������������ � ��������� ��������
				}
				}
			Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine; // ������� �������� ��������� ������ � ������� ��������� ���� �������
			Int32^ str5 = 5; // ������������ ������������� ���������� // ��� ���� ����� ��������� �� 10-� ������ �������
			word2->Selection->MoveDown(t3, str5, t); // ������� ������� ������� ������� Selection �� ������� ������� � 10-� ������ �������
			word2->Selection->TypeText("\t� ������� ���� ����������� ������� � �� ���������.\t������ ���������� ������ ������. \n"); // ��� ���������� ������ ������� �����
			Object^ fileName = "��������������__Lab29__"; // ��� ��� ���������
			word2->ActiveDocument->SaveAs(fileName, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
		}
		catch (System::Exception^ e0) // ������������� ������������� ���������� 
		{
			richTextBox1->Text += e0->Message + "\t"; // � richTextBox1 ������� ��������� �� �������������� ��������
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto x = 10;
	x = -17.93;
	this->textBox1->Text = x.ToString();
}
};
}
