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


	// ��� ������
	char m[3][2][2] = {};
	// ��������� �������� �� A �� Z 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				m[i][j][k] = 65 + rand() % 26; // (90-65+1) �.� char 'A', 'Z' - ��� 65 � 90 � int
			}
		}
	}
	int flag = 0; // ��� ������� ��������
	int num_v = 0;// ���� ��� �������� v

	// ������� ��� �������� ���� ������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << "m[" << i + 1 << "][" << j + 1 << "][" << k + 1 << "]: " << m[i][j][k] << ' '; // +1 ��� user friendly code
			}
			cout << endl;
		}
		cout << endl;
	}

	// ������ ������ ������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++, flag++)
			{
				if (flag % 3 == 0) // ������ ������ 
				{
					cout << "m[" << i + 1 << "][" << j + 1 << "][" << k + 1 << "]: " << m[i][j][k] << ' '; // +1 ��� user friendly code

					if (m[i][j][k] == 'V') // �������� ������ �.� ���� ���� ����������� ���������� �� ���� ������ (������ ������)
					{
						num_v += 1; // ����������� ���-�� V ���� ��� ����
					}
				}
			}
		}
	}
	cout << "\n���-�� V: " << num_v << endl;
	system("pause");
	return 0;
}
