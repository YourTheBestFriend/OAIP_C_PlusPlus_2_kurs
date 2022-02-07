#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int funk_sum(int, int, int);
int funk(int, int, int);
int funk_sum_bez_rek(int b_1, int q, int n);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int b_1 = 1, q = 2, n; // b - ������ ����, q - �����������
	cout << "n: "; cin >> n;
	cout << n << " ���� ��������� = " << funk(b_1, q, n) << endl; // a)
	cout << "sum: " << funk_sum(b_1, q, n) << endl; // �)
	cout << "sum: " << funk_sum_bez_rek(b_1, q, n) << endl; // ��� ��������

	system("pause");
	return 0;
}

int funk_sum(int b_1, int q, int n) // Sum
{
	int sum = 0;
	for (int i = 1; i < n+1; i++) // n+1 - ������������
	{
		sum += funk(b_1, q, i); // ��� ����� ���� Sn = (bn*q � b1)/(q-1), ��� q �� ����� 1.
	}
	return sum;
}
int funk(int b_1, int q, int n) // N-��� ����
{
	double b_n = b_1 * pow(q, n - 1);
	return b_n;
}

// ���� ��� ��������
int funk_sum_bez_rek(int b_1, int q, int n)
{
	int sum = 0;
	for (int i = 0; i < n+1; i++)
	{
		sum += b_1 * pow(q, i - 1);
	}
	return sum;
}
