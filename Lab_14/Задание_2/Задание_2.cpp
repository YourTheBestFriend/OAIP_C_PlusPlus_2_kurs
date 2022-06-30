#include <iostream>
#include <Windows.h>
using namespace std;

double znach_polinoma(int, int, int*);
double polin(int*, int, int, int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, n;
	int* a = new int[11] {1,2,3,4,5,6,7,8,9,11};
	cout << "x: "; cin >> x; // x
	cout << "n: "; cin >> n; // порядок (1<=n<=10)
	if (n < 1 | n > 10) { system("pause"); return 0; } // Проверка (1<=n<=10)
	// Если отрицательные через тернарник
	x < 0 ? x = -x : x;
	n < 0 ? n = -n : n;

	cout << "Otvet: " << znach_polinoma(n,x,a) << endl;
	system("pause");
	return 0;
}

double znach_polinoma(int n, int x, int* a)
{
	if (n == 1) { return a[n - 1] + a[n] * x; }
	int s = 0;
	if (n > 1)
	{
		s = a[n];
		for (int i = n; i >= 1; i--)
		{
			s = polin(a, x, s, i);
		}
	}
	return s;
}
double polin(int* a, int x, int s, int i)
{
	return a[i - 1] + x * s;
}

