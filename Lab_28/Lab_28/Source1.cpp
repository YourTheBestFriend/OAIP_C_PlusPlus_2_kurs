#include <iostream>
#include <stdexcept> // �������� ����������� ����� std::logic_error, std::runtime_error � ���� ������, �� ��� ��������������
#include <exception> // �������� ����������� ������ std::bad_exception, std::bad_alloc
#include <typeinfo> // �������� ����������� ������ std::bad_cast � std::bas_typeid
#include <Windows.h>
#include <Map>
#include <cmath>
//#include <new>
#include <complex> // ��� ������ � ������������ ������� - ��� R3

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a, b, h;
	cout << "������� �������� x[a,b] � ����� h: \n" << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "h: ";
	cin >> h;
	cout << "y(x)\n";
	// ����� �������� ������� - ���������� ������ ����� - xor(^)
	if (a > b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	for (int x = a; x < b; x+=h) // x[a,b] � ����� h
	{
		try
		{
			if (x <= 1) // ���� ������ 1 �� ����� �������� �� 2, ��� ��� � �������� �� ������� ����� ����������� ������ �� �������������� �����, � ��� ����������
			{ 
				throw 2; // ��� ��������� ���� ������
			}
			double y = sqrt(pow(x, 3) - 1) / sqrt(pow(x, 2) - 1); // ���� ��������� (��� x �� ����� ���� �������������)
			cout << y << "\n";
		}
		catch(int)
		{
			cout << "error - x �� ����� ���� ������������� (!<0), !=0 & != 1" << endl;
		}
		// ���������� ����� �� ������� ���� � int �������� - ������ � ���� ������ - ����
		/*catch (char)
		{
			cout << "error - ������" << endl;
		}*/
		catch (std::logic_error x) // ������� ���������� std::logic_error: std::logic_error & std:out_of_range & std::length_error & std::invalid_argument & std::domain_error
		{
			cout << "����� �� std::logic_error ��� ���������" << x.what();
		}
		catch (std::runtime_error x) // ������� ���������� std::runtime_error: std::range_error & std::overflow_error & std::underflow_error
		{
			cout << "����� �� std::runtime_error ��� ��������� " << x.what();
		}
		// finally ������� �� �������� �� ������
		
		//finally // ������ �� ������������� � ������� ������
		//{
		//	cout << "test" << endl;
		//}
	}
	// ��� ���� ������� ����� �� ���� ��������

	cout << "____��������� �������____" << endl;
	bool f = true;
	while (f)
	{
		if (f != true) 
		{
			break;
		}
		// Tan(R2%R1) / R1 + Cmod(R3)
		// ������� �� 0 (����� ������)
		int R1, R2, deistv_chast_R3, mnimaya_chast_R3;
		double rezult_deistv;
		cout << "R1: ";
		cin >> R1;
		cout << "R2: ";
		cin >> R2;
		//////////////////////////////////////////////////////////////////////////////////////////////////// ������ � ������������ �������
		cout << "����������� �����:\n" << "�������������� �����: ";
		cin >> deistv_chast_R3;
		cout << "������ ����: ";
		cin >> mnimaya_chast_R3;
		complex <int> R3(deistv_chast_R3, mnimaya_chast_R3);
		//////////////////////////////////////////////////////////////////////////////////////////////////// �������� �� ���������� 
		try
		{
			if (R1 == 0)
			{
				throw 1;
			}
			// ������������� ������������ � �������������� ������ � ������
			rezult_deistv = tan(R2 % R1) / R1 + R3.real();
			cout << "rezult: " << rezult_deistv << " + " << R3.imag() << "i" << endl;  // ����������� ����������� �����
		}
		catch (int)
		{
			cout << "������! R1 �� ����� ��������� 0" << endl; 
		}
		catch (...)
		{
			cout << "����� �� - �������������� ����������" << endl;
		}
		// � ����� finally �� ����� ��������

		/*finally
		{
			cout << "";
		}*/
		int flag_f;
		cout << "������ ����������?: 0 - ��� (����� ������) - ��: ";
		cin >> flag_f;
		if (flag_f == 0)
		{
			f = false;
		}
		else
		{
			continue;
		}
		
	}

	// dict C++
	/*int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";*/
	// map < <L>, <R> > <���>; L - ��� ������ ����� R - ��� ������ �������
	/*map <string, int> mp;  

	mp["key"] = 12;
	mp["key2"] = 15;

	cout << mp["key"] << ' ' << mp["key2"] << endl;*/
	
	system("pause");
	return 0;
}
