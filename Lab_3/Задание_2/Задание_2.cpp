/* ���� � ����� ��� ���������� (x � y) ������������, �� ��� ����������� ������ ��������.
���� ���������� x ������������, � y ������������, �� ����� ��������� �� ������ ��������.
���� ��� ���������� ������������, �� ����� ����������� ������� ������������ ��������.
���� x ������������, � y ������������, �� ����� ��������� � IV ��������.*/
#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, y, A;
	string chetvert;
	cout << "���� A(x, y) -- ���������� �������� � ����� �������� ��������� ����������:\n";
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;

	if (x >= 0 & y >= 0)
	{
		chetvert = "I";
	}
	else
	{
		if (x < 0 & y >= 0)
		{
			chetvert = "II";
		}
		else
		{
			if (x < 0 & y < 0)
			{
				chetvert = "III";
			}
			else 
			{
				if (x >= 0 & y < 0)
				{
					chetvert = "IV";
				}
				else
				{
					cout << "������" << endl;
				}
			}

		}
	}
	cout << "���� ���������� ��������� � : " << chetvert << " ��������\n" ;

	system("pause");
	return 0;
}



