#include <iostream> // ��������� ������������� ����������� ����������� ����������
#include <cmath> // ��������� ������������� ����������� ���������� cmath ��� �������������� ��������
#include <Windows.h> // ��������� ������������� ����������� ���������� ��� ����������� ������ �� ������� � �������� ������ �� �������

using namespace std; // ����������� ������������ ����

int main() // ��������� � ����� ������� ������� main
{  // ������ ���� ������� main
	float c, x, rezult; // ���������� ���������� � ��� float (����� � ��������� ������)
	const int a = 3; // ���������� ���������� � ��� int (������������� �����) � �������� �� �������� const(���������)
	const int b = 6; // ���������� ���������� � ��� int (������������� �����) � �������� �� �������� const(���������)
	
	SetConsoleOutputCP(1251); // ������ �� ����� �������� ������ �� �������
	SetConsoleCP(1251);  // ������ �� ����� ������� ������ �� �������
	cout << "�� ������ ������ ��������� x^2 - a*x + b - c " << endl; // ����� �� ����� ��������� � ������� �� ������ ������

	cout << "������� �: ";  // ����� ��������� �� �����
	cin >> c; // �������������

	cout << "������� x: " ;  // ����� ��������� �� �����
	cin >> x; // �������������

	rezult = pow(x, 2)- a*x + b - c; // ���������� ���������� � ������������� ������ � ���������� rezult

	cout << "��� �����: " << rezult << endl;  // ����� ��������� � �������� ������ �� �����  


	system("pause"); // �������� ��������� (�����), ������� ��������� ��� ������� ����� ������� 
	return 0; // ����������� ��������, � ������ ������ 0 
} // ����� ���� ������� main 