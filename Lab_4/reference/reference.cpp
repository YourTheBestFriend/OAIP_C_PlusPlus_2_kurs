#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);
double func(int, int, int*, int&);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// Просто переменные
	int x, y;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	// Указатель и ссылка
	int* pX = &x;
	int& rY = y;
	cout << "sqrt(pow(a, 2) + pow(b, 2)) = " << func(x,y,pX,rY)<<endl;
	cout << "*S = " << *pX << endl;
	cout << "P = " << rY << endl;
	//
	////
	//int& rX = x;
	//int& rY = y;
	//swap1(rX, rY);
	//cout << x << ' ' << y << endl;
	
	/*swap1(x, y);
	cout << x << ' ' << y << endl;*/
		
	/*int& rX = x;
	int& rY = y;
	swap3(rX, rY);
	cout << x << ' ' << y << endl;*/
	system("pause");
	return 0;
}

void swap1(int a, int b)
{
	int t = a;
	a = b;
	b = t;
	cout << a << ' ' << b << endl;

}
void swap2(int* pA, int* pB)
{
	int t = *pA;
	*pA = *pB;
	*pB = t;
	cout << *pA << ' ' << *pB << endl;
}
void swap3(int& rA, int& rB)
{
	int t = rA;
	rA = rB;
	rB = t;
	cout << rA << ' ' << rB << endl;
}
double func(int a, int b, int*S, int& P)
{
	/*cout << "*S = " << (*S = a * b) << endl ;
	cout << "P = " <<  (P = 2 * (a + b)) << endl;
	return sqrt(pow(a, 2) + pow(b, 2));*/

	*S = a * b;
	P = 2 * (a + b);
	double otvet = sqrt(pow(a, 2) + pow(b, 2));
	return otvet;
}


