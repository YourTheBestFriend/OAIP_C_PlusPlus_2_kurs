#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int N = 15;
	double mas[N] = {1.2, 2.32, 2.122, 4.3, 2.3, 8.2, 9.5, 6.5, 9.23, 5.2,3.2, 5.212, 6.31, 7.4, 8.32};
	
	cout << "mas[15]\t\tизмененный mas[15]\n";
	double rasp_1, rasp_2;
	for (int j = 0; j < N; j++)
	{
		rasp_1 = mas[j];
		rasp_2 = mas[j] - 10.5;
		cout << rasp_1 << "\t\t" << rasp_2 << endl;
	}
	
	
	system("pause");
	return 0;
}


