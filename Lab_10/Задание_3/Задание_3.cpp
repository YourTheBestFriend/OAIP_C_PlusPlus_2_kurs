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
	
	const int size_rows = 20; // Размерность массива по строкам 
 	const int size_cols = 5; // Размерность массива по столбцам
	// Мой массив
	int m[size_rows][size_cols] = { 16, 78, 99, 6, -29,
									19, -52, 65, -88, 51,
									-79, -22, 32, -25, -62,
									-69, -2, -59, -75, 89,
									-87, 95, -22, 85, -49, 
									-75, 76, 73, -59, -52,
									30, 49, -28, -48, 0,
									57,	-6, -85, 0, -18, 
									-97, -21, -95, 64, 22,
									-2, 69, -84, -1, -71, 
									-25, 47, 72, 43, 15,
									-44, 44, 61, 4, 74,
									88,-61, 0, -64, -83, 
									97, 0, 90, 15, 8,
									-54, 19, 73, 35, -67, 
									-87, 85, -99, -70, 10,
									98, 58, -10, -29, 95,
									62, 77, 89, 36, -32,
									78, 60, -79, -18, 30,
									-13, -34, -92, 1, -38 };

	int min = m[0][0], max = m[0][0]; // Буду стравниват с первым элементом массива и проверять на min max
	int* pMin; // Указатель для min
	int* pMax; // Указатель для max
	pMin = &min;
	pMax = &max;

	for (int i = 0; i < size_rows; i++) // 
	{
		for (int j = 0; j < size_cols; j++) // 
		{
			if (*pMin > m[i][j]) // Проверка на min
			{
				*pMin = m[i][j];
			}
			if (*pMax < m[i][j]) // Проверка на max
			{
				*pMax = m[i][j];
			}
		}
	}
	
	// Вывожу min и max
	cout << "min: " << *pMin << endl;
	cout << "max: " << *pMax << endl;

	system("pause");
	return 0;
}
