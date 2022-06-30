#include <iostream>
#include <windows.h>
using namespace std;

class Element
{
public:
	Element() {} // ����������� ������������ ������ ��� ����������
	virtual double  Print_Radius_Circle(double center_x1, double center_y1, double center_x2, double center_y2, double center_x3, double center_y3) = 0; // ������ ����������� ����� Print_Rasius_Circle
	virtual double getCenter_x() = 0;
	virtual double getCenter_y() = 0;
	virtual void Length() = 0; // ������ ����������� ����� Lenth
	virtual ~Element()
	{
		cout << "====�������� ���������� ������ Element====\n";
	}

};

class Point : public Element
{
protected: 
	double center_x;
	double center_y;
public:
	Point() : Element()
	{
	}
	Point(double center_x, double center_y) // ����������� ��������� ��� ��������� ����� (����� ��������� � ���� ������ ����������)
	{
		this->center_x = center_x;
		this->center_y = center_y;
	}
	virtual double getCenter_x() override
	{
		return center_x;
	}
	virtual double getCenter_y() override
	{
		return center_y;
	}
	// ����� Length � ������ Point
	virtual void Length() override
	{
		// � ��� ������� �������� "������ �����"
		cout << "����� Length ������������� �� ������ Circle\n";
	}
	virtual ~Point()
	{
		cout << "====�������� ���������� ������ Point====" << endl;
	}
};

class Circle : public Point
{
protected:
	double Radius_Circle;
	const double pi = 3.14159265359;
public:
	Circle(): Point()
	{
	}
	Circle(double center_x, double center_y, double Radius_Circle) : Point(center_x, center_y)
	{
		this->Radius_Circle = Radius_Circle;
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// SET
	void setCenter_x(double center_x)
	{
		this->Point::center_x = center_x;
	}
	void setCenter_y(double center_y)
	{
		this->Point::center_y = center_y;
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// SET

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// GET
	double getCenter_x() override 
	{
		return Point::center_x;
	}
	double getCenter_y() override
	{
		return Point::center_y;
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// GET

	// ����� ��� ����������� ������ ������� ��������� ���������� ������ ������������ 
	double Print_Radius_Circle(double center_x1, double center_y1, double center_x2, double center_y2, double center_x3, double center_y3)
	{
		/* ���������� � ���� ������ �����, ������������ ����� ������� ����������,
		��������� ������ ������������, ��������� �������� ������ ������ ���� ��������
		�����������.*/

		double side_1, side_2, side_3; // ������� �������� ������������ (���������� � ����������) 
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////������ ����� ������� �������� side_11111111111
		
		double side_x_1, side_y_1; // ������� ������������ 1 ������������ ����� ������� (����������) - �������� ������� �������������
		
		side_x_1 = fabs(center_x1 - center_x3);
		side_y_1 = fabs(center_y1 - center_y3);

		side_1 = sqrt(pow(side_x_1, 2) + pow(side_y_1, 2)); // ��������� ������� 1
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////������ ����� ������� �������� side_111111111111

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////������ ����� ������� �������� side_222222222222222
		double side_x_2, side_y_2; // ������� ������������ 2 ������������ ����� ������� (����������) - �������� ������� �������������
		
		side_x_2 = fabs(center_x1 - center_x2);
		side_y_2 = fabs(center_y3 - center_y1);

		side_2 = sqrt(pow(side_x_2, 2) + pow(side_y_2, 2)); // ��������� ������� 2
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////������ ����� ������� �������� side_22222222222222222

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////������ ����� ������� �������� side_33333333333333333333333333
		double side_x_3, side_y_3; // ������� ������������ 3 ������������ ����� ������� (����������) - �������� ������� �������������
		
		side_x_3 = fabs(center_x3 - center_x2);
		side_y_3 = fabs(center_y3 - center_y1);

		side_3 = sqrt(pow(side_x_3, 2) + pow(side_y_3, 2)); // ��������� �������
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////������ ����� ������� �������� side_33333333333333333333333333

		
		// ������ ���������� ������ ������� ��������� ���������� ������ ������������
		double p = (side_1 + side_2 + side_3) / 2; // ������������ ������������
		double R = (side_1 * side_2 * side_3) / 4 * sqrt(p* (p - side_1) * (p - side_2) * (p - side_3));
		return R; // ������� � ��������� ���� ��������� ������ ./��������
	}
	 
	// ����� Length � ������ Circle (���������� ��������� �����)
	void Length() override
	{
		cout << "������ �����: " <<  Radius_Circle * 2 * pi << endl; // ��������� �����
	}
	virtual ~Circle()
	{
		cout << "====�������� ���������� ������ Circle====\n";
	}

};
// ������� ��� �������� � ����� ���� 
int sozdanie_3_point_3_radius()
{
	const int size_Array = 3;
	Element** array_Circle_point = new Element * [size_Array];
	if (array_Circle_point == nullptr)
	{
		cout << "No Memory\n";
		system("pause");
		return 0;
	}
	for (int i = 0; i < size_Array; i++)
	{
		double x, y, radius;
		// point 
		cout << "Point [" << i << "]:\n";
		cout << "center_x: ";
		cin >> x;
		cout << "center_y: ";
		cin >> y;
		// radius
		cout << "Radius [" << i << "] Circle: ";
		cin >> radius;
		array_Circle_point[i] = new Circle(x, y, radius);
		if (array_Circle_point[i] == nullptr)
		{
			cout << "No Memory\n";
			system("pause");
			return 0;
		}
	}
	// ���� ������� � ����������� (double center_x1, double center_y1, double center_x2, double center_y2, double center_x3, double center_y3)
	cout << "radius: " << array_Circle_point[0]->Print_Radius_Circle(array_Circle_point[0]->getCenter_x(), array_Circle_point[0]->getCenter_x(), array_Circle_point[1]->getCenter_x(), array_Circle_point[1]->getCenter_x(), array_Circle_point[2]->getCenter_x(), array_Circle_point[2]->getCenter_x()) << endl;
	for (int i = 0; i < size_Array; i++) // � ������� ������
	{
		delete[] array_Circle_point[i];
	}
	delete[] array_Circle_point;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	sozdanie_3_point_3_radius();
	
	system("pause");
	return 0;
}
