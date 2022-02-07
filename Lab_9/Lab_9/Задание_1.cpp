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
	int rows, cols;
	do
	{
		// row
		cout << "Размерность двумерного динамического массива rows: ";
		cin >> rows;
		// col
		cout << "Размерность двумерного динамического массива cols: ";
		cin >> cols;
	} while (rows <= 0 | cols <= 0);
	

	char** array = new char* [rows];

	if (array == NULL)
	{
		cout << "No memory\n";
		system("pause");
		return 0;
	}

	for (int i = 0; i < rows; i++)
	{
		array[i] = new char[cols];
		if (array[i] == NULL)
		{
			cout << "No memory\n";
			system("pause");
			return 0;
		}
	}
	/////////////////////////////////////////////
	// Заполнение массива
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "array[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}
	// Вывод массива
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << " ; ";
		}
		cout << endl;
	}

	/////////////////////////////////////////////
	// Удаление массива
	for (int i = 0; i < rows; i++)
	{
		delete[] array[i];
	}

	delete[] array;
	array = NULL;

	system("pause");
	return 0;
}
