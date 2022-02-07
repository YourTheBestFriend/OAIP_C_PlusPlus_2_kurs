


void if1(int x)
{
	if (x > 0)
	{
		x++;
	}
	cout << x << endl;
}
//succ
void if2(int x)
{
	if (x > 0)
	{
		x++;
	}
	else
	{
		x -= 2;
	}
	cout << x << endl;
}
//succ
void if3(int x)
{

	if (x > 0)
	{
		x++;
	}
	else
	{
		if (x < 0)
		{
			x -= 2;
		}
		else
		{
			x = 10;
		}
	}
	cout << x << endl;
}
//succ
void if4(int x, int y, int z)
{
	int count = 0;
	if (x > 0)
	{
		count++;
	}
	if (y > 0)
	{
		count++;
	}
	if (z > 0)
	{
		count++;
	}
	cout << count << endl;
}
//succ
void if5(int x, int y, int z)
{
	int count_pol = 0, count_otr = 0;
	if (x > 0)
	{
		count_pol++;
	}
	else
	{
		if (x < 0)
		{
			count_otr--;
		}
	}
	if (y > 0)
	{
		count_pol++;
	}
	else
	{
		if (y < 0)
		{
			count_otr--;
		}
	}
	if (z > 0)
	{
		count_pol++;
	}
	else
	{
		if (z < 0)
		{
			count_otr--;
		}
	}
	cout << count_pol << endl;
	cout << count_otr << endl;
}
//succ
void if6(int x, int y)
{
	if (x > y)
	{
		cout << x << endl;
	}
	else
	{
		cout << y << endl;
	}
}
void if7(int x1, int x2)
{
	if (x1 > x2)
	{
		cout << '1' << endl;
	}
	else
	{
		cout << '2' << endl;
	}
}
void if8(int x, int y)
{
	if (x > y)
	{
		cout << x << endl;
		cout << y << endl;
	}
	else
	{
		cout << x << endl;

		cout << y << endl;
	}
}
void if9(double a, double b)
{
	if (a > b)
	{
		int x = a;
		a = b;
		b = a;
	}
	cout << a << endl;
	cout << b << endl;
}
void if10(int a, int b)
{
	if (a != b)
	{
		int x = a;
		a = b;
		b = x;
	}
	cout << a << endl;
	cout << b << endl;
}
void if11(int a, int b)
{
	if (a != b)
	{
		if (a > b)
			b = a;
		else
			a = b;
	}
	else
	{
		a = 0;
		b = 0;
	}
	cout << a << endl;
	cout << b << endl;
}
int if12(int x, int y, int z)
{
	if (x < y)
	{
		return x;
	}
	else
	{
		if (y < z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
}
int if13(int x, int y, int z)
{
	if ((x < y & x > z) || (x > y & x < z))
	{
		return x;
	}
	else
	{
		if ((y < z & y > x) || (y > z & y < x))
		{
			return y;
		}
		else
		{
			return z;
		}
	}
}
void if14(int x, int y, int z)
{
	if (x < y)
	{
		cout << x << endl;
	}
	else
	{
		if (y < z)
		{
			cout << y << endl;
		}
		else
		{
			cout << z << endl;
		}
	}
	if (x > y)
	{
		cout << x << endl;
	}
	else
	{
		if (y > z)
		{
			cout << y << endl;
		}
		else
		{
			cout << z << endl;
		}
	}
}
int if15(int x, int y, int z)
{
	if (x > y & y > z)
	{
		return x + y;
	}
	else
	{
		if (y > z & z > x)
		{
			return z + y;
		}
		else
		{
			return x + z;
		}
	}
}
void if16(double a, double b, double c)
{
	if (a < b < c)
	{
		a = a * 2;
		b = b * 2;
		c = c * 2;
	}
	else
	{
		a = a * -1;
		b = b * -1;
		c = c * -1;
	}
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
void if17(double a, double b, double c)
{
	if ((a > b > c) | (a < b < c))
	{
		a = a * 2;
		b = b * 2;
		c = c * 2;
	}
	else
	{
		a = a * -1;
		b = b * -1;
		c = c * -1;
	}
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
void if18(int a, int b, int c)
{
	if (a != b & a != c)
	{
		cout << '1' << endl;
	}
	else
	{
		if (b != a & b != c)
		{
			cout << '2' << endl;
		}
		else
		{
			if (c != a & c != b)
			{
				cout << '3' << endl;
			}
		}
	}
}
void if19(int a, int b, int c, int d)
{
	if (a != b & a != c & a != d)
	{
		cout << '1' << endl;
	}
	else
	{
		if (b != a & b != c & b != d)
		{
			cout << '2' << endl;
		}
		else
		{
			if (c != a & c != b & c != d)
			{
				cout << '3' << endl;
			}
			else
			{
				if (d != a & d != b & d != c)
				{
					cout << '4' << endl;
				}
			}
		}
	}
}
void if20(int a, int b, int c)
{
	if (abs(a - b) < abs(a - c))
	{
		cout << "B: " << abs(a - b) << endl;
	}
	else
	{
		cout << "C: " << abs(a - c) << endl;
	}
}
void if21(int x, int y)
{
	if (x == 0 & y == 0)
	{
		cout << '1' << endl;
	}
	else
	{
		if (x == 0 | y == 0)
		{
			cout << '2' << endl;
		}
		else
		{
			cout << '3' << endl;
		}
	}
	cout << x << endl;
}
void if22(int x, int y)
{
	if (x > 0 & y > 0)
	{
		cout << '1' << endl;
	}
	if (x < 0 & y > 0)
	{
		cout << '2' << endl;
	}
	if (x < 0 & y < 0)
	{
		cout << '3' << endl;
	}
	if (x > 0 & y < 0)
	{
		cout << '4' << endl;
	}
}
void if23(int x1, int x2, int x3, int y1, int y2, int y3)
{
	int x4, y4;
	if (x1 == x2)
	{
		x4 = x3;
	}
	if (x1 == x3)
	{
		x4 = x2;
	}
	if (x3 == x2)
	{
		x4 = x1;
	}
	if (y1 == y2)
	{
		y4 = y3;
	}
	if (y1 == y3)
	{
		y4 = y2;
	}
	if (y3 == y2)
	{
		y4 = y1;
	}
	cout << x4 << endl;
	cout << y4 << endl;
}
double if24(double x)
{
	if (x > 0)
	{
		return 2 * sin(x);
	}
	else
	{
		return 6 - x;
	}
}
int if25(int x)
{
	if (x < -2 | x > 2)
	{
		return 2 * x;
	}
	else
	{
		return -3 * x;
	}
}
int if26(double x)
{
	if (x <= 0)
	{
		return -x;
	}
	if (0 < x < 2)
	{
		return pow(x, 2);
	}
	if (x >= 2)
	{
		return 4;
	}
}
double if27(double x)
{
	if (x < 0)
	{
		return 0;
	}
	if (0 <= x < 1 | 2 <= x < 3)
		return 1;
	if (1 <= x < 2 | 3 <= x < 4)
		return -1;
}
int if28(int x)
{
	if (x % 4 == 0)
	{
		if (x % 100 == 0 & x % 400 != 0)
			return 365;
		return 366;
	}
	return 365;
}
void if29(int x)
{
	if (x > 0)
		cout << "положительное ";
	else
	{
		if (x = 0)
		{
			cout << "нулевое число" << endl;
			return;
		}
		cout << "отрицательное ";
	}
	if (x % 2 == 0)
		cout << "четное ";
	else
		cout << "нечетное ";
	cout << "число" << endl;
}
void if30(int x)
{
	if (x % 2 == 0)
		cout << "четное ";
	else
		cout << "нечетное ";
	if (x <= 9)
		cout << "однозначное ";
	if (9 < x <= 99)
		cout << "двузначное ";
	if (99 < x)
		cout << "трехзначное ";
	cout << "число" << endl;
}