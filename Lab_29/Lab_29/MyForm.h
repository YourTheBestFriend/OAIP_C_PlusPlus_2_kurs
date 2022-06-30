#pragma once

namespace Lab29 {

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
			this->Text = "Работаю с MS Word Гончаров М.Н Т-992";
			this->richTextBox1->Multiline = true;
			this->richTextBox1->TabIndex = 0;
			this->button1->TabIndex = 1;
			this->button2->TabIndex = 2;
			this->button1->Text = "Проверка орфографии";
			this->button2->Text = "Создать документ MS Word";
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;



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
			this->button1->Text = L"Проветка арфографии";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(274, 476);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Создать документ MS Word";
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
		auto word1 = gcnew Microsoft::Office::Interop::Word::Application(); // Создание нового экземпляра класса  Microsoft::Office::Interop::Word::Application() 
		word1->Visible = false; // Скрытие экземпляра программы ворд
		Object^ t = Type::Missing; // Указатель t типа самого базового универсального класса Object инициализируется "пустым" значением
		auto document = word1->Documents->Add(t, t, t, t); // В программе word создаем новый пустой документ
		document->Words->First->InsertBefore(this->richTextBox1->Text);
		document->CheckSpelling(t, t, t, t, t, t, t, t, t, t, t, t); // Проверка орфографии вордовской функцией CheakSpelling
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Странно тут пробовал писать defult ошибка
		String^ correctText = document->Content->Text; // Text или default // проверенный текст из поля документа с помощью свойств Content и Text
		this->richTextBox1->Text = correctText->Replace("\r", ""); // исправленный текст помещаю в richTextBox1
		Boolean^ tt = false; // динамическая переменная логического типа данных 
		// tt = Microsoft::Office::Interop::Word::WdSaveFormat::wdDoNotSaveChanges; // закрытие документа word без сохранения (тут тоже если расоментить) - она и в примере была закменчена
		word1->Documents->Close(tt, t, t); // Закрываем документ в программе ворд
		word1->Quit(tt, t, t); // закрываем программу word без сохранения документа с текстом, в котором проверил орфографию функцией CheckSpelling()
		word1 = nullptr; // Зануляю указатель на программу word. После завершения этого метода все локальные переменные уничтожаться
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			array<String^>^ izdelia = {"Булочкас маком", "Вкусные блинчки", "Слойка с ветчиной и сыром", "Пирожок с вареньем", "Пирожки бабушкины с капустой"}; // Диначиский массив из строк
 			array<String^>^ cena = {"2 р.","3 р.","1 р.","5 р.","4 р.","2 р."}; 
			auto word2 = gcnew Microsoft::Office::Interop::Word::Application(); // Создаю экземпляр класса Microsoft::Office::Interop::Word::Application 
			word2->Visible = true; // Отоюражение запущенной программы word
			auto t = Type::Missing; // Указатель t для самого базового универсального класса Object инициализируется "пустым" значением
			auto document2 = word2->Documents->Add(t, t, t, t); // Создание в word нового проекта и откритые нового пустого "документа" в начале которой стоит курсор для ввода
			word2->Selection->TypeText("\t\t\t\tТаблица иззделий"); // В текущую позицию где находится курсор  записывается - этот текст
			System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior; ///////////////////////////////////////////////////////////////////////////////////////////////////////////// В параметрах документа ворд указывает настройку отображать границы ячеек таблицы 
			System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent; // ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////  В параметрах документа ворд указывает настройку автаматического изменения размера ячеек таблицы под записываемый в них текст
			word2->ActiveDocument->Tables->Add(word2->Selection->Range, 5, 2, t1, t2); // в документ ворд добавляю таблицу на 10 строк, 2 столбца с автоподбором размера ячеек под записываемые в них содежримое и визуальным показом всех границ ячеек из дести строк
			for (int i = 0; i < 5; i++) //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Заполнение таблицы из 10 строк
			{
				try // Отлавливание исключений 
				{
					// Можно Range or default - просто два варианта записи --------- default опять выдает ошибку
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 1)->Range->InsertAfter(izdelia[i]); // Метод InsertAfter() для помещения текста из массива строк в яцейку1 очередной строки таблицы1
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 2)->Range->InsertAfter(cena[i]); // Метод InsertAfter() для помещения текста из массива строк в яцейку2 очередной строки таблицы1
				}
				catch (System::Runtime::InteropServices::COMException^ e) // отлавливаю исключение отказа в вызове члена COM-объекта
				{
					richTextBox1->Text += i.ToString() + ' ' + e->Message + '\t';// Помежение в richTextBox1 сообщения об исключительной ситуации
					i--; // Раз итерация прервалась исключительной ситуацией, то ее надо повторить поэтому итерационную переменную уменьшаем чтобы следующий блок try-catch находится внутри цикла и прерывает очередную итерацию цикла, но сам цикл продолжается в следующей итерации
				}
				}
			Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine; // Назнчаю единицей измерения текста в текущем документе ОДНУ СТОРОНУ
			Int32^ str5 = 5; // Динамическая целочисленная переменная // Для того чтобы указывать на 10-ю строку таблицы
			word2->Selection->MoveDown(t3, str5, t); // Перевод текущей позиции курсора Selection за пределы таблицы в 10-ю строку таблицы
			word2->Selection->TypeText("\tВ таблице выше перечислены изделия и их стоимости.\tНачало следующего абзаца текста. \n"); // Где находиться курсор печатаю текст
			Object^ fileName = "ГончаровМатвей__Lab29__"; // Имя для документа
			word2->ActiveDocument->SaveAs(fileName, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
		}
		catch (System::Exception^ e0) // Универсальный отлавливатель исключений 
		{
			richTextBox1->Text += e0->Message + "\t"; // в richTextBox1 помещаю сообщение об исключительной ситуации
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
