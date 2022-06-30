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

	int N, M;
	// 1
	cout << "����������� ������� �������: ";
	cin >> N;
	// 2
	cout << "����������� ������� �������: ";
	cin >> M;

	// 1
	int* A = new int[N]; // new - �������� ������� ������ ������� ��
	// �������� 
	if (A == NULL)
	{
		cout << "NO Memory\n";
		system("pause");
		return 0;
	}

	// ���������� ������� ������� A
	for (int i = 0; i < N;i++) // �� N
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	cout << endl;
	
	// ������ ��� ������� �(N) � �(M). ������ �� ������ ������� ������, ���������� ���������� ��������.	���������� ����� ��� �������� � ��� ���������� �����.
	////////////////////////////////////////////////////////////
	int min_1 = A[0], Index_min_1 = 0;
	// ���� ��� �������� ���������� �������� � ������� A
	for (int i = 0; i < N; i++)
	{
		// ����������� ����� ���� �������� �������� A[i]
		if (min_1 > A[i])
		{
			min_1 = A[i]; // ������� ���������� ������� � min_1
			Index_min_1 = i; // ������� ������ ����������� ��������
		}
	}
	////////////////////////////////////////////////////////////

	// 2
	int* B = new int[M]; // new - �������� ������� ������ ������� ��
	// �������� 
	if (B == NULL)
	{
		cout << "NO Memory\n";
		system("pause");
		return 0;
	}

	// ���������� ������� ������� B
	for (int i = 0; i < M; i++) // �� N
	{
		cout << "B[" << i << "]: ";
		cin >> B[i];
	}
	////////////////////////////////////////////////////////////
	int min_2 = B[0], Index_min_2 = 0;
	// ���� ��� �������� ����������� �������� � ������� B
	for (int i = 0; i < M; i++)
	{
		if (min_2 > B[i])
		{
			min_2 = B[i]; // ������� ���������� ������� � min_2
			Index_min_2 = i; // ������ ����������� ��������
		}
	}
	////////////////////////////////////////////////////////////
	cout << endl;
	// ��������� ���������� ��������� ������� A � B
	if (min_1 < min_2)
	{
		// 1
		cout << "min_1 - A[" << Index_min_1 << "]: " << min_1 << endl;
		for (int i = 0; i < N; i++)
		{
			cout << "A[" << i << "]: " << A[i] << ' ';
		}
		cout << endl;
		// 2
		for (int i = 0; i < M; i++)
		{
			cout << "B[" << i << "]: " << B[i] << ' ';
		}
		cout << endl;
	}
	else
	{

		if (min_1 == min_2)
		{
			cout << "������� �����: " << min_1 << endl;
		}
		else
		{
			cout << "min_2 - B[" << Index_min_2 << "]: " << min_2 << endl;
		}
		// 2
		for (int i = 0; i < M; i++)
		{
			cout << "B[" << i << "]: " << B[i] << ' ';
		}
		cout << endl;
		// 1
		for (int i = 0; i < N; i++)
		{
			cout << "A[" << i << "]: " << A[i] << ' ';
		}
		cout << endl;
	}

	// ����������� 
	// ������� ���������� 
	delete[] A; // 1
	A = NULL;
	
	// ����������� 
	// ������� ���������� 
	delete[] B; // 2
	B = NULL;

	system("pause");
	return 0;
}
