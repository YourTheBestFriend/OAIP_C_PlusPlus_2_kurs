#include <iostream> 
#include <cmath> 
#include <Windows.h> 

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "������� ��������� z1 = cos(x) + cos2(x) + cos6(x) + cos7(x) " << endl;

	double x, z1, z2;
	cout << "������� x � ��������: � "; // ������������ �������� ����� ����� �� 0 �� +-6.28319 ������, �.� (0, 360 �������� ��� 0, 2*pi ), ���� ������ ������ ��� ������, ����� ���� ����� ���������� �����
	cin >> x;
	z1 = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	cout << "���� �������� z1: � " << z1 << endl;

	system("pause");

	cout << "������� ��������� z2 = 4cos(x/2)*cos(5/2*x)*4cos(x) " << endl;
	z2 = 4 * cos(x / 2) * cos(5 / 2.0 * x) * cos(4 * x); 
	cout << "���� �������� z2: � " << z2 << endl;

	system("pause");
	return 0;
}