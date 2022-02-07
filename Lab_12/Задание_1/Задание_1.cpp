#include <iostream>
#include "Headergoncharov.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	long double size_rows, size_cols;
	do
	{
		cout << "¬ведите размерность массива rows: ";
		cin >> size_rows;
		cout << "¬ведите размерность массива cols: ";
		cin >> size_cols;
	} while (size_rows <= 0 | size_cols < 0);

	long double** array = new long double* [size_rows];
	// 1
	cout << sozdanie_mas(size_rows, size_cols, array) << endl;
	// 2
	cout << sum_sqrt_diagonal(size_rows, size_cols, array) << endl;
	// 3
	cout <<  proizv_vne_diagonal(size_rows, size_cols, array) << endl;
	// 4
	int min = array[0][0];
	int* pMin = &min; // ƒл€ min
	cout << "max: " << max_min_x_p(size_rows, size_cols, array, pMin) << endl;
	cout << "min: " << *pMin << endl;
	// 5
	cout << num_massiv_men_sred_arifm(size_rows, size_cols, array) << endl;

	system("pause");
	return 0;
}
