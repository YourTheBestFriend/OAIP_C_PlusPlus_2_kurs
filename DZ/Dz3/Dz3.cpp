#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;
float funkc(float, float, float);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	float q, w, e;
	cout << "¬ведите число 1: -- ";
	cin >> q;

	cout << "¬ведите число 2: -- ";
	cin >> w;

	cout << "¬ведите число 3: -- ";
	cin >> e;

	cout << funkc(q, w ,e) << endl;

	system("pause");
	return 0;
}

float funkc(float a, float b, float c)
{
	float rezultat = a*b*c;
	return rezultat;
}