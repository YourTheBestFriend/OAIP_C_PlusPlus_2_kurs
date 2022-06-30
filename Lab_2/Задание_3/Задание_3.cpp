#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int T = 2; // период колебани€
	const double m = 0.2; // масса 
	const double pi = 3.141592653589793;
	double A; // амплитуда колебаний измер€етс€ в метрах
	double W; // Ёнерги€ материальной точки
	cout << "”равнение вида W = (2pi^2 * A^2 * m)/ T^2 , где T = 2 and m = 0.2 \n";
	cout << "¬ведите јмплитуду колебани€ A: -- ";
	cin >> A;
	W = (2*pow(pi, 2) * pow(A, 2) * m) / pow(T, 2);
	cout << "¬аш результат W: -- " << W << endl;
	system("pause");
	return 0;
}
