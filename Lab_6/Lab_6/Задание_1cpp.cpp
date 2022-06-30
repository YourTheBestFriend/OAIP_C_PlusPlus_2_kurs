#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int N = 20;
	int mas[N];
	int chetn=0, NEchetn=0;

	for (int i = 0; i < N; i++)
	{
		cout << "mas[" << i << "] Ввод: ";
		cin >> mas[i];
		if (mas[i] % 2 == 0)
		{
			chetn++;
		}
		else
		{
			NEchetn++;
		}
	}
	if (chetn > NEchetn)
	{
		cout << "Четных больше." << endl;
	}
	else
	{
		if (chetn < NEchetn)
		{
			cout << "Нечетных больше." << endl;
		}
		else
		{
			cout << "Равное количество четных и нечетных." << endl;
		}
	}
	system("pause");
	return 0;
}


