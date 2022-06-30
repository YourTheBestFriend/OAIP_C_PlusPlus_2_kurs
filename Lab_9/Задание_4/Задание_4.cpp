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

	int n1; // Инициализация массива элементами до n
	do
	{
		cout << "Не меньше 97 n1: " << endl;
		cin >> n1;
	} while (n1 < 97); // Меньше 97 быть не может т.к идет заполнение от начала (от 97)  

	int** array = new int* [rows];

	if (array == NULL)
	{
		cout << "No memory\n";
		system("pause");
		return 0;
	}

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
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
			for (int k = 97; k < n1; k+10)
			{
				array[i][j] = k;
			}
		}
	}
	// Вывод массива
	cout << "Print massiv" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << ' ';
		}
		cout << endl;
	}
	// Заполнение массива c возведением в квадрат
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			array[i][j] = pow(array[i][j], 2);
		}
	}
	// Вывод измененного массива
	cout << "Print new massiv" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << ' ';
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
