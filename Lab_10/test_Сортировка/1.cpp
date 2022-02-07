#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <cmath>
#include <Windows.h>

using namespace std;

void printStars(int);
void printRowsStars(int, int);
void printTriangle(int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	printRowsStars(7, 3);
	printTriangle(4);

	system("pause");
	return 0;
}


void printStars(int x)
{
	if (x <= 0)
	{
		cout << endl;
		return;
	}
	cout << '$';
	printStars(--x);
}
void printRowsStars(int x, int y)
{
	if (y <= 0) 
	{
		cout << endl;
		return;
	}
	printStars(x);
	printRowsStars(x, --y);
}
void printTriangle(int z)
{
	if (z <= 0)
	{
		cout << endl;
		return;
	}
	printStars(z);
	printTriangle(--z);
}

