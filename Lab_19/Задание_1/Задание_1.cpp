#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
using namespace std;

struct factory
{
	double years_work;
	int cars;
	char name[15];
};

int main()
{
	// Для записи
	factory zavod_ural; // Для файла .txt
	factory zavod_cars; // Для файла .bin 
	SetConsoleOutputCP(1251); 
	SetConsoleCP(1251);
	int p = -1;
	while (p != 0)
	{
		cout << "Меню:\n||Файл txt||\n0-Завершить прогу\n1-Ввести абзац текста в файл\n2-Читать из файла и вывести его на консоль\n3-Ввод массива char в файл и его чтение (fprintf_s // fscanf_s)\
\n4-Ввести все данные структуры и они занесутся в файл (fprintf_s), (дазапись в файл)\n5-Распечатать на консоль данные структуры из файла (fscanf_s)\n||Файл bin||\n6-Ввод/дозапись текста структуры (fwrite)\
\n7-Прочитать(распечатать на консоль) данные с файла о структуре (fread)\nВвод: ";
		cin >> p;
		switch (p)
		{
		case 0: // Завершить прогу
		{
			cout << "Завершение работы программы.\n";
			break;
		}
		case 1: // Ввести абзац текста в файл
		{
			// (посредством посимвольной записи)
			FILE* wf;
			char s[100];
			cout << "Введите абзац текста записи в файл:\n";
			cin.ignore();
			cin.getline(s, 100);
			if (!(wf = fopen("ГончаровМатвей.txt", "wt")))
			{
				cout << "Ошибка открытия (создания) файла для записи.\n";
				system("pause");
				return 0;
			}
			int i = 0;
			while (s[i] != NULL)
			{
				fputc(s[i++], wf);
			}
			cout << "Текст записан в файл" << endl;
			fclose(wf);
			cout << endl; // Чтобы не слипались глаза
			continue; // Для того чтобы не продолжила идти в след case
		}
		case 2: // Читать из файла и вывести его на консоль
		{
			FILE* rf;
			if ((rf = fopen("ГончаровМатвей.txt", "rt")) == NULL)
			{
				cout << "Ошибка открытия (создания) файла для записи.\n";
				system("pause");
				return 0;
			}
			cout << "\nПечать выведенного текста \"на консоль\" " << endl;
			char c = fgetc(rf);
			while (!feof(rf))
			{
				cout << c;
				c = fgetc(rf);
			}
			cout << "\nЧтение файла завершено. Файл закрыт." << endl;
			fclose(rf);
			cout << endl; // Чтобы не слипались глаза
			continue; // Для того чтобы не продолжила идти в след case
		}
		case 3: // Ввод массива char в файл (разделитель '_')
		{
			// Запишем в файл
			FILE* wf;
			char s[100]; // Символьный массив
			cout << "Введите абзац текста записи в файл:\n";
			cin.ignore(); // Чтобы не посчитала пробел
			cin.getline(s, 100); // Запись в символьный массив
			if (!(wf = fopen("ГончаровМатвей0.txt", "wt"))) // Если в потоке wf не открыля файл (не создался) для записи
			{
				cout << "Ошибка открытия (создания) файла для записи.\n";
				system("pause");
				return 0;
			}
			int i = 0;
			while (s[i] != NULL)
			{
				for (; i < strlen(s); i++)
				{
					fprintf_s(wf, "%c_", s[i]); // Поток - тип - данные
				}
			}
			cout << "Текст записан в файл" << endl;
			fclose(wf);
			// Теперь прочитаем
			char c;
			FILE* rf;
			if (!(rf = fopen("ГончаровМатвей0.txt", "rt")))
			{
				cout << "Ошибка открытия (создания) файла для записи.\n";
				system("pause");
				return 0;
			}
			for (int i = 0; i < strlen(s); i++)
			{
				fscanf_s(rf, "%c_", &c); // Поток - тип - данные
				cout << c << ' ';
			}

			cout << endl;
			continue;
		}
		case 4: // 4-Ввести все данные структуры и они занесутся в файл 
		{
			FILE* f;
			if (!(f = fopen("F:\\papka\\ГончаровМатвей1.txt", "at"))) // "F:\\papka\\ГончаровМатвей1.txt", "at"
			{
				cout << "Error";
				break;
			}
			// Заполняю структуру
			cout << "Введите years_work (double): ";
			cin >> zavod_ural.years_work;
			fprintf_s(f, "%lf \n", zavod_ural.years_work);
			cout << "Введите cars (int): ";
			cin >> zavod_ural.cars;
			fprintf_s(f, "%d \n", zavod_ural.cars);
			cout << "Введите name (char): ";
			cin.ignore();
			cin.getline(zavod_ural.name, 15);
			fprintf_s(f, "%s", zavod_ural.name);
			//fprintf_s(f, "%lf %i %s \n", zavod_ural.years_work, zavod_ural.cars, zavod_ural.name);
			//fprintf_s(f, "wb", &zavod_ural); 
			//fwrite(&zavod_ural, sizeof(factory), 1, f);
			fclose(f);
			continue;
		}
		case 5: // 5 - Распечатать на консоль данные структуры из файла(fscanf_s)
		{
			FILE* f;
			if (!(f = fopen("F:\\papka\\ГончаровМатвей1.txt", "rt")))
			{
				cout << "Error\n";
				break;
			}
			double yw;
			int cs;
			char n;
			fscanf_s(f, "%lf \n", &yw);
			cout << yw << '|';
			fscanf_s(f, "%d \n", &cs);
			cout << cs << '|';
			while(!feof(f))
			{
				fscanf_s(f, "%c \n", &n);
				cout << n << '|';
			}
			cout << "\nЧтение файла завершено\n";
			fclose(f);
			continue;
		}
		case 6: // 6-Ввод/дозапись текста структуры (fwrite)
		{// Заполняю структуру
			cout << "Введите years_work (double): ";
			cin >> zavod_cars.years_work;
			cout << "Введите cars (int): ";
			cin >> zavod_cars.cars;
			cout << "Введите name (char): ";
			cin.ignore();
			cin.getline(zavod_cars.name, 15);
			FILE* bfw;
			if (!(bfw = fopen("ГончаровМатвей2.bin", "ab"))) // Дозапись в бинарный файл
			{
				cout << "Error";
				break;
			}
			fwrite(&zavod_cars, sizeof(factory), 1, bfw);
			fclose(bfw);
			continue;
		}
		case 7: // 7-Прочитать(распечатать на консоль) данные с файла о структуре (fread)
		{
			factory zavod_cars_2;
			FILE* bfr;
			if (!(bfr = fopen("ГончаровМатвей2.bin", "rb")))  // Чтение(печать на консоль) в бинарный файл
			{
				cout << "Error";
				break;
			}
			fread(&zavod_cars_2, sizeof(factory), 1, bfr);
			while (!feof(bfr))
			{
				cout << zavod_cars_2.years_work << ';' << zavod_cars_2.cars << ';' << zavod_cars_2.name << ';' << endl;
				fread(&zavod_cars_2, sizeof(factory), 1, bfr); // Иначе будет бесконечно гнать цикл
			}
			fclose(bfr);
			continue;;
		}
		default:
		{
			cout << "Вы нечего не выбрали" << endl;
			continue;
		}
		}// Конец switch'a
	}
	system("pause");
	return 0;
}

