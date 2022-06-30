#pragma once
#include "SecondFormForGraph.h" // Подключаю вторую форму
#include <fstream>
#include <string>

namespace Kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	
	private:
		// Swap String^ & std::string
		std::string MarshalString(String^ s, std::string& str)
		{
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			str = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return str;
		}
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
		}
	protected:
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(283, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"login";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Click += gcnew System::EventHandler(this, &RegistrationForm::textBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(283, 180);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"password";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Click += gcnew System::EventHandler(this, &RegistrationForm::textBox2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(283, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Entrance";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistrationForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(394, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Register now";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistrationForm::button2_Click);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(798, 416);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(814, 455);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(814, 455);
			this->Name = L"RegistrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &RegistrationForm::RegistrationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Вход пользователя
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str_textBox1 = textBox1->Text;
		String^ str_textBox2 = textBox2->Text;
		std::string str_registr;
		std::ifstream fin; // Создание потока для чтения
		std::string string_str_textBox1;
		std::string string_str_textBox2;
		fin.open("registr.txt"); // Открытие файла
		if (!fin.is_open())
		{
			MessageBox::Show("Файл не найден или не создан (может создаться при регистрации)");
		}
		else
		{
			while (!fin.eof())
			{
				getline(fin, str_registr);
				if (str_registr == MarshalString(str_textBox1, string_str_textBox1) + " " + MarshalString(str_textBox2, string_str_textBox2)) // login
				{ 
					SecondFormForGraph^ potok = gcnew SecondFormForGraph(); // Создаю новую оконную форму
					potok->Show();
					//RegistrationForm::Hide(); // Скрытие регистрационной формы
					break;
				}	
			}
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Регистрация пользователя
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Открытие файла для проверки на зарегистрированность пользователя
		bool fl = false; // Для проверки 
		std::ofstream fout;
		fout.open("registr.txt", std::ios::app);
		std::ifstream fin;
		fin.open("registr.txt");
		if (!fin.is_open())
		{
			MessageBox::Show("Файл не найден или не создан (Открытие файла для проверки на зарегистрированность пользователя)");
		}
		else
		{
			String^ str_textBox1 = textBox1->Text;
			String^ str_textBox2 = textBox2->Text;
			std::string string_str_textBox1;
			std::string string_str_textBox2;

			if (!fout.is_open())
			{
				MessageBox::Show("Файл не найден или не создан");
			}
			else
			{
				string_str_textBox1 = MarshalString(str_textBox1, string_str_textBox1);
				string_str_textBox2 = MarshalString(str_textBox2, string_str_textBox2);
				std::string cheak_str;
				while (!fin.eof())
				{
					fin >> cheak_str;
					if (cheak_str == string_str_textBox1)
					{
						fl = true;
						break;
					}
				}
				if	(string_str_textBox1.length() < 3 || string_str_textBox1 == "login")
				{
					MessageBox::Show("Меньше трех сивмолов имя быть не может или вы пытаетесь зарегистрировать login");
				}
				else
				{
					if (fl == true) // Проверка если есть такой пользователь
					{
						MessageBox::Show("Такой пользователь уже есть");
					}
					else
					{
						if (string_str_textBox1.find(' ') != std::string::npos || string_str_textBox2.find(' ') != std::string::npos) //Проверка на пробылы (надо вписывать данные без пробела)
						{
							MessageBox::Show("Введите значения без пробелов");
						}
						else
						{
							fout << '\n' << MarshalString(str_textBox1, string_str_textBox1) << " " << MarshalString(str_textBox2, string_str_textBox2); // Тут как-то из текст боксов прост значения поместить
							MessageBox::Show("Вы зарегистрированы");
						}
					}
				}
			}
			fout.close();
		}
		fin.close();
	}
	private: System::Void RegistrationForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = "";
}
};
}
