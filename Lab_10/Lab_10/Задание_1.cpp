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

	bool my_num; // ������ ��������� ����������
	bool* pMy_num = &my_num; // ������ ���������
	bool& rMy_num = my_num; // ������ ������
	cout << "����� ���������� � ��������� pMy_num: " << pMy_num << " �������� ������: " << *pMy_num << endl; // *pMy_num - ������������� �����
	cout << "����� ������� �������� � ������ rMy_num: " << &rMy_num << endl; // ������� ����� �������� �� ������
	my_num = true; // �������� �������� ������
	
	// ������ ��������� 
	cout << "��������: " << my_num << endl; // �� ����������
	cout << "��������: " << *pMy_num << endl; // �� ���������
	cout << "��������: " << rMy_num << endl; // �� ������
	
	// ���������� ���������� �������� �������� (��� �������� �������� 3 ����)
	my_num = !my_num; // �� ����������
	*pMy_num = !(*pMy_num); // �� ���������
	rMy_num = !(rMy_num); // �� ������
	
	// ������ ��������� 
	cout << "��������: " << my_num << endl; // �� ����������
	cout << "��������: " << *pMy_num << endl; // �� ���������
	cout << "��������: " << rMy_num << endl; // �� ������

	system("pause");
	return 0;
}
