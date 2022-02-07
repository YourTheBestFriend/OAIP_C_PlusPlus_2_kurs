#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int faktorial_k(int); // �������� ������� ��� ���������� k
double funk(int, const double); // �������� ������� �� ������� f(X)

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double f_x = 1;
	const double pi = 3.14;
	int X; double Xk, h; // ����������
	cout << "X: ";
	cin >> X; // X � ���� ��������� �����, ������������� �� -3
	cout << "�� Xk: ";  cin >> Xk; // ������������� �� 2.5
	cout << "��� h: ";  cin >> h; // ������������� ��� 1.1
	// ����������
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
// ��������� k
int faktorial_k(int k)
{
	int facttorial = 1;
	if (k == 0 | k == 1) // �.� 0! � 1! = 1
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
// ������� �� ������� f(X)
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


