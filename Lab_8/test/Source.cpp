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

	int* A = new int[N]; // new - �������� ������� ������ ������� ��
	// �������� 
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

	////////////////////////////////////////////////////////////
	int min_1 = 0, Index_min_1 = 0;
	// ���� ��� �������� ����������� �������� � ������� A
	for (int i = 0; i < N; i++)
	{
		// ����������� ����� ���� �������� �������� A[i] 
		if (A[i] < min_1)
		{
			min_1 = A[i];
			Index_min_1 = i;	
		}
	}
	cout << "min_1 - A[" << Index_min_1 << "]: " << min_1 << endl;


	////////////////////////////////////////////////////////////

	// �����������
	// ������� ���������� 
	delete[] A;
	A = NULL;


	system("pause");
	return 0;
}
