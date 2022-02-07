/* ≈сли у точки обе координаты (x и y) положительны, то она принадлежит первой четверти.
≈сли координата x отрицательна, а y положительна, то точка находитс€ во второй четверти.
≈сли обе координаты отрицательны, то точка принадлежит третьей координатной четверти.
≈сли x положительна, а y отрицательна, то точка находитс€ в IV четверти.*/
#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, y, A;
	string chetvert;
	cout << "≈сть A(x, y) -- происходит проверка в какой четверти находитс€ координата:\n";
	cout << "¬ведите x: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;

	if (x >= 0 & y >= 0)
	{
		chetvert = "I";
	}
	else
	{
		if (x < 0 & y >= 0)
		{
			chetvert = "II";
		}
		else
		{
			if (x < 0 & y < 0)
			{
				chetvert = "III";
			}
			else 
			{
				if (x >= 0 & y < 0)
				{
					chetvert = "IV";
				}
				else
				{
					cout << "ќшибка" << endl;
				}
			}

		}
	}
	cout << "¬аша координата находитс€ в : " << chetvert << " четверти\n" ;

	system("pause");
	return 0;
}



