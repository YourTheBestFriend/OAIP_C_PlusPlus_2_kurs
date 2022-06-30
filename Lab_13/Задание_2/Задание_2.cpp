#define _CRT_SECURE_NO_WARNINGS // Для разрешения старых функций работы с символами и строками
#include <iostream>
#include <string.h> // Для обработки строк
#include <ctype.h> // Для обрабоки симвалов
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// setlocale(LC_ALL, "ru");
	char* p;
	const int size = 100, n = 5;
	char s[size];
	char d[n];
	cout << "Print your string: "; cin.getline(s, size);
	cout << "Print your simbol: "; cin.getline(d, n);
	p = strtok(s, d);
	while (p != NULL)
	{
		cout << p << endl;
		p = strtok(NULL, d);
	}
	system("pause");
	return 0;
}
