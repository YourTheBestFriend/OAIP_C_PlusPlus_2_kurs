#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int T = 2; // ������ ���������
	const double m = 0.2; // ����� 
	const double pi = 3.141592653589793;
	double A; // ��������� ��������� ���������� � ������
	double W; // ������� ������������ �����
	cout << "��������� ���� W = (2pi^2 * A^2 * m)/ T^2 , ��� T = 2 and m = 0.2 \n";
	cout << "������� ��������� ��������� A: -- ";
	cin >> A;
	W = (2*pow(pi, 2) * pow(A, 2) * m) / pow(T, 2);
	cout << "��� ��������� W: -- " << W << endl;
	system("pause");
	return 0;
}
