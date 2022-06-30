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

	int N;
	// 1
	cout << "����������� ������� �������: ";
	cin >> N;

	// 1
	int* A = new int[N]; // new - �������� ������� ������ ������� ��
	// �������� �� ��������� ����� � ��
	if (A == NULL)
	{
		cout << "NO Memory\n";
		system("pause");
		return 0;
	}

	// ���������� ������� ������� A
	for (int i = 0; i < N; i++) // �� N
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	cout << endl;

	/////////////////////////////////////////////////////////////
	// ����� ��������� �������, ������������� ����� ������ � ������ �������������� ���������� // ��� ������� {1, 2, -3, 4, 4, 4, -5, 5, 3} N = 9
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		// �������� �� ������������� �������
		if (A[i] < 0)
		{
			i+=1; // ����� ������ ������������� ����� �� ������� � �������� 
			for (;A[i] > 0; i++)
			{
				sum += A[i];
			}
		}
	}
	cout << "sum: " << sum << endl;
	/////////////////////////////////////////////////////////////

	// �����������, ���� �� ������� ����� ������ ������ 
	// ������� ���������� 
	delete[] A;
	A = NULL;

	system("pause");
	return 0;
}
