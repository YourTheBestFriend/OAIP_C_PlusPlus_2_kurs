#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x;
	cout << "x: ";
	cin >> x;
	
	for (int y = x; x >= 0; x--)
	{
		if (x == 0)
		{
			cout << "��������: 0 - �� ���� ������ ������ ������ �� �� �������� ���������" << endl;
			break;
		}
		if (y % x == 0)
		{
			cout << "��������: " << x << endl;
		}
	}
	cout << "���� ��������" << endl;

	system("pause");
	return 0;
}