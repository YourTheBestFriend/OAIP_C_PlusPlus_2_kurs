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

	const int M = 4, N = 3;
	double array[M][N] ={	1.3, 3.4, 2.5,
							6.4, 4.3, 7.3,
							2.5, 7.1, 7.4,
							5.4, 1.5, 2.4	};
	
	cout << "array" << endl;
	// Вывод массива
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << ' ' << array[i][j] << ' ' << '|' << ' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << "New vision of array" << endl;
	// Вывод массива New vision of array
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i % 2 == 0 || j % 2 == 0)
			{
				cout << ' ' << array[i][j] << ' ' << '|' << ' ';
			}
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < M ; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << array[i][j] << '\t';
		}
		cout << '\n';
	}
	system("pause");
	return 0;
}
