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

	int N = 10;
	// 1
	int* A = new int[N]; // new - �������� ������� ������ ������� ��
	// �������� �� ��������� ����� � ��
	if (A == NULL)
	{
		cout << "NO Memory\n";
		system("pause");
		return 0;
	}

	cout << "������ �� N = " << N << " ���������: " << endl;
	// ���������� ������� ������� A 
	for (int i = 0; i < N; i++) // �� N, � ����� ������ �� 10
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	cout << endl;

	/////////////////////////////////////////////////////////////
	// ���������� ������������ �������� 
	int min = A[0], Index_min = 0; // ��������� � min ���� �������� ������ min = 0, ����� �������� � ��������
	for (int i = 1; i < N; i++)
	{
		if (min > A[i])
		{
			min = A[i]; // ��� �� ���� � �� �����, � � ����� ������� ������ � ��������
			Index_min = i;
		}
	}
	
	// ���������� ������������� �������� 
	int max = A[0], Index_max = 0; // ����� �������� ������ max = 0, �������� � �������� ��������� ���� ���� ����� ����� ���������� ����� �������������
	for (int i = 1; i < N; i++)
	{
		if (max < A[i])
		{
			max = A[i]; // ��� �� ���� � �� �����, � � ����� ������� ������ � ��������
			Index_max = i;
		}
	}

	// ����� �������� ������� � �������
	int k = A[Index_min];
	A[Index_min] = A[Index_max];
	A[Index_max] = k;

	// ���������� ������ ��� ��������
	for (int i = 0; i < N; i++)
	{
		cout << "A[" << i << "]: " << *(A + i) << endl; // ����� ������� � ������� ���������� ����������
	}
	cout << "min � max ��������:"<< endl;
	/////////////////////////////////////////////////////////////

	delete[] A; // �����������, ���� �� ������� ����� ������ ������ 
	A = NULL; // ������� ���������� 

	system("pause");
	return 0;
}
