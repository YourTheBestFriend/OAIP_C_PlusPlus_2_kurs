#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a, b, c, min; // Найти наименьшее
	
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	// Мой код
	((a < b < c | a < c < b) ? (min = a) : ((b < a < c | b < c < a) ? (min = b) : (min = c))); // не работает верно
	cout << "Ваше минимальное значение: " << min << endl;
	// С разбитием как вы говорили 
	((a < b & a < c || a < c & a < b) ? (min = a) : ((b < a & b < c || b < c & b < a) ? (min = b) : (min = c))); // работает верно 
	cout << "Ваше минимальное значение: " << min << endl;
	
	system("pause");
	return 0;
}
















// Задание 1
	/*double x=2, y=2;
	cout << "Ваше значение: " << (x != y ? x = x / y : -x) << endl;*/

	// Задание 3
	// a
	/*int x1,a,b;
	if (x1 < 20 || x1 > 100)
	{

	}*/

	// b
	//y принадлежит диапазону[100; 101];
	//if (y >= 100 & y <=101)
	//{

	//}


	//// c
	//if (x1 == a || x1 != b)///////////////
	//{

	//}
