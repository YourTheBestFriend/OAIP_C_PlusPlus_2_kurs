#include <iostream> 
#include <cmath> 
#include <Windows.h> 

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double b;
	cout << "Введите b: ";
	cin >> b;

	if (b > 0)
	{
		cout << "Ваше значение положительное: " << endl;
	}
	else
	{
		if (b < 0)
		{
			cout << "Ваше значение отрицательное: " << endl;
		}
		else
		{
			cout << "Ваше значение равно нулю: " << endl;
		}
	}
	system("pause");
	return 0;
}
