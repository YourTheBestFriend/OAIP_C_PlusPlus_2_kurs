
namespace Lab26 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать Надпись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(186, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 4;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Стереть Надпись";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Поменять Цвет Окна";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 124);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Закрыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(274, 101);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Серый / Красный";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(274, 124);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(71, 17);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Зеленый";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(274, 149);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(68, 17);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Желтый";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(452, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 110);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация о приложении";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(3, 49);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(149, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Технология приложения";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(3, 26);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(55, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Автор";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(11, 190);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Делимое";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 190);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"Делитель";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseClick);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(353, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(197, 20);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"Результат (Корень из частного)";
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox3_MouseClick);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(257, 187);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Вичислить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(566, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 322);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 17;
			this->textBox4->Text = L"Y";
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox4_MouseClick);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(131, 322);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 18;
			this->textBox5->Text = L"X";
			this->textBox5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox5_MouseClick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(257, 321);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(132, 20);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Вычислить угол";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(398, 321);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(152, 20);
			this->textBox6->TabIndex = 20;
			this->textBox6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox6_MouseClick);
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(11, 258);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(121, 17);
			this->checkBox4->TabIndex = 21;
			this->checkBox4->Text = L"Показать Задание";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			this->checkBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox4_MouseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 282);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 22;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(566, 318);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Очистить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 361);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			//this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Кнопка работает.";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "";

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->BackColor == SystemColors::ButtonFace)
	{
		this->BackColor = Color::Red;
	}
	else
	{
		this->BackColor = SystemColors::ButtonFace;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->BackColor == Color::Red)
	{
		this->BackColor = SystemColors::ButtonFace;
	}
	else
	{
		this->BackColor = Color::Red;
	}
	this->checkBox2->CheckState = CheckState::Unchecked;
	this->checkBox3->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->BackColor == Color::Green)
	{
		this->BackColor = SystemColors::ButtonFace;
	}
	else
	{
		this->BackColor = Color::Green;
	}
	

	this->checkBox1->CheckState = CheckState::Unchecked;
	this->checkBox3->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (this->BackColor == Color::Yellow)
	{
		this->BackColor = SystemColors::ButtonFace;
	}
	else
	{
		this->BackColor = Color::Yellow;
	}
	this->checkBox1->CheckState = CheckState::Unchecked;
	this->checkBox2->CheckState = CheckState::Unchecked;
}

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Приложение Гончарова М.Н. (с)2021";
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Это Windows Forms приложение";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		double a = Convert::ToDouble(this->textBox1->Text);
		double b = Convert::ToDouble(this->textBox2->Text);
		if (b == 0 || a / b < 0)
		{
			MessageBox::Show("Попытка деления на ноль или извлечения из корня отрицательного числа. ", "Ошибка!");
			button6_Click(sender, System::EventArgs::Empty);
		}
		else
		{
			double c = Math::Sqrt(a / b);
			this->textBox3->Clear();
			this->textBox3->Text = c.ToString();
			this->Text = c.ToString();

		}
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message->ToString(), "Ошибка формата данных!");
		button6_Click(sender, System::EventArgs::Empty);
	}
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox1->Clear();
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox2->Clear();
}
private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox3->Clear();
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	this->textBox3->Text = "Результат (корень из частого)";
}

//private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
//}
	// Вверху тоже закоментил чтобы работало

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox4->Clear();
	this->textBox5->Clear();
	this->textBox6->Clear();
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox4->Clear();
}


private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
////__________________________________________________________________________________________________________________________________________________________________

private: System::Void textBox5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox5->Clear();
}
private: System::Void textBox6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox6->Clear();
}

private: System::Void checkBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (label2->Text == "")
	{
		label2->Text = "Найти угол между отрезком прямой, соединяющей начало координат с точкой A(x, y), и осью ОХ";
	}
	else
	{
		label2->Text = "";
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	Найти угол между отрезком прямой, соединяющей начало координат с точкой A(x, y), и осью ОХ
	(точка лежит в 1-й четверти декартового пространства). Пример: x = 3 см, y = 4 см. Ответ: 53,13°
	*/
	try
	{
		double X = Convert::ToDouble(this->textBox4->Text);
		double Y = Convert::ToDouble(this->textBox5->Text);
		

		if (X <= 0 || Y <= 0)
		{
			MessageBox::Show("Попытка ввести отрицательное число. ", "Ошибка!");
			button8_Click(sender, System::EventArgs::Empty);
		}
		else
		{
			double c = Math::Atan2(Y,X)*180.0/Math::PI;
			
			this->textBox6->Clear();
			this->textBox6->Text = c.ToString();
			this->Text = c.ToString();
		}
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message->ToString(), "Ошибка формата данных!");
		button8_Click(sender, System::EventArgs::Empty);
	}
}

private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->textBox4->Clear();
	this->textBox5->Clear();
	this->textBox6->Clear();
}
//private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
//}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
