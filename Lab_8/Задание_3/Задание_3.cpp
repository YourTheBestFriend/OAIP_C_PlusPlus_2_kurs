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

	int N = 10;
	// 1
	int* A = new int[N]; // new - оператор который выдает область ОП
	// Проверка на свободное место в ОП
	if (A == NULL)
	{
		cout << "NO Memory\n";
		system("pause");
		return 0;
	}

	cout << "Массив на N = " << N << " элементов: " << endl;
	// Заполнение первого массива A 
	for (int i = 0; i < N; i++) // До N, в нашем случае до 10
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	cout << endl;

	/////////////////////////////////////////////////////////////
	// Нахождение минимального значения 
	int min = A[0], Index_min = 0; // Загвостка с min если написать просто min = 0, будет проблема с условием
	for (int i = 1; i < N; i++)
	{
		if (min > A[i])
		{
			min = A[i]; // Оно по сути и не нужно, я в конце работаю только с индексом
			Index_min = i;
		}
	}
	
	// Нахождение максимального значения 
	int max = A[0], Index_max = 0; // Можно написать просто max = 0, проблема с условием возникнет если надо будет найти наибольшее среди отрицательных
	for (int i = 1; i < N; i++)
	{
		if (max < A[i])
		{
			max = A[i]; // Оно по сути и не нужно, я в конце работаю только с индексом
			Index_max = i;
		}
	}

	// Смена значения местами в массиве
	int k = A[Index_min];
	A[Index_min] = A[Index_max];
	A[Index_max] = k;

	// Распечатаю массив для проверки
	for (int i = 0; i < N; i++)
	{
		cout << "A[" << i << "]: " << *(A + i) << endl; // Решил вывести с помощью Арифметики указателей
	}
	cout << "min и max поменяны:"<< endl;
	/////////////////////////////////////////////////////////////

	delete[] A; // ОБЯЗАТЕЛЬНО, если не сделать будет утечка памяти 
	A = NULL; // Очистим оперативку 

	system("pause");
	return 0;
}
