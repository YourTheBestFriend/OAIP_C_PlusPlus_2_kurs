#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int second_funk(long int*, int, int*, double, int); // �������� �������


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int size_array = 5; // ���������� ��� ��������� 
	long int* array = new long int[size_array] {1, -2, 3, -4, 5};	
	// ��� �������� ���������� ��������
	int sum = 0, natural_num = 0; double proizv = 1; // ����������
	int* pSum = &sum; // ���������
	double& rProizv = proizv; // ������

	if (array == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	cout << "���-�� ������������� �����: " << second_funk(array, size_array, pSum, rProizv, natural_num) << endl;
	cout << "����� ���������: " << *pSum << endl; // ��������� ���������
	cout << "������������ ���������� ������ ���������: " << rProizv << endl; // ��������� ������
	system("pause");
	return 0;
}

// �������
int  second_funk(long int* array, int size_array, int* pSum, double rProizv, int natural_num)
{
	for (int i = 0; i < size_array; i++) // ����
	{
		*pSum+= array[i];
		rProizv *= sqrt(array[i]);
		if (array[i] > 0)
		{
			natural_num++;
		}
	}
	return natural_num;
}


