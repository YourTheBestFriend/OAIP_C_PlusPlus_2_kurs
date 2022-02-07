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

	srand(time(NULL)); // NULL - войдовский указатель на ноль
	const int N = 1300;
	int massiv[N];
	
	// Для рандома от и до 
	int a = 41, b=51, x;

	for (int i = 0; i < N; i++)
	{
		x = a + rand() % (b - a + 1); // Формула рандома
		massiv[i] = x;
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << massiv[i] << ' ';
	}
	cout << endl;
	for (int i = 1065; i < 1270; i++)
	{
		cout << massiv[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}


