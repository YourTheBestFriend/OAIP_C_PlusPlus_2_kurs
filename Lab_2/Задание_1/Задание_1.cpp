#include <iostream> 
#include <cmath> 
#include <Windows.h> 

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "–ешение уравнение z1 = cos(x) + cos2(x) + cos6(x) + cos7(x) " << endl;

	double x, z1, z2;
	cout << "¬ведите x в радианах: Ч "; // ћаксимальное значение может иметь от 0 до +-6.28319 радиан, т.к (0, 360 градусов или 0, 2*pi ), если ввести больше или меньше, тогда тоже будет одинаковый ответ
	cin >> x;
	z1 = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	cout << "¬аше значение z1: Ч " << z1 << endl;

	system("pause");

	cout << "–ешение уравнение z2 = 4cos(x/2)*cos(5/2*x)*4cos(x) " << endl;
	z2 = 4 * cos(x / 2) * cos(5 / 2.0 * x) * cos(4 * x); 
	cout << "¬аше значение z2: Ч " << z2 << endl;

	system("pause");
	return 0;
}