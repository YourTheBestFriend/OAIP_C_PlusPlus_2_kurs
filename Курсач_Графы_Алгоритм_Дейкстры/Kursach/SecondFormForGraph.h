#pragma once
#include <queue> // Для работы с очередью
#include <string> // Для работы с строками
#include <fstream> // Для работы с файлами

namespace Kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class SecondFormForGraph : public System::Windows::Forms::Form
	{
	private:
		int flag_control_10_node = 0; // Для контроля 10 вершин
	private:
		int flag_LANG_error = 0; // 0 - русский 1 - беларусский 2 - English
	private:
		int flagg = 0; // Флаг для проверки на уменьшение вершин
	private:
		int FLAG_for_minus_vershin_cheak;
	private:
		// Флаг значения при увеличении вершин и их уменьшении
		int default_versh = 0;
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
	private:
		// Массив для проверки при добавлении линии есть ли такая вершина
		int* array_versh = new int[9];
		// Массив для проверки связана ли вершина
		int* arr_svaz = new int[100];

	/////////////////////////////////////////////////////////////////////////// ТУТ САМЫЙ ГЛАВНЫЙ МАССИВ
	private:
		int** array = new int* [100 + 1];
	/////////////////////////////////////////////////////////////////////////// ТУТ САМЫЙ ГЛАВНЫЙ МАССИВ 
	private:
		// Для прорисовки кругов
		int x3 = 50, x4 = 50; // x3 - x4 - размеры для круга
		// Массивы с центрами окружности в угле слева
		int* array_X_center_Ellipse = new int[9]{ 350, 870, 350, 870, 605, 605, 250, 990, 605 };  // Координаты X - идет с левой грани 
		int* array_Y_center_Ellipse = new int[9]{ 100, 100, 550, 550, 53, 590, 200, 200, 332 }; // Координаты Y - идет с верхней грани
		// Для прорисовки линий (путей)
		int* array_X_center_for_line = new int[9] { 375, 895, 375, 895, 630, 630, 270, 1010, 630 };  // Координаты X - идет с левой грани 
		int* array_Y_center_for_line =  new int[9] { 125, 125, 580, 580, 75, 620, 230, 230, 362 }; // Координаты Y - идет с верхней грани
	private:
		bool flag_for_size_form = true;
		bool flag_for_size_setting = true;
		int flagColvoVershin = 0;
		int flagVolvoVershin_rezerv = 0;
		int flagColvoReber = 0;
	public:
		// геттеры
		int get_flag_control_10_node()
		{
			return flag_control_10_node;
		}
		int get_flag_LANG_error()
		{
			return flag_LANG_error;
		}
		int get_flagg()
		{
			return flagg;
		}
		int get_FLAG_for_minus_vershin_cheak()
		{
			return FLAG_for_minus_vershin_cheak;
		}
		int get_default_versh()
		{
			return default_versh;
		}
		int get_flagColvoVershin()
		{
			return flagColvoVershin;
		}
		int get_flagVolvoVershin_rezerv()
		{
			return flagVolvoVershin_rezerv;
		}
		int get_flagColvoReber()
		{
			return flagColvoReber;
		}
		bool get_flag_for_size_form()
		{
			return flag_for_size_form;
		}
		bool get_flag_for_size_setting()
		{
			return flag_for_size_setting;
		}
		// сеттеры
		void set_flag_control_10_node(int f)
		{
			flag_control_10_node = f;
		}
		void set_flag_LANG_error(int f)
		{
			flag_LANG_error = f;
		}
		void set_flagg(int f)
		{
			flagg = f;
		}
		void set_FLAG_for_minus_vershin_cheak(int f)
		{
			FLAG_for_minus_vershin_cheak = f;
		}
		void set_default_versh(int f)
		{
			default_versh = f;
		}
		void set_flagColvoVershin(int f)
		{
			flagColvoVershin = f;
		}
		void set_flagVolvoVershin_rezerv(int f)
		{
			flagVolvoVershin_rezerv = f;
		}
		void set_flagColvoReber(int f)
		{
			flagColvoReber = f;
		}
		void set_flag_for_size_form(bool f)
		{
			flag_for_size_form = f;
		}
		void set_flag_for_size_setting(bool f)
		{
			flag_for_size_setting = f;
		}
		
		SecondFormForGraph(void)
		{
			InitializeComponent();
			///////////////////////////////////////////////////////////////////////////////Проверка на выделение памяти
			if (array == NULL)
			{
				if (get_flag_LANG_error() == 0)
				{
					MessageBox::Show("Не хватает памяти для создания массива array");
				}
				else
				{
					if (get_flag_LANG_error() == 1)
					{
						MessageBox::Show("Не хапае памяці для стварэння масіва array ");
					}
					else
					{
						if (get_flag_LANG_error() == 2)
						{
							MessageBox::Show("Not enough memory to create array ");
						}
					}
				}
			}
			/*for (int i = 0; i < 100 + 1; i++)
			{
				if (array[i] == NULL)
				{
					if (get_flag_LANG_error() == 0)
					{
						MessageBox::Show("Не хватает памяти для создания массива array[i]");
					}
					else
					{
						if (get_flag_LANG_error() == 1)
						{
							MessageBox::Show("Не хапае памяці для стварэння масіва array [i] ");
						}
						else
						{
							if (get_flag_LANG_error() == 2)
							{
								MessageBox::Show("Not enough memory to create array [i] ");
							}
						}
					}
				}
			}*/
			///////////////////////////////////////////////////////////////////////////////Проверка на выделение памяти
			for (int i = 0; i < 100 + 1; i++)
			{
				array[i] = new int[100 + 1];
			}
			for (int i = 0; i < 100 + 1; i++)
			{
				for (int j = 0; j < 100 + 1; j++)
				{
					array[i][j] = 0;
				}
			}
			/////// Заполнение массива добавленных вершин на пример -9 и проверка на выделение памяти
			if (array_versh == NULL)
			{
				if (get_flag_LANG_error() == 0)
				{
					MessageBox::Show("Не хватает памяти для создания массива array_versh");
				}
				else
				{
					if (get_flag_LANG_error() == 1)
					{
						MessageBox::Show("Не хапае памяці для стварэння масіва array_versh ");
					}
					else
					{
						if (get_flag_LANG_error() == 2)
						{
							MessageBox::Show("Not enough memory to create array_versh ");
						}
					}
				}
			}
			else
			{
				for (int i = 0; i < 9; i++)
				{
					array_versh[i] = -9;
				}
			}
			if (arr_svaz == NULL)
			{
				if (get_flag_LANG_error() == 0)
				{
					MessageBox::Show("Не хватает памяти для создания массива arr_svaz");
				}
				else
				{
					if (get_flag_LANG_error() == 1)
					{
						MessageBox::Show("Не хапае памяці для стварэння масіва arr_svaz");
					}
					else
					{
						if (get_flag_LANG_error() == 2)
						{
							MessageBox::Show("Not enough memory to create the arr_svaz array");
						}
					}
				}
			}
			else
			{
				for (int i = 0; i < 9; i++)
				{
					arr_svaz[i] = -9;
				}
			}
		}
		std::string kratchaichi_put()
		{
			int first_versh = Convert::ToInt32(numericUpDown6->Text);
			int last_versh = Convert::ToInt32(numericUpDown7->Text);
			// swap 
			if (first_versh == 1 && last_versh == 2)
			{
				first_versh = first_versh ^ last_versh;
				last_versh = first_versh ^ last_versh;
				first_versh = first_versh ^ last_versh;
			}
			
			bool poseshenie[100]; // Для проверки посещена ли вершина
			int rasstoyanie[100]; // Расстояние
			std::string path[100]; // Путь
			std::string path_file[100]; // путь в файл 
			//Тут flagColvoReber+1 очень важно!!!!!!!!!!!!!!!
			for (int i = 0; i < get_flagColvoReber() + 1; i++) { // Присваиваем каждой вершине бесконечность
				poseshenie[i] = false;
				rasstoyanie[i] = INT_MAX;
			}
			//	////////////////// [] - Тут с какой вершины начинать
			rasstoyanie[first_versh] = 0; // Входим в первую вершину, ставим мин расстояние
			poseshenie[first_versh] = true; // Помечаем как посещенную 

			std::queue<int>q; // Подключаем очередь
			////////////////// [] - Тут с какой вершины начинать
			q.push(first_versh);
			path[first_versh] = std::to_string(first_versh);
			path_file[first_versh] = std::to_string(first_versh);
			////////////////// to_string() - тут начальная точка для показа пути
			try
			{
				while (!q.empty()) { // Цикл, заключающийся в обходе вершин
					int versh = q.front(); // Достаем первую из очереди
					q.pop(); // Удаляем ее из очереди
					for (int j = 1; j < get_flagColvoReber() + 1; j++) { // Цикл прохождения вершин, Size указывает на смежные вершины
						if (!poseshenie[j] && array[versh][j] && array[versh][j] + rasstoyanie[versh] < rasstoyanie[j]) { // Ставим условия заходим только если вершина не посещена, с этой вершиной есть ребро, расстояние между вершинами меньше чем уже существует
							rasstoyanie[j] = array[versh][j] + rasstoyanie[versh];
							path[j] = path[versh] + std::to_string(j);
							path_file[j] = path_file[versh] + '-' + std::to_string(j);
							q.push(j);
						}
					}
				}
			}
			catch (...)
			{
				if (get_flag_LANG_error() == 0)
				{
					MessageBox::Show("Что-то не так");
				}
				else
				{
					if (get_flag_LANG_error() == 1)
					{
						MessageBox::Show("Нешта не так ");
					}
					else
					{
						if (get_flag_LANG_error() == 2)
						{
							MessageBox::Show("Something is wrong");
						}
					}
				}
			}
			
			// Запись в файл путей и их стоимостей через - 
			std::ofstream fout1("puti.txt", std::ios::out);
			if (!fout1.is_open())
			{
				if (get_flag_LANG_error() == 0)
				{
					MessageBox::Show("Файл для записи путей и их стоимостей не может открыться");
				}
				else
				{
					if (get_flag_LANG_error() == 1)
					{
						MessageBox::Show("Файл для запісу шляхоў і іх коштаў не можа адкрыцца ");
					}
					else
					{
						if (get_flag_LANG_error() == 2)
						{
							MessageBox::Show("The file for recording paths and their values cannot be opened ");
						}
					}
				}
			}
			else
			{
				for (int i = 1; i < get_flagColvoVershin() + 1; i++) // До последней вершины чтобы не записало мусор
				{
					std::string path_s = path_file[i];
					int rasstoyanie_s = rasstoyanie[i];
					fout1 << "Путь: " << path_s << ' ' << "Растояние: " << rasstoyanie_s << '\n';
				}
				fout1 << "\nEnd\n";
			}
			fout1.close();
			/////// Тут я возвращаю путь по вершинам например 1-5-3-4-2
			return path[last_versh]; // МОЖНО вернуть стоимость пути например через указатель или ссылку
			///////###########################################################################
		}
	private:
		void print_versh(Graphics^ g, Pen^ p, int x3, int x4)
		{
			for (int i = 0; i < get_flagVolvoVershin_rezerv(); i++)
			{
				g->DrawEllipse(p, array_X_center_Ellipse[i], array_Y_center_Ellipse[i], x3, x4);
			}
		}
		void print_line(Graphics^ g, Pen^ p, int x3, int x4)
		{
			for (int i = 0; i < get_flagColvoReber(); i++)
			{
				Point pt1 = Point(array_X_center_for_line[i - 1], array_Y_center_for_line[i - 1]);
				Point pt2 = Point(array_X_center_for_line[i+1-1], array_Y_center_for_line[i]+1-1);
				g->DrawLine(p, pt1, pt2);
			}
		}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Функции для локализации
	private:
		void set_RUS()
		{
			set_flag_LANG_error(0);
			// label
			label1->Text = "Кол-во вершин";
			label2->Text = "Добавление дороги откуда и куда";
			label3->Text = "Длинна дороги";
			label4->Text = "Через файл";
			label6->Text = "Кратчайший путь от начальной до конечной вершины";
			label7->Text = "Ввод данных";
			label8->Text = "Введите откуда и куда найти путь в левой части";
			label9->Text = "Данные из фала puti.txt";

			// button
			button2->Text = "Добавить дорогу";
			button1->Text = "Найти путь";
			button3->Text = "Файл";
			button4->Text = "Настройки";
			button5->Text = "Выход";
			button6->Text = "Вичислить";
			button7->Text = "Очистить";
			button9->Text = "Справка";
			

			
			// richBox
			richTextBox1->Text = "Введите название вашего файла где хранятся\
данные";

			groupBox1->Text = "Язык";
			groupBox2->Text = "Фон";

			radioButton4->Text = "Красный";
			radioButton5->Text = "Оранжевый";
			radioButton6->Text = "Желтый";
			radioButton7->Text = "Зеленый";
			radioButton8->Text = "Голубой";
			radioButton9->Text = "Синий";
			radioButton10->Text = "Фиолетовый";
			radioButton11->Text = "Стандартный";

		}
		void set_BEL()
		{
			set_flag_LANG_error(1);
			// label
			label1->Text = "Кол-у вяршыняў";
			label2->Text = "Даданне дарогі адкуль і куды";
			label3->Text = "Доўгая дарогі";
			label4->Text = "Праз файл";
			label6->Text = "Самы кароткі шлях ад пачатковай да канчатковай вяршыні";
			label7->Text = "Увод дадзеных";
			label8->Text = "Увядзіце адкуль і куды знайсці шлях у левай частцы ";
			label9->Text = "Данныя з фала puti.txt";

			// button
			button2->Text = "Дадаць дарогу";
			button1->Text = "Знайсці шлях ";
			button3->Text = "Файл";
			button4->Text = "Налады";
			button5->Text = "Выхад";
			button6->Text = "Вылічыць";
			button7->Text = "Ачысціць";
			button9->Text = "Даведка";


			// richBox
			richTextBox1->Text = "Калі ласка, увядзіце назву вашага файла дзе захоўваюцца\
дадзеныя";
			groupBox1->Text = "Мова";
			groupBox2->Text = "Фон";

			radioButton4->Text = "Чырвоны";
			radioButton5->Text = "Аранжавы";
			radioButton6->Text = "Жоўты";
			radioButton7->Text = "Зялёны";
			radioButton8->Text = "Блакітны";
			radioButton9->Text = "Сіні";
			radioButton10->Text = "Фіялетавы";
			radioButton11->Text = "Стандартны";
		}
		void set_ENG()
		{
			set_flag_LANG_error(2);
			// label
			label1->Text = "Number of vertices";
			label2->Text = "Adding a road from where and where";
			label3->Text = "Length of the road";
			label4->Text = "Through file";
			label6->Text = "Shortest path from start to end";
			label7->Text = "Data input";
			label8->Text = "Enter where and where to find the path on the left side ";
			label9->Text = "Data from the file puti.txt ";

			// button
			button2->Text = "Add road";
			button1->Text = "Find a way";
			button3->Text = "File";
			button4->Text = "Settings";
			button5->Text = "Exit";
			button6->Text = "Calculate";
			button7->Text = "Clear";
			button9->Text = "Reference";


			// richBox
			richTextBox1->Text = "Enter the name of your file where are stored data";
			groupBox1->Text = "Language";
			groupBox2->Text = "Background";

			radioButton4->Text = "Red";
			radioButton5->Text = "Orange";
			radioButton6->Text = "Yellow";
			radioButton7->Text = "Green";
			radioButton8->Text = "Blue";
			radioButton9->Text = "DarkBlue";
			radioButton10->Text = "Perpel";
			radioButton11->Text = "Standard";
		}
		private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;


	private: System::Windows::Forms::RadioButton^ radioButton1;


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SecondFormForGraph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SecondFormForGraph::typeid));
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(12, 715);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(87, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->TabStop = false;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &SecondFormForGraph::numericUpDown1_ValueChanged);
			this->numericUpDown1->Click += gcnew System::EventHandler(this, &SecondFormForGraph::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 699);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Кол-во вершин";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(106, 715);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->ReadOnly = true;
			this->numericUpDown2->Size = System::Drawing::Size(96, 20);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(220, 715);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->ReadOnly = true;
			this->numericUpDown3->Size = System::Drawing::Size(94, 20);
			this->numericUpDown3->TabIndex = 4;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(112, 699);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Добавление дороги откуда и куда";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(779, 712);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Найти путь";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SecondFormForGraph::button1_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(332, 715);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(94, 20);
			this->numericUpDown4->TabIndex = 7;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(329, 699);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Длинна дороги";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(902, 699);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Через файл";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(432, 712);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Добавить дорогу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SecondFormForGraph::button2_Click);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(555, 715);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->ReadOnly = true;
			this->numericUpDown6->Size = System::Drawing::Size(106, 20);
			this->numericUpDown6->TabIndex = 12;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(667, 715);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->ReadOnly = true;
			this->numericUpDown7->Size = System::Drawing::Size(106, 20);
			this->numericUpDown7->TabIndex = 13;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(754, 687);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(552, 699);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(329, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Кратчайший путь от начальной до конечной  вершины";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(891, 712);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Файл";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SecondFormForGraph::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1101, 712);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Настройки";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SecondFormForGraph::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1205, 712);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 23);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SecondFormForGraph::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->MinimumSize = System::Drawing::Size(1277, 684);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1277, 684);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SecondFormForGraph::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Location = System::Drawing::Point(1296, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(277, 455);
			this->panel1->TabIndex = 22;
			this->panel1->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(94, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ввод данных";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(3, 16);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(285, 657);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"Введите название вашего файла где хранятся\nданные";
			this->richTextBox1->Click += gcnew System::EventHandler(this, &SecondFormForGraph::richTextBox1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1393, 486);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Вичислить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &SecondFormForGraph::button6_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Location = System::Drawing::Point(13, 744);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1276, 98);
			this->panel2->TabIndex = 26;
			this->panel2->Visible = false;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1192, 13);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 27;
			this->button9->Text = L"Справка";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &SecondFormForGraph::button9_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Controls->Add(this->radioButton10);
			this->groupBox2->Controls->Add(this->radioButton9);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Location = System::Drawing::Point(286, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(639, 39);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Фон";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &SecondFormForGraph::groupBox2_Enter);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(544, 16);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(92, 17);
			this->radioButton11->TabIndex = 7;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Стандартный";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton11_CheckedChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(456, 16);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(91, 17);
			this->radioButton10->TabIndex = 6;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Фиолетовый";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton10_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(394, 16);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(56, 17);
			this->radioButton9->TabIndex = 5;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Синий";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton9_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(322, 16);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(66, 17);
			this->radioButton8->TabIndex = 4;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Голубой";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(246, 16);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(70, 17);
			this->radioButton7->TabIndex = 3;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Зеленый";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(173, 16);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(67, 17);
			this->radioButton6->TabIndex = 2;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Желтый";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(82, 16);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(85, 17);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Оранжевый";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 16);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(70, 17);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Красный";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton4_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(277, 39);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Язык";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(191, 16);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"English";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(99, 16);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Беларуская";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(1, 16);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(67, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Русский";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Visible = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &SecondFormForGraph::radioButton1_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1311, 470);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(251, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Введите откуда и куда найти путь в левой части";
			this->label8->Visible = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(1299, 534);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(263, 162);
			this->richTextBox2->TabIndex = 28;
			this->richTextBox2->Text = L"";
			this->richTextBox2->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1365, 518);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Данные из фала puti.txt";
			this->label9->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(995, 712);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 23);
			this->button7->TabIndex = 30;
			this->button7->Text = L"Очистить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &SecondFormForGraph::button7_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(394, 82);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 31;
			this->label10->Text = L"1";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(902, 82);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 32;
			this->label11->Text = L"2";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(394, 509);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 33;
			this->label12->Text = L"3";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(902, 509);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 34;
			this->label13->Text = L"4";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(638, 43);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 35;
			this->label14->Text = L"5";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(638, 563);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 36;
			this->label15->Text = L"6";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(282, 182);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 37;
			this->label16->Text = L"7";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(1009, 182);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 38;
			this->label17->Text = L"8";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(638, 287);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 39;
			this->label18->Text = L"9";
			this->label18->Visible = false;
			// 
			// SecondFormForGraph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1574, 786);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(1317, 786);
			this->Name = L"SecondFormForGraph";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Graph";
			this->Load += gcnew System::EventHandler(this, &SecondFormForGraph::SecondFormForGraph_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SecondFormForGraph_Load(System::Object^ sender, System::EventArgs^ e) {
			this->ClientSize = System::Drawing::Size(1301, 747); // Для прорисовки окна без секции настройки и файл
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Итоговое отображение результатов
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Флаги для пропуска вершин если онми связаны
		bool f_first = false;
		bool f_second = false;
		// Для кругов
		Graphics^ v = pictureBox1->CreateGraphics();
		Pen^ v2 = gcnew Pen(Color::Black, 1.0f);
		print_versh(v, v2, x3, x4);
		int first_versh = Convert::ToInt32(numericUpDown6->Text);
		int last_versh = Convert::ToInt32(numericUpDown7->Text);
		// Проверка связаны ли вершины
		for (int i = 0; i < 10; i++)
		{
			if (arr_svaz[i] == first_versh)
			{
				f_first = true;
				break;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			if (arr_svaz[i] == last_versh)
			{
				f_second = true;
				break;
			}
		}
		if (f_first == false || f_second == false || first_versh == last_versh)
		{
			if (get_flag_LANG_error() == 0)
			{
				MessageBox::Show("Возможно вершина не связана или вы выбрали путь в эту же вершину");
			}
			else
			{
				if (get_flag_LANG_error() == 1)
				{
					MessageBox::Show("Магчыма вяршыня не звязаная ці вы абралі шлях у гэтую ж вяршыню ");
				}
				else
				{
					if (get_flag_LANG_error() == 2)
					{
						MessageBox::Show("Perhaps the peak is not connected or you have chosen a path to the same peak. ");
					}
				}
			}
		}
		else
		{
			if (first_versh > get_flagColvoVershin() || last_versh > get_flagColvoVershin())
			{
				if (get_flag_LANG_error() == 0)
				{
					MessageBox::Show("Больше заданной вершины не бывает");
				}
				else
				{
					if (get_flag_LANG_error() == 1)
					{
						MessageBox::Show("Больш зададзенай вяршыні не бывае ");
					}
					else
					{
						if (get_flag_LANG_error() == 2)
						{
							MessageBox::Show("There is no more specified vertex");
						}
					}
				}
			}
			else
			{
				if (get_flagColvoVershin() < 2)
				{
					if (get_flag_LANG_error() == 0)
					{
						MessageBox::Show("Меньше двух вершин не может быть");
					}
					else
					{
						if (get_flag_LANG_error() == 1)
						{
							MessageBox::Show("Менш за два вяршыняў не можа быць ");
						}
						else
						{
							if (get_flag_LANG_error() == 2)
							{
								MessageBox::Show("There can be no less than two peaks");
							}
						}
					}
				}
				else
				{
					if (get_flagVolvoVershin_rezerv() != 2 && get_flagColvoReber() < get_flagVolvoVershin_rezerv())
					{
						if (get_flag_LANG_error() == 0)
						{
							MessageBox::Show("Линий не может быть меньше чем вершин или вы выбрали путь в эту же вершину");
						}
						else
						{
							if (get_flag_LANG_error() == 1)
							{
								MessageBox::Show("Ліній не можа быць менш чым вяршыняў ці вы абралі шлях у гэтую ж вяршыню");
							}
							else
							{
								if (get_flag_LANG_error() == 2)
								{
									MessageBox::Show("There can be no less lines than vertices, or you have chosen a path to the same vertex");
								}
							}
						}
					}
					else
					{
						// Для кругов
						Graphics^ g1 = pictureBox1->CreateGraphics();
						Pen^ p1 = gcnew Pen(Color::Blue, 7.0f);
						// Для линий
						Graphics^ g = pictureBox1->CreateGraphics();
						Pen^ p = gcnew Pen(Color::Red, 7.0f);
						int array_put[9] = { 0,0,0,0,0,0,0,0,0 };
						std::string stroka = kratchaichi_put(); // Принятие из функции кратчайшего пути в виде строки
						int idxe = 0;
						int vsevershinivodnomchisle = atoi(stroka.c_str());
						for (int i = 0; i < stroka.size(); i++)
						{
							array_put[idxe++] = stroka[i] - '0';
						}
						// В цикле прокладывается самый быстрый путь(кратчайший) и идёт покраска пройденных вершин
						int index = 0;
						for (int i = 0; i < stroka.size() - 1; i++)
						{
							try
							{
								g1->DrawEllipse(p1, array_X_center_Ellipse[array_put[index] - 1], array_Y_center_Ellipse[array_put[index] - 1], x3, x4);
								Point pt1 = Point(array_X_center_for_line[array_put[index] - 1], array_Y_center_for_line[array_put[index] - 1]);
								index++;
								Point pt2 = Point(array_X_center_for_line[array_put[index] - 1], array_Y_center_for_line[array_put[index] - 1]);
								g->DrawLine(p, pt1, pt2);
							}
							catch (...)
							{
								if (get_flag_LANG_error() == 0)
								{
									MessageBox::Show("Что-то не так или вершины не связаны");
								}
								else
								{
									if (get_flag_LANG_error() == 1)
									{
										MessageBox::Show("Нешта не так ці вяршыні не звязаны ");
									}
									else
									{
										if (get_flag_LANG_error() == 2)
										{
											MessageBox::Show("Something is wrong or the vertices are not connected ");
										}
									}
								}
							}
						}
						// Для покраски последнего
						g1->DrawEllipse(p1, array_X_center_Ellipse[array_put[index] - 1], array_Y_center_Ellipse[array_put[index] - 1], x3, x4);
						if (get_flag_LANG_error() == 0)
						{
							MessageBox::Show("В файл puti.txt записаны пути в порядке убывания и их стоимости(время прохождения)");
						}
						else
						{
							if (get_flag_LANG_error() == 1)
							{
								MessageBox::Show("У файл puti.txt запісаныя шляху ў парадку змяншэння і іх кошту (час праходжання) ");
							}
							else
							{
								if (get_flag_LANG_error() == 2)
								{
									MessageBox::Show("The paths are written in the file puti.txt in descending order and their cost (transit time)");
								}
							}
						}
					}
				}
			}
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Кол-во вершин
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (get_flag_control_10_node() < 10)
		{
			int colvoVershin = Convert::ToInt32(numericUpDown1->Text);
			if (colvoVershin >= get_flagg())
			{
				set_FLAG_for_minus_vershin_cheak(get_FLAG_for_minus_vershin_cheak() + 1);
				set_flagColvoVershin(get_flagColvoVershin() + 1); // потом проверяю сколько вершин ( <2 ) для поиска пути быть не может
				// Отоюражение номера вершины
				switch (get_flagColvoVershin())
				{
				case 1:
					label10->Visible = true; break;
				case 2:
					label11->Visible = true; break;
				case 3:
					label12->Visible = true; break;
				case 4:
					label13->Visible = true; break;
				case 5:
					label14->Visible = true; break;
				case 6:
					label15->Visible = true; break;
				case 7:
					label16->Visible = true; break;
				case 8:
					label17->Visible = true; break;
				case 9:
					label18->Visible = true; break;
				}
				set_default_versh(get_default_versh() + 1);
				set_flagVolvoVershin_rezerv(colvoVershin + 1); // Для дальнейшего использования этого флага для отрисовки чтобы не запутаться
				// colvoVershin может выступать в роли (какая это вершина)
				array_versh[get_flagVolvoVershin_rezerv() - 1] = colvoVershin + 1; // +1 т.к считает первым 0 а нулевой вершины нет
				Graphics^ g = pictureBox1->CreateGraphics();
				Pen^ p = gcnew Pen(Color::Black, 1.0f);
				g->DrawEllipse(p, array_X_center_Ellipse[get_flagColvoVershin() - 1], array_Y_center_Ellipse[get_flagColvoVershin() - 1], x3, x4);
				print_versh(g, p, x3, x4);
				set_flagg(get_flagg() + 1);
				set_flag_control_10_node(get_flag_control_10_node()+1);
			}
		}
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Добавление дороги
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {		
		// Отрисовка вершин после добавления линий на всякий случай
		Graphics^ g2 = pictureBox1->CreateGraphics();
		Pen^ p2 = gcnew Pen(Color::Black, 1.0f);
		int help_flag_first = true;
		int help_flag_second = true;
		int first_for_write = Convert::ToInt32(numericUpDown2->Text); // От какой вершины проложить линию
		int second_for_write = Convert::ToInt32(numericUpDown3->Text); // До какой вершины проложить линию
		if (first_for_write == second_for_write)
		{
			if (get_flag_LANG_error() == 0)
			{
				MessageBox::Show("В эту же вершину нельзя добавить путь");
			}
			else
			{
				if (get_flag_LANG_error() == 1)
				{
					MessageBox::Show("");
				}
				else
				{
					if (get_flag_LANG_error() == 2)
					{
						MessageBox::Show("");
					}
				}
			}
			print_versh(g2, p2, x3, x4);
		}
		else
		{
			// Добавление вершины в массив для дальнейшей проверки связи
			arr_svaz[first_for_write - 1] = first_for_write;
			arr_svaz[second_for_write - 1] = second_for_write;
			int dlina_puti = Convert::ToInt32(numericUpDown4->Text);
			Graphics^ g = pictureBox1->CreateGraphics();
			Pen^ p = gcnew Pen(Color::Black, 1.0f);
			// -1 чтобы пользовательне сошел с ума (Для него начинается с 1, а у меня с 0 )
			Point pt1 = Point(array_X_center_for_line[first_for_write - 1], array_Y_center_for_line[first_for_write - 1]);
			Point pt2 = Point(array_X_center_for_line[second_for_write - 1], array_Y_center_for_line[second_for_write - 1]);
			// Проверка если пользователь вводит 0 вершин
			if (first_for_write <= 0 || second_for_write <= 0)
			{
				array[first_for_write][second_for_write] = array[second_for_write][first_for_write] = 0;
				print_versh(g, p, x3, x4);
			}
			else
			{
				// Проверка на то есть ли такая созданная вершина
				for (int i = 0; i < 9; i++) // Для first_for_write
				{
					if (array_versh[i] == first_for_write)
					{
						help_flag_first = false;
						break;
					}
				}
				for (int i = 0; i < 9; i++) // Для second_for_write
				{
					if (array_versh[i] == second_for_write)
					{
						help_flag_second = false;
						break;
					}
				}
				if (help_flag_first == true || help_flag_second == true)
				{
					if (get_flag_LANG_error() == 0)
					{
						MessageBox::Show("Таких вершины нет");
					}
					else
					{
						if (get_flag_LANG_error() == 1)
						{
							MessageBox::Show("Такіх вяршыні няма ");
						}
						else
						{
							if (get_flag_LANG_error() == 2)
							{
								MessageBox::Show("There are no such peaks ");
							}
						}
					}
					print_versh(g, p, x3, x4);
				}
				else
				{
					set_flagColvoReber(get_flagColvoReber() + 1); // Наращиваю флаг для узнавания кол-ва ребер
					// Если пользователь хочет поменять значение уже введенных линий между вершинами то надо просто как-то перезаписать
					if (array[first_for_write][second_for_write] != 0)
					{
						set_flagColvoReber(get_flagColvoReber() - 1); // Если такое ребро было  
						if (get_flag_LANG_error() == 0)
						{
							MessageBox::Show("Вы перезаписали дорогу");
						}
						else
						{
							if (get_flag_LANG_error() == 1)
							{
								MessageBox::Show("Вы перазапісаць дарогу");
							}
							else
							{
								if (get_flag_LANG_error() == 2)
								{
									MessageBox::Show("You have rewritten the road ");
								}
							}
						}
						print_versh(g, p, x3, x4);
					}
					////////////////////################ Запись данных в массив
					array[first_for_write][second_for_write] = array[second_for_write][first_for_write] = dlina_puti;
					////////////////////################ Запись данных в массив
					g->DrawLine(p, pt1, pt2);
					// отрисовка вершинин
					print_versh(g2, p2, x3, x4);
				}
			}
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Тут очистака памяти (массивов) при выходе
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
				///////###########################################################################
			///////###########################################################################
		///////###########################################################################
		for (int i = 0; i < 100 + 1; i++)
		{
			delete[] array[i];
		}
		delete[] array;
		///////###########################################################################
			///////###########################################################################
				///////###########################################################################
		delete[] array_X_center_Ellipse;
		delete[] array_Y_center_Ellipse;
		delete[] array_X_center_for_line;
		delete[] array_Y_center_for_line;
		delete[] array_versh;
		delete[] arr_svaz;
		Application::ExitThread();
 		Application::Exit();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		1227 x 634 - размерность поля - 50
		*/
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////// баттон который добавляет (расширяет форму) и добавляет функционал для работы с файлами
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Для того чтобы не было проблем если открывается другая часть окна 
		if (get_flag_for_size_setting() == false)
		{
			set_flag_for_size_setting(true);
		}
		if (get_flag_for_size_form())
		{
			this->ClientSize = System::Drawing::Size(1590, 747); // Расшираяю немного форму
			richTextBox2->Visible = true;
			panel1->Visible = true;
			button6->Visible = true;
			label7->Visible = true;
			label8->Visible = true;
			label9->Visible = true;
			// Если окно где работа с файлами открыта то можно и слева взаимодействовать с кнопками
			numericUpDown1->Enabled = false;
			numericUpDown2->Enabled = false;
			numericUpDown3->Enabled = false;
			numericUpDown4->Enabled = false;
			button1->Enabled = false;
			button2->Enabled = false;

			set_flag_for_size_form(false);
		}
		else
		{
			// Произведена предворительная очистка для того чтобы не было бага с доваблением после
			Kursach::SecondFormForGraph::button7_Click(sender, e);
			this->ClientSize = System::Drawing::Size(1301, 747); // Возвращаю размер формы
			richTextBox2->Visible = false;
			panel1->Visible = false;
			button6->Visible = false;
			label7->Visible = false;
			label8->Visible = false;
			label9->Visible = false;
			// Если окно где работа с файлами открыта то можно и слева взаимодействовать с кнопками
			numericUpDown1->Enabled = true;
			numericUpDown2->Enabled = true;
			numericUpDown3->Enabled = true;
			numericUpDown4->Enabled = true;
			button1->Enabled = true;
			button2->Enabled = true;

			set_flag_for_size_form(true);
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////// Вызов окна настроек
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Для того чтобы не было проблем если открывается другая часть окна 
		if (get_flag_for_size_form() == false)
		{
			set_flag_for_size_form(true);
		}
		if (get_flag_for_size_setting())
		{
			this->ClientSize = System::Drawing::Size(1301, 800); // Расшираяю немного форму
			
			button9->Visible = true;
			panel2->Visible = true;
			groupBox1->Visible = true;
			groupBox2->Visible = true;
			radioButton1->Visible = true;
			radioButton2->Visible = true;
			radioButton3->Visible = true;
			radioButton4->Visible = true;
			radioButton5->Visible = true;
			radioButton6->Visible = true;
			radioButton7->Visible = true;
			radioButton8->Visible = true;
			radioButton9->Visible = true;
			radioButton10->Visible = true;
			radioButton11->Visible = true;
			set_flag_for_size_setting(false);
		}
		else
		{
			this->ClientSize = System::Drawing::Size(1301, 747); // Возвращаю размер формы
			button9->Visible = false;
			panel2->Visible = false;
			groupBox1->Visible = false;
			groupBox2->Visible = false;
			radioButton1->Visible = false;
			radioButton2->Visible = false;
			radioButton3->Visible = false;
			radioButton4->Visible = false;
			radioButton5->Visible = false;
			radioButton6->Visible = false;
			radioButton7->Visible = false;
			radioButton8->Visible = false;
			radioButton9->Visible = false;
			radioButton10->Visible = false;
			radioButton11->Visible = false;
			set_flag_for_size_setting(true);
		}
	}
/// Свойство для очиищения
private: System::Void richTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text = "";
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Вычисление из richBox - пользователь вводит там сам
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// Произведена предворительная очистка
	Kursach::SecondFormForGraph::button7_Click(sender, e);
	bool flag_error = true;
	richTextBox2->Text = "";
	if (get_flag_LANG_error() == 0)
	{
		MessageBox::Show("Ваши данные в массиве будут удалены");
	}
	else
	{
		if (get_flag_LANG_error() == 1)
		{
			MessageBox::Show("Вашы дадзеныя ў масіве будуць выдалены ");
		}
		else
		{
			if (get_flag_LANG_error() == 2)
			{
				MessageBox::Show("Your data in the array will be deleted ");
			}
		}
	}
	String^ for_richBox = richTextBox1->Text;
	std::string str = "";
	str = MarshalString(for_richBox, str);
	std::ofstream fout;
	fout.open(str, std::ios::app);
	if (!fout.is_open())
	{
		if (get_flag_LANG_error() == 0)
		{
			MessageBox::Show("Файл для записи не открыт");
		}
		else
		{
			if (get_flag_LANG_error() == 1)
			{
				MessageBox::Show("Файл для запісу не адкрыты ");
			}
			else
			{
				if (get_flag_LANG_error() == 2)
				{
					MessageBox::Show("File not open for writing");
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < 100 + 1; i++)
		{
			array[i] = new int[100 + 1];
		}
		for (int i = 0; i < 100 + 1; i++)
		{
			for (int j = 0; j < 100 + 1; j++)
			{
				array[i][j] = 0;
			}
		}
		int first_versh = Convert::ToInt32(numericUpDown6->Text);
		int last_versh = Convert::ToInt32(numericUpDown7->Text);
		
		if (first_versh == last_versh)
		{
			if (get_flag_LANG_error() == 0)
			{
				MessageBox::Show("Зачем вам путь в эту же вершину?");
			}
			else
			{
				if (get_flag_LANG_error() == 1)
				{
					MessageBox::Show("Навошта вам шлях у гэтую ж вяршыню? ");
				}
				else
				{
					if (get_flag_LANG_error() == 2)
					{
						MessageBox::Show("Why do you need a way to the same peak? ");
					}
				}
			}
		}
		else
		{
			std::ifstream fin;
			fin.open(str);
			if (!fin.is_open())
			{
				if (get_flag_LANG_error() == 0)
				{
					MessageBox::Show("Файл для считывания не открыт");
				}
				else
				{
					if (get_flag_LANG_error() == 1)
					{
						MessageBox::Show("Ніякія файлы для счытвання не адчынены ");
					}
					else
					{
						if (get_flag_LANG_error() == 2)
						{
							MessageBox::Show("The file to read is not open ");
						}
					}
				}
			}
			else
			{
				int z, x, r;
				while (!fin.eof())
				{
					// Для подсчета вершин
					int array_versh_colvo_help[9] = { 0,0,0,0,0,0,0,0,0 };
					bool flag_versh = true;
					set_flagColvoReber(get_flagColvoReber() + 1);
					fin >> z >> x >> r;
					try
					{
						if ((z > 10 || z < 1) || (x > 10 || x < 1) || (r < 0))
						{
							flag_error = false;
							throw 666;
						}
						else
						{
							for (int i = 0; i < 9; i++)
							{
								if (array_versh_colvo_help[i] == z && array_versh_colvo_help[i] == x)
								{
									flag_versh = false;
									continue;
								}
								flag_versh = true;
							}
							if (flag_versh)
							{
								set_flagColvoVershin(get_flagColvoVershin() + 1);
							}
							if (!fin.fail())
							{
								array[z][x] = array[x][z] = r;
							}
							else
							{
								flag_error = false;
								if (get_flag_LANG_error() == 0)
								{
									MessageBox::Show("Введите нормальные данные в массив");
								}
								else
								{
									if (get_flag_LANG_error() == 1)
									{
										MessageBox::Show("Увядзіце нармальныя дадзеныя ў масіў ");
									}
									else
									{
										if (get_flag_LANG_error() == 2)
										{
											MessageBox::Show("Enter normal data into an array");
										}
									}
								}
								break;
							}
						}
					}
					catch (int)
					{
						if (get_flag_LANG_error() == 0)
						{
							MessageBox::Show("Введите нормальные данные в массив 2");
						}
						else
						{
							if (get_flag_LANG_error() == 1)
							{
								MessageBox::Show("Увядзіце нармальныя дадзеныя ў масіў 2");
							}
							else
							{
								if (get_flag_LANG_error() == 2)
								{
									MessageBox::Show("Enter normal data into array 2");
								}
							}
						}
						flag_error = false;
						break;
					}
					catch (const std::exception&)
					{
						if (get_flag_LANG_error() == 0)
						{
							MessageBox::Show("Введите нормальные данные в массив 3");
						}
						else
						{
							if (get_flag_LANG_error() == 1)
							{
								MessageBox::Show("Увядзіце нармальныя дадзеныя ў масіў 3");
							}
							else
							{
								if (get_flag_LANG_error() == 2)
								{
									MessageBox::Show("Enter normal data into array 3");
								}
							}
						}
						flag_error = false;
						break;
					}
				}

				if (first_versh > get_flagColvoVershin() || last_versh > get_flagColvoVershin() && flag_error == true)
				{
					if (get_flag_LANG_error() == 0)
					{
						MessageBox::Show("Больше заданной вершины не бывает");
					}
					else
					{
						if (get_flag_LANG_error() == 1)
						{
							MessageBox::Show("Больш зададзенай вяршыні не бывае ");
						}
						else
						{
							if (get_flag_LANG_error() == 2)
							{
								MessageBox::Show("There is no more specified vertex ");
							}
						}
					}
				}
				else
				{
					try
					{
						// путь
						// Для кругов
						Graphics^ g1 = pictureBox1->CreateGraphics();
						Pen^ p1 = gcnew Pen(Color::Blue, 7.0f);
						// Для линий
						Graphics^ g = pictureBox1->CreateGraphics();
						Pen^ p = gcnew Pen(Color::Red, 7.0f);
						int array_put[9] = { 0,0,0,0,0,0,0,0,0 };
						std::string stroka = kratchaichi_put(); // Принятие из функции кратчайшего пути в виде строки
						int idxe = 0;
						int vsevershinivodnomchisle = atoi(stroka.c_str());
						for (int i = 0; i < stroka.size(); i++)
						{
							array_put[idxe++] = stroka[i] - '0';
						}
						///// В цикле прокладывается самый быстрый путь(кратчайший) и идёт покраска пройденных вершин
						int index = 0;
						for (int i = 0; i < stroka.size() - 1; i++)
						{
							g1->DrawEllipse(p1, array_X_center_Ellipse[array_put[index] - 1], array_Y_center_Ellipse[array_put[index] - 1], x3, x4);
							Point pt1 = Point(array_X_center_for_line[array_put[index] - 1], array_Y_center_for_line[array_put[index] - 1]);
							index++;
							Point pt2 = Point(array_X_center_for_line[array_put[index] - 1], array_Y_center_for_line[array_put[index] - 1]);
							g->DrawLine(p, pt1, pt2);
						}
						// Для покраски последнего
						g1->DrawEllipse(p1, array_X_center_Ellipse[array_put[index] - 1], array_Y_center_Ellipse[array_put[index] - 1], x3, x4);
						if (get_flag_LANG_error() == 0)
						{
							MessageBox::Show("В файл puti.txt записаны пути в порядке убывания и их стоимости(время прохождения)");
						}
						else
						{
							if (get_flag_LANG_error() == 1)
							{
								MessageBox::Show("У файл puti.txt запісаныя шляху ў парадку змяншэння і іх кошту (час праходжання)");
							}
							else
							{
								if (get_flag_LANG_error() == 2)
								{
									MessageBox::Show("The paths are written in the file puti.txt in descending order and their cost (transit time) ");
								}
							}
						}
						// для записи в richBox2 данных 
						std::ifstream fin_puti("puti.txt");
						if (!fin_puti.is_open())
						{
							if (get_flag_LANG_error() == 0)
							{
								MessageBox::Show("Файл puti.txt не может открыться или он не был создан");
							}
							else
							{
								if (get_flag_LANG_error() == 1)
								{
									MessageBox::Show("Файл puti.txt не можа адкрыцца або ён не быў створаны");
								}
								else
								{
									if (get_flag_LANG_error() == 2)
									{
										MessageBox::Show("The puti.txt file could not be opened or was not created");
									}
								}
							}
						}
						else
						{
							String^ str_puti = "";
							std::string str_s;
							while (!fin_puti.eof())
							{
								fin_puti >> str_s;
								str_puti += gcnew String(str_s.c_str());
							}
							richTextBox2->Text = str_puti;
						}
					}
					catch (const std::exception&)
					{
						if (get_flag_LANG_error() == 0)
						{
							MessageBox::Show("ошибка");
						}
						else
						{
							if (get_flag_LANG_error() == 1)
							{
								MessageBox::Show("памылка");
							}
							else
							{
								if (get_flag_LANG_error() == 2)
								{
									MessageBox::Show("error");
								}
							}
						}
					}
					catch (...)
					{

						if (get_flag_LANG_error() == 0)
						{
							MessageBox::Show("Ошибка вызванная ...");
						}
						else
						{
							if (get_flag_LANG_error() == 1)
							{
								MessageBox::Show("Памылка выкліканая ...");
							}
							else
							{
								if (get_flag_LANG_error() == 2)
								{
									MessageBox::Show("An error caused by ...");
								}
							}
						}	
					}
				}
				fin.close();
			}
		}
			fout.close();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////// Локализация
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	set_RUS();
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	set_BEL();
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	set_ENG();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////// Работа с фоном
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Orange;
}
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Yellow;
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Green;
}
private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Blue;
}
private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::DarkBlue;
}
private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::BlueViolet;
}
private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = SystemColors::ButtonFace;
}
////////////////////////////////////////////////////////////////////////////////////// Справка
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (get_flag_LANG_error() == 0)
	{
		MessageBox::Show(" /*Введите данные в массив таким оборазом \
(первая вершина - вторая вершина - стоимость пути) (без \"тире\")\
Данные будут записаны в файл а потом считаны в массив или сразу записанны в массив если не в секции файл была запись. Выберите наячальную точку и конечную. Внимание! При поиске нового пути нажмите на кномпу очистить и перезапешите граф*/");
	}
	else
	{
		if (get_flag_LANG_error() == 1)
		{
			MessageBox::Show("/ * Калі ласка, увядзіце дадзеныя ў масіў такім оборазом \
(Першая вяршыня - другая вяршыня - кошт шляху) (без \"працяжнік\") \
Дадзеныя будуць запісаныя ў файл а потым лічаны ў масіў або адразу запісаным у масіў калі не ў секцыі файл быў запіс. Выберыце наячальную кропку і канчатковую. Увага! Пры пошуку новага шляху націсніце на кномпу ачысціць і перезапешите граф * / ");
		}
		else
		{
			if (get_flag_LANG_error() == 2)
			{
				MessageBox::Show("/ * Enter data into the array like this \
(the first vertex is the second vertex - the cost of the path) (without the \"dash\") \
The data will be written to a file and then read into an array or immediately written to an array if there was a record not in the file section. Select a start point and an end point. Attention! When looking for a new path, click on the clear button and restart the graph * / ");
			}
		}
	}
	}
// очистка
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	label10->Visible = false;
	label11->Visible = false;
	label12->Visible = false;
	label13->Visible = false;
	label14->Visible = false;
	label15->Visible = false;
	label16->Visible = false;
	label17->Visible = false;
	label18->Visible = false;
	for (int i = 0; i < 100 + 1; i++)
	{
		array[i] = new int[100 + 1];
	}
	for (int i = 0; i < 100 + 1; i++)
	{
		for (int j = 0; j < 100 + 1; j++)
		{
			array[i][j] = 0;
		}
	}
	for (int i = 0; i < 9; i++) // Для очистки массива который помогает проверять есть ли вершина при добавлении дороги
	{	
		array_versh[i] = -9;
	}
	set_flagColvoReber(0);
	set_flagColvoVershin(0);
	set_flagVolvoVershin_rezerv(0);
	set_flagg(0);
	set_flag_control_10_node(0);
	numericUpDown1->Text = "-1";
	pictureBox1->Refresh();
	if (get_flag_LANG_error() == 0)
	{
		MessageBox::Show("Все очишено");
	}
	else
	{
		if (get_flag_LANG_error() == 1)
		{
			MessageBox::Show("Усе очишено");
		}
		else
		{
			if (get_flag_LANG_error() == 2)
			{
				MessageBox::Show("Everything is cleaned up");
			}
		}
	}
}
};
}

