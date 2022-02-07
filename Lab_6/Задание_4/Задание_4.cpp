#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int N = 10;
	double massiv[N];
	
	for (int i = 0; i < N; i++)
	{
		cout << "massiv[" << i << "] ¬вод: ";
		cin >> massiv[i];
	}
	cout << endl;
	for (int i = 5; i < N; i++)
	{
		cout << "massiv[" << i <<"] = " << massiv[i] << endl;
	}
	cout << "\nтеперь только не кратные трем (i % 3 != 0) - от п€того индекса\n\n"; // c 5 индекса 
	for (int i = 0; i < N; i++)
	{
		if (i % 3 != 0)
		{
			cout << "massiv[" << i << "] = " << massiv[i] << endl;
		}
	}


	system("pause");
	return 0;
}


