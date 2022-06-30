#include <iostream>
#include <cmath>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//bool my_funkc(double, double, double, double, double, double, double, double);
//double findeMaxIndex(double*, int, int&);
double sumProzO(double*, int, double* S, double& P);

int main()
{	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//while (true)
	//{
	//	cout << "RAND_MAX = " << RAND_MAX << endl; // константа, хранящая максимальный предел из интервала случайных чисел
	//	cout << "random number = " << rand() << endl; // запуск генератора случайных чисел
	//	
	//}
	srand(time(NULL));
	int x, y;
	cout << "First: ";
	cin >> x;
	cout << "Last: ";
	cin >> y;
	int z = x + rand() % (y - x + 1); // a + rand() % (b - a + 1);
	cout << "z: " << z << endl;

	int m[1000];
	for (int i = 1;i < 26;i++)
	{
		m[i] = x + rand() % (y - x + 1);
		cout << "m[" << i << "]: " << m[i] << endl;
		
	}


	/*const int N = 5;
	double ar[N] = {1.5 , -2.1, 3.0, 4.1, -9.98};
	cout << ar << ' ' << ar[0] << ' '  << ar[1] << ' ' << ar[2] << ' ' << ar[3] << ' ' << ar[4] << ' ' << endl;*/
	// cout << ar[5] << endl; // Error Нет элемента с индексом 5
	// cout << ar[-1] << endl; // Error 

	/*const int M = 6;
	int mas[M];

	cout << mas[0] << endl;

	for (int i = 0; i < M; i++)
	{
		cout << "Введите значение элемента mas[" << i << "]:";
		cin >> mas[i];
	}
	
	for (int i = 0; i < M; i++)
	{
		cout << "mas[" << i << "]=" << mas[i] << endl;
	}

	cout << endl;

	for (int i = M-1; i > -1; i--)
	{
		cout << "mas[" << i << "]=" << mas[i] << endl;
	}
	int suum = mas[0] + mas[1] + mas[2] + mas[3] + mas[4] + mas[5];
	cout << suum << endl;

	cout << endl;

	int sum = 0;
	for (int i = 0; i < M; i++)
	{
		sum = sum + mas[i];
	}
	cout << sum << endl;

	cout << endl;

	int sum1 = 1;
	for (int i = 0; i < M; i++)
	{
		sum1 = sum1 * mas[i];
	}
	cout << sum1 << endl;

	cout << endl;

	int sas = 0;
	for (int i = 0; i < M; i++)
	{
		if (mas[i] > 0)
		{
			sas++;
		}
		
	}
	cout << sas << endl;*/

	double arr[10];

	cout << sizeof(arr) << ' ' << sizeof(arr[0]) << ' ' << sizeof(arr[7]) << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << (*(arr + 3) = 5) << endl;
	}

	const int G = 10;
	double mas[G];
	double b;
	double*  S = &b;
	double P = 1;
	for (int i = 0; i < G; i++)
	{
		cout << "mas[" << i << "]: ";
		cin >> mas[i];

	}
	double sum = sumProzO(mas, G, S, P);
	cout << sum << '\t' << *S << '\t' << P << endl;
	
	double* pS = &b;
	double& rP = P;

	double sum1 = sumProzO(mas, G, pS, rP);
	cout << sum1 << '\t' << *pS << '\t' << rP << endl;

	
		

	/*double min = mas[0];
	for (int i = 1; i < G; i++)
	{
		if (mas[i] < min)
		{
			min = mas[i];
		}
		
	}
	cout << "Min: " << min << endl;*/

	//// 5 1 9 0 2 7 9 8 0
	//// для первого max index 2, для второго max index 6  
	//double max = mas[0];
	//int index = 0;
	//for (int i = 1; i < G; i++)
	//{
	//	if (mas[i] >= max) // Для 2 варианта >=     |  Для 1 варианта >
 //		{
	//		max = mas[i];
	//		index = i;
	//		
	//	}
	//}

	//cout << "Max: " << max << "\tindex: " << index << endl;


	/*int A, B;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "otvet: " << ((A > 0 & B > 0) & (A % 3 == 0 & B % 3 == 0) ? true : false) << endl;*/


//	// есть значения 
//	double x1, y1, x2, y2, Ha, Wa, Hb, Wb;
//	// Точки уже заданные пользоватеем
//	// A1 (x1, y1)
//	// B1 (x2, y2)
//
//	cout << "x1: ";
//	cin >> x1;
//	cout << "y1: ";
//	cin >> y1;
//	cout << "Ha: ";
//	cin >> Ha;
//	cout << "Wa: ";
//	cin >> Wa;
//	cout << "Hb: ";
//	cin >> Hb;
//	cout << "Wb: ";
//	cin >> Wb;
//
//	cout << "Ответ: " << endl;
//
//	system("pause");
//	return 0;
//}
//
//bool my_funkc(double x1, double y1, double x2, double y2, double Wa, double Ha, double Wb, double Hb)
//{
//	// Для других точек 
//	//
//	double x3, y3; // A2
//	x3 = x1 + Wa;
//	y3 = Ha;
//	// 
//	double x4, y4; // A3
//	x4 = x1 + Wa;
//	y4 = y1 + Ha;
//	//
//	double x5, y5; // A4


	

	system("pause");
	return 0;
}


//
//double findeMaxIndex(double* m, int n, int& index) // m или [] 
//{
//	double max = m[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (m[i] > max) // Для 2 варианта >=     |  Для 1 варианта >
//		{
//			max = m[i];
//			index = i;
//		}
//	}
//	return max;
//}
//





double sumProzO(double* m, int n, double* S, double& P)
{

	*S = 0;
	P = 1;

	for (int i = 0; i < n; i++)
	{
		*S = *S + m[i]; //  *S = *S + (*(m + i));
		P = P * m[i]; //  P = P * (*(m + i));
	}
	return m[3]; // *(m + 3); 

	// *S = 0;
	// P = 1;

	//for (int i = 0; i < n; i++)
	//{
	//	*S = *S + m[i];
	//	P = P * m[i];
	//}
	//return (0 - *S); // return -(*s)

	/*double sum = 0, sum1= 1;
	for (int i = 0; i < n; i++)
	{
		sum = sum +mas[i];
	}

	for (int i = 0; i < n; i++)
	{
		sum1 = sum1 * mas[i];
	}
	double& s = sum1;
	
	return sum;*/

}