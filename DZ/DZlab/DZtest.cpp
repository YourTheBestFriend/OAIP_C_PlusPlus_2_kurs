#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int znach;
	cout << "� ����� ����� ������ ������ ������������ ? \n\t\t int -- 1 \n\t\t char -- 2 \n\t\t bool -- 3 \n\t\t float -- 4 \n\t\t double -- 5 \n";
	cout << " ������� �������� -- : ";
	cin >> znach;

	if (znach == 1)
	{
		int a;
		cout << "������� int a: ";
		cin >> a;
		cout << "���� a --: " << a << endl;

		signed int b;
		cout << "������� signed int b: ";
		cin >> b;
		cout << "���� b --: " << b << endl;

		unsigned int c;
		cout << "������� unsigned int c: ";
		cin >> c;
		cout << "���� c --: " << c << endl;

		short int d;
		cout << "������� short int d: ";
		cin >> d;
		cout << "���� d --: " << d << endl;

		unsigned short int e;
		cout << "������� unsigned short int e: ";
		cin >> e;
		cout << "���� e --: " << e << endl;

		long int f;
		cout << "������� long int f: ";
		cin >> f;
		cout << "���� f --: " << f << endl;

		unsigned long int g;
		cout << "������� unsigned long g: ";
		cin >> g;
		cout << "���� g --: " << g << endl;

		long long int h;
		cout << "������� long long int h: ";
		cin >> h;
		cout << "���� h --: " << h << endl;

		unsigned long long int i;
		cout << "������� unsigned long long int i: ";
		cin >> i;
		cout << "���� i --: " << i << endl;

	}

	if (znach == 2)
	{
		char j;
		cout << "������� char j: ";
		cin >> j;
		cout << "���� j --: " << j << endl;

		unsigned char k;
		cout << "������� unsigned char k: ";
		cin >> k;
		cout << "���� k --: " << k << endl;

	}

	if (znach == 3)
	{
		bool l;
		cout << "������� bool l: ";
		cin >> l;
		cout << "���� j --: " << l << endl;

	}

	if (znach == 4)
	{
		float o;
		cout << "�������� float o: ";
		cin >> o;
		cout << "���� o --: " << o << endl;

		long float p;
		cout << "�������� long float p: ";
		cin >> p;
		cout << "���� p --: " << p << endl;
	}

	if (znach == 5)
	{
		double q;
		cout << "�������� double q: ";
		cin >> q;
		cout << "���� q --: " << q << endl;

		long double r;
		cout << "�������� long double r: ";
		cin >> r;
		cout << "���� r --: " << r << endl;
	}
	
	
}