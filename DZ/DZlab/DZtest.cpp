#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int znach;
	cout << "С каким типом данных хотите побаловаться ? \n\t\t int -- 1 \n\t\t char -- 2 \n\t\t bool -- 3 \n\t\t float -- 4 \n\t\t double -- 5 \n";
	cout << " Введите значение -- : ";
	cin >> znach;

	if (znach == 1)
	{
		int a;
		cout << "Введите int a: ";
		cin >> a;
		cout << "Ваше a --: " << a << endl;

		signed int b;
		cout << "Введите signed int b: ";
		cin >> b;
		cout << "Ваше b --: " << b << endl;

		unsigned int c;
		cout << "Введите unsigned int c: ";
		cin >> c;
		cout << "Ваше c --: " << c << endl;

		short int d;
		cout << "Введите short int d: ";
		cin >> d;
		cout << "Ваше d --: " << d << endl;

		unsigned short int e;
		cout << "Введите unsigned short int e: ";
		cin >> e;
		cout << "Ваше e --: " << e << endl;

		long int f;
		cout << "Введите long int f: ";
		cin >> f;
		cout << "Ваше f --: " << f << endl;

		unsigned long int g;
		cout << "Введите unsigned long g: ";
		cin >> g;
		cout << "Ваше g --: " << g << endl;

		long long int h;
		cout << "Введите long long int h: ";
		cin >> h;
		cout << "Ваше h --: " << h << endl;

		unsigned long long int i;
		cout << "Введите unsigned long long int i: ";
		cin >> i;
		cout << "Ваше i --: " << i << endl;

	}

	if (znach == 2)
	{
		char j;
		cout << "Введите char j: ";
		cin >> j;
		cout << "Ваше j --: " << j << endl;

		unsigned char k;
		cout << "Введите unsigned char k: ";
		cin >> k;
		cout << "Ваше k --: " << k << endl;

	}

	if (znach == 3)
	{
		bool l;
		cout << "Введите bool l: ";
		cin >> l;
		cout << "Ваше j --: " << l << endl;

	}

	if (znach == 4)
	{
		float o;
		cout << "Введиете float o: ";
		cin >> o;
		cout << "Ваше o --: " << o << endl;

		long float p;
		cout << "Введиете long float p: ";
		cin >> p;
		cout << "Ваше p --: " << p << endl;
	}

	if (znach == 5)
	{
		double q;
		cout << "Введиете double q: ";
		cin >> q;
		cout << "Ваше q --: " << q << endl;

		long double r;
		cout << "Введиете long double r: ";
		cin >> r;
		cout << "Ваше r --: " << r << endl;
	}
	
	
}