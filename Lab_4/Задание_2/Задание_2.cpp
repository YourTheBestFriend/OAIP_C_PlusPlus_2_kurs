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
	cout << "������� a: ";
	cin >> a;
	if (a == 100 | a < 0)
	{
		group = "������ A";
	}
	else
	{	
		if (a < 10 & a > 3)
		{
			group = "������ B";
		}
		else
		{
			if (a > 10 & a % 4 == 0)
			{
				group = "������ C";
			}
			else
			{
				group = "������ D";
			}
		}
	}

	cout << "����� " << a << " ��������� � " << group << endl;

	system("pause");
	return 0;
}