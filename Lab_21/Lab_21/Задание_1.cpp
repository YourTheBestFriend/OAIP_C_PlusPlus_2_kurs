#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
//########################
// ������� 2 � 3 (������� 1 ������ �� ���� � ������� � � ����������� ����� � ������ ����)
class Calculator
{
private:
	double a;
	double b;
	char c;
	double r;

public:
	// �������
	double getA();
	double getB();
	char getC();
	double getR();
	// �������
	void setA(double a0);
	void setB(double a0);
	// ���������
	Calculator(double a1, double b1); // �������� ������������
	void vychislenie(char x); // �������� ������ vychislenie
	void random_A_B(); // �� ������� 3
};// ����� �������� ������ Calculator

Calculator::Calculator(double a1, double b1)
{
	a = a1; // �������� ���������� ����������� ����������� ���� private double a;
	b = b1; // �������� ���������� ����������� ����������� ���� private double b;
}

//############################
// ������ - ������ ��������  
double Calculator::getA() // ����� (��������) ��� ��������� ���� a // ����� ��������� � ������������ ���� ������ Calculator
{ 
	return a;
}
double Calculator::getB() // ����� (��������) ��� ��������� ���� b // ����� ��������� � ������������ ���� ������ Calculator
{
	return b;
}
char Calculator::getC() // ����� (��������) ��� ��������� ���� c // ����� ��������� � ������������ ���� ������ Calculator
{
	return c;
}
double Calculator::getR() // ����� (��������) ��� ��������� ���� r // ����� ��������� � ������������ ���� ������ Calculator
{
	return r;
}
//############################


//############################
// ������� - �������� ��������
void Calculator::setA(double a0) // ����� (��������) ��� ��������� �������� ���� a
{
	a = a0;
}
void Calculator::setB(double b0) // ����� (��������) ��� ��������� �������� ���� b
{
	b = b0;
}
//############################

void Calculator::vychislenie(char x)
{
	c = x;
	switch (x)
	{
	case '+':
	{
		r = a + b;
		break;
	}
	case '-':
	{
		r = a - b;
		break;
	}

	case '*':
	{
		r = a * b;
		break;
	}
	case '/':
	{
		r = a / b;
		break;
	}
	default:
	{
		cout << "�����. �������� �����������.\n";
		break;
	}
	}// ����� switch'a
	return;
} // ����� ������ void Calculator::vychislenie(char x)
void Calculator::random_A_B()
{
	srand(time(NULL));
	if (a > b)
	{
		int x = a;
		a = b;
		b = x;
	}
	r = a + rand() % ( (int)b - (int)a + 1); // ����������� ���������� �����
	return; // ������ ������� ������ 
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a1, b1;
	char x0;
	bool f;
	do
	{
		cout << "������� ����� 1 / ����� ������������.\n";
		cin >> a1;
		cout << "������� ����� ����-��������. ( + - * /)\n";
		cin >> x0;
		cout << "������� ����� 2 / ����� ������������.\n";
		cin >> b1;
		Calculator k(a1, b1); // �������� ����������� ������ Calculator, ������� ��������� 2 ����� � ������� ��������� ������ Calculator // - k(��� ��������� ���� Calculator)
		k.vychislenie(x0);// � ������� (���������� ������) Calculator �������� ����� vychislenie, �������� �������� ������ ���� char 
		double rez = k.getR();// ���������� rez ����������� ��������, ������������ ��������� getR() � ������� k
		cout << k.getA() << ' ' << k.getC() << ' ' << k.getB() << " = " << k.getR() << endl;
		k.random_A_B();
		double rez_random = k.getR();
		cout << "��������� �������� � ���������: " << k.getA() << " - " << k.getB() << "\n���� ��������: " << rez_random << endl;
		cout << "���������� < 1 - �� | 0 - ��� >" << endl;
		cin >> f;
	} while (f == true);
	system("pause");
	return 0;
}



