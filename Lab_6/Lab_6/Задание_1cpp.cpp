#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int N = 20;
	int mas[N];
	int chetn=0, NEchetn=0;

	for (int i = 0; i < N; i++)
	{
		cout << "mas[" << i << "] ����: ";
		cin >> mas[i];
		if (mas[i] % 2 == 0)
		{
			chetn++;
		}
		else
		{
			NEchetn++;
		}
	}
	if (chetn > NEchetn)
	{
		cout << "������ ������." << endl;
	}
	else
	{
		if (chetn < NEchetn)
		{
			cout << "�������� ������." << endl;
		}
		else
		{
			cout << "������ ���������� ������ � ��������." << endl;
		}
	}
	system("pause");
	return 0;
}


