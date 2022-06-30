#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int N = 7;
	int mas[N];
	int rasp_1=0, rasp_2=0;

	for (int i = 0; i < N; i++)
	{
		cout << "mas[" << i << "] ¬вод: ";
		cin >> mas[i];

	}
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] < 0)
		{
			cout << mas[i] << ' ';
		}
		
	}
	
	system("pause");
	return 0;
}


