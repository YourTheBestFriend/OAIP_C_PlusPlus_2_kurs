#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double g, x, b, f;
	int q;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите b: ";
	cin >> b;

	cout << "Выберите f(x): \n1 e^X \n2 x^2" << endl;
m:cout << "Введите значение: ";
	cin >> q;
	switch (q)
	{
	case 1:
	{
		f = exp(x);
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		break;
	}
	default:
	{
		goto m;
	}
	}

	if (x * b > 0.5)
	{
		g = exp(f - abs(b));
	}
	else
	{
		if (x * b > 0.1)
		{
			g = sqrt(abs(f + b));
		}
		else
		{
			g = 2 * pow(f, 2);
		}
	}

	cout << "x: " << x << endl;
	cout << "b: " << b << endl;
	cout << "f(x): " << f << endl;
	cout << "g: " << g << endl;

	system("pause");
	return 0;
}