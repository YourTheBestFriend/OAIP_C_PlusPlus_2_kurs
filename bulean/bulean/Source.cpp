#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

bool boolean1(int a)
{
	return (a > 0);
}

bool boolean2(int a)
{
	return (a % 2 != 0);
}

bool boolean3(int a)
{
	return (a % 2 == 0);
}

bool boolean4(int a, int b)
{
	return (a > 2 && b <= 3);
}

bool boolean5(int a, int b)
{
	return (a >= 0 || b < -2);
}

bool boolean6(int a, int b, int c)
{
	return (a < b&& b < c);
}

bool boolean7(int a, int b, int c)
{
	return((b <= a && b >= c) || (b >= a && b <= c));
}

bool boolean8(int a, int b)
{
	return(a % 2 != 0 && b % 2 != 0);
}

bool boolean9(int a, int b)
{
	return(a % 2 != 0 || b % 2 != 0);
}

bool boolean10(int a, int b)
{
	return((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0));
}

bool boolean11(int a, int b)
{
	return (a % 2 == 0 && b % 2 == 0);
}

bool boolean12(int a, int b, int c)
{
	return (a > 0 && b > 0 && c > 0);
}

bool boolean13(int a, int b, int c)
{
	return (a > 0 || b > 0 || c > 0);
}

bool boolean14(int a, int b, int c)
{
	return ((a > 0 && b < 0 && c < 0) || (a < 0 && b > 0 && c < 0) || (a < 0 && b < 0 && c > 0));
}

bool boolean15(int a, int b, int c)
{
	return ((a > 0 && b > 0 && c < 0) || (a > 0 && b < 0 && c > 0) || (a < 0 && b > 0 && c > 0));
}

bool boolean16(int a)
{
	return (a > 9 && a < 100 && a % 2 == 0);
}

bool boolean17(int b)
{
	return (b > 99 && b < 1000 && b % 2 != 0);
}

bool boolean18(int a, int b, int c)
{
	return(a == b || a == c || b == c);
}

bool boolean19(int a, int b, int c)
{
	return(-a == b || -a == c || -b == c || -b == a || -c == a || -c == b);
}

bool boolean20(int a)
{
	int b = 0, c = 0, d = 0;
	b = a / 100;
	c = a % 100 / 10;
	d = a % 10;
	return (b != c && c != d && b != d);
}

bool boolean21(int b)
{
	int a = 0, c = 0, d = 0;
	a = b / 100;
	c = b % 100 / 10;
	d = b % 10;
	return (a < c&& c < d);
}

bool boolean22(int c)
{
	int a = 0, b = 0, d = 0;
	a = c / 100;
	b = c % 100 / 10;
	d = c % 10;
	return ((a < b&& b < d) || (a > b && b > d));
}

bool boolean23(int a)
{
	int b, c, d, e;
	b = a % 10;
	c = a / 1000;
	d = a % 100 / 10;
	e = a % 1000 / 100;
	return(b == c && d == e);
}

bool boolean24(int a, int b, int c)
{
	double d;
	d = pow(b, 2) - (4 * a * c);
	return(d >= 0);
}

bool boolean25(int x, int y)
{
	return(y > 0 && x < 0);
}

bool boolean26(int x, int y)
{
	return(x > 0 && y < 0);
}

bool boolean27(int x, int y)
{
	return ((y > 0 && x < 0) || (y < 0 && x < 0));
}

bool boolean28(int x, int y)
{
	return((x > 0 && y > 0) || (x < 0 && y < 0));
}

bool boolean29(int x, int y, int x1, int y1, int x2, int y2)
{
	return(x1 < x&& x < x2&& y2 < y&& y < y1);
}

bool boolean30(int a, int b, int c)
{
	return(a == b && a == c && b == c);
}

bool boolean31(int a, int b, int c)
{
	return(a == b || a == c || c == b);
}

bool boolean32(int a, int b, int c)
{
	int a2, b2, c2;
	a2 = pow(a, 2);
	b2 = pow(b, 2);
	c2 = pow(c, 2);
	return ((a2 == b2 + c2) || (b2 == a2 + c2) || c2 == a2 + b2);
}

bool boolean33(int a, int b, int c)
{
	return((a + b) > c && (a + c) > b && (b + c) > a);
}

bool boolean34(int x, int y)
{
	return((x + y) % 2 != 0);
}

bool boolean35(int x1, int y1, int x2, int y2)
{
	return((x1 + y1) % 2 == (x2 + y2) % 2);
}

bool boolean36(int x1, int y1, int x2, int y2)
{
	return (x1 == x2 || y1 == y2);
}

bool boolean37(int x1, int y1, int x2, int y2)
{
	return(abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1);
}

bool boolean38(int x1, int y1, int x2, int y2)
{
	return((x1 == x2) || (y1 == y2));
}

bool boolean39(int x1, int y1, int x2, int y2)
{
	return(abs(x1 - x2) == abs(y1 - y2) || (x1 == x2) || (y1 == y2));
}

bool boolean40(int x1, int y1, int x2, int y2)
{
	return (abs(x1 - x2) == 1 && abs(y1 - y2) == 2 || abs(x1 - x2) == 2 && abs(y1 - y2) == 1);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "����� A:\t";
	cin >> a;
	cout << "����� B:\t";
	cin >> b;
	cout << "����� C:\t";
	cin >> c;
	int x, y;
	cout << "����� X:\t";
	cin >> x;
	cout << "����� Y:\t";
	cin >> y;
	int x1, y1, x2, y2;
	cout << "����� X1:\t";
	cin >> x1;
	cout << "����� Y1:\t";
	cin >> y1;
	cout << "����� X2:\t";
	cin >> x2;
	cout << "����� Y2:\t";
	cin >> y2;
	////////////////////////////////////////1
	cout << endl << "������� Boolean1" << endl;
	cout << "����� A �������� �������������" << endl;
	if (boolean1(a))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////2
	cout << endl << "������� Boolean2" << endl;
	cout << "����� A �������� ��������" << endl;
	if (boolean2(a))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////3
	cout << endl << "������� Boolean3" << endl;
	cout << "����� A �������� ������" << endl;
	if (boolean3(a))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////4
	cout << endl << "������� Boolean4" << endl;
	cout << "����� A>2 � B<=3" << endl;
	if (boolean4(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////5
	cout << endl << "������� Boolean5" << endl;
	cout << "����� A>=0 ��� B<-2" << endl;
	if (boolean5(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////6
	cout << endl << "������� Boolean6" << endl;
	cout << "����� A<B<C" << endl;
	if (boolean6(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////7
	cout << endl << "������� Boolean7" << endl;
	cout << "����� B ��������� ����� ������� A � C" << endl;
	if (boolean7(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////8
	cout << endl << "������� Boolean8" << endl;
	cout << "������ �� ����� A � B ��������" << endl;
	if (boolean8(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////9
	cout << endl << "������� Boolean9" << endl;
	cout << "���� �� ���� �� ����� A � B ��������" << endl;
	if (boolean9(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////10
	cout << endl << "������� Boolean10" << endl;
	cout << "����� ���� �� ����� A � B ��������" << endl;
	if (boolean10(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////11
	cout << endl << "������� Boolean11" << endl;
	cout << "����� A � B ����� ���������� ��������" << endl;
	if (boolean11(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////12
	cout << endl << "������� Boolean12" << endl;
	cout << "������ �� ����� A, B � C ������������" << endl;
	if (boolean12(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////13
	cout << endl << "������� Boolean13" << endl;
	cout << "���� �� ���� �� ����� A, B � C �������������" << endl;
	if (boolean13(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////14
	cout << endl << "������� Boolean14" << endl;
	cout << "����� ���� �� ����� A, B � C �������������" << endl;
	if (boolean14(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////15
	cout << endl << "������� Boolean15" << endl;
	cout << "����� ��� �� ����� A, B � C �������������" << endl;
	if (boolean15(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////16
	cout << endl << "������� Boolean16" << endl;
	cout << "����� A �������� ������������� ������ ����������" << endl;
	if (boolean16(a))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////17
	cout << endl << "������� Boolean17" << endl;
	cout << "����� B �������� ������������� �������� ����������" << endl;
	if (boolean17(b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////18
	cout << endl << "������� Boolean18" << endl;
	cout << "����� ���� ������ ����� ����� ���� ���� �� ���� ���� �����������" << endl;
	if (boolean18(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////19
	cout << endl << "������� Boolean19" << endl;
	cout << "����� ���� ������ ����� ����� ���� ���� �� ���� ���� ������� ���������������" << endl;
	if (boolean19(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////20
	cout << endl << "������� Boolean20" << endl;
	cout << "��� ����� ����� A ��������" << endl;
	if (a > 99 && a < 1000)
	{
		if (boolean20(a))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////21
	cout << endl << "������� Boolean21" << endl;
	cout << "��� ����� ����� B �������� ������������ ������������������" << endl;
	if (b > 99 && b < 1000)
	{
		if (boolean21(b))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////22
	cout << endl << "������� Boolean22" << endl;
	cout << "��� ����� ����� C �������� ������������ ��� ��������� ������������������" << endl;
	if (c > 99 && c < 1000)
	{
		if (boolean22(c))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////23
	cout << endl << "������� Boolean23" << endl;
	cout << "����� A �������� ��������� ����� ������� � ������ ������" << endl;
	if (a > 999 && a < 10000)
	{
		if (boolean23(a))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////24
	cout << endl << "������� Boolean24" << endl;
	cout << "���������� ��������� A*x^2+B*x+C=0 ����� ������������ �����" << endl;
	if (a > 0)
	{
		if (boolean24(a, b, c))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////25
	cout << endl << "������� Boolean25" << endl;
	cout << "����� � ������������ (x, y) ����� �� ������ ������������ ��������" << endl;
	if (boolean25(x, y))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////26
	cout << endl << "������� Boolean26" << endl;
	cout << "����� � ������������ (x, y) ����� � ��������� ������������ ��������" << endl;
	if (boolean26(x, y))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////27
	cout << endl << "������� Boolean27" << endl;
	cout << "����� � ������������ (x, y) ����� �� ������ ��� ������� ������������ ��������" << endl;
	if (boolean27(x, y))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////28
	cout << endl << "������� Boolean28" << endl;
	cout << "����� � ������������ (x, y) ����� � ������ ��� ������� ������������ ��������" << endl;
	if (boolean28(x, y))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////29
	cout << endl << "������� Boolean29" << endl;
	cout << "����� � ������������ (x, y) ����� ������ ��������������, ����� ������� ������� �������� ����� ���������� (x1, y1), ������ ������ � (x2, y2), � ������� ����������� ������������ ����" << endl;
	if (boolean29(x, y, x1, y1, x2, y2))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////30
	cout << endl << "������� Boolean30" << endl;
	cout << "����������� �� ��������� a, b, c �������� ��������������" << endl;
	if (boolean30(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////31
	cout << endl << "������� Boolean31" << endl;
	cout << "����������� �� ��������� a, b, c �������� ��������������" << endl;
	if (boolean31(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////32
	cout << endl << "������� Boolean32" << endl;
	cout << "����������� �� ��������� a, b, c �������� �������������" << endl;
	if (boolean32(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////33
	cout << endl << "������� Boolean33" << endl;
	cout << "���������� ����������� �� ��������� a, b, c" << endl;
	if (boolean33(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////34
	cout << endl << "������� Boolean34" << endl;
	cout << "������ ���� �������� �����" << endl;
	if (x > 0 && x < 9 && y>0 && y < 9)
	{
		if (boolean34(x, y))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////35
	cout << endl << "������� Boolean35" << endl;
	cout << "������ ���� ����� ���������� �����" << endl;
	if (x1 > 0 && x1 < 9 && y1 > 0 && y1 < 9 && x2 > 0 && x2 < 9 && y2 > 0 && y2 < 9)
	{
		if (boolean35(x1, y1, x2, y2))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////36
	cout << endl << "������� Boolean36" << endl;
	cout << "����� �� ���� ��� ����� ������� � ������ ���� �� ������" << endl;
	if (x1 > 0 && x1 < 9 && y1 > 0 && y1 < 9 && x2 > 0 && x2 < 9 && y2 > 0 && y2 < 9)
	{
		if (boolean36(x1, y1, x2, y2))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////37
	cout << endl << "������� Boolean37" << endl;
	cout << "������ �� ���� ��� ����� ������� � ������ ���� �� ������" << endl;
	if (x1 > 0 && x1 < 9 && y1 > 0 && y1 < 9 && x2 > 0 && x2 < 9 && y2 > 0 && y2 < 9)
	{
		if (boolean37(x1, y1, x2, y2))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////38
	cout << endl << "������� Boolean38" << endl;
	cout << "���� �� ���� ��� ����� ������� � ������ ���� �� ������" << endl;
	if (x1 > 0 && x1 < 9 && y1 > 0 && y1 < 9 && x2 > 0 && x2 < 9 && y2 > 0 && y2 < 9)
	{
		if (boolean38(x1, y1, x2, y2))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////39
	cout << endl << "������� Boolean39" << endl;
	cout << "����� �� ���� ��� ����� ������� � ������ ���� �� ������" << endl;
	if (x1 > 0 && x1 < 9 && y1 > 0 && y1 < 9 && x2 > 0 && x2 < 9 && y2 > 0 && y2 < 9)
	{
		if (boolean39(x1, y1, x2, y2))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;
	///////////////////////////////////////40
	cout << endl << "������� Boolean40" << endl;
	cout << "���� �� ���� ��� ����� ������� � ������ ���� �� ������" << endl;
	if (x1 > 0 && x1 < 9 && y1 > 0 && y1 < 9 && x2 > 0 && x2 < 9 && y2 > 0 && y2 < 9)
	{
		if (boolean40(x1, y1, x2, y2))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	else
		cout << "Error" << endl;

	cout << endl;
	system("pause");
	return 0;
}