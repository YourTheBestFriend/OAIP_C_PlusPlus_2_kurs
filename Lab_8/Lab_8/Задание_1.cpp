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

	int N, M;
	// 1
	cout << "Размерность первого массива: ";
	cin >> N;
	// 2
	cout << "Размерность второго массива: ";
	cin >> M;

	// 1
	int* A = new int[N]; // new - оператор который выдает область ОП
	// Проверка 
	if (A == NULL)
	{
		cout << "NO Memory\n";
		system("pause");
		return 0;
	}

	// Заполнение первого массива A
	for (int i = 0; i < N;i++) // До N
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	cout << endl;
	
	// Заданы два массива А(N) и В(M). Первым на печать вывести массив, содержащий наименьшее значение.	Напечатать также это значение и его порядковый номер.
	////////////////////////////////////////////////////////////
	int min_1 = A[0], Index_min_1 = 0;
	// Цикл для проверки наиеньшего значения в массиве A
	for (int i = 0; i < N; i++)
	{
		// Перезапишем число если значение элемента A[i]
		if (min_1 > A[i])
		{
			min_1 = A[i]; // Запишем наименьшее значени в min_1
			Index_min_1 = i; // Запишем индекс наименьшего элемента
		}
	}
	////////////////////////////////////////////////////////////

	// 2
	int* B = new int[M]; // new - оператор который выдает область ОП
	// Проверка 
	if (B == NULL)
	{
		cout << "NO Memory\n";
		system("pause");
		return 0;
	}

	// Заполнение второго массива B
	for (int i = 0; i < M; i++) // До N
	{
		cout << "B[" << i << "]: ";
		cin >> B[i];
	}
	////////////////////////////////////////////////////////////
	int min_2 = B[0], Index_min_2 = 0;
	// Цикл для проверки найиеньшего значения в массиве B
	for (int i = 0; i < M; i++)
	{
		if (min_2 > B[i])
		{
			min_2 = B[i]; // Запишем наименьшее значени в min_2
			Index_min_2 = i; // Индекс наименьшего элемента
		}
	}
	////////////////////////////////////////////////////////////
	cout << endl;
	// Сравнение наименьших элементов массива A и B
	if (min_1 < min_2)
	{
		// 1
		cout << "min_1 - A[" << Index_min_1 << "]: " << min_1 << endl;
		for (int i = 0; i < N; i++)
		{
			cout << "A[" << i << "]: " << A[i] << ' ';
		}
		cout << endl;
		// 2
		for (int i = 0; i < M; i++)
		{
			cout << "B[" << i << "]: " << B[i] << ' ';
		}
		cout << endl;
	}
	else
	{

		if (min_1 == min_2)
		{
			cout << "Индексы равны: " << min_1 << endl;
		}
		else
		{
			cout << "min_2 - B[" << Index_min_2 << "]: " << min_2 << endl;
		}
		// 2
		for (int i = 0; i < M; i++)
		{
			cout << "B[" << i << "]: " << B[i] << ' ';
		}
		cout << endl;
		// 1
		for (int i = 0; i < N; i++)
		{
			cout << "A[" << i << "]: " << A[i] << ' ';
		}
		cout << endl;
	}

	// ОБЯЗАТЕЛЬНО 
	// Очистим оперативку 
	delete[] A; // 1
	A = NULL;
	
	// ОБЯЗАТЕЛЬНО 
	// Очистим оперативку 
	delete[] B; // 2
	B = NULL;

	system("pause");
	return 0;
}
