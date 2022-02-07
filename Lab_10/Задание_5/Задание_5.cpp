#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Мой массив
	char s[100] = "Предлодение, привет я ем арбуз!!!!"; // 34
	char* p = s;
	int flag = 0; // Для длинны строки
	while (*p)//пока р != NULL
	{
		p++;
		flag++;
	}
	cout << "Длинна строки = " << flag << endl;
	system("pause");
	return 0;
}
