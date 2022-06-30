#include <iostream>
#include <windows.h>

using namespace std;

class employee // Класс предка
{
private:
	int yroven_dostupa = 0;
	double zarplata = 0.0;
protected:
	string name_dolzhnosti = "default";
public:
	employee() // Конструктор
	{
	}
	employee(string name_dolzhnosti, int yroven_dostupa, int zarplata) // Конструктор с параметрами
	{
		this->name_dolzhnosti = name_dolzhnosti;
		this->yroven_dostupa = yroven_dostupa;
		this->zarplata = zarplata;
	}
	virtual void Show()
	{
		cout << "Имя должности: " << name_dolzhnosti << endl;
		cout << "Уровень доступа: " << yroven_dostupa << endl;
		cout << "Зарплата: " << zarplata << endl;
	}
};
class stazhor : protected employee 
{
private:
	int yroven_dostupa2;
	double zarplata2;

public:
	string name_dolzhnosti2;
	stazhor(string name_dolzhnosti, int yroven_dostupa, int zarplata) : employee(name_dolzhnosti, yroven_dostupa, zarplata)
	{
		this->name_dolzhnosti2 = name_dolzhnosti;
		this->yroven_dostupa2 = yroven_dostupa;
		this->zarplata2 = zarplata;
	}
	void Show() override
	{
		employee::Show();	
	}
};

class worker : protected employee
{
private:
	int yroven_dostupa3;
	double zarplata3;
protected:
	string name_dolzhnosti3;
public:
	worker(string name_dolzhnosti, int yroven_dostupa, int zarplata) : employee(name_dolzhnosti, yroven_dostupa, zarplata)
	{
		this->name_dolzhnosti3 = name_dolzhnosti;
		this->yroven_dostupa3 = yroven_dostupa;
		this->zarplata3 = zarplata;
	}
	void Show() override
	{
		employee::Show();
	}
};

class nachalnik_otdela : protected employee
{
private:
	int yroven_dostupa4;
	double zarplata4;
protected:
	string name_dolzhnosti4;
public:
	nachalnik_otdela(string name_dolzhnosti, int yroven_dostupa, int zarplata) : employee(name_dolzhnosti, yroven_dostupa, zarplata)
	{
		this->name_dolzhnosti4 = name_dolzhnosti;
		this->yroven_dostupa4 = yroven_dostupa;
		this->zarplata4 = zarplata;
	}
	void Show() override
	{
		employee::Show();
	}
};

class director : protected employee
{
private:
	int yroven_dostupa5;
	double zarplata5;
protected:
	string name_dolzhnosti5;
public:
	director(string name_dolzhnosti, int yroven_dostupa, int zarplata) : employee(name_dolzhnosti, yroven_dostupa, zarplata)
	{
		this->name_dolzhnosti5 = name_dolzhnosti;
		this->yroven_dostupa5 = yroven_dostupa;
		this->zarplata5 = zarplata;
	}
	void Show() override
	{
		employee::Show();
	}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	stazhor employee_ztazhor("stazhor", 0, 100);
	employee_ztazhor.Show();
	
	worker employee_worker("worker", 10, 400);
	employee_worker.Show();
	
	nachalnik_otdela employee_nachalnik_otdela("nachalnik_otdela", 20, 500);
	employee_nachalnik_otdela.Show();
	
	director employee_director("director", 25, 600);
	employee_director.Show();

	// *
	cout << "____________Dinemic___________" << endl;
	stazhor* employee_ztazhor_d = new stazhor("stazhor_DDD", 0, 100);
	employee_ztazhor_d->Show();
	worker* employee_worker_d = new worker("worker_DDD", 10, 400);
	employee_worker_d->Show();
	nachalnik_otdela* employee_nachalnik_otdela_d = new nachalnik_otdela("nachalnik_otdela_DDD", 20, 500);
	employee_nachalnik_otdela_d->Show();
	director* employee_director_d = new director("director_DDD", 25, 600);
	employee_director_d->Show();


	system("pause");
	return 0;
}

