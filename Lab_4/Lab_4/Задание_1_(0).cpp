#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const double pi = 3.1415926535897932384626433832795;
	double t2, n1, n2;
	cout << "Введите n1: ";
	cin >> n1;
	cout << "Введите n2: ";
	cin >> n2;
	if (pi <= (n1 + n2) & (n1 + n2) < 5)
	{
		cout << "Вы идете по ветке если pi <= n1+n2 < 5\n";
		t2 = pow(sin(pi * n1 + exp(n2)), 2);
		cout << "Ваш ответ t2: " << t2;
		return 0;
	}
	else
	{
		if (n1 + n2 >= 5)
		{
			cout << "Вы идете по ветке если n1+n2 >= 5\n";
			t2 = pow(sin(pi * n2 + n1), 2);
			cout << "Ваш ответ t2: " << t2;
			return 0;
		}
		else
		{
			cout << "Что то пошло не так";
			return 0;
		}
	}
	system("pause");
	return 0;
}