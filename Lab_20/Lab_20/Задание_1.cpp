//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

struct factory
{
	double years_work;
	int cars;
	char name[15];
}zavod_ural;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int p = -1;
	while (p != 0)
	{
		cout << "Меню:\n||Файл txt||\n0-Завершить прогу\n1-Ввести абзац текста в файл (посимвольное чтение) (ГончаровМатвейЛаб20.txt)\
\n2-Читать из файла и вывести его на консоль (посимвольная запись) (ГончаровМатвейЛаб20.txt)\n3-Ввод массива double в файл\
(ввод данных и его размерность) (ГончаровМатвейЛаб20_0.txt)\n4-Чтение из файла массива double (ГончаровМатвейЛаб20_0.txt)\
\n5-Ввод значений в структуру и (ДО)запись в файл (ГончаровМатвейЛаб20_1.txt) \n6-Чтение значений из структуры (ГончаровМатвейЛаб20_1.txt)\
\n||Файл bin||\n7-Ввод структуры и запись в файл .bin (ГончаровМатвейЛаб20_2.bin)\n8-Вывод данных структуры на консоль (ГончаровМатвейЛаб20_2.bin)\n||Файл txt||\
\n9-Запись в файл слов с пробелами (ГончаровМатвейЛаб20_3.txt)\n10-Построчное чтение файла (ГончаровМатвейЛаб20_3.txt)\nВвод: ";
		cin >> p;
		switch (p)
		{
		case 0: // Завершить прогу
		{
			cout << "Завершение работы программы.\n";
			break;
		}
		case 1: // 1 - Ввести абзац текста в файл
		{
			ofstream f_write_po_odnomu_simvolu("ГончаровМатвейЛаб20.txt", ios::out | ios::trunc);
			if (!f_write_po_odnomu_simvolu)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			int n;
			cout << "Введите кол-во символов: ";
			cin >> n;
			char x;
			for (int i = 0; i < n; i++)
			{
				cout << "Ввод символа № " << i + 1 << ": ";
				cin >> x;
				f_write_po_odnomu_simvolu << x << ' ';
			}
			f_write_po_odnomu_simvolu.close();
			cout << endl; // Чтобы не слипались глаза
			continue; // Для того чтобы не продолжила идти в след case
		}
		case 2: // 2 - Читать из файла и вывести его на консоль
		{
			ifstream f_read_po_odnomu_simvolu("ГончаровМатвейЛаб20.txt", ios::in);
			if (!f_read_po_odnomu_simvolu)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			char s;
			f_read_po_odnomu_simvolu >> s; // Чтобы не распечатало последний элемент 2 раза
			while (!f_read_po_odnomu_simvolu.eof())
			{
				cout << s; // печать раньше
				f_read_po_odnomu_simvolu >> s;
			}
			f_read_po_odnomu_simvolu >> s;
			f_read_po_odnomu_simvolu.close();
			cout << endl; // Чтобы не слипались глаза
			continue; // Для того чтобы не продолжила идти в след case
		}
		case 3: // 3 - Ввод массива double в файл (разделитель '#')
		{
			int size;
			do
			{
				cout << "Введите размерность массива: ";
				cin >> size;
			} while (size < 0);
			double* array = new double[size];
			ofstream f_write_array("ГончаровМатвейЛаб20_0.txt", ios::out | ios::trunc);
			if (!f_write_array)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			// Заполнение массива и внесение его в файл
			for (int i = 0; i < size; i++) 
			{
				cout << "array[" << i + 1 << "]: "; 
				cin >> array[i];
				f_write_array << array[i] << '#';
			}
			f_write_array.close();
			cout << endl; // Чтобы не слипались глаза
			continue;
		}
		case 4: // 4 - Чтение массива из файла (разделитель ' ')
		{
			ifstream f_read_array("ГончаровМатвейЛаб20_0.txt", ios::in);
			if (!f_read_array)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			double cc;
			char c;
			f_read_array >> cc >> c; // Чтобы последние не повторился (>> c - для того чтобы считать следующий символ '#')
			while (!f_read_array.eof())
			{
				cout << cc << ' '; // печатаю только сами значения типа double
				f_read_array >> cc >> c; // (>> c - для того чтобы считать следующий символ '#')
			}
			f_read_array.close();
			cout << endl; // Чтобы не слипались глаза
			continue;
		}
		case 5: // 5 - Ввод значений в структуру и (ДО)запись в файл 
		{
			cout << "Заполнение структуры\n";
			cout << "years_work (double): ";
			cin >> zavod_ural.years_work;
			cout << "cars (int): ";
			cin >> zavod_ural.cars;
			cout << "name (char / string): ";
			cin >> zavod_ural.name;
			ofstream f_write_struct("ГончаровМатвейЛаб20_1.txt", ios::out | ios::app);
			if (!f_write_struct)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			f_write_struct << zavod_ural.years_work << ' ' << zavod_ural.cars << ' ' << zavod_ural.name;
			f_write_struct.close();
			cout << endl; // Чтобы не слипались глаза
			continue;
		}
		case 6: // 6 - Чтение значений из структуры (разделитель '/')
		{
			ifstream f_read_struct("ГончаровМатвейЛаб20_1.txt", ios::in);
			if (!f_read_struct)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			factory zavod_ural_for_zapis;
			f_read_struct >> zavod_ural_for_zapis.years_work >> zavod_ural_for_zapis.cars >> zavod_ural_for_zapis.name;
			while (!f_read_struct.eof())
			{
				cout << zavod_ural_for_zapis.years_work << '|' << zavod_ural_for_zapis.cars << '|' << zavod_ural_for_zapis.name;
				f_read_struct >> zavod_ural_for_zapis.years_work >> zavod_ural_for_zapis.cars >> zavod_ural_for_zapis.name;
			}
			f_read_struct.close();
			cout << endl; // Чтобы не слипались глаза
			continue;
		}
		case 7: // 7- Ввод структуры в файл (ДОзапись) .bin
		{
			factory zavod_belaz;
			cout << "Заполнение структуры\n";
			cout << "years_work (double): ";
			cin >> zavod_belaz.years_work;
			cout << "cars (int): ";
			cin >> zavod_belaz.cars;
			cout << "name (char / string): ";
			cin >> zavod_belaz.name;
			
			ofstream f_write_struct__write("ГончаровМатвейЛаб20_2.bin", ios::app | ios::binary);//////////////////////////////////////////
			if (!f_write_struct__write)	
			{
				return 0;
			}
			f_write_struct__write.write((char*)&zavod_belaz, sizeof(zavod_belaz));
			f_write_struct__write.close();
			cout << endl; // Чтобы не слипались глаза
			continue;
		}
		case 8: // 8 - Чтение .bin (вывод данных струтруры из файла на консоль)
		{
			factory zavod_belaz_write;
			ifstream f_write_struct__write("ГончаровМатвейЛаб20_2.bin", ios::in | ios::binary);
			if (!f_write_struct__write)
			{
				return  0;
			}
			f_write_struct__write.read((char*)&zavod_belaz_write, sizeof(zavod_belaz_write));
			while (!f_write_struct__write.eof())
			{
				cout << zavod_belaz_write.years_work << ' ' << zavod_belaz_write.cars << ' ' << zavod_belaz_write.name << ' ';
				f_write_struct__write.read((char*)&zavod_belaz_write, sizeof(zavod_belaz_write));
			}
			f_write_struct__write.close();
			cout << endl; // Чтобы не слипались глаза
			continue;
		}
		case 9: // 9 - Вввод слов с пробелами и ДОзапись этого предложения в файл
		{
			char slovaSprobel[100];
			ofstream f_slova_write("ГончаровМатвейЛаб20_3.txt", ios::out | ios::app);
			if (!f_slova_write)
			{
				return 0;
			}
			cout << "Введите слова до нажатия Enter'a\n";
			cin.ignore();
			cin.getline(slovaSprobel, 100, '\n');
			f_slova_write << slovaSprobel;
			f_slova_write.close();
			cout << endl; // Чтобы не слипались глаза
			continue;
		}
		case 10: // 10 - Построчное чтение файла (ГончаровМатвейЛаб20_3.txt)
		{
			ifstream f_slova_read("ГончаровМатвейЛаб20_3.txt", ios::in);
			if (!f_slova_read)
			{
				return 0;
			}
			char for_read_slov[100];
			f_slova_read.getline(for_read_slov, 100, '\n');
			while (!f_slova_read.eof())
			{
				cout << for_read_slov << endl;
				f_slova_read.getline(for_read_slov, 100, '\n');
			}
			cout << for_read_slov << endl;
			f_slova_read.close();
			cout << endl; // Чтобы не слипались глаза
			continue;
		}
		default: // default
		{
			cout << "Вы нечего не выбрали" << endl;
			continue;
		}
		}// Конец switch'a
		system("pause");
		return 0;
	}
}



