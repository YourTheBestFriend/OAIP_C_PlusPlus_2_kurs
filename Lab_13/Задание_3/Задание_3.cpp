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
	int colvo_prob = 0, bez_prob;
	int s_prob = strlen(s); // ������ � ���������
	for (int i = 0; i < strlen(s)+1; i++)
	{
		if (s[i] == ' ')
		{
			colvo_prob++;
		}
	}
	bez_prob = s_prob - colvo_prob;
	cout << bez_prob <<endl;
	system("pause");
	return 0;
}
