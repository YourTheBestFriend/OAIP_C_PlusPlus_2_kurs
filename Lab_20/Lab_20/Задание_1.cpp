//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

struct factory
{
	double years_work;
	int cars;
	char name[15];
}zavod_ural;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int p = -1;
	while (p != 0)
	{
		cout << "����:\n||���� txt||\n0-��������� �����\n1-������ ����� ������ � ���� (������������ ������) (�����������������20.txt)\
\n2-������ �� ����� � ������� ��� �� ������� (������������ ������) (�����������������20.txt)\n3-���� ������� double � ����\
(���� ������ � ��� �����������) (�����������������20_0.txt)\n4-������ �� ����� ������� double (�����������������20_0.txt)\
\n5-���� �������� � ��������� � (��)������ � ���� (�����������������20_1.txt) \n6-������ �������� �� ��������� (�����������������20_1.txt)\
\n||���� bin||\n7-���� ��������� � ������ � ���� .bin (�����������������20_2.bin)\n8-����� ������ ��������� �� ������� (�����������������20_2.bin)\n||���� txt||\
\n9-������ � ���� ���� � ��������� (�����������������20_3.txt)\n10-���������� ������ ����� (�����������������20_3.txt)\n����: ";
		cin >> p;
		switch (p)
		{
		case 0: // ��������� �����
		{
			cout << "���������� ������ ���������.\n";
			break;
		}
		case 1: // 1 - ������ ����� ������ � ����
		{
			ofstream f_write_po_odnomu_simvolu("�����������������20.txt", ios::out | ios::trunc);
			if (!f_write_po_odnomu_simvolu)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			int n;
			cout << "������� ���-�� ��������: ";
			cin >> n;
			char x;
			for (int i = 0; i < n; i++)
			{
				cout << "���� ������� � " << i + 1 << ": ";
				cin >> x;
				f_write_po_odnomu_simvolu << x << ' ';
			}
			f_write_po_odnomu_simvolu.close();
			cout << endl; // ����� �� ��������� �����
			continue; // ��� ���� ����� �� ���������� ���� � ���� case
		}
		case 2: // 2 - ������ �� ����� � ������� ��� �� �������
		{
			ifstream f_read_po_odnomu_simvolu("�����������������20.txt", ios::in);
			if (!f_read_po_odnomu_simvolu)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			char s;
			f_read_po_odnomu_simvolu >> s; // ����� �� ����������� ��������� ������� 2 ����
			while (!f_read_po_odnomu_simvolu.eof())
			{
				cout << s; // ������ ������
				f_read_po_odnomu_simvolu >> s;
			}
			f_read_po_odnomu_simvolu >> s;
			f_read_po_odnomu_simvolu.close();
			cout << endl; // ����� �� ��������� �����
			continue; // ��� ���� ����� �� ���������� ���� � ���� case
		}
		case 3: // 3 - ���� ������� double � ���� (����������� '#')
		{
			int size;
			do
			{
				cout << "������� ����������� �������: ";
				cin >> size;
			} while (size < 0);
			double* array = new double[size];
			ofstream f_write_array("�����������������20_0.txt", ios::out | ios::trunc);
			if (!f_write_array)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			// ���������� ������� � �������� ��� � ����
			for (int i = 0; i < size; i++) 
			{
				cout << "array[" << i + 1 << "]: "; 
				cin >> array[i];
				f_write_array << array[i] << '#';
			}
			f_write_array.close();
			cout << endl; // ����� �� ��������� �����
			continue;
		}
		case 4: // 4 - ������ ������� �� ����� (����������� ' ')
		{
			ifstream f_read_array("�����������������20_0.txt", ios::in);
			if (!f_read_array)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			double cc;
			char c;
			f_read_array >> cc >> c; // ����� ��������� �� ���������� (>> c - ��� ���� ����� ������� ��������� ������ '#')
			while (!f_read_array.eof())
			{
				cout << cc << ' '; // ������� ������ ���� �������� ���� double
				f_read_array >> cc >> c; // (>> c - ��� ���� ����� ������� ��������� ������ '#')
			}
			f_read_array.close();
			cout << endl; // ����� �� ��������� �����
			continue;
		}
		case 5: // 5 - ���� �������� � ��������� � (��)������ � ���� 
		{
			cout << "���������� ���������\n";
			cout << "years_work (double): ";
			cin >> zavod_ural.years_work;
			cout << "cars (int): ";
			cin >> zavod_ural.cars;
			cout << "name (char / string): ";
			cin >> zavod_ural.name;
			ofstream f_write_struct("�����������������20_1.txt", ios::out | ios::app);
			if (!f_write_struct)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			f_write_struct << zavod_ural.years_work << ' ' << zavod_ural.cars << ' ' << zavod_ural.name;
			f_write_struct.close();
			cout << endl; // ����� �� ��������� �����
			continue;
		}
		case 6: // 6 - ������ �������� �� ��������� (����������� '/')
		{
			ifstream f_read_struct("�����������������20_1.txt", ios::in);
			if (!f_read_struct)
			{
				cout << "Error\n";
				system("pause");
				return 0;
			}
			factory zavod_ural_for_zapis;
			f_read_struct >> zavod_ural_for_zapis.years_work >> zavod_ural_for_zapis.cars >> zavod_ural_for_zapis.name;
			while (!f_read_struct.eof())
			{
				cout << zavod_ural_for_zapis.years_work << '|' << zavod_ural_for_zapis.cars << '|' << zavod_ural_for_zapis.name;
				f_read_struct >> zavod_ural_for_zapis.years_work >> zavod_ural_for_zapis.cars >> zavod_ural_for_zapis.name;
			}
			f_read_struct.close();
			cout << endl; // ����� �� ��������� �����
			continue;
		}
		case 7: // 7- ���� ��������� � ���� (��������) .bin
		{
			factory zavod_belaz;
			cout << "���������� ���������\n";
			cout << "years_work (double): ";
			cin >> zavod_belaz.years_work;
			cout << "cars (int): ";
			cin >> zavod_belaz.cars;
			cout << "name (char / string): ";
			cin >> zavod_belaz.name;
			
			ofstream f_write_struct__write("�����������������20_2.bin", ios::app | ios::binary);//////////////////////////////////////////
			if (!f_write_struct__write)	
			{
				return 0;
			}
			f_write_struct__write.write((char*)&zavod_belaz, sizeof(zavod_belaz));
			f_write_struct__write.close();
			cout << endl; // ����� �� ��������� �����
			continue;
		}
		case 8: // 8 - ������ .bin (����� ������ ��������� �� ����� �� �������)
		{
			factory zavod_belaz_write;
			ifstream f_write_struct__write("�����������������20_2.bin", ios::in | ios::binary);
			if (!f_write_struct__write)
			{
				return  0;
			}
			f_write_struct__write.read((char*)&zavod_belaz_write, sizeof(zavod_belaz_write));
			while (!f_write_struct__write.eof())
			{
				cout << zavod_belaz_write.years_work << ' ' << zavod_belaz_write.cars << ' ' << zavod_belaz_write.name << ' ';
				f_write_struct__write.read((char*)&zavod_belaz_write, sizeof(zavod_belaz_write));
			}
			f_write_struct__write.close();
			cout << endl; // ����� �� ��������� �����
			continue;
		}
		case 9: // 9 - ����� ���� � ��������� � �������� ����� ����������� � ����
		{
			char slovaSprobel[100];
			ofstream f_slova_write("�����������������20_3.txt", ios::out | ios::app);
			if (!f_slova_write)
			{
				return 0;
			}
			cout << "������� ����� �� ������� Enter'a\n";
			cin.ignore();
			cin.getline(slovaSprobel, 100, '\n');
			f_slova_write << slovaSprobel;
			f_slova_write.close();
			cout << endl; // ����� �� ��������� �����
			continue;
		}
		case 10: // 10 - ���������� ������ ����� (�����������������20_3.txt)
		{
			ifstream f_slova_read("�����������������20_3.txt", ios::in);
			if (!f_slova_read)
			{
				return 0;
			}
			char for_read_slov[100];
			f_slova_read.getline(for_read_slov, 100, '\n');
			while (!f_slova_read.eof())
			{
				cout << for_read_slov << endl;
				f_slova_read.getline(for_read_slov, 100, '\n');
			}
			cout << for_read_slov << endl;
			f_slova_read.close();
			cout << endl; // ����� �� ��������� �����
			continue;
		}
		default: // default
		{
			cout << "�� ������ �� �������" << endl;
			continue;
		}
		}// ����� switch'a
		system("pause");
		return 0;
	}
}



