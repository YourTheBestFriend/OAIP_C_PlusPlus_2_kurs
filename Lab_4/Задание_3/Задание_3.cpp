#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a, b;
	cout << "������� ���-�� ��������� � ���.��� :";
	cin >> a;
	cout << "���-�� ��������� �� ����� " << a << " ���.��� " << endl;
	b = 57074;
	for (; a <= b; b--)
    {
		switch (b)
		{

		case 57074: // 57074
		{
			cout << "������: 57074\n";
			break;
		}
		case 56488: // 56488
		{
			cout << "��������������: 56488\n";
			break;
		}

		case 40000: // 40000
		{
			cout << "�������: 40000\n";
			break;
		}

		case 38600: // 38600
		{
			cout << "�������: 38600\n";
			break;
		}

		case 9900: //  9900
		{
			cout << "������:  9900\n";
			break;
		}

		case 8943: //  8943
		{
			cout << "��������: 8943\n";
			break;
		}

		case 7555: // 7555
		{
			cout << "�������: 7555\n";
			break;
		}

		case 5100: // 5100
		{
			cout << "�����: 5100\n";
			break;
		}

		case 3550: // 3550
		{
			cout << "��������: 3550\n";
			break;
		}
		case 2960: // 2960
		{
			cout << "�������: 2960\n";
			break;
		}
		case 2700: // 2700
		{
			cout << "������: 2700\n";
			break;
		}
		case 27: // 27
		{
			cout << "�����������: 27\n";
			break;
		}
		case 10: // 10
		{

			cout << "�������: 10\n";
			break;
		}

		}
	}


	system("pause");
	return 0;
}