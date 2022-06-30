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
	const int size = 100;
	char s[size];
	cout << "Print your string: "; cin.getline(s, size);
	if (strlen(s) % 3 == 0) // Если длинна строки кратна 3 
	{
		for (int i = 0; i < strlen(s)+1; i++)
		{
			cout << isdigit(s[i]) << endl;
			if (isdigit(s[i]) == sizeof(int)) // Если наш элемент число     (isdigit(s[i]) - почумето не возврашает true или false, хотя если символ то - 0 логично что это false, а любое другое число это true)
			{
				if (s[i] % 3 == 0)
				{
					s[i] = s[i + 1]; // Перезаписываю элемет, про удаления в строке нашел erase(s,1) или erase(s[i])
				}
			}
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}
