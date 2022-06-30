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

	const int M = 2, N = 3;
	char array[M][N] = {'!','@','#','$','%','^'};
	// Вывод массива
	cout << "Массив:" << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << array[i][j] << '\t';
		}
		cout << endl;
	} 
	system("pause");
	return 0;
}
