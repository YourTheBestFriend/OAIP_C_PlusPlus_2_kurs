#define _CRT_SECURE_NO_WARNINGS // ��� ���������� ������ ������� ������ � ��������� � ��������
#include <iostream>
#include <string.h> // ��� ��������� �����
#include <ctype.h> // ��� �������� ��������
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// setlocale(LC_ALL, "ru");
	const int size = 100;
	char s[size];
	cout << "Print your string: "; cin.getline(s, size);
	if (strlen(s) % 3 == 0) // ���� ������ ������ ������ 3 
	{
		for (int i = 0; i < strlen(s)+1; i++)
		{
			cout << isdigit(s[i]) << endl;
			if (isdigit(s[i]) == sizeof(int)) // ���� ��� ������� �����     (isdigit(s[i]) - �������� �� ���������� true ��� false, ���� ���� ������ �� - 0 ������� ��� ��� false, � ����� ������ ����� ��� true)
			{
				if (s[i] % 3 == 0)
				{
					s[i] = s[i + 1]; // ������������� ������, ��� �������� � ������ ����� erase(s,1) ��� erase(s[i])
				}
			}
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}
