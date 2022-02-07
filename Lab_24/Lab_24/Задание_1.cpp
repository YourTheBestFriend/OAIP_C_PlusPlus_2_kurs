#include <iostream>
#include <windows.h>
using namespace std;

// абстрактный класс HONOSAOIENS
class HOMOSIOIENS
{
public:
	HOMOSIOIENS()
	{
	}
	// Геттеры
	virtual char* getName() = 0;
	virtual int getAge() = 0;
	virtual ~HOMOSIOIENS()
	{

	}
};
class Person : HOMOSIOIENS
{
protected:
	char name[15];
	int age;

public:
	Person()
	{
	}
	// Геттеры
	char* getName() override
	{
		return name;
	}
	int getAge() override
	{
		return age;
	}
	// Сеттеры
	void* setName(char* n)
	{
		if (strlen(n) > 0)
		{
			strcpy_s(name, strlen(n) + 1, n);
			return name;
		}
		else
		{
			return name;
		}
	}
	void setAge(int a)
	{
		age = a;
	}
	virtual ~Person()
	{
	}
};

class Employee : Person
{
public:
	char dolzhnost[30];
	double oklad;
	Employee()
	{
	}
	// Геттеры
	char* getDdolzhnost()
	{
		return dolzhnost;
	}
	double getOklad()
	{
		return oklad;
	}
	// Сеттеры
	void* setDdolzhnost(char* n)
	{
		if (strlen(n) > 0)
		{
			strcpy_s(dolzhnost, strlen(n) + 1, n);
			return dolzhnost;
		}
		else
		{
			return dolzhnost;
		}
	}
	void setOklad(int o)
	{
		oklad = o;
	}
	void vichislenie_zarplati(double premia)
	{
		cout << "Зарплата: " << oklad + premia << endl;
	}
	virtual ~Employee()
	{
	}

};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Person p1;
	char str[] = "Ben";
	p1.setName(str);
	p1.setAge(12);

	Employee p2;
	char str2[] = "Director";
	p2.setDdolzhnost(str2);
	p2.setOklad(300.2);
	p2.vichislenie_zarplati(30.3);


	system("pause");
	return 0;
}
