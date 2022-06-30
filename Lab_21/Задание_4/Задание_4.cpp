#include <iostream>
#include <Windows.h>
//#include <stdlib.h>
#include <time.h>
using namespace std;

class AirPlane
{
private:
	int colvo_people; // Сколько человек
	double size_kilia; // Размер киля
	char cash; // $ - бизнес класс, % - бюджет
	bool fly; // Может летать - 1, не может летать - 0 
	char name_AirPlane[20] = "Defaul_Plane"; // статический строковый массив(из символов)

public:
	//___________________
	// Геттеры прототипы
	int getColvo_people();
	double getSize_kilia();
	char getСash();
	bool getFly();
	char* getName_AirPlane(); // * - Т.к передача массива
	//___________________
	//___________________
	// Сеттеры прототипы
	void setColvo_people(int colvo);
	void setSize_kilia(double size_k);
	void setСash(char c);
	void setFly(bool f);
	void* setName_AirPlane(char* name_AP);
	//___________________
	AirPlane();
	AirPlane(int colvo, double size_k, char c, bool f, char* name_AP);
	~AirPlane();
	void Print();
	
	// Метод по расчитыванию колво людей на размер киля 
	void __METOD__()
	{
		double eql = getColvo_people() / getSize_kilia();
		cout << "\n~~~~~~~~~~~~~~~~~~~~~\nРаботал метод\nОтношение из метода = " << eql << "\n~~~~~~~~~~~~~~~~~~~~~\n";

	}


};// Конец описание класса Calculator

// КОНСТРУКТОР
AirPlane::AirPlane()
{
	cout << "_________________________________\nКонструктор (без параметров) закончил работу\n_________________________________\n";
}
// КОНСТРУКТОР c параметрами
AirPlane::AirPlane(int colvo, double size_k, char c, bool f, char* name_AP)
{
	colvo_people = colvo;
	size_kilia = size_k;
	cash = c;
	fly = f;
	name_AirPlane[100] = *name_AP;
	cout << "_________________________________\nКонструктор с параметрами закончил работу\n_________________________________\n";
}
//###########################CВОЙСТВА#################################

// Геттеры - Взять
int AirPlane::getColvo_people()
{
	return colvo_people;
}
double AirPlane::getSize_kilia()
{
	return size_kilia;
}
char AirPlane::getСash()
{
	return cash;
}
bool AirPlane::getFly()
{
	return fly;
}
char* AirPlane::getName_AirPlane() 
{
	return name_AirPlane; // * - Т.к массив
}
//====================================
//====================================
// Сеттеры - Поместить
void AirPlane::setColvo_people(int colvo)
{
	colvo_people = colvo;
}
void AirPlane::setSize_kilia(double size_k)
{
	size_kilia = size_k;
}
void AirPlane::setСash(char c)
{
	cash = c;
}
void AirPlane::setFly(bool f)
{
	fly = f;
}
void* AirPlane::setName_AirPlane(char* name_AP)
{
	if (strlen(name_AP) > 0)
	{
		strcpy_s(name_AirPlane, strlen(name_AP)+1, name_AP);
		return name_AirPlane;
	}
	else
	{
		return name_AirPlane;
	}
}


void AirPlane::Print()
{
	cout << "\n||||||||||||||||||||||||||||\n";
	cout << "Кол-во человек: " << getColvo_people() << endl;
	cout << "Размер киля: " << getSize_kilia() << endl;
	cout << "Кокой класс ($ - бизнес класс, % - бюджет): " << getСash() << endl;
	cout << "Может летать да/нет: " << getFly() << endl;
	cout << "Имя / Название  самолета: " << getName_AirPlane() << endl;
	cout << "\nМетод Print закончил работу\n||||||||||||||||||||||||||||\n";
	return;
}
//###########################CВОЙСТВА#################################

