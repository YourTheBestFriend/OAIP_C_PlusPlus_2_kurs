#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int znach;
	cout << "Какой выбрать тип ? \n\t\t int -- 1 \n\t\t char -- 2 \n\t\t bool -- 3 \n\t\t float -- 4 \n\t\t double -- 5 \n";
	cout << " Введите значение -- : ";
	cin >> znach;

	if (znach == 1)
	{
		cout << "int -- " << sizeof(int) << " Bytes.\n" ;
		cout << "signed int -- " << sizeof(signed int) << " Bytes.\n";
		cout << "unsigned int -- " << sizeof(unsigned int) << " Bytes.\n";
		cout << "short int -- " << sizeof(short int) << " Bytes.\n";
		cout << "signed short int -- " << sizeof(signed short int) << " Bytes.\n";
		cout << "unsigned short int -- " << sizeof(unsigned short int) << " Bytes.\n";
		cout << "long int -- " << sizeof(long int) << " Bytes.\n";
		cout << "unsigned long int -- " << sizeof(unsigned long int) << " Bytes.\n";
		cout << "long long int -- " << sizeof(long long int) << " Bytes.\n";
		cout << "unsigned long long int -- " << sizeof(unsigned long long int) << " Bytes.\n";

	}

	if (znach == 2)
	{
	    cout << "char -- " << sizeof(char) << " Bytes.\n";
		cout << "unsigned char -- " << sizeof(unsigned  char) << " Bytes.\n";
		
	}

	if (znach == 3)
	{
		cout << "bool -- " << sizeof(bool) << " Bytes.\n";
		
	}

	if (znach == 4)
	{
		cout << "float -- " << sizeof(float) << " Bytes.\n";
		cout << "long float -- " << sizeof(long float) << " Bytes.\n";
	
	}

	if (znach == 5)
	{
		cout << "double -- " << sizeof(double) << " Bytes.\n";
		cout << "long double -- " << sizeof(long double) << " Bytes.\n";

	}

}