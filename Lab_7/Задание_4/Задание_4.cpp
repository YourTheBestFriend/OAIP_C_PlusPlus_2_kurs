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

	const int M = 29, N = 15;
	int array[M][N];
	//Для рандома
	int a = 0;
	int b = 9;
	// Ввод массива
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			array[i][j] = a + rand() % (b - a + 1);
		}
	}
	cout << endl;
	cout << "Show massive" << endl;
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
	cout << "Show reverse massive" << endl;
	// Вывод массива reverse
	for (int i = M-1; i > -1; i--) // M-1 обязательно
	{
		for (int j = N-1; j >= 0; j--) // N-1 обязательно
		{
			cout << ' ' << array[i][j] << ' ' << ';' << ' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
