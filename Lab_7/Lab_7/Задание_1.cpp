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

	const int M = 4, N=3;
	int array[M][N];
	cout << "���� �������� � ������: " << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << "array[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}
	cout << endl;
	// ����� �������
	cout << "������:" << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}
	// ����� �������� � 1 � 3 �������
	for (int i = 0;i<M;i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (array[i][j] > array[i][j+2])
			{
				int n = array[i][j];
				array[i][j] = array[i][j+2];
				array[i][j+2] = n;
			}
			break;
		}
		
	}
	cout << endl;
	// ���������� ������
	cout << "���������� ������ ���� �������� 1 ������� ������ 3:" << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}




//const int n = 93;
	//unsigned long long int otvet;
	//for (unsigned long int i = 2; i < n; i++)
	//{
	//	otvet = i -1 + i -2;
	//	cout << otvet << ' ';
	//}
	//cout << endl;


	/*const int n = 93;
	unsigned long long int array[n];
	array[0] = 0;
	array[1] = 1;
	for (int i = 2; i < n; i++)
	{
		array[i] = array[i - 2] + array[i - 1];
	}
	for (int i = 0;i < n; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;*/

	//srand(time(NULL)); // NULL - ���������� ��������� �� ����
	//const int n0 = 5;
	//int n = n0;
	//double Y[n0];
	//for (int i = 0; i < n0; i++)
	//{
	//	cout << "Y[" << i << "]: ";
	//	cin >> Y[i];

	//}
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "Y[" << i << "]: " << Y[i] << endl;
	//}
	//// ���� ��� �������� ������������� �����
	//for (int i = 0; i < n; i++)
	//{
	//	if (Y[i] < 0)
	//	{
	//		for (int j = i;j < n;j++)
	//		{
	//			Y[j] = Y[j+1];
	//		}
	//		n--; // ��� ���������� ������ ������� �������
	//		i--; // ��� ��������� ���� ��������� ������� ������������� 
	//		/*for (int j = i + 1; j < n; j++)
	//		{
	//			Y[j - 1] = Y[j];
	//		}
	//		n--;
	//		i--;*/
	//	}
	//}
	//cout << endl;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "Y[" << i << "]: " << Y[i] << endl;
	//}