/////// ������ � ���� (����)

//ofstream f_write_znach("��������������1.txt", ios::out | ios::trunc);
//if (!f_write_znach)
//{
//	cout << "Error";
//	system("pause");
//	return 0;
//}
//int n;
//do
//{
//	cout << "n: ";
//	cin >> n;
//} while (n < 1);
//double x;
//for (int i = 0; i < n; i++)
//{
//	cout << "������� ����� � " << i + 1 << " ��� ������ � ����: ";
//	cin >> x;
//	f_write_znach << x << ' ';
//}
//f_write_znach.close();
//cout << "���� �������\n";

/////// ������ �� ����� (����)

//ifstream f_read_znach("��������������1.txt", ios::in);
//if (!f_read_znach)
//{
//	cout << "Error";
//	system("pause");
//	return 0;
//}
//double y;
//f_read_znach >> y;
//while (!f_read_znach.eof())
//{
//	cout << y << endl;
//	f_read_znach >> y;
//}
//f_read_znach.close();
//cout << "���� ��������\n";

/////// ������ � ���� (������.txt)

//char text[100];
//char file[] = "��������������2.txt";
//ofstream f_write_str(file, ios::out | ios::app);
//if (!f_write_str)
//{
//	return 0;
//}
//int skok_predl = 0;
//cout << "skokpredl: "; cin >> skok_predl;
//cin.ignore();
//for (int i = 0; i < skok_predl; i++)
//{
//	cout << "������� �����:\n";
//	cin.getline(text, 100);
//	f_write_str << text << endl;
//}
//f_write_str.close();


/////// ������ �� ����� (������.txt)

//char str[100];
//ifstream f_read_str(file, ios::in);
//// 
//if (!f_read_str)
//{
//	return 0;
//}
//// 
//f_read_str.getline(str, 100, '\n');
//while (!f_read_str.eof())
//{
//	cout << str << endl;
//	f_read_str.getline(str, 100, '\n');
//}
//f_read_str.close();