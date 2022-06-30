#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, z,s;
	cout << "Уравнение вида: s = (min(max(x,y), max(y,z)) / (max(y,z))\n";
m:	cout << "Введите x:";
	cin >> x;
	cout << "Введите y:";
	cin >> y;
	cout << "Введите z:";
	cin >> z;
	if ((y > z ? y : z) == 0)
	{
		cout << "Знаменатель не может равняться нулю\n";
		goto m;
	}
	s = ((x > y ? x : y) < 0 ? (x > y ? x : y) : (y > z ? y : z)) / (y > z ? y : z ); // оптимизация
	cout << "Ваш ответ y: " << s << endl;
	system("pause");
	return 0;
}