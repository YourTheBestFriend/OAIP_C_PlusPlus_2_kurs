#include <iostream>
#include <Windows.h>
#define tab '\t'
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// setlocale(LC_ALL, "ru");
	const int size = 100;
	char s[size];
	char simbol;
	cout << "Print your string: "; cin.getline(s, size);
	cout << "Сивмол который хотите найти: "; simbol = cin.get(); cin.ignore();
	if (strchr(s, simbol) != NULL)
	{
		cout << "В предложениий есть символ: " << simbol << endl;
	}
	else
	{
		cout << "В предложениий нет символа: " << simbol << endl;
	}
	system("pause");
	return 0;
}
