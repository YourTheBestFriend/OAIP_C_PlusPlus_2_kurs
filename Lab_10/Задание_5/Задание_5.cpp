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
	char s[100] = "�����������, ������ � �� �����!!!!"; // 34
	char* p = s;
	int flag = 0; // ��� ������ ������
	while (*p)//���� � != NULL
	{
		p++;
		flag++;
	}
	cout << "������ ������ = " << flag << endl;
	system("pause");
	return 0;
}
