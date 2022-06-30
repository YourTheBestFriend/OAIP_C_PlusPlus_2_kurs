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
	cout << "Число A:\t";
	cin >> a;
	cout << "Число B:\t";
	cin >> b;
	cout << "Число C:\t";
	cin >> c;
	int x, y;
	cout << "Число X:\t";
	cin >> x;
	cout << "Число Y:\t";
	cin >> y;
	int x1, y1, x2, y2;
	cout << "Число X1:\t";
	cin >> x1;
	cout << "Число Y1:\t";
	cin >> y1;
	cout << "Число X2:\t";
	cin >> x2;
	cout << "Число Y2:\t";
	cin >> y2;
	////////////////////////////////////////1
	cout << endl << "Задание Boolean1" << endl;
	cout << "Число A является положительным" << endl;
	if (boolean1(a))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////2
	cout << endl << "Задание Boolean2" << endl;
	cout << "Число A является нечетным" << endl;
	if (boolean2(a))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////3
	cout << endl << "Задание Boolean3" << endl;
	cout << "Число A является четным" << endl;
	if (boolean3(a))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////4
	cout << endl << "Задание Boolean4" << endl;
	cout << "Число A>2 и B<=3" << endl;
	if (boolean4(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////5
	cout << endl << "Задание Boolean5" << endl;
	cout << "Число A>=0 или B<-2" << endl;
	if (boolean5(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////6
	cout << endl << "Задание Boolean6" << endl;
	cout << "Число A<B<C" << endl;
	if (boolean6(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////7
	cout << endl << "Задание Boolean7" << endl;
	cout << "Число B находится между числами A и C" << endl;
	if (boolean7(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////8
	cout << endl << "Задание Boolean8" << endl;
	cout << "Каждое из чисел A и B нечетное" << endl;
	if (boolean8(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////9
	cout << endl << "Задание Boolean9" << endl;
	cout << "Хотя бы одно из чисел A и B нечетное" << endl;
	if (boolean9(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////10
	cout << endl << "Задание Boolean10" << endl;
	cout << "Ровно одно из чисел A и B нечетное" << endl;
	if (boolean10(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////11
	cout << endl << "Задание Boolean11" << endl;
	cout << "Числа A и B имеют одинаковую четность" << endl;
	if (boolean11(a, b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////12
	cout << endl << "Задание Boolean12" << endl;
	cout << "Каждое из чисел A, B и C положительны" << endl;
	if (boolean12(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////13
	cout << endl << "Задание Boolean13" << endl;
	cout << "Хотя бы одно из чисел A, B и C положительное" << endl;
	if (boolean13(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////14
	cout << endl << "Задание Boolean14" << endl;
	cout << "Ровно одно из чисел A, B и C положительное" << endl;
	if (boolean14(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////15
	cout << endl << "Задание Boolean15" << endl;
	cout << "Ровно два из чисел A, B и C положительные" << endl;
	if (boolean15(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////16
	cout << endl << "Задание Boolean16" << endl;
	cout << "Число A является положительным четным двузначным" << endl;
	if (boolean16(a))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////17
	cout << endl << "Задание Boolean17" << endl;
	cout << "Число B является положительным нечётным трёхзначным" << endl;
	if (boolean17(b))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////18
	cout << endl << "Задание Boolean18" << endl;
	cout << "Среди трех данных целых чисел есть хотя бы одна пара совпадающих" << endl;
	if (boolean18(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	////////////////////////////////////////19
	cout << endl << "Задание Boolean19" << endl;
	cout << "Среди трех данных целых чисел есть хотя бы одна пара взаимно противоположных" << endl;
	if (boolean19(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////20
	cout << endl << "Задание Boolean20" << endl;
	cout << "Все цифры числа A различны" << endl;
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
	cout << endl << "Задание Boolean21" << endl;
	cout << "Все цифры числа B образуют возрастающую последовательность" << endl;
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
	cout << endl << "Задание Boolean22" << endl;
	cout << "Все цифры числа C образуют возрастающую или убывающую последовательность" << endl;
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
	cout << endl << "Задание Boolean23" << endl;
	cout << "Число A читается одинаково слева направо и справа налево" << endl;
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
	cout << endl << "Задание Boolean24" << endl;
	cout << "Квадратное уравнение A*x^2+B*x+C=0 имеет вещественные корни" << endl;
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
	cout << endl << "Задание Boolean25" << endl;
	cout << "Точка с координатами (x, y) лежит во второй координатной четверти" << endl;
	if (boolean25(x, y))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////26
	cout << endl << "Задание Boolean26" << endl;
	cout << "Точка с координатами (x, y) лежит в четвертой координатной четверти" << endl;
	if (boolean26(x, y))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////27
	cout << endl << "Задание Boolean27" << endl;
	cout << "Точка с координатами (x, y) лежит во второй или третьей координатной четверти" << endl;
	if (boolean27(x, y))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////28
	cout << endl << "Задание Boolean28" << endl;
	cout << "Точка с координатами (x, y) лежит в первой или третьей координатной четверти" << endl;
	if (boolean28(x, y))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////29
	cout << endl << "Задание Boolean29" << endl;
	cout << "Точка с координатами (x, y) лежит внутри прямоугольника, левая верхняя вершина которого имеет координаты (x1, y1), правая нижняя — (x2, y2), а стороны параллельны координатным осям" << endl;
	if (boolean29(x, y, x1, y1, x2, y2))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////30
	cout << endl << "Задание Boolean30" << endl;
	cout << "Треугольник со сторонами a, b, c является равночторонним" << endl;
	if (boolean30(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////31
	cout << endl << "Задание Boolean31" << endl;
	cout << "Треугольник со сторонами a, b, c является равнобедренным" << endl;
	if (boolean31(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////32
	cout << endl << "Задание Boolean32" << endl;
	cout << "Треугольник со сторонами a, b, c является прямоугольным" << endl;
	if (boolean32(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////33
	cout << endl << "Задание Boolean33" << endl;
	cout << "Существует теругольник со сторонами a, b, c" << endl;
	if (boolean33(a, b, c))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	///////////////////////////////////////34
	cout << endl << "Задание Boolean34" << endl;
	cout << "Данное поле является белым" << endl;
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
	cout << endl << "Задание Boolean35" << endl;
	cout << "Данные поля имеют одинаковые цвета" << endl;
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
	cout << endl << "Задание Boolean36" << endl;
	cout << "Ладья за один ход может перейти с одного поля на другое" << endl;
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
	cout << endl << "Задание Boolean37" << endl;
	cout << "Король за один ход может перейти с одного поля на другое" << endl;
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
	cout << endl << "Задание Boolean38" << endl;
	cout << "Слон за один ход может перейти с одного поля на другое" << endl;
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
	cout << endl << "Задание Boolean39" << endl;
	cout << "Ферзь за один ход может перейти с одного поля на другое" << endl;
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
	cout << endl << "Задание Boolean40" << endl;
	cout << "Конь за один ход может перейти с одного поля на другое" << endl;
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