#include <iostream>
#include <cmath>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
double random_double(double, double);



int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// 1^10 * 2^9 * ... * 9^2 * 10^1
	int s = 1;
	for (int i = 1, n = 10; i <= 10 ;i++, n--)
	{
		cout << pow(i, n) << endl;
		s *= pow(i, n);
	}
	cout << "s:" << s;











	/// ########################################################
	srand(time(NULL));									
	double first, second;
	cout << "First: ";
	cin >> first;
	cout << "Second:";
	cin >> second;
	int first1 = first, second1 = second;
	
	// ���� ��������� ����� �����
	int X1 = first1 + rand() % (second1 - first1 + 1);
	cout << "��������� - X1 - ����� : " << X1 << endl;

	// ���������� ������� 
	double ostatok;
	ostatok = X1 / second;
	cout << "��������� - ostatok - ����� : " << ostatok << endl;

	// ������ ��� �������
	double array_drob[1];
	array_drob[0] = ostatok;
	
	// ����� ����� � �������
	double sum = X1 + array_drob[0]; 
	
	cout << "################################################" << endl;
	cout << "��������� �������� 1 - ������: " << sum << endl;
	/// ########################################################
	
	cout << "################################################" << endl;

	cout << "��������� �������� 2 - ������: " << random_double(first1, second1)<< endl;
	cout << "################################################" << endl;

	system("pause");
	return 0;
}

/* 	test1
	int a, b;
	cout << "First: ";
	cin >> a; // 0
	cout << "Second:";
	cin >> b; // 9
	int x = a + rand() % (b - a + 1);
	cout <<"��������� index ������� - x: " << x << endl;
	double array[10] = {1.2, 3.1, 5.4, 6.4, 3.8, 8.3, 7.2, 9.1, 4.1, 7.9};
	cout << "��������� ������� �����: " << array[x] << endl;
	cout << "--------------------------------->" << endl;	
	*/
// test2
/* int a2, b2;
	cout << "First: ";
	cin >> a2; 
	cout << "Second:";
	cin >> b2; 
	int x2 = a2 + rand() % (b2 - a2 + 1);
	cout << "��������� index ������� - x2: " << x2 << endl;
	int x3 = a2 + rand() % (b2 - a2 + 1);
	cout << "��������� index ������� - x3: " << x3 << endl;
	double array2[10] = { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8,0.9 };
	double Y = array2[x2] + x3;
	cout << "��������� ������� �����: " << Y << endl;
	
	cout << "--------------------------------->" << endl; */

double random_double(double ferst1, double second1)
{
	/// ########################################################
	srand(time(NULL));
	int first, second;
	int one = 0, two = 10;
	cout << "First: ";
	cin >> first;
	cout << "Second:";
	cin >> second;

	// ���� ��������� ����� �����
	int X1 = first + rand() % (second - first + 1);
	cout << "��������� - X1 - ����� : " << X1 << endl;

	// ������ ��� ���������� �������
	double array_drob[10] = { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9 };
	int X2 = one + rand() % (two - one + 1);
	cout << "��������� index ������� ��� ����� - X2: " << X2 << endl;
	// �����
	double otvet = X1 + array_drob[X2]; // ���������� ����� ��������� � ��������� ��������
	return otvet;
	/// ########################################################

}
