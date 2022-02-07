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
	int rows = 10, cols = 10;

	int** m = new int* [rows];
	// �������� �� ������ ����
	if (m == NULL)
	{
		cout << "No memory\n";
		system("pause");
		return 0;
	}
	// �������� �� ������ ����
	for (int i = 0; i < rows; i++)
	{
		m[i] = new int[cols];
		if (m[i] == NULL)
		{
			cout << "No memory\n";
			system("pause");
			return 0;
		}
	}
	// ���������� �������
	for ( int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "m[" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
		cout << endl; // ����� �� ��������� 
	}
	///////////////////////////////////////////
	int sum = 0; // ��� �����
	bool flag = false; // ��� �������������� 
	cout << "������ ����� �������" << endl; // 1
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (m[i][j] < 0) // �������� �� ������������� �������
			{
				flag = true;
			}
			sum += m[i][j]; // ��������� �����
		}
		if (flag == true) // ���� � ������ ��� ������ 1 ������������� �������
		{
			cout << "���� ����� � ������ - " << i+1 << " sum = " << sum << endl; // i+1 ��� user friendly code 
		}
		else
		{
			cout << "���� ����� � ������ - " << i+1 << " �� ���������� �.� ��� ��� ������������� ���������" << endl;
		}
		sum = 0; // �������� ��� ����. ������
		flag = false; // �� ������ ��� ����
	}
	///////////////////////////////////////////

	// ����� �������
	cout << "your massiv" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << m[i][j] << " | ";
		}
		cout << endl;
	}
	/////////////////////////////////////////////
	cout << "������ ����� �������" << endl; // 2
	int min_num_in_row = m[0][0], index_min_num_in_row = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (min_num_in_row > m[i][j]) // ���� ������ ��������������
			{
				min_num_in_row = m[i][j]; // ����� ����������� ������� � i-��� ������
				index_min_num_in_row = j; //��� ���������� �������� ����� �������
			}
		}
		// �������� �� max �� ��������  min_num_in_row � j-��� �������
		bool flag = true; // ��� �������� �� max ��� � �������
		for (int j = 0; j < rows; j++) // ���������� ������ ������ �������
		{
			// ����� j ��������� � ���� ������, index_min_num_in_row - ������� ������� �� ����������
			if (min_num_in_row < m[j][index_min_num_in_row]) // ������ �� �������� �������� ������
			{
				flag = false;
				break;
			}
		}
		if (flag == true)
		{
			//+1 ��� user friendly code
			cout << "���� ����� A c ����������� i = " << i+1 << " j = " << index_min_num_in_row+1 << " �������� = " << min_num_in_row << " �������� C�������" << endl;
		}
		else
		{
			// +1 ��� user friendly code
			cout << "���� ����� A c ����������� i = " << i+1 << " j = " << index_min_num_in_row+1 << " �������� = " << min_num_in_row << " ������� ������������� ��� ��� ��������" << endl;
		}
		// ������� ����� ��� �������� � ������� flag
		min_num_in_row = m[i][0];
		flag = true;
		cout << endl;
	}
	/////////////////////////////////////////////
	// �������� �������
	for (int i = 0; i < rows; i++)
	{
		delete[] m[i];
	}

	delete[] m;
	m = NULL;

	system("pause");
	return 0;
}
