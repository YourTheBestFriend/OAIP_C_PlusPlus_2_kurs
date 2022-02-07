#pragma once
#include "SecondForm1.h"

namespace Lab27 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Введите X (Вещественным)";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 108);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(237, 245);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(265, 53);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(713, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(700, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(700, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(700, 134);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1065, 478);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a;
		try
		{
			a = Double::Parse(this->textBox1->Text);
			SecondForm1^ f = gcnew SecondForm1(); // Создаю новую оконную форму
			f->Show(); //отобразить НЕмодальное окно f на экране ПК, при этом главное окно остается активным и доступно для работы с пользователем
			//MyForm::Hide();//метод визуально скрывает главную оконную форму
			// Application::Exit();//метод закрытия всего приложения
			//this->Enabled = false;//это выражение делает главное окно приложение НЕреагирующим на дествия мыши пользователя  появившееся вспомогательное окно при этом доступно для действий мыши пользователя, ведь его свойство по умолчанию this->Enabled = true;
		}
		catch(System::ArgumentNullException^ e)
		{//сообщаем пользователю информацию в мини-окне MessageBox'a, который является модальным окном(пока он существует, основное окно заблокировано для действий пользователя)
			MessageBox::Show(this, "Пустая ссылка.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);//окну сообщения можно присваивать заголовок, текст, назначать кнопки, иконку
		}
		catch (System::FormatException^ e)//отлавливаем ошибку некорректного формата данных
		{
			MessageBox::Show(this, "Введите вещественное число.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (System::OverflowException^ e)//отлавливаем ошибку переполнения значения переменной некоторого типа данных
		{
			MessageBox::Show(this, "ВВедите число подходящего размера.", "Слишком большое или маленькое число", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////MAKE FLAG для текущего способа отрисовки

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double x1 = Convert::ToDouble(this->textBox2->Text);
	double x2 = Convert::ToDouble(this->textBox3->Text);
	double z = Convert::ToDouble(this->textBox4->Text);
	cilindr = false;
	this->Text = "Щелкините на графике";
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("Год", Int32::typeid); // заполняется по строкам(рядам) методом Add()
	table->Columns->Add("Кол-во военных конфликтов", Double::typeid);
	DataRow^ row = table->NewRow();
	for (int i = 0; x1 <= x2; x1 += z)
	{
		row["Год"] = i++;
		row["Кол-во военных конфликтов"] = x1;
		table->Rows->Add(row);
		row = table->NewRow();
	}
	chart1->DataSource = table;
	chart1->Series["Series1"]->XValueMember = "Год";
	chart1->Series["Series1"]->YValueMembers = "Кол-во военных конфликтов";
	//chart1->Titles->Add("Кол-во военных конфликтов по годам");
	chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
	chart1->Series["Series1"]->Color = Color::Aqua;
	chart1->Series["Series1"]->IsVisibleInLegend = false;
	chart1->DataBind();
	dataGridView1->DataSource = table;
}

private: bool cilindr;
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	cilindr = false;
	this->Text = "Щелкините на графике";
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("Год", Int32::typeid); // заполняется по строкам(рядам) методом Add()
	table->Columns->Add("Кол-во военных конфликтов", Double::typeid);
	DataRow^ row = table->NewRow();
	/*row["Год"] = 1980;
	row["Кол-во военных конфликтов"] = 1978.354;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Год"] = 1981;
	row["Кол-во военных конфликтов"] = 2315.475;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Год"] = 1982;
	row["Кол-во военных конфликтов"] = 1235.287;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Год"] = 1983;
	row["Кол-во военных конфликтов"] = 1523.67;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Год"] = 1984;
	row["Кол-во военных конфликтов"] = 1534.03;
	table->Rows->Add(row);
	row = table->NewRow();
	table->Rows->Add(row);*/
	chart1->DataSource = table;
	chart1->Series["Series1"]->XValueMember = "Год";
	chart1->Series["Series1"]->YValueMembers = "Кол-во военных конфликтов";
	chart1->Titles->Add("Кол-во военных конфликтов по годам");
	chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
	chart1->Series["Series1"]->Color = Color::Aqua;
	chart1->Series["Series1"]->IsVisibleInLegend = false;
	chart1->DataBind();
	dataGridView1->DataSource = table;

}

private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	cilindr = !cilindr;
	if (cilindr == true)
	{
		chart1->Series["Series1"]["DrawingStyle"] = "Cylinder";
	}
	else
	{
		chart1->Series["Series1"]["DrawingStyle"] = "Default";
	}
	chart1->DataBind();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox1->Clear();
}

};
}