// ДЕСТРУКТОР
AirPlane::~AirPlane()
{
	cout << "_________________________________\nДеструктор закончил работу\n_________________________________\n";
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//
	int colvo = 10; 
	double size_k = 12.2; 
	char c = '$'; 
	bool f = true;
	char name_AP[] = {"mig_1"};
	//
	cout << "\n################################\nНовый экземпляр класса 1\n################################\n";
	AirPlane mig_1(colvo, size_k, c ,f, name_AP);
	//AirPlane mig_1;
	//mig_1.setColvo_people(colvo); // (colvo, size_k, c, f, *name_AP);
	mig_1.Print();
	mig_1.__METOD__();
	mig_1.~AirPlane();
	cout << "\n################################\nНовый экземпляр класса 2\n################################\n";
	AirPlane nova_12;
	nova_12.Print();
	//
	nova_12.setColvo_people(10);
	nova_12.setSize_kilia(20.2);
	nova_12.setFly(1);
	nova_12.setСash('%');
	char name_nova[] = { "nova_12" };
	nova_12.setName_AirPlane(name_nova);
	//
	nova_12.Print();
	// nova_12.~AirPlane();  // - Реализован в низу  (из 6-го задания 5 часть)
	cout << "\n################################\nНовый экземпляр класса 3\n################################\n";
	AirPlane ural;
	ural.Print();
	//
	int ural_col;
	double ural_size_k;
	char ural_c;
	bool ural_f;
	char name_ural[20];
	//
	cout << "Введите значения вручную:\n";
	cout << "Ввод кол-во людей: ";
	cin >> ural_col;
	cout << "Ввод размер киля: ";
	cin >> ural_size_k;
	cout << "Ввод $ - бизнес класс % - бюджет: ";
	cin >> ural_c;
	cout << "Ввод 1 - Модет летать 0 - не модет: ";
	cin >> ural_f;
	cout << "Ввод Имя / Название: ";
	cin.ignore();
	cin.getline(name_ural, 20);
	// 
	ural.setColvo_people(ural_col);
	ural.setSize_kilia(ural_size_k);
	ural.setFly(ural_f);
	ural.setСash(ural_c);
	ural.setName_AirPlane(name_ural);
	ural.Print();
	ural.~AirPlane();
	//
	cout << "\n################################\nНовый экземпляр класса 4 (Динамический)\n################################\n";
	//
	int gold_nova_col1;
	double gold_nova_size_k1;
	char gold_nova_c1;
	bool gold_nova_f1;
	char gold_nova_name_ural1[20];
	//
	cout << "Введите значения вручную:\n";
	cout << "Ввод кол-во людей: ";
	cin >> gold_nova_col1;
	cout << "Ввод размер киля: ";
	cin >> gold_nova_size_k1;
	cout << "Ввод $ - бизнес класс % - бюджет: ";
	cin >> gold_nova_c1;
	cout << "Ввод 1 - Модет летать 0 - не модет: ";
	cin >> gold_nova_f1;
	cout << "Ввод Имя / Название: ";
	cin.ignore();
	cin.getline(gold_nova_name_ural1, 20);
	// 
	AirPlane* gold_nova_1 = new AirPlane(gold_nova_col1, gold_nova_size_k1, gold_nova_c1, gold_nova_f1, gold_nova_name_ural1);
	if (gold_nova_1 == NULL)
	{
		cout << "No Memory\n";
		return 0;
	}
	gold_nova_1->Print();
	// gold_nova_1->~AirPlane(); - Реализован в низу  (из 6-го задания 5 часть)
	//

	cout << "\n################################\nНовый экземпляр класса 5 (Динамический)\n################################\n";
	AirPlane* gold_nova = new AirPlane;
	if (gold_nova == NULL)
	{
		cout << "No Memory\n";
		return 0;
	}
	gold_nova->Print();
	//
	int gold_nova_col;
	double gold_nova_size_k;
	char gold_nova_c;
	bool gold_nova_f;
	char gold_nova_name_ural[20];
	//
	cout << "Введите значения вручную:\n";
	cout << "Ввод кол-во людей: ";
	cin >> gold_nova_col;
	cout << "Ввод размер киля: ";
	cin >> gold_nova_size_k;
	cout << "Ввод $ - бизнес класс % - бюджет: ";
	cin >> gold_nova_c;
	cout << "Ввод 1 - Модет летать 0 - не модет: ";
	cin >> gold_nova_f;
	cout << "Ввод Имя / Название: ";
	cin.ignore();
	cin.getline(gold_nova_name_ural, 20);
	// 
	gold_nova->setColvo_people(gold_nova_col);
	gold_nova->setSize_kilia(gold_nova_size_k);
	gold_nova->setFly(gold_nova_f);
	gold_nova->setСash(gold_nova_c);
	gold_nova->setName_AirPlane(gold_nova_name_ural);
	gold_nova->Print();
	gold_nova->~AirPlane();
	//
	cout << "\n################################\nНовый экземпляр класса 5 (Через указатель)\n################################\n";

	AirPlane* pNova_12 = &nova_12; 
	AirPlane** pGold_nova = &gold_nova;
	pNova_12->Print();
	(**pGold_nova).Print(); // (*pGold_nova)->Print();
	
	AirPlane& rNova_12 = (*pNova_12); // 1
	rNova_12.Print();
	
	AirPlane& rGold_nova = (**pGold_nova); // 2
	
	rNova_12.__METOD__(); // 1
	rGold_nova.__METOD__(); // 2

	// Вызываю ДЕСТРУКТОРЫ ЭТИХ 2-ух элементов (остальные не в конце а после работы каждого) // - (из 6-го задания 5 часть)
	rNova_12.~AirPlane();
	rGold_nova.~AirPlane();

	system("pause");
	return 0;
}



