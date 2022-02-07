#include <iostream>
#include <Windows.h>

using namespace std;

bool first_funk(long int*, int, int); // Прототип функции


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	int a, size_array = 5; // Переменная для сравнения 
	long int* array = new long int[size_array] {1, 2, 3, 4, 5};
	if (array == NULL) // Проверка на место в ДООП
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	cout << "Введите ваше число a: ";
	cin >> a;
	cout << first_funk(array, size_array, a) << endl;


	system("pause");
	return 0;
}

// Функция
bool first_funk(long int* array, int size_array, int a)
{
	int sum = 0;
	for (int i = 0; i < size_array; i++)
	{
		sum += array[i];
	}
	if (sum < a)
	{
		return true;
	}
	else
	{
		return false;
	}
}


