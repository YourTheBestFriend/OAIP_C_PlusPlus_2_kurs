#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, z, B;
	cout << "���������: sqrt(10 * ( pow(x, 1/3.0) + pow(x, y+2)) * (arcsin^2 z - |x - y|) \n";

	cout << "������� x: -- ";
	cin >> x;
	cout << "������� y: -- ";
	cin >> y;
	cout << "������� z: -- ";
	cin >> z;
	B = sqrt(10 * (pow(x, 1 / 3.0) + pow(x, y + 2))) * (pow(asin(z), 2) - fabs(x - y));

	cout << "��� ���������: -- " << B << endl;
	system("pause");
	return 0;
}
