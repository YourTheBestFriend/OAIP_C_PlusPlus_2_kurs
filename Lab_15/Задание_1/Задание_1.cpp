 #include <iostream>
#include <Windows.h>
#include "�������_1.h"
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// 1
	struct factory
	{
		double years_work;
		int cars;
		char name[15];
		bool work;
	} bbb[78];

	factory new_merin = { 2000.0, 1000, "cars_build", 1 }; // ����� �������������
	// 2
	factory new_ford;
	new_ford.years_work = 2004.0;
	new_ford.cars = 800;
	cout << "�������� ������ (<15): "; cin >> new_ford.name;
	cout << new_ford.years_work << '|' << new_ford.cars << '|' << new_ford.name << endl;
	// 3
	factory new_BMW; 
	cout << "���: "; cin >> new_BMW.years_work;
	cout << "������� �����: "; cin >> new_BMW.cars;
	cout << "�������� ������ (<15): "; cin >> new_BMW.name;
	cout << new_BMW.years_work << '|' << new_BMW.cars << '|' << new_BMW.name << endl;
	// 4 
	factory new_nisan;
	factory* pNisan = &new_nisan;
	cout << "���: "; cin >> pNisan->years_work;
	cout << "������� �����: "; cin >> pNisan->cars;
	cout << "�������� ������ (<15): "; cin >> pNisan->name;
	cout << pNisan->years_work << '|' << pNisan->cars << '|' << pNisan->name << endl;
	// 5
	factory new_gelik;
	factory& pGelik = new_nisan;
	cout << "���: "; cin >> pGelik.years_work;
	cout << "������� �����: "; cin >> pGelik.cars;
	cout << "�������� ������ (<15): "; cin >> pGelik.name;
	cout << pGelik.years_work << '|' << pGelik.cars << '|' << pGelik.name << endl;
	system("pause");
	return 0;
}
