#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// 1
	const int size_ = 10; // Размерность yesrs
	const int size_name = 5; // Размерность названия 
	const int size_factory = 3; // Сколько в структуре объектов
	struct factory // Структура
	{
		int tovar_num[size_];
		double yers_work;
		char name[size_name];
		bool work; // Работае / не работает - true / false - 1 / 0

	};
	factory factories[size_factory]; // Массив со структурами
	// 2
	for (int i = 0; i < size_factory; i++) // Вводим данные объекта структуы // const int size_factory = 5 - Всего 5 объектов
	{
		for (int j = 0; j < size_; j++)
		{
			cout << "tovar number: ";
			cin >> factories[i].tovar_num[j];
		}
		cout << "years_work: ";
		cin >> factories[i].yers_work;
		cout << "name: ";
		cin >> factories[i].name; // работает (хотел написать что-то с getline), а если так написать то проблемка с терминирующим нулем
		cout << "true/false - 1/0: ";
		cin >> factories[i].work;
	}
	// 3
	for (int i = 0; i < size_factory; i++) // Печать элементов объектов
	{
		for (int j = 0; j < size_; j++)
		{
			cout << "tovar number: " << factories[i].tovar_num[j] << endl;
		}
		cout << "years_work: " << factories[i].yers_work << endl;
		cout << "name: " << factories[i].name << endl;
		cout << "true/false - 1/0: " << factories[i].work << endl;
	}
	// 4
	int x, flag = 0; 
	cout << "Введите x: ";
	cin >> x;
	for (int i = 0; i < size_factory; i++) // Пробегаюсь по структурам
	{
		for (int j = 0; j < size_; j++) // Пробегаюсь по полям структур
		{
			if (x != factories[i].tovar_num[j]) // Проверяю если такой номер товара(машины) который ввел пользователь
			{
				flag++; // Нарастил кол-во (не совпадаюших значений)
			}
		}
	}
	cout << "Кол-во таких объектов: " << flag << endl; // В моем случае  кол-во тех значений не равных x
	
	// 5
	/*  обращение к ее полям будет не через «точку»(переменная.поле), а через «тире и знак «больше»»(указатель– > поле) -- не работает */ 
	int n = 3;
	factory* factories_d = new factory[n];
	if (factories_d == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < size_; j++)
		{
			cout << "tovar number: ";
			cin >> factories_d[i].tovar_num[j];
		}
		cout << "years_work: ";
		cin >> factories_d[i].yers_work;
		cout << "name: ";
		cin >> factories_d[i].name; 
		cout << "true/false - 1/0: ";
		cin >> factories_d[i].work;
	}
	for (int i = 0; i < n; i++) // Печать элементов объектов
	{
		for (int j = 0; j < size_; j++)
		{
			cout << "tovar number: " << factories_d[i].tovar_num[j] << endl;
		}
		cout << "years_work: " << factories_d[i].yers_work << endl;
		cout << "name: " << factories_d[i].name << endl;
		cout << "true/false - 1/0: " << factories_d[i].work << endl;
	}
	delete[] factories_d; // В примере не зануляется

	// 6 
	const int f = 20;
	const int in = 2;
	struct WORKER 
	{
		char familia[f], iniciali[in];
		int years_go_work;
	};
	const int s = 10;
	WORKER people[s];
	for (int i = 0; i < s; i++)
	{
		cout << "Введите фамилию: ";
		cin >> people[i].familia;
		cout << "Введите инициалы: ";
		cin >> people[i].iniciali;
		cout << "Год поступления на работу: ";
		cin >> people[i].years_go_work;
	}

	bool flag_for_no_people = 1;
	int year_x;
	cout << "Введите стаж: ";
	cin >> year_x;

	for (int i = 0; i < s; i++)
	{
		if (year_x < people[i].years_go_work)
		{
			cout << "Стаж этого работника выше: " << people[i].familia << endl;
			flag_for_no_people = false;
		}
	}
	if (flag_for_no_people == true)
	{
		cout << "Стаж работников меньше заданного" << endl;
	}


	system("pause");
	return 0;
}
