#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, z,s;
	cout << "��������� ����: s = (min(max(x,y), max(y,z)) / (max(y,z))\n";
m:	cout << "������� x:";
	cin >> x;
	cout << "������� y:";
	cin >> y;
	cout << "������� z:";
	cin >> z;
	if ((y > z ? y : z) == 0)
	{
		cout << "����������� �� ����� ��������� ����\n";
		goto m;
	}
	s = ((x > y ? x : y) < 0 ? (x > y ? x : y) : (y > z ? y : z)) / (y > z ? y : z ); // �����������
	cout << "��� ����� y: " << s << endl;
	system("pause");
	return 0;
}