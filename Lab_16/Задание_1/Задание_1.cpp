#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// 1
	const int size_ = 10; // ����������� yesrs
	const int size_name = 5; // ����������� �������� 
	const int size_factory = 3; // ������� � ��������� ��������
	struct factory // ���������
	{
		int tovar_num[size_];
		double yers_work;
		char name[size_name];
		bool work; // ������� / �� �������� - true / false - 1 / 0

	};
	factory factories[size_factory]; // ������ �� �����������
	// 2
	for (int i = 0; i < size_factory; i++) // ������ ������ ������� �������� // const int size_factory = 5 - ����� 5 ��������
	{
		for (int j = 0; j < size_; j++)
		{
			cout << "tovar number: ";
			cin >> factories[i].tovar_num[j];
		}
		cout << "years_work: ";
		cin >> factories[i].yers_work;
		cout << "name: ";
		cin >> factories[i].name; // �������� (����� �������� ���-�� � getline), � ���� ��� �������� �� ��������� � ������������� �����
		cout << "true/false - 1/0: ";
		cin >> factories[i].work;
	}
	// 3
	for (int i = 0; i < size_factory; i++) // ������ ��������� ��������
	{
		for (int j = 0; j < size_; j++)
		{
			cout << "tovar number: " << factories[i].tovar_num[j] << endl;
		}
		cout << "years_work: " << factories[i].yers_work << endl;
		cout << "name: " << factories[i].name << endl;
		cout << "true/false - 1/0: " << factories[i].work << endl;
	}
	// 4
	int x, flag = 0; 
	cout << "������� x: ";
	cin >> x;
	for (int i = 0; i < size_factory; i++) // ���������� �� ����������
	{
		for (int j = 0; j < size_; j++) // ���������� �� ����� ��������
		{
			if (x != factories[i].tovar_num[j]) // �������� ���� ����� ����� ������(������) ������� ���� ������������
			{
				flag++; // �������� ���-�� (�� ����������� ��������)
			}
		}
	}
	cout << "���-�� ����� ��������: " << flag << endl; // � ���� ������  ���-�� ��� �������� �� ������ x
	
	// 5
	/*  ��������� � �� ����� ����� �� ����� ������(����������.����), � ����� ����� � ���� ������廻(���������� > ����) -- �� �������� */ 
	int n = 3;
	factory* factories_d = new factory[n];
	if (factories_d == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < size_; j++)
		{
			cout << "tovar number: ";
			cin >> factories_d[i].tovar_num[j];
		}
		cout << "years_work: ";
		cin >> factories_d[i].yers_work;
		cout << "name: ";
		cin >> factories_d[i].name; 
		cout << "true/false - 1/0: ";
		cin >> factories_d[i].work;
	}
	for (int i = 0; i < n; i++) // ������ ��������� ��������
	{
		for (int j = 0; j < size_; j++)
		{
			cout << "tovar number: " << factories_d[i].tovar_num[j] << endl;
		}
		cout << "years_work: " << factories_d[i].yers_work << endl;
		cout << "name: " << factories_d[i].name << endl;
		cout << "true/false - 1/0: " << factories_d[i].work << endl;
	}
	delete[] factories_d; // � ������� �� ����������

	// 6 
	const int f = 20;
	const int in = 2;
	struct WORKER 
	{
		char familia[f], iniciali[in];
		int years_go_work;
	};
	const int s = 10;
	WORKER people[s];
	for (int i = 0; i < s; i++)
	{
		cout << "������� �������: ";
		cin >> people[i].familia;
		cout << "������� ��������: ";
		cin >> people[i].iniciali;
		cout << "��� ����������� �� ������: ";
		cin >> people[i].years_go_work;
	}

	bool flag_for_no_people = 1;
	int year_x;
	cout << "������� ����: ";
	cin >> year_x;

	for (int i = 0; i < s; i++)
	{
		if (year_x < people[i].years_go_work)
		{
			cout << "���� ����� ��������� ����: " << people[i].familia << endl;
			flag_for_no_people = false;
		}
	}
	if (flag_for_no_people == true)
	{
		cout << "���� ���������� ������ ���������" << endl;
	}


	system("pause");
	return 0;
}
