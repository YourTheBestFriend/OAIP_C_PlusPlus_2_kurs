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


	// Мой массив
	char m[3][2][2] = {};
	// Писвоение рандомно от A до Z 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				m[i][j][k] = 65 + rand() % 26; // (90-65+1) т.к char 'A', 'Z' - это 65 и 90 в int
			}
		}
	}
	int flag = 0; // Для каждого третьего
	int num_v = 0;// флаг для значения v

	// Печатаю для проверки весь массив
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << "m[" << i + 1 << "][" << j + 1 << "][" << k + 1 << "]: " << m[i][j][k] << ' '; // +1 для user friendly code
			}
			cout << endl;
		}
		cout << endl;
	}

	// Печать Каждый третий
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++, flag++)
			{
				if (flag % 3 == 0) // Каждый третий 
				{
					cout << "m[" << i + 1 << "][" << j + 1 << "][" << k + 1 << "]: " << m[i][j][k] << ' '; // +1 для user friendly code

					if (m[i][j][k] == 'V') // Проверка внутри т.к надо было распечатать конктретно из этой строки (каждый третий)
					{
						num_v += 1; // Увелличиваю кол-во V если оно есть
					}
				}
			}
		}
	}
	cout << "\nКол-во V: " << num_v << endl;
	system("pause");
	return 0;
}
