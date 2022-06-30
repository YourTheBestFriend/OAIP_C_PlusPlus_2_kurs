#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
using namespace std;

class racional_drob
{
protected:
	int m, n;
public:
	racional_drob() {}
	racional_drob(int m, int n) 
	{
		this->m = m;
		this->n = n;
	}
	/* Чтобы привести дробь к несократимому виду нужно ее числитель и знаменатель разделить на их НОД. Сокращение дробей удобно применять, чтобы не работать с большими цифрами.*/
	double HOD(int a, int b)
	{		
		while (a && b)
		if (a >= b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
		return a | b;
	}
	int getM()
	{
		return m;
	}
	int getN()
	{
		return n;
	}
};


class employee // Класс предка
{
private:
	int yroven_dostupa;
public:
	employee() // Конструктор без параметров
	{
	}
	employee(int yroven_dostupa) // Конструктор с параметрами
	{
		this->yroven_dostupa = yroven_dostupa;
	}
	int getYroven_dostupa() // Геттер для взятия уровня доступа
	{
		return yroven_dostupa;
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////// код для перегрузки операторов 
	// 1
	employee operator-(int x) // для вычитания числа
	{
		yroven_dostupa -= x;
		return *this;
	}
	// 2
	employee operator++(int) // для постфиксного инкримента
	{
		yroven_dostupa++;
		return *this;
	}
	// 3 
	bool operator<=(employee obj)// для сравнение <=
	{
		return yroven_dostupa <= obj.getYroven_dostupa();
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////// код для перегрузки операторов 
	void Show()
	{
		cout << "Уровень доступа: " << yroven_dostupa << endl;
	}
};

class string_
{
protected:
	char str[15];
public:
	string_() {}
	string_(char str[])
	{
		SetStr(str);
		//(*this).str;
	}
	char* GetStr()
	{
		return str;
	}
	char* SetStr(char n[])
	{
		if (strlen(n) > 0)
		{
			strcpy_s(str, strlen(n) + 1, n);
			return str;
		}
		else
			return str;
	}
	string_ operator+(char str_1[])
	{
		strcat(str, str_1);
		return str; // *this
	}
	~string_() {}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	racional_drob racdrop(5, 3);
	int x = racdrop.HOD(racdrop.getM(), racdrop.getN());
	int nesocratumoe = (racdrop.getM() / x) / (racdrop.getN() / x);
	cout << "nesocratumoe: " << nesocratumoe << endl;
	employee Matvey(10); // Сотрудник Матвей с уровнем доступа 10
	Matvey.Show();
	Matvey - 3;
	Matvey++; // Увеличение уровня доступа на 1
	Matvey.Show();

	employee Valera(2); // Сотрудник Валера с уровнем доступа 2 // Для сравнения
	bool f = Matvey <= Valera;
	cout << "Matvey <= Valera: " << f << endl;
	char str[] = "Это строка 1\0";
	string_ strING(str);
	char str_1[] = "qwerty\0";
	strING + str_1;
	cout << "Конкатенация === " << strING.GetStr() << endl;

	system("pause");
	return 0;
}
