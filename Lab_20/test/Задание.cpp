#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;
bool my_funk(int*, int,const int);
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char file[] = "ArrayTest.txt";
	ofstream f(file, ios::app);
	if (!f)
	{
		cout << "Error\n";
		return 0;
	}
	const int n = 10;
	int x = 3;
	int array[n] = {0, 1, 2, 3, 4, 7, 7, 7, 7, 7};
	for (int i = 0; i < n; i++)
	{
		if (my_funk(array, x ,n))
		{
			f << array[i] << ' ';
		}
	}
	_fcloseall();


	/*int array[10];
	ifstream f("test.txt", ios::in);
	if (!f)
	{
		cout << "Error\n";
	}
	int x;
	f >> x;
	while (!f.eof())
	{
		for (int i = 0; i < 10; i++)
		{
			array[i] = x;
			f >> x;
		}
	}
	
	
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
	cout << "\n*************\n";*/


	//ifstream rt1("t.txt", ios::in);
	//ofstream wt2("t2.txt", ios::out);
	//int size = 10;
	//int* array = new int[size];
	//if (!rt1)
	//{
	//	cout << "Error\n";
	//	return 0;
	//}
	//if (!wt2)
	//{
	//	cout << "Error\n";
	//	return 0;
	//}
	//int x, i = 0;
	//rt1 >> x;
	//while (!rt1.eof())
	//{
	//	array[i++] = x;
	//	rt1 >> x;
	//}
	//wt2 << x << ' '; // Для записи первого элемента
	//for (int i = 0; i < size; i++)
	//{
	//	rt1 >> x;
	//	//wt2 << x << ' ';
	//	if (my_funk(array, x, size))
	//	{
	//		wt2 << x << ' ';
	//	}
	//}


	//for (int i = 0; i < size; i++)
	//{
	//	cout << "array[" << i+1 << "]: "<< array[i] << endl;
	//}

	//cout << "\nSTOP\n";
	//_fcloseall(); // Закрытие всех потоков (файлов)
	//cout << "Запись в файл окончена\n";
	system("pause");
	return 0;
}

bool my_funk(int* array, int x, const int n)
{

	for (int i = 0; i < n; i++)
	{
		if (array[i]== x)
		{
			return false; // Значит есть похожий элемент
		}
	}
	return true; // Значит нет похожего элемента

}