/////// ЗАПИСЬ В ФАЙЛ (цифр)

//FILE* f = fopen("file.txt", "wt");
//if (f == NULL)
//{
//	cout << "Ошибка открытия файла для записи.\n";
//	system("pause");
//	return 0;
//}
//for (int i = 0; i < 100; i++)
//{
//	fprintf_s(f, "%d, ", i);
//}
//cout << "Запись в файл завершена" << endl;
//fclose(f);

/////// ЧТЕНИЕ ИЗ ФАЙЛА (цифр)

//FILE* f;
//if (!(f = fopen("file.txt", "rt")))
//{
//	cout << "Ошибка открытия файла для чтения.\n";
//	system("pause");
//	return 0;
//}
//int x;
//while (!feof(f))
//{
//	fscanf_s(f, "%d,", &x);
//	cout << x << ' ';
//}
//cout << "\nЧтение из файла завершено" << endl;
//fclose(f);


/////// ЗАПИСЬ В ФАЙЛ (текста.txt)

//FILE* wf;
//char s[100];
//cout << "Введите абзац текста записи в файл:\n";
//cin.getline(s, 100);
//cout << "Печать выведенного текста до записи в файл" << endl;
//cout << s << endl;
//if (!(wf = fopen("file_2.txt", "wt")))
//{
//	cout << "Ошибка открытия (создания) файла для записи.\n";
//	system("pause");
//	return 0;
//}
//int i = 0;
//while (s[i] != NULL)
//{
//	fputc(s[i++], wf);
//}
//cout << "Текст записан в файл" << endl;
//fclose(wf);


/////// ЧТЕНИЕ ИЗ ФАЙЛА (текста.txt)

//FILE* rf;
//if ((rf = fopen("file_2.txt", "rt")) == NULL)
//{
//	cout << "Ошибка открытия (создания) файла для записи.\n";
//	system("pause");
//	return 0;
//}
//char c = fgetc(rf);
//while (!feof(rf))
//{
//	cout << c;
//	c = fgetc(rf);
//}
//cout << "\nЧтение файла завершено. Файл закрыт." << endl;
//fclose(rf);


/////// ЗАПИСЬ В ФАЙЛ (текста.bin)

//cout << "Введите years_work (double): ";
//cin >> zavod_cars.years_work;
//cout << "Введите cars (int): ";
//cin >> zavod_cars.cars;
//cout << "Введите name (char): ";
//cin.ignore();
//cin.getline(zavod_cars.name, 15);
//FILE* bfw;
//if (!(bfw = fopen("ГончаровМатвей2.bin", "ab"))) // Дозапись в бинарный файл
//{
//	cout << "Error";
//	break;
//}
//fwrite(&zavod_cars, siz

/////// ЧТЕНИЕ ИЗ ФАЙЛА (текста.bin)

//FILE* bfr;
//if (!(bfr = fopen("ГончаровМатвей2.bin", "rb")))  // Чтение(печать на консоль) в бинарный файл
//{
//	cout << "Error";
//	break;
//}
//fread(&zavod_cars_2, sizeof(factory), 1, bfr);
//while (!feof(bfr))
//{
//	cout << zavod_cars_2.years_work << ';' << zavod_cars_2.cars << ';' << zavod_cars_2.name << ';' << endl;
//	fread(&zavod_cars_2, sizeof(factory), 1, bfr); // Иначе будет бесконечно гнать цикл
//}
//fclose(bfr);

