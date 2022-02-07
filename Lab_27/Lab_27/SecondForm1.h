#pragma once

namespace Lab27 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SecondForm1
	/// </summary>
	public ref class SecondForm1 : public System::Windows::Forms::Form
	{
	public:
		// КОНСТРУКТОР БЕЗ ПАРАМЕТРОВ
		SecondForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// КОНСТРУКТОР С ПАРАМЕТРАМИ
		SecondForm1(double x)
		{
			InitializeComponent();
			this->textBox1->Text = x.ToString();
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////ё
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SecondForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;


	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Введите X для вычисления f(x) диапазон [0,5]";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SecondForm1::textBox1_MouseClick);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SecondForm1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SecondForm1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(13, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 20);
			this->textBox2->TabIndex = 2;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(151, 45);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(80, 13);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"www.google.by";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SecondForm1::linkLabel1_LinkClicked);
			// 
			// SecondForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(274, 108);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"SecondForm1";
			this->Text = L"SecondForm1";
			this->Load += gcnew System::EventHandler(this, &SecondForm1::SecondForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->textBox1->Clear();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x,rez;
		try
		{
			x = Double::Parse(this->textBox1->Text);
			if (!(x >= 0 && x <= 5))
			{
				MessageBox::Show("Попытка выйти за диапазон [0, 5]. ", "Ошибка!");
				//button1_Click(sender, System::EventArgs::Empty);
			}
			else
			{
				rez = (Math::Pow(x, 2) - 3) / Math::Sqrt(3 * Math::Pow(x, 2) - 2);
				this->textBox2->Clear();
				this->textBox2->Text = rez.ToString();
				this->Text = rez.ToString();
			}
			
		}
		catch (System::ArgumentNullException^ e)
		{//сообщаем пользователю информацию в мини-окне MessageBox'a, который является модальным окном(пока он существует, основное окно заблокировано для действий пользователя)
			MessageBox::Show(this, "Пустая ссылка.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);//окну сообщения можно присваивать заголовок, текст, назначать кнопки, иконку
		}
		catch (System::FormatException^ e)//отлавливаем ошибку некорректного формата данных
		{
			MessageBox::Show(this, "Введите число", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (System::OverflowException^ e)//отлавливаем ошибку переполнения значения переменной некоторого типа данных
		{
			MessageBox::Show(this, "ВВедите число подходящего размера.", "Слишком большое или маленькое число", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start(L"https://www.google.by");
	}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	MessageBox::Show(this, "Тут типо ответ - это работает благодаря toolTip1_Popup");
}

private: System::Void SecondForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
