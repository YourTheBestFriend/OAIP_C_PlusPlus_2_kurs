#include <iostream> 
#include <cmath> 
#include <Windows.h> 

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double b;
	cout << "������� b: ";
	cin >> b;

	if (b > 0)
	{
		cout << "���� �������� �������������: " << endl;
	}
	else
	{
		if (b < 0)
		{
			cout << "���� �������� �������������: " << endl;
		}
		else
		{
			cout << "���� �������� ����� ����: " << endl;
		}
	}
	system("pause");
	return 0;
}
