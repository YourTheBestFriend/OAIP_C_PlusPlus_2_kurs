//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	ofstream F_write("F:\\test_write.txt", ios::out | ios::app);// Для записи в другой файл
	if (!F_write)
	{
		cout << "Error 2.0\n";
		system("pause");
		return 0;
	}
	ifstream F_read("F:\\test_read.txt", ios::in);// Для чтения 
	if (!F_read)
	{
		cout << "Error 1.0\n";
		system("pause");
		return 0;
	}
	char s[100];
	char star = '*';
	F_read >> s;
	if (strlen(s) > 5)
	{
		for (int i = 0; i < strlen(s); i++)
		{
			F_write << star << ' ';
		}
	}
	else
	{
		F_write << s << ' ';
	}
	while (!F_read.eof())
	{
		F_read >> s;
		F_write << s << ' ';
	}
	_fcloseall(); // Закрыть все потоки с файлами
	cout << "Текст из файла - F:\\test_write.txt записан в файл - F:\\test_read.txt\n";
	system("pause");
	return 0;
}

//F_read >> s;
//if (strlen(s) > 5)
//{
//	for (int i = 0; i < strlen(s); i++)
//	{
//		F_write << star << ' ';
//	}
//}
//else
//{
//	F_write << s << ' ';
//}



