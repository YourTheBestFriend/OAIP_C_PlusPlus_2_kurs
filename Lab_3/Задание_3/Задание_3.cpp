#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double y, x;
	cout << "Уравнение вида y =2/3*sin^2(x)-3/4*cos^2(x)\n";
	cout << "Введите x:";
	cin >> x;
	x = (x < 0 ? x : sin(x)); // Оптимизация 

	if (x < 0)
	{
		cout << "Вы следуете ветке 1 при z < 0\n";
	}
	else
	{
		cout << "Вы следуете ветке 2 при z >= 0\n";
	}
	y = (2 / 3.0) * pow(sin(x), 2) - (3 / 4.0) * pow(cos(x), 2);
	cout << "Ваш результат y: " << y << endl;
	system("pause");
	return 0;
}