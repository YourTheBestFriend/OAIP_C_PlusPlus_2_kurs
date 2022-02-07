#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	bool my_num; // Создал белевскую переменную
	bool* pMy_num = &my_num; // Создал указатель
	bool& rMy_num = my_num; // Создал ссылку
	cout << "Адрес переменной в указателе pMy_num: " << pMy_num << " Значение адреса: " << *pMy_num << endl; // *pMy_num - разыменовываю адрес
	cout << "Адрес который хранится в ссылке rMy_num: " << &rMy_num << endl; // Печатаю адрес значения по ссылке
	my_num = true; // Присвоил значение истина
	
	// Печать элементов 
	cout << "Значение: " << my_num << endl; // По переменной
	cout << "Значение: " << *pMy_num << endl; // По указателю
	cout << "Значение: " << rMy_num << endl; // По ссылке
	
	// Присвоение переменной обратное значение (тут значение меняется 3 раза)
	my_num = !my_num; // По переменной
	*pMy_num = !(*pMy_num); // По указателю
	rMy_num = !(rMy_num); // По ссылке
	
	// Печать элементов 
	cout << "Значение: " << my_num << endl; // По переменной
	cout << "Значение: " << *pMy_num << endl; // По указателю
	cout << "Значение: " << rMy_num << endl; // По ссылке

	system("pause");
	return 0;
}
