#include <iostream>
#include <cmath>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//void swap1(int, int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	srand(time(NULL));
	int a, b;
	double x;
	cout << "First: ";
	cin >> a;
	cout << "Second:";
	cin >> b;
	x = a + rand() % (b-a+1);
		
	cout << "Ваш ответ: " << x << endl;






	//int a = 7;
	//cout << a << '\t' << &a << endl;
	//int* pA;
	//pA = &a;
	//cout << pA << endl;
	//cout << pA << '\t' << *pA << endl;
	//int* pA2 = &a;
	//cout << pA2 << '\t' << *pA2 << endl;
	//cout << &pA << '\t' << &pA2 << endl;
	//int** ppA = &pA;
	//cout << pA << '\t' << &pA << '\t' << ppA << endl;
	//a = 15;
	//cout << a << '\t' << *pA << '\t' << **ppA << endl;
	//int*** pppA = &ppA;
	//cout << &ppA << '\t' << pppA << endl;
	//// int*** pppA2 = &pA; - Error 
	//int*** pppA2 = pppA; 
	//cout << pppA2 << endl;
	//int*** pppA3 = &(*pppA);
	//cout << pppA3 << endl;
	//*pA = 20;
	//cout << a << '\t' << *pA << endl;

	//const double b = 3.14;
	//// double* pB = &b; Error
	//const double* pB = &b;
	//cout << b << '\t' <<  &b << '\t' << pB << '\t' << *pB<<   endl;
	//// *pB = 5.5 константу нельзя изменить
	//const double c = 9.8;
	//const double* pC = &c;
	//cout << &c << '\t' << pC << endl;
	//// 
	//pB = &c;
	//cout << c << '\t' << *pB << endl;
	//double x = 7.1;
	//pB = &x;
	//x = -3.5;
	//// *pB = 0.9; Error
	//cout << x << '\t' << *pB << endl;
	//double* const pX = &x;
	//*pX = 1.121;
	//cout << x << '\t' << *pX << endl;

	//int d = 3;
	//bool e = true;
	//double f = 9.99;

	//int* pD = &d;
	//bool* pE = &e;
	//double* pF = &f;

	//cout << sizeof(pD) << '\t' << sizeof(pE) << '\t' << sizeof(pF) << endl;
	//cout << sizeof(d) << '\t' << sizeof(e) << '\t' << sizeof(f) << endl;
	//cout << sizeof(*pD) << '\t' << sizeof(*pE) << '\t' << sizeof(*pF) << endl;
	//
	//void* pM;
	//pM = &d;
	//cout << pM << endl;
	//pM = &e;
	//cout << pM << endl;
	//pM = &f;
	//cout << pM << endl;

	//pD = NULL;
	//
	//// Конец указателей


	//// Ссылки

	//int n = 5;
	//int& rN = n; // rN это ссылка на n

	//n++; // 6
	//rN++; //7




	system("pause");
	return 0;
}

//void swap1(int a, int b)
//{
//	int t = a;
//	a = b;
//	b = t;
//	cout << a << ' ' << b << endl;
//
//}
//void swap2(int* pA, int* pB)
//{
//	int t = *pA
//		* pA = *pA;
//	*pB = t;
//	cout << *pA << ' ' << *pB << endl;
//}


