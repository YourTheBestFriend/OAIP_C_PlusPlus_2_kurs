#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int faktorial_k(int); // Прототип функции для факториала k
double funk(int, const double); // Прототип функции по расчету f(X)

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double f_x = 1;
	const double pi = 3.14;
	int X; double Xk, h; // Переменный
	cout << "X: ";
	cin >> X; // X и есть стартовая точка, рекомендуется от -3
	cout << "До Xk: ";  cin >> Xk; // Рекомендуется до 2.5
	cout << "Шаг h: ";  cin >> h; // Рекомендуемый шаг 1.1
	// Вычисление
	cout << "\t    X\n";
	for (int Xn = X; Xn < Xk; Xn += h) 
	{
		if (X < -3 | X > 2.5)
		{
			break;
		}
		else
		{
			cout << "\t"  << funk(Xn, pi) << endl;
		}
	}

	system("pause");
	return 0;
}
// Факториал k
int faktorial_k(int k)
{
	int facttorial = 1;
	if (k == 0 | k == 1) // Т.к 0! и 1! = 1
 	{
		return facttorial;
	}
	else
	{
		for (int i = 1; i < k; i++)
		{
			facttorial *= i;
		}
		return facttorial;
	}
}
// Функция по расчету f(X)
double funk(int X, const double pi)
{
	double otvet = 0;
	if (X > 0)
	{
		for (int k = 0; k < 8; k++)
		{
			otvet = (pow(-1, k)* pow(X, k)) / faktorial_k(k);
		}
	}
	else
	{
		otvet = tan(pow(pi, X));
	}
	return otvet;
}


