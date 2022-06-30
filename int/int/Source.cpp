int integer2_1(int l)
{
	return l / 100;
}

int integer2_2(int m)
{
	return  m / 1000;
}

int integer2_3(int bit)
{
	return(bit / 1024);
}

int integer2_4(int a, int b)
{
	return a / b;
}

int integer2_5(int a, int b)
{
	return (a / b) % 10;
}

int integer2_6_1(int c)
{
	return (c / 10);
}

int integer2_6_1(int c)
{
	return (c % 10);
}
/*
int integer2_7(int c, int a, int b)
{
	a = c / 10;
	b = c % 10;
	return (a + b), " ", (a * b);
}
*/
int integer2_7_1(int c)
{
	return(c / 10);
}
int integer2_7_2(int c)
{
	return(c % 10);
}

int integer2_8(int b, int a, int c)
{
	a = c / 10;
	b = c % 10;
	return (b * 10) + a;
}

int integer2_9(int c, int a)
{
	a = c / 100;
	return a;
}
/*
int integer2_10(int c, int b, int d)
{
	b = c / 10;
	d = (c / 10) % 10;
	return b,d;
}*/
int integer2_10_1(int c)
{
	return(c / 10);
}
int integer2_10_2(int c)
{
	return(c / 10) % 10;
}
/*
int integer2_11(int c, int a, int b, int d)
{
	a = c / 100;
	b = (c / 10) % 10;
	d = c / 10;
	return (a + b + d), (a * b * d);
}
*/
int integer2_11_1(int c, int a, int b, int d)
{
	a = c / 100;
	b = (c / 10) % 10;
	d = c / 10;
	return(a + b + c);
}
int integer2_11_2(int c, int a, int b, int d)
{
	a = c / 100;
	b = (c / 10) % 10;
	d = c / 10;
	return(a * b * c);
}

int integer2_12(int c, int a, int b, int d)
{
	a = c / 100;
	b = (c / 10) % 10;
	d = (c / 10);
	return (d * 100) + (b * 10) + a;
}

int integer2_13(int c, int a, int b, int d)
{
	a = c / 100;
	b = (c / 10) % 10;
	d = (c / 10);
	return (b * 100) + (d * 10) + a;
}

int integer2_14(int c, int a, int b, int d)
{
	a = c / 100;
	b = (c / 10) % 10;
	d = (c / 10);
	return (d * 100) + (a * 10) + b;
}

int integer2_15(int c, int a, int b, int d)
{
	a = c / 100;
	b = (c / 10) % 10;
	d = (c / 10);
	return (b * 100) + (a * 10) + d;
}

int integer2_16(int c, int a, int b, int d)
{
	a = c / 100;
	b = (c / 10) % 10;
	d = (c / 10);
	return (a * 100) + (d * 10) + b;
}

int integer2_17(int c, int a)
{
	return (c / 10) % 10;
}

int integer2_18(int c, int a)
{
	return c / 1000;
}

int integer2_19(int n)
{
	return n / 60;
}

int integer2_20(int n)
{
	return n / 360;
}

int integer2_21(int n)
{
	return n % 60;
}

int integer2_22(int n)
{
	return n % 3600;
}

int integer2_23(int a)
{
	return (a % 3600 / 60);
}

int integer2_24(int a)
{
	return (a % 7);
}

int integer2_25(int a)
{
	return ((a + 3) % 7);
}

int integer2_26(int a)
{
	return (a % 7 + 1);
}

int integer2_27(int a)
{
	return ((a + 4) % 7 + 1);
}

int integer2_28(int k, int n)
{
	return ((k + n - 2) % 7 + 1);
}

int integer2_29(int a, int b, int c)
{
	int d = (a / c) * (b / c);
	d = d * pow(c, 2);
	return (a * b - d);
}

int integer2_30(int a)
{
	return ((a - 1) / 100 + 1);
}