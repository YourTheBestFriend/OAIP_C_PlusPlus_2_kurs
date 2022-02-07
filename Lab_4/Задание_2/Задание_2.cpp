#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a;
	string group;
	cout << "Введите a: ";
	cin >> a;
	if (a == 100 | a < 0)
	{
		group = "группе A";
	}
	else
	{	
		if (a < 10 & a > 3)
		{
			group = "группе B";
		}
		else
		{
			if (a > 10 & a % 4 == 0)
			{
				group = "группе C";
			}
			else
			{
				group = "группе D";
			}
		}
	}

	cout << "Число " << a << " относится к " << group << endl;

	system("pause");
	return 0;
}