#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, f, otvet;
	int p;
	cout << "Введите x:";
	cin >> x;
	cout << "Введите y:";
	cin >> y;
	cout << "Меню:\n1-расчитать sh(x)\n2-расчитать x^2\n3-расчитать экстпоненту exp(x)\nВыберите пункт меню: ";
	cin >> p;

	switch (p)
	{
	case 1:
	{
		f = sinh(x);
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		break;
	}
	case 3:
	{
		f = exp(x);
		break;
	}
	default:
	{
		cout << "Такого варианта нет.\n";
		system("pause");
		return 0;
		break;
	}
	}
	cout << "f(x) = " << f << endl;
	if (x > y)
	{
		otvet = pow(fabs(f-y), 1/3.0) + tan(f);
		cout << "Ваш ответ --: " << otvet << endl;
	}
	if (x < y)
	{
		otvet = pow((y - f), 3) + cos(f);
		cout << "Ваш ответ --: " << otvet << endl;
	}
	if (x == y)
	{
		otvet = pow((f + y), 2) + pow(x, 3);
		cout << "Ваш ответ --: " << otvet << endl;
	}

	system("pause");
	return 0;
}