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
	cout << "������� x:";
	cin >> x;
	cout << "������� y:";
	cin >> y;
	cout << "����:\n1-��������� sh(x)\n2-��������� x^2\n3-��������� ����������� exp(x)\n�������� ����� ����: ";
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
		cout << "������ �������� ���.\n";
		system("pause");
		return 0;
		break;
	}
	}
	cout << "f(x) = " << f << endl;
	if (x > y)
	{
		otvet = pow(fabs(f-y), 1/3.0) + tan(f);
		cout << "��� ����� --: " << otvet << endl;
	}
	if (x < y)
	{
		otvet = pow((y - f), 3) + cos(f);
		cout << "��� ����� --: " << otvet << endl;
	}
	if (x == y)
	{
		otvet = pow((f + y), 2) + pow(x, 3);
		cout << "��� ����� --: " << otvet << endl;
	}

	system("pause");
	return 0;
}