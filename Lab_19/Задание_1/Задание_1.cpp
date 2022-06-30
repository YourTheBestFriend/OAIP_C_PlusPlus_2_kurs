#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
using namespace std;

struct factory
{
	double years_work;
	int cars;
	char name[15];
};

int main()
{
	// ��� ������
	factory zavod_ural; // ��� ����� .txt
	factory zavod_cars; // ��� ����� .bin 
	SetConsoleOutputCP(1251); 
	SetConsoleCP(1251);
	int p = -1;
	while (p != 0)
	{
		cout << "����:\n||���� txt||\n0-��������� �����\n1-������ ����� ������ � ����\n2-������ �� ����� � ������� ��� �� �������\n3-���� ������� char � ���� � ��� ������ (fprintf_s // fscanf_s)\
\n4-������ ��� ������ ��������� � ��� ��������� � ���� (fprintf_s), (�������� � ����)\n5-����������� �� ������� ������ ��������� �� ����� (fscanf_s)\n||���� bin||\n6-����/�������� ������ ��������� (fwrite)\
\n7-���������(����������� �� �������) ������ � ����� � ��������� (fread)\n����: ";
		cin >> p;
		switch (p)
		{
		case 0: // ��������� �����
		{
			cout << "���������� ������ ���������.\n";
			break;
		}
		case 1: // ������ ����� ������ � ����
		{
			// (����������� ������������ ������)
			FILE* wf;
			char s[100];
			cout << "������� ����� ������ ������ � ����:\n";
			cin.ignore();
			cin.getline(s, 100);
			if (!(wf = fopen("��������������.txt", "wt")))
			{
				cout << "������ �������� (��������) ����� ��� ������.\n";
				system("pause");
				return 0;
			}
			int i = 0;
			while (s[i] != NULL)
			{
				fputc(s[i++], wf);
			}
			cout << "����� ������� � ����" << endl;
			fclose(wf);
			cout << endl; // ����� �� ��������� �����
			continue; // ��� ���� ����� �� ���������� ���� � ���� case
		}
		case 2: // ������ �� ����� � ������� ��� �� �������
		{
			FILE* rf;
			if ((rf = fopen("��������������.txt", "rt")) == NULL)
			{
				cout << "������ �������� (��������) ����� ��� ������.\n";
				system("pause");
				return 0;
			}
			cout << "\n������ ����������� ������ \"�� �������\" " << endl;
			char c = fgetc(rf);
			while (!feof(rf))
			{
				cout << c;
				c = fgetc(rf);
			}
			cout << "\n������ ����� ���������. ���� ������." << endl;
			fclose(rf);
			cout << endl; // ����� �� ��������� �����
			continue; // ��� ���� ����� �� ���������� ���� � ���� case
		}
		case 3: // ���� ������� char � ���� (����������� '_')
		{
			// ������� � ����
			FILE* wf;
			char s[100]; // ���������� ������
			cout << "������� ����� ������ ������ � ����:\n";
			cin.ignore(); // ����� �� ��������� ������
			cin.getline(s, 100); // ������ � ���������� ������
			if (!(wf = fopen("��������������0.txt", "wt"))) // ���� � ������ wf �� ������� ���� (�� ��������) ��� ������
			{
				cout << "������ �������� (��������) ����� ��� ������.\n";
				system("pause");
				return 0;
			}
			int i = 0;
			while (s[i] != NULL)
			{
				for (; i < strlen(s); i++)
				{
					fprintf_s(wf, "%c_", s[i]); // ����� - ��� - ������
				}
			}
			cout << "����� ������� � ����" << endl;
			fclose(wf);
			// ������ ���������
			char c;
			FILE* rf;
			if (!(rf = fopen("��������������0.txt", "rt")))
			{
				cout << "������ �������� (��������) ����� ��� ������.\n";
				system("pause");
				return 0;
			}
			for (int i = 0; i < strlen(s); i++)
			{
				fscanf_s(rf, "%c_", &c); // ����� - ��� - ������
				cout << c << ' ';
			}

			cout << endl;
			continue;
		}
		case 4: // 4-������ ��� ������ ��������� � ��� ��������� � ���� 
		{
			FILE* f;
			if (!(f = fopen("F:\\papka\\��������������1.txt", "at"))) // "F:\\papka\\��������������1.txt", "at"
			{
				cout << "Error";
				break;
			}
			// �������� ���������
			cout << "������� years_work (double): ";
			cin >> zavod_ural.years_work;
			fprintf_s(f, "%lf \n", zavod_ural.years_work);
			cout << "������� cars (int): ";
			cin >> zavod_ural.cars;
			fprintf_s(f, "%d \n", zavod_ural.cars);
			cout << "������� name (char): ";
			cin.ignore();
			cin.getline(zavod_ural.name, 15);
			fprintf_s(f, "%s", zavod_ural.name);
			//fprintf_s(f, "%lf %i %s \n", zavod_ural.years_work, zavod_ural.cars, zavod_ural.name);
			//fprintf_s(f, "wb", &zavod_ural); 
			//fwrite(&zavod_ural, sizeof(factory), 1, f);
			fclose(f);
			continue;
		}
		case 5: // 5 - ����������� �� ������� ������ ��������� �� �����(fscanf_s)
		{
			FILE* f;
			if (!(f = fopen("F:\\papka\\��������������1.txt", "rt")))
			{
				cout << "Error\n";
				break;
			}
			double yw;
			int cs;
			char n;
			fscanf_s(f, "%lf \n", &yw);
			cout << yw << '|';
			fscanf_s(f, "%d \n", &cs);
			cout << cs << '|';
			while(!feof(f))
			{
				fscanf_s(f, "%c \n", &n);
				cout << n << '|';
			}
			cout << "\n������ ����� ���������\n";
			fclose(f);
			continue;
		}
		case 6: // 6-����/�������� ������ ��������� (fwrite)
		{// �������� ���������
			cout << "������� years_work (double): ";
			cin >> zavod_cars.years_work;
			cout << "������� cars (int): ";
			cin >> zavod_cars.cars;
			cout << "������� name (char): ";
			cin.ignore();
			cin.getline(zavod_cars.name, 15);
			FILE* bfw;
			if (!(bfw = fopen("��������������2.bin", "ab"))) // �������� � �������� ����
			{
				cout << "Error";
				break;
			}
			fwrite(&zavod_cars, sizeof(factory), 1, bfw);
			fclose(bfw);
			continue;
		}
		case 7: // 7-���������(����������� �� �������) ������ � ����� � ��������� (fread)
		{
			factory zavod_cars_2;
			FILE* bfr;
			if (!(bfr = fopen("��������������2.bin", "rb")))  // ������(������ �� �������) � �������� ����
			{
				cout << "Error";
				break;
			}
			fread(&zavod_cars_2, sizeof(factory), 1, bfr);
			while (!feof(bfr))
			{
				cout << zavod_cars_2.years_work << ';' << zavod_cars_2.cars << ';' << zavod_cars_2.name << ';' << endl;
				fread(&zavod_cars_2, sizeof(factory), 1, bfr); // ����� ����� ���������� ����� ����
			}
			fclose(bfr);
			continue;;
		}
		default:
		{
			cout << "�� ������ �� �������" << endl;
			continue;
		}
		}// ����� switch'a
	}
	system("pause");
	return 0;
}

/////// ������ � ���� (����)

//FILE* f = fopen("file.txt", "wt");
//if (f == NULL)
//{
//	cout << "������ �������� ����� ��� ������.\n";
//	system("pause");
//	return 0;
//}
//for (int i = 0; i < 100; i++)
//{
//	fprintf_s(f, "%d, ", i);
//}
//cout << "������ � ���� ���������" << endl;
//fclose(f);

/////// ������ �� ����� (����)

//FILE* f;
//if (!(f = fopen("file.txt", "rt")))
//{
//	cout << "������ �������� ����� ��� ������.\n";
//	system("pause");
//	return 0;
//}
//int x;
//while (!feof(f))
//{
//	fscanf_s(f, "%d,", &x);
//	cout << x << ' ';
//}
//cout << "\n������ �� ����� ���������" << endl;
//fclose(f);


/////// ������ � ���� (������.txt)

//FILE* wf;
//char s[100];
//cout << "������� ����� ������ ������ � ����:\n";
//cin.getline(s, 100);
//cout << "������ ����������� ������ �� ������ � ����" << endl;
//cout << s << endl;
//if (!(wf = fopen("file_2.txt", "wt")))
//{
//	cout << "������ �������� (��������) ����� ��� ������.\n";
//	system("pause");
//	return 0;
//}
//int i = 0;
//while (s[i] != NULL)
//{
//	fputc(s[i++], wf);
//}
//cout << "����� ������� � ����" << endl;
//fclose(wf);


/////// ������ �� ����� (������.txt)

//FILE* rf;
//if ((rf = fopen("file_2.txt", "rt")) == NULL)
//{
//	cout << "������ �������� (��������) ����� ��� ������.\n";
//	system("pause");
//	return 0;
//}
//char c = fgetc(rf);
//while (!feof(rf))
//{
//	cout << c;
//	c = fgetc(rf);
//}
//cout << "\n������ ����� ���������. ���� ������." << endl;
//fclose(rf);


/////// ������ � ���� (������.bin)

//cout << "������� years_work (double): ";
//cin >> zavod_cars.years_work;
//cout << "������� cars (int): ";
//cin >> zavod_cars.cars;
//cout << "������� name (char): ";
//cin.ignore();
//cin.getline(zavod_cars.name, 15);
//FILE* bfw;
//if (!(bfw = fopen("��������������2.bin", "ab"))) // �������� � �������� ����
//{
//	cout << "Error";
//	break;
//}
//fwrite(&zavod_cars, siz

/////// ������ �� ����� (������.bin)

//FILE* bfr;
//if (!(bfr = fopen("��������������2.bin", "rb")))  // ������(������ �� �������) � �������� ����
//{
//	cout << "Error";
//	break;
//}
//fread(&zavod_cars_2, sizeof(factory), 1, bfr);
//while (!feof(bfr))
//{
//	cout << zavod_cars_2.years_work << ';' << zavod_cars_2.cars << ';' << zavod_cars_2.name << ';' << endl;
//	fread(&zavod_cars_2, sizeof(factory), 1, bfr); // ����� ����� ���������� ����� ����
//}
//fclose(bfr);

