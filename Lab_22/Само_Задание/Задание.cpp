#include <iostream>
#include <windows.h>

using namespace std;

class Line // ����� ������
{
protected:
	double L; // ������ �����

public:
	// ����������� �� ���������
	Line()
	{
	// pass
	}
	void setLine(double L1)
	{
		L = L1;
	}
	Line(double L1)
	{
		L = L1;
	}
	// ����� Show()
	void Show()
	{
		cout << "������� ����� L �� ������������� ������ Line: " << L << endl;
	}

};
class square : protected Line // ���� ������ �� ������� �� ������� ����� private
{
public:
	square()
	{
	// pass
	}
	void setLine_S_P(double L1, double S1, double P1)
	{
		L = L1;
		S = S1;
		P = P1;
	}
	double S;
	double P;
	square(double L1, double S1, double P1) : Line(L1) // ������ ����������� ������ ������� (square) � ����������� � ������ ������������ ������������ (Line)
	{
		S = S1;
		P = P1;
	}
	void Show() 
	{
		cout << "������ �������� P: " << P << " S: " << S << endl;
	}
	// ����� P
	void perimetr()
	{
		P = 4 * L;
	}
	// ����� S
	void square_()
	{
		S = pow(L, 2);
	}
};

// ��������������� ����� (�������� �������� ��� square)
class cube : public square
{
public:
	double S_cube;
	cube()
	{
		//pass
	}
	void setLine_S_P___CUBE(double L1, double S1, double P1)
	{
		L = L1;
		S = S1;
		P = P1;
		S_cube = S1 * 6;
	}
	cube(double L1, double S1, double P1) : square (L1, S1, P1)
	{
		S_cube = S1*6;
	}
	void Show()
	{
		cout << "S ���� = " << S_cube << endl;
	}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "\n=======1111=======\n";
	// 1
	Line p1(10);
	p1.Show();
	Line* p2 = new Line(11);
	p2->Show();
	cout << "\n=======2222=======\n";
	// 2
	square k1(12, 2.0, 30);
	k1.Show();
	square* k2 = new square(11, 2.2, 31);
	k2->Show();
	cout << "\n=======3333=======\n";
	// 3
	cube l1(14, 34.0, 32.2);
	l1.Show();
	cube* l2 = new cube(14, 34.0, 32.2);
	l2->Show();

	cout << "\n=======������ � ���������=======\n";
	const int size = 2;
	//////////////////////////////////////////////////////////////////////////////// 11111111111111111
	Line array[size];
	// ������
	array[0] = Line(18);
	// ������ 
	array[1] = Line(18);
	// ������� � ����� ����� show() � ������� �������� ������� � ������� ��������� ���������
	for (int i = 0; i < size; i++) 
	{
		array[i].Show();
	}
	
	/////////////////////////////////////////////////////////////////////////////// 22222222222222222222222
	
	square array2[size];
	// ������
	array2[0] = square(18, 3.4, 100);
	// ������ 
	array2[1] = square(19, 3.5, 110);
	// ������� � ����� ����� show() � ������� �������� ������� � ������� ��������� ���������
	for (int i = 0; i < size; i++)
	{
		array2[i].Show();
	}
	/////////////////////////////////////////////////////////////////////////////// 3333333333333333333333333333333
	
	cube array3[size];
	// ������
	array3[0] = cube(20, 5.4, 1100);
	// ������ 
	array3[1] = cube(23, 4.5, 1120);
	// ������� � ����� ����� show() � ������� �������� ������� � ������� ��������� ���������
	for (int i = 0; i < size; i++)
	{
		array3[i].Show();
	}
	
	// ���� ����� ������ ������ ������ ������������ 
	Line array_1[size];
	square array2_1[size];
	cube array3_1[size];

	double x,y,c;
	double x_2, y_2, c_2;
	double x_3, y_3, c_3;
	for (int i = 0; i < size; i++)
	{
		cout << "\n�� ������� �������: \n";
		cout << "������� ������ �����: ";
		cin >> x;
		array_1[i].setLine(x);
		array_1[i].Show();
		cout << "\n�� ������� �������: \n";
		cout << "������� ������ �����: ";
		cin >> x_2;
		cout << "������� S: ";
		cin >> y_2;
		cout << "������� P: ";
		cin >> c_2;
		array2_1[i].setLine_S_P(x_2, y_2, c_2);
		array2_1[i].Show();
		cout << "\n�� �������� �������: \n";
		cout << "������� ������ �����: ";
		cin >> x_3;
		cout << "������� S: ";
		cin >> y_3;
		cout << "������� P: ";
		cin >> c_3;
		array3_1[i].setLine_S_P___CUBE(x_3, y_3, c_3);
		array3_1[i].Show();
	}

	system("pause");
	return 0;
}
