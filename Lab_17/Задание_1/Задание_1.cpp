#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// 1
	struct spravochnik_avto 
	{
		char color[20];
		char tip_kuzovap[20];
		char vladelec[20];
		unsigned int den_vipusk : 5; // 31 ������� � �������� ��� - 1 1111 - � ����� ������� ����� 5 ���
		unsigned int den_texasmotr : 5;
		
	};
	enum mark // ������������ ����� �����
	{
		nisan,
		bmw,
		mersedes,
		ford,
		volva
	};
	const int n = 5;
	spravochnik_avto avto[n];
	for (int i = 0; i < n; i++)
	{
		int m,n;
		cout << "color: ";
		cin >> avto[i].color;
		cout << "��� ������: ";
		cin >> avto[i].tip_kuzovap;
		cout << "��������: ";
		cin >> avto[i].vladelec;
		cout << "���� �������: ";
		cin >> m;
		avto[i].den_vipusk = m;
		cout << "���� ����������: ";
		cin >> n;
		avto[i].den_texasmotr = n;
		
	}
	for (int i = 0; i < n; i++)
	{
		if (avto[i].den_texasmotr <= avto[i].den_vipusk) // ������ � ������������ �� ���������
		{
			cout << "��������� ���� �� ��������� - " << endl;
			cout << "���������" << avto[i].den_texasmotr << endl;

		}
		else
		{
			cout << "�������� ��������� ���������" << endl;
			cout << "���������" << avto[i].den_texasmotr << endl;
		}
	}

	// 2
	struct art
	{
		int size_art_d = 15;
		int size_art_sh = 15;
		char material[7] = {"Forest"};
	};
	struct sculptur
	{
		enum raz
		{
			bol_30,
			men_30
		};
		char material[20];
	};
	struct uvelir
	{
		enum raz
		{
			max_1,
			min_1, 
			eql_0 //���� 2 - ���������
		};
	};
	const int z = 5;
	art* cartina_inf = new art[z];
	if (cartina_inf == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	else
	{
		// �������������� 
		for (int i = 0; i < z; i++)
		{
			cout << "size_art_d:";
			cartina_inf[i].size_art_d;
			cout << "size_art_sh:";
			cartina_inf[i].size_art_sh;
			cout << "��������:";
			cartina_inf[i].material;
		}
	}
	
	// 3
	struct cars
	{
		char marka_car[20];
		unsigned short int V_dvigatela : 3; // max V �������� 7, - 111 - 3 ����
		unsigned short int probeg : 20; // ���� ������ ��� ������ +- � ���������� ������ ����� ���� 1 ��� ��, - 20 ���
	};
	const int ten = 10;
	cars array_cars[ten];
	for (int i = 0; i < ten; i++)
	{
		int v, p;
		cout << "�����: ";
		cin >> array_cars[i].marka_car;
		cout << "V ���������: ";
		cin >> v;
		array_cars[i].V_dvigatela = v;
		cout << "������: ";
		cin >> p;
		array_cars[i].probeg = p;
	}
	system("pause");
	return 0;
}
