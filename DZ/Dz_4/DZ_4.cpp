#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	int z, x, y;
	cin >> x;
	cin >> y;
	z = y;
	y = x;
	x = z;
	cout << x << "\n" << y;

}