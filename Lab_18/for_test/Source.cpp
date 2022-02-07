#include<iostream>
#include<Windows.h>
#include<ctime>
using namespace std;
//##################
struct student
{
	int ball;
};
void bbubleSortStudents(student*, int);
//##################
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	const int n = 10;
	student mas[n];

	system("pause");
	return 0;
}
//##################
void bbubleSortStudents(student* mas, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (mas[j].ball > mas[j+1].ball)
			{
				student t = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = t;
			}
		}
	}
}
//##################