/////// ЗАПИСЬ В ФАЙЛ (цифр)

//ofstream f_write_znach("ГончаровМатвей1.txt", ios::out | ios::trunc);
//if (!f_write_znach)
//{
//	cout << "Error";
//	system("pause");
//	return 0;
//}
//int n;
//do
//{
//	cout << "n: ";
//	cin >> n;
//} while (n < 1);
//double x;
//for (int i = 0; i < n; i++)
//{
//	cout << "Введите число № " << i + 1 << " для записи в файл: ";
//	cin >> x;
//	f_write_znach << x << ' ';
//}
//f_write_znach.close();
//cout << "файл записан\n";

/////// ЧТЕНИЕ ИЗ ФАЙЛА (цифр)

//ifstream f_read_znach("ГончаровМатвей1.txt", ios::in);
//if (!f_read_znach)
//{
//	cout << "Error";
//	system("pause");
//	return 0;
//}
//double y;
//f_read_znach >> y;
//while (!f_read_znach.eof())
//{
//	cout << y << endl;
//	f_read_znach >> y;
//}
//f_read_znach.close();
//cout << "файл прочитан\n";

/////// ЗАПИСЬ В ФАЙЛ (текста.txt)

//char text[100];
//char file[] = "ГончаровМатвей2.txt";
//ofstream f_write_str(file, ios::out | ios::app);
//if (!f_write_str)
//{
//	return 0;
//}
//int skok_predl = 0;
//cout << "skokpredl: "; cin >> skok_predl;
//cin.ignore();
//for (int i = 0; i < skok_predl; i++)
//{
//	cout << "Введите абзац:\n";
//	cin.getline(text, 100);
//	f_write_str << text << endl;
//}
//f_write_str.close();


/////// ЧТЕНИЕ ИЗ ФАЙЛА (текста.txt)

//char str[100];
//ifstream f_read_str(file, ios::in);
//// 
//if (!f_read_str)
//{
//	return 0;
//}
//// 
//f_read_str.getline(str, 100, '\n');
//while (!f_read_str.eof())
//{
//	cout << str << endl;
//	f_read_str.getline(str, 100, '\n');
//}
//f_read_str.close();