#include <iostream> 
#include <cmath> 
#include <windows.h> 
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	/*
	const double pi = 3.14;
	double a;
	double z1, z2;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
	cout << "������� 1" << endl << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	cout << "������� a (�����): ";
	cin >> a;

	z1 = 2 * (pow(sin((3 * pi) - (2 * a)), 2)) * (pow(cos((5 * pi) + (2 * a)), 2));
	z2 = (1 / 4.0) - ((1 / 4.0) * (sin(((5 / 2.0) * pi) - (8 * a))));
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 6));
	cout << "z1= " << z1 � endl;
	cout << "z2= " � z2 � endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 � 4) | 7));

	double t, x, y, z;

	SetConsoleTextAttribute(hConsole, (WORD)((0 � 4) | 2));
	cout � endl � "������� 2" � endl � endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 � 4) | 7));
TryAgain:
	cout � "������� x: ";
	cin � x;
	cout � "������� y: ";
	cin � y;
	cout � "������� z: ";
	cin � z;

	if (0.5 + pow(sin(y), 2) == 0)
	{
		cout � "������" � endl;
		goto TryAgain;
	}
	else
	{
		if (3 - pow(z, 2) / 5 == 0)
		{
			cout � "������" � endl;
			goto TryAgain;
		}
		else
		{
			t = (2 * (cos(x - (pi / 6)))) / (0.5 + pow(sin(y), 2)) * (1 + (pow(z, 2)) / (3 - pow(z, 2) / 5));
			SetConsoleTextAttribute(hConsole, (WORD)((0 � 4) | 6));
			cout � "t= " � t � endl � endl;
			SetConsoleTextAttribute(hConsole, (WORD)((0 � 4) | 7));
		}
	}
	*/
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
	cout << endl << "������� 3" << endl << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));

	double b, kb, gb, tb, mb;

	cout << "������� �������� � ������: ";
	cin >> b;
	if (b < 1024 || b > pow(1024, 4))
	{
		cout << "������ \n";
		exit(0);
	}

	if (b >= 1024 || b <= pow(1024, 4))
	{
		kb = b / pow(2.0, 10);
		cout << kb << " �����" << endl;
		mb = kb / pow(2.0, 10);
		cout << mb << " �����" << endl;
		gb = mb / pow(2.0, 10);
		cout << gb << " �����" << endl;
		tb = gb / pow(2.0, 10);
		cout << tb << " �����" << endl;
	}
	

	system("pause");
	return 0;
}