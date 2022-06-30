#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;
//unsigned long long int factorial(unsigned long long int);
bool prostNumber(int);
void print(int, int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	int a, b;
	cout << "С какого числа начать9999? ";
	cin >> a;
	cout << "На каком числе закончить? ";
	cin >> b;
	if (a > b)
	{
		int c = a;
		a = b;
		b = c;
	}
	print(a,b);

	/*unsigned long long int a ;
	cout << "Введите a: ";
	cin >> a;
	cout << "Ваш ответ: " << factorial(a)<< endl;
	for (int i = 0; i < 101; i++)
	{
		cout << i << "\t\t" << factorial(i) << endl;
	}
	int z = factorial(a);
	cout << "Ваш ответ: " << z << endl;*/

	/*int x = 1;
	int y = x++ + x + ++x;
	cout << y++ << ' ' << ++x << endl ;*/

	/*int x = 10;

	int main()
	{
		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);

		int x = 15;

		{
			cout << ::x << endl;

		}
	}*/


		//cout << "          *\n"
		//	<< "         *|*\n"
		//	<< "        **|**\n"
		//	<< "       ***|***\n"
		//	<< "      ****|****\n"
		//	<< "     *****|*****\n"
		//	<< "    ******|******\n"
		//	<< "   *******|*******\n"
		//	<< "  ********|********\n"
		//	<< " *********|*********\n"
		//	<< "**********|**********\n"
		//	<< "<------------------->\n"
		//	<< "**********|**********\n"
		//	<< " *********|*********\n"
		//	<< "  ********|********\n"
		//	<< "   *******|*******\n"
		//	<< "    ******|******\n"
		//	<< "     *****|*****\n"
		//	<< "      ****|****\n"
		//	<< "       ***|***\n"
		//	<< "        **|**\n"
		//	<< "          *\n";




	/* 
	* 
	* 
	* 
	* 
	* 	int i, a, b, d;
	cout << "С какого числа начать? ";
	cin >> a;
	cout << "На каком числе закончить? ";
	cin >> b;
	if (a > b)
	{
		int c = a;
		a = b;
		b = c;
	}
	cout << "Выберите с каким шагом:  ";
	cin >> d;
	
	for (i = a; i <= b; i += d)
	{
		cout << i << endl;
	}
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 	int a, b, d;
	cout << "С какого числа начать? ";
	cin >> a;
	cout << "На каком числе закончить? ";
	cin >> b;
	if (a > b)
	{
		int c = a;
		a = b;
		b = c;
	}
	cout << "Выберите с каким шагом:  ";
	cin >> d;
	for (a; a <= b; a += d)
	{
		cout << a << endl;
	}
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	* 
	for (int i = 0; i < 1000001; i *= 10)
	{
		cout << i << endl;
		if (i == 0)
		{
			i++;
		}
	}
	int i = 0;
	while (i < 1000001)
	{
		cout << i << endl;
		if (i == 0)
		{
			i++;
		}
		i *= 10;
	}
	i = 0;
	do
	{
		cout << i << endl;
		if (i == 0)
		{
			i++;
		}
		i *= 10;
	} while (i < 1000001);





	/* 
	for (int i = 0; i < 256; i += 5)
	{
		cout << i << endl;
	}
	int i = 0;
	while (i < 226)
	{
		cout << i << endl;
		i += 5;
	}
	
	do
	{
		cout << i << endl;
		i += 5;
	} while (i < 256);

	
	
	/* 
	for (int i = 0; i < 101; i++)
	{
		cout << i << endl;
	}
	
	int i = 0;
	while (i < 101)
	{
		cout << i++ << endl;
	}

	do
	{
	cout << i++ << endl;
	} while (i < 101);
	*/



	/* 
	for (;;)
	{
		cout << '+';
	}

	for (int i = 0; i > -5; i++)
	{
		cout << i << endl;
	}
	for (int i = 0;; i++)
	{
		cout << i << endl;
	}

	
	/*
	int i = 0;
	while (i == 0)
	{
		cout << i;
	}
	while (3 < 5)
	{
		cout << "1";
	}
	*/
	/* 
	while (true)
	{
		cout << " $_____gg vp_____$ ";
		Sleep(4);
	}
	*/
	/* 
	int a, b;
	cout << "С какого числа начать? ";
	cin >> a;
	cout << "На каком числе закончить? ";
	cin >> b;
	if (a > b)
	{
		int c = a;
		a = b;
		b = c;
	}
	cout << "x\tКорень(x)\n";
	for (int i = a; i < b; i++)
	{
		if (i < 0)
		{
			cout << "Корень из чисел < 0 не извлекается.\n";
			continue;
		}
		cout << i << "\t" << sqrt(i) << endl;

	}
	*/

	/* 
	double x = -1; cout << "x | sin(x) | cos(x) | tg(x)\n";
	while (x <= 1)
	{
		cout << x << " | " << sin(x) << " | " << cos(x) << " | " << tan(x) << endl;
		x = x + 0.1;
		cout << "1-продолжить;\n0-завершить: ";
		int y;
		cin >> y;
		if (y == 0)
		{
			break;
		}
	}
	cout << "Конец цикла.\n";
	*/


	/* 
	int s = 5;
	int d = s++ + --s;
	cout << d++ << " " << s-- << endl;
	cout << d << " " << s << endl;
	*/
	/*
	int a = 3;
	int y = a-- - --a;
	cout << y-- << " " << --a << endl;
	*/
	/*   
	int a, b, z;
	a = 6;
	b = 7;
	z = fmod(a, b);
	cout << z;
	*/
	
	/* 
	int a = 3.5;
	int x = 6;
	double y = 2.5;
	double z = x / y;
	cout <<  z << endl; */
	
	
	/* 
	double a, f, r, x, y;
	int p;
	cout << "Введите x:";
	cin >> x;
	cout << "Введите y:";
	cin >> y;
	cout << "Меню:\n1-расчитать sh(x)\n2-расчитать x^2\n3-расчитать экстпоненту exp(x)\nВыберите пункт меню: ";
	cin >> p;
	switch (p)
	{
	case 1: //если  окажется равным 1, то выполнить тело кейса 1
	{//начало тела кейса 1
		f = sinh(x);
		cout << p << endl;
		break;
	}//конец тела кейса 1
	case 2:
	{
		f = pow(x, 2);
		break;
	}
	case 3:
	{
		f = exp(x);
		break;
	}
	default://если p не будет равным ни 1, ни 2, ни 3
	{
		cout << "Такого варианта нет.\n";
		system("pause");
		return 0;
		break;//завершить программу, ведь для дальнейших расчетов потребуется f
	}	
	}//конец тела switch'a
	cout << "f(x) = " << f << endl;
	a = fabs(x * y);
	cout << "|x*y| = " << a << endl;
	if (a < 5)//в задании нет описания, что делать, если |y*x| < 5
	{
		cout << "Для случая когда |x * y| < 5";
		system("pause");
		return 0;//завершить программу
	}
	else//то есть а больше либо равно 5
	{
		if (a == 5)//если a равно 5 
		{
			r = sin(x) + tan(y);
		}
		else//если a больше 5
		{
			if (a > 10)//если a больше 5 и при этом a больше 10
			{
				r = fabs(f) + log(y);
			}
			else
			{
				r = exp(f + y);
			}
		}
	}

	cout << "Результат вычислений: " << r << endl; */
	system("pause");
	return 0;
}

//unsigned long long int factorial(unsigned long long int x)
//{
//	unsigned long long int r = 1;
//	for (unsigned long long int i = 1; i <= x; i++)
//	{
//		r = r * i;
//	}
//	return r;
//}


bool prostNumber(int a)
{
	int x = 0; 
	for (int i = 1; i <= a; i++) // int i = 1; i <= a/2; i++)
	{
		if (a % i == 0)
		{
			x += 1;
		}
	}
	if (x > 2) // x > 1
	{
		return false;
	}
	return true;
}
void print(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (prostNumber(i) == true)
		{
			cout << i << "   -простое." << endl;
		}
		else
		{
			cout << i << "   -не простое." << endl;
		}
	}
}
