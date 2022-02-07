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

	const int M = 3, N = 2;
	double array[M][N];
	// Ввод массива
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << "array[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}
	cout << endl;
	cout << "Print array" << endl;
	// Вывод массива
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << ' ' << array[i][j] << ' ' << '|' << ' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
