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

	srand(time(NULL));
	// (1. ���� �� � ���� ���� ������ � ��� �� ���������? ��� ����� �������� �� �����?)
	/*int* a;
	int b[2];
	a = b;
	b[0] = 7;
	b[1] = 10;
	a + 1;
	cout << *a;*/
	// �����:  ������ ���, ����� 7
	
	/////
	cout << "\n$$$$$$$" << endl;
	/////
	
	// (2. �������� ������ �����. ��� ��������� ��������� ����� ������� ������?)
	char lines[10][20] = {};
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			lines[i][j] = rand() % 1000;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << lines[i][j] << ' ';
		}
		cout << endl;
	}
	cout << "znach" << endl;
	char* pl = lines[1];
	pl += 10*2;
	cout << *pl << endl;
	/*a.pl += 2;
	b.pl += 3;
	c.pl += 10 * 2;
	d.pl += 10 * 3;
	e.pl += 20 * 2;
	f.pl += 20 * 3;*/

	// �����: pl += 10*2;

	/////
	cout << "\n$$$$$$$" << endl;
	/////
	
	// (3. ������� (���� ����) ������ ����������; �������, ��� �� ���������:)
	
	// a
	/*int x[][2] = { 1,2, 3,4, 5,6, 7,8, 9,10, 11,12 };
	int* px = &x[0][0];*/

    // b 
	/*int b; 
	int* pb = &b;
	int** pc = &pb;
	*/

	// c 
	//int x = 5;
	//int* px = &(x);
	
	// d 
	/*int x = 5, y = 3, z;
	int* px = &x, *py = &y;
	z = *(px) + *(py);
	*/
	
	// e 
	/*int x[10];
	int* px = x;
	int* py = px + 5;*/
	
	// f 
	/*
	int x[10];
	int* px = &x[4], * py = &x[8];
	cout << px - py ? "��" : "���"; // ��� � ��� ������ ���� �������� � ������ ��� ������
	*/
	
	/////
	cout << "\n$$$$$$$" << endl;
	/////

	system("pause");
	return 0;
}
