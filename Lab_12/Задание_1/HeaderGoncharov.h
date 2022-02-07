#pragma once /* что является директивой препроцессору, указывающей, что при повторении кода в этом файле и других (например,
строки подключения библиотек, определения функций и их описания(прототипы)), следует считать данные функции,
прототипы и т.д.как определенные единожды(определенные в программе только один раз).
*/
#include <iostream>
#include <cmath>
using namespace std;

// 11111111
long double** sozdanie_mas(long double, long double, long double**);
// 22222222
long double sum_sqrt_diagonal(long double, long double, long double**);
// 33333333
long double proizv_vne_diagonal(long double, long double, long double**);
// 44444444
long double max_min_x_p(long double, long double, long double**, int*);
// 55555555
long double num_massiv_men_sred_arifm(long double, long double, long double**);



// 11111111111
long double** sozdanie_mas(long double size_rows, long double size_cols, long double** array)
{
	if (array == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < size_rows; i++)
	{
		array[i] = new long double[size_cols];
		if (array[i] == NULL)
		{
			cout << "No Memory" << endl;
			system("pause");
			return 0;
		}
	}
	////////////////
	for (int i = 0; i < size_rows; i++)
	{
		for (int j = 0; j < size_cols; j++)
		{
			cout << "array[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}
}

// 22222222222
long double sum_sqrt_diagonal(long double size_rows, long double size_cols, long double** array)
{
	long double sum = 0;
	for (int i = 0; i < size_rows; i++)
	{
		for (int j = 0; j < size_cols; j++)
		{
			if (i == j & array[i][j] > 0) //Если элемент на гдавной диагонали положительный
			{
				sum += sqrt(array[i][j]); // Сумма корней на главной диагонали
			}
		}
	}
	return sum;
}
// 33333333333333333
long double proizv_vne_diagonal(long double size_rows, long double size_cols, long double** array)
{
	double proizv = 1;
	for (int i = 0; i < size_rows; i++)
	{
		for (int j = 0; j < size_cols; j++)
		{
			if (i == j) //Если элемент на гдавной диагонали положительный
			{
				continue;
			}
			if (array[i][j] < sum_sqrt_diagonal(size_rows, size_cols, array)) // Если элемент меньше суммы главной диагонали массива 
			{
				proizv *= array[i][j];
			}
		}
	}
	return proizv;
}
// 44444444444444444
long double max_min_x_p(long double size_rows, long double size_cols, long double** array, int* pMin)
{
	int x, p; // От и до для min, max
	cout << "от x: ";
	cin >> x;
	cout << "до p: ";
	cin >> p;

	int max = array[0][0];
	
	for (int i = 0; i < size_rows; i++)
	{
		for (int j = 0; j < size_cols; j++)
		{
			if (array[i][j] > x & array[i][j] < p) // Если входят в диапазон от x до p
			{
				if (*pMin > array[i][j]) // min
				{
					*pMin = array[i][j];
				}
				if (max < array[i][j]) // max
				{
					max = array[i][j];
				}
			}
		}
	}
	return max;
}
// 555555555
long double num_massiv_men_sred_arifm(long double size_rows, long double size_cols, long double** array)
{
	int sredn_arifm = 0;
	for (int i = 0; i < size_rows; i++)
	{
		for (int j = 0; j < size_cols; j++)
		{
			sredn_arifm += array[i][j];
		}
	}
	int znach = 0;
	for (int i = 0; i < size_rows; i++)
	{
		for (int j = 0; j < size_cols; j++)
		{
			if (array[i][j] < (sredn_arifm / (size_rows*size_cols)) & !(i + j == 0)) // Меньше среднего арифм. всех значений и не принадлеж к главной диагонали
			{
				znach++;
			}
		}
	}
	return znach;
}

