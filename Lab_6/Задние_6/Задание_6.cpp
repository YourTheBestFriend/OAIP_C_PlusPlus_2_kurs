#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int N = 10;
	int vector[N];

	for (int i = 0; i < N; i++)
	{
		cout << "vector[" << i << "] ����: ";
		cin >> vector[i];
	}
	cout << endl;
	for (int i = 1; i < N; i++) // i = 1, �.� �� �� ������� 2 � �� ��������
	{
		cout << "vector[" << i << "] = " << vector[i] << endl;
	}
	int sum = 0, Promezh_sum;
	for (int i = 0; i < N; i++)
	{
		if (vector[i] % 2 != 0)
		{
			sum += vector[i];
		}
	}
	cout << "���� ����� = " << sum << " ��� (vector[i] % 2 != 0) " << endl;

	int sum_ = 0;
	int schet = 0;
	for (int i = 0; i < N; i++)
	{
		if (i % 5 == 0)
		{
			schet++;
			sum_ += vector[i];
		}
	}
	double otvet = (double)sum_ / schet;
	cout << "Sred: " << otvet << endl;
		



	system("pause");
	return 0;
}


