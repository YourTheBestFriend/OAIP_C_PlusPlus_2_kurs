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

	int N;
	// 1
	cout << "Размерность первого массива: ";
	cin >> N;

	// 1
	int* A = new int[N]; // new - оператор который выдает область ОП
	// Проверка на свободное место в ОП
	if (A == NULL)
	{
		cout << "NO Memory\n";
		system("pause");
		return 0;
	}

	// Заполнение первого массива A
	for (int i = 0; i < N; i++) // До N
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	cout << endl;

	/////////////////////////////////////////////////////////////
	// Сумму элементов массива, расположенных между первым и вторым отрицательными элементами // для примера {1, 2, -3, 4, 4, 4, -5, 5, 3} N = 9
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		// Проверка на отрицательный элемент
		if (A[i] < 0)
		{
			i+=1; // Чтобы первое отрицательное число не входило в диапазон 
			for (;A[i] > 0; i++)
			{
				sum += A[i];
			}
		}
	}
	cout << "sum: " << sum << endl;
	/////////////////////////////////////////////////////////////

	// ОБЯЗАТЕЛЬНО, если не сделать будет утечка памяти 
	// Очистим оперативку 
	delete[] A;
	A = NULL;

	system("pause");
	return 0;
}
