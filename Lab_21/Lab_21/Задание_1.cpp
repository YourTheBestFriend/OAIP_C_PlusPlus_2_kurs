#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
//########################
// Задание 2 и 3 (задание 1 писали на паре в тетрадь и я параллельно кодил в другой файл)
class Calculator
{
private:
	double a;
	double b;
	char c;
	double r;

public:
	// Геттеры
	double getA();
	double getB();
	char getC();
	double getR();
	// Сеттеры
	void setA(double a0);
	void setB(double a0);
	// Прототипы
	Calculator(double a1, double b1); // Прототип Конструктора
	void vychislenie(char x); // Прототип метода vychislenie
	void random_A_B(); // Из Задания 3
};// Конец описание класса Calculator

Calculator::Calculator(double a1, double b1)
{
	a = a1; // Значение переменной конструктор присваивает полю private double a;
	b = b1; // Значение переменной конструктор присваивает полю private double b;
}

//############################
// Геторы - выдают значения  
double Calculator::getA() // Метод (свойство) для получения поля a // Метод находится в пространстве имен класса Calculator
{ 
	return a;
}
double Calculator::getB() // Метод (свойство) для получения поля b // Метод находится в пространстве имен класса Calculator
{
	return b;
}
char Calculator::getC() // Метод (свойство) для получения поля c // Метод находится в пространстве имен класса Calculator
{
	return c;
}
double Calculator::getR() // Метод (свойство) для получения поля r // Метод находится в пространстве имен класса Calculator
{
	return r;
}
//############################


//############################
// Сетторы - помещают значения
void Calculator::setA(double a0) // Метод (свойство) для установки значения поля a
{
	a = a0;
}
void Calculator::setB(double b0) // Метод (свойство) для установки значения поля b
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
		cout << "Арифм. действие отсутствует.\n";
		break;
	}
	}// Конец switch'a
	return;
} // Конец метода void Calculator::vychislenie(char x)
void Calculator::random_A_B()
{
	srand(time(NULL));
	if (a > b)
	{
		int x = a;
		a = b;
		b = x;
	}
	r = a + rand() % ( (int)b - (int)a + 1); // Исполбзавал приведение типов
	return; // Должен вернуть ничего 
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
		cout << "Введите число 1 / можно вещественное.\n";
		cin >> a1;
		cout << "Введите арифм знак-оператор. ( + - * /)\n";
		cin >> x0;
		cout << "Введите число 2 / можно вещественное.\n";
		cin >> b1;
		Calculator k(a1, b1); // Работает конструктор класса Calculator, который принимает 2 числа и создает экземпляр класса Calculator // - k(это переменна типа Calculator)
		k.vychislenie(x0);// у объекта (экземпляра класса) Calculator вызываем метод vychislenie, которому передаем символ типа char 
		double rez = k.getR();// Переменной rez присваиваем значение, возвращаемое свойством getR() у объекта k
		cout << k.getA() << ' ' << k.getC() << ' ' << k.getB() << " = " << k.getR() << endl;
		k.random_A_B();
		double rez_random = k.getR();
		cout << "Рандомное значение в диапазоне: " << k.getA() << " - " << k.getB() << "\nСамо значение: " << rez_random << endl;
		cout << "Продолжить < 1 - Да | 0 - Нет >" << endl;
		cin >> f;
	} while (f == true);
	system("pause");
	return 0;
}



