#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int second_funk(long int*, int, int*, double, int); // Прототип функции


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int size_array = 5; // Переменная для сравнения 
	long int* array = new long int[size_array] {1, -2, 3, -4, 5};	
	// Для возврата нескольких значений
	int sum = 0, natural_num = 0; double proizv = 1; // Переменные
	int* pSum = &sum; // Указатель
	double& rProizv = proizv; // Ссылка

	if (array == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	cout << "Кол-во положительнвх чисел: " << second_funk(array, size_array, pSum, rProizv, natural_num) << endl;
	cout << "Сумма элементов: " << *pSum << endl; // Благодаря указателю
	cout << "Произвеление квадратных корней элементов: " << rProizv << endl; // Благодаря ссылке
	system("pause");
	return 0;
}

// Функция
int  second_funk(long int* array, int size_array, int* pSum, double rProizv, int natural_num)
{
	for (int i = 0; i < size_array; i++) // Цикл
	{
		*pSum+= array[i];
		rProizv *= sqrt(array[i]);
		if (array[i] > 0)
		{
			natural_num++;
		}
	}
	return natural_num;
}


