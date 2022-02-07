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
	srand(time(NULL));

	const int M = 29, N = 15;
	int array[M][N];
	//��� �������
	int a = 0;
	int b = 9;
	// ���� �������
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			array[i][j] = a + rand() % (b - a + 1);
		}
	}
	cout << endl;
	cout << "Show massive" << endl;
	// ����� �������
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << ' ' << array[i][j] << ' ' << ';' << ' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << "Show reverse massive" << endl;
	// ����� ������� reverse
	for (int i = M-1; i > -1; i--) // M-1 �����������
	{
		for (int j = N-1; j >= 0; j--) // N-1 �����������
		{
			cout << ' ' << array[i][j] << ' ' << ';' << ' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
