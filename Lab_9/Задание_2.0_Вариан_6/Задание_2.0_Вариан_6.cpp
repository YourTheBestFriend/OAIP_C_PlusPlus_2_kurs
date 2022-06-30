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
	int rows = 10, cols = 10;

	int** m = new int* [rows];
	// Проверка на местов ДООП
	if (m == NULL)
	{
		cout << "No memory\n";
		system("pause");
		return 0;
	}
	// Проверка на местов ДООП
	for (int i = 0; i < rows; i++)
	{
		m[i] = new int[cols];
		if (m[i] == NULL)
		{
			cout << "No memory\n";
			system("pause");
			return 0;
		}
	}
	// Заполнение массива
	for ( int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "m[" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
		cout << endl; // Чтобы не слипалось 
	}
	///////////////////////////////////////////
	int sum = 0; // Для суммы
	bool flag = false; // Для отрицательного 
	cout << "Первая часть задания" << endl; // 1
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (m[i][j] < 0) // Проверка на отрицательный элемент
			{
				flag = true;
			}
			sum += m[i][j]; // Нарашиваю сумму
		}
		if (flag == true) // Если в строке был хотябы 1 отрицательный элемент
		{
			cout << "Ваша сумма в строке - " << i+1 << " sum = " << sum << endl; // i+1 Для user friendly code 
		}
		else
		{
			cout << "Ваша сумма в строке - " << i+1 << " не определена т.к там нет отрицательных элементов" << endl;
		}
		sum = 0; // Обнуляем для след. строки
		flag = false; // Не забыть про флаг
	}
	///////////////////////////////////////////

	// Вывод массива
	cout << "your massiv" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << m[i][j] << " | ";
		}
		cout << endl;
	}
	/////////////////////////////////////////////
	cout << "Вторая часть задания" << endl; // 2
	int min_num_in_row = m[0][0], index_min_num_in_row = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (min_num_in_row > m[i][j]) // Если меньше перезаписываем
			{
				min_num_in_row = m[i][j]; // Нашел минимальный элеиент в i-той строке
				index_min_num_in_row = j; //Для дальнейшей проверки этого столбца
			}
		}
		// Проверка на max по значению  min_num_in_row в j-том столбце
		bool flag = true; // для проверки на max уже в столбце
		for (int j = 0; j < rows; j++) // Увеличение строки тогоже столбца
		{
			// Сдесь j выступает в роли строки, index_min_num_in_row - столбец который не изменяется
			if (min_num_in_row < m[j][index_min_num_in_row]) // Значит не является седловой точкой
			{
				flag = false;
				break;
			}
		}
		if (flag == true)
		{
			//+1 Для user friendly code
			cout << "Ваша точка A c параметрами i = " << i+1 << " j = " << index_min_num_in_row+1 << " Значение = " << min_num_in_row << " является Cедловой" << endl;
		}
		else
		{
			// +1 Для user friendly code
			cout << "Ваша точка A c параметрами i = " << i+1 << " j = " << index_min_num_in_row+1 << " Значение = " << min_num_in_row << " которая подозревалась что она Седловая" << endl;
		}
		// Главное потом все занулить и вернуть flag
		min_num_in_row = m[i][0];
		flag = true;
		cout << endl;
	}
	/////////////////////////////////////////////
	// Удаление массива
	for (int i = 0; i < rows; i++)
	{
		delete[] m[i];
	}

	delete[] m;
	m = NULL;

	system("pause");
	return 0;
}
