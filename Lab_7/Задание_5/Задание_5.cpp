#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	int n; // До чего
	const int M = 34, N = 9;
	int array[M][N];
	cout << "n: ";
	cin >> n;
	// Ввод массива	
	for (int i = 0; i < M; i++)
	{
		for (int j = 0, k = 10; j < N & k<=n; j++, k+=5)
		{
			array[i][j] = k;
		}
	}
	
	cout << "Print massive" << endl;
	// Вывод массива
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << ' ' << array[i][j] << ' ' << ';' << ' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << "Print new massive" << endl;
	// Вывод массива reverse
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << ' ' << array[i][j]-10 << ' ' << ';' << ' ';
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
