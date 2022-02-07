#include <iostream>
#include <Windows.h>
using namespace std;

void day_week(int); // 1
void mark_(int); // 2 
void number_month(int); // 3
void col_day_in_month(int); // 4
double arifm_vicheslen(double, double, int); // 5
double colvo_edenic_metr(double, int); // 6
double _edenic_massi(double, int); // 7
void data_nevisokosn_year_predShestv(int, int); // 8
void data_nevisokosn_year_sled(int, int); // 9
/////////////////////////////////////////////////////////////////////////////////////10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
void robot_go(char, int); // 10
char go_left(char); // ���������� 10
char go_right(char); // ���������� 10
/////////////////////////////////////////////////////////////////////////////////////11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11
void locator_sveta(char, int, int); // 11
char switch_2_N(char, int);  // ���������� 11
char locator_180_gradusov(char);// ���������� 11
/////////////////////////////////////////////////////////////////////////////////////12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12
void ocruzhnost(double, int, const double); // 12
/////////////////////////////////////////////////////////////////////////////////////13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 
void ravnobedren_triengl(int, double); // 13
void ravnostaron_triengl(int, double); // 14
/////////////////////////////////////////////////////////////////////////////////////15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15
void cards(int, int, char*, char*, char*, char*); // 15.1
void switch_card(int, char*); // 15.2
////////////////////////////////////////////////////////////////////////////////////16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
void year_20_69(int); // 16
void years_10_40(int); // 17
void _100_999(int); // 18
void SIX_cikl(int); // 19
void LAST(int, int); // 20


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// 1
	int p;
	cout << "������� ���� ������ (������) 1-7: ";
	cin >> p;
	day_week(p);
	
	// 2
	int mark;
	cout << "������� ������ (������) 1-5: ";
	cin >> mark;
	mark_(mark);

	// 3
	int num_month;
	cout << "������� ����� ������ (������) 1-12 (���� ����): ";
	cin >> num_month;
	number_month(num_month);

	// 4
	int n_month_f_day;
	cout << "������� ����� ������ (������) 1-12 (������� ���� � ������ / ������������ ���): ";
	cin >> n_month_f_day;
	col_day_in_month(n_month_f_day);
	
	// 5
	int N;
	double A, B;
	cout << "������� ����� �������� (������) 1-4 (+ - * /) & (B != 0): ";
	cin >> N;
	cout << "A (double): ";
	cin >> A;
	cout << "B (double): ";
	cin >> B;
	cout << "�����: " << arifm_vicheslen(A, B, N) << endl;

	// 6 ����� ����� ������� � ������
	int edinica_dlinni;
	double chislo;
	cout << "������� ����� ������� ����� (������) 1-5 (��������, ��������, ����, ���������, ���������): ";
	cin >> edinica_dlinni;
	cout << "chislo (double): ";
	cin >> chislo;
	cout << "your number:" << colvo_edenic_metr(chislo, edinica_dlinni) << endl;

	// 7 ����� ����� � ������������
	int edinic_massi;
	double chisslo;
	cout << "������� ����� ������� ����� (������) 1-5 (���������, ����������, �����, �����, �������): ";
	cin >> edinic_massi;
	cout << "chisslo (double): ";
	cin >> chisslo;
	cout << "your number:" << colvo_edenic_metr(chisslo, edinic_massi) << endl;

	// 8
	int Day, Month;
	cout << "������� ����: ";
	cin >> Day;
	cout << "������� �����: ";
	cin >> Month;
	data_nevisokosn_year_predShestv(Day, Month);

	// 9
	int Day_, Month_;
	cout << "������� ����: ";
	cin >> Day_;
	cout << "������� �����: ";
	cin >> Month_;
	data_nevisokosn_year_sled(Day_, Month_);


	// 10
	char C_naprav; // �����������
	int N_go; // �������
	cout << "������� �������� ����������� (��������) (� - �����, � - �����, � - ��, � - ������): ";
	cin >> C_naprav;
	cout << "������� ����� �������� 1-3 (0 - ���������� �������� 1 - ������� ������ -1 - ������� �������): ";
	cin >> N_go;
	robot_go(C_naprav, N_go);

	// 11
	char C_orient_locatora; // �������� ����������
	int N_1, N_2; // ��������� �������
	cout << "������� �������� ���������� �������� (��������) (� - �����, � - �����, � - ��, � - ������): ";
	cin >> C_orient_locatora;
	cout << "N_1 (0 - ������� ������ 1 - ������� ������� -1 - ������� �� 180 �������� - �� ������� �������): ";
	cin >> N_1;
	cout << "N_2 (0 - ������� ������ 1 - ������� ������� -1 - ������� �� 180 �������� - �� ������� �������): ";
	cin >> N_2;
	locator_sveta(C_orient_locatora, N_1, N_2);

	// 12
	const double pi = 3.14;
	int p_num;
	double radius;
	cout << "������� radius: ";
	cin >> radius;
	cout << "������� ����� 1-4 (1 - ������, 2 - ������� d = 2*r, 3 - ������ l = 2*pi*r, 4 - ������� ����� s = pi*r^2): ";
	cin >> p_num;
	ocruzhnost(radius, p_num, pi);

	//13
	int p_chisl;
	double katet;
	cout << "������� �����: ";
	cin >> katet;
	cout << "������� ����� 1-4 (�����)(1 - ����� 2 - ���������� 3 - ������ 4 - �������): ";
	cin >> p_chisl;
	ravnobedren_triengl(p_chisl, katet);

	//14
	int p_vib;
	double storona_a;
	cout << "������� ������� a: ";
	cin >> storona_a;
	cout << "������� ����� 1-4 (�����)(1 - ������� a 2 - ������ r1(��������� ����������) 3 - ������ r2(��������� ����������)  4 - �������): ";
	cin >> p_vib;
	ravnobedren_triengl(p_vib, storona_a);

	// 15 
	int M_mast, N_dostoinstvo;
	char piki[] = "����";
	char trefi[] = "�����";
	char bubni[] = "�����";
	char chervi[] = "�����";
	cout << "������� ����� ����� (1 - ���� 2 - ����� 3 - ����� 4 - �����): ";
	cin >> M_mast;
	cout << "������� ����������� ����� (1-14 (11 - ����� 12 - ���� 13 - ������ 14 - ���)): ";
	cin >> N_dostoinstvo;
	cards(M_mast, N_dostoinstvo, piki, trefi, bubni, chervi);
	

	// 16
	int my_number;
	cout << "������� ����� �� 20 �� 69: ";
	cin >> my_number;
	year_20_69(my_number);


	// 17
	int my_num;
	cout << "������� �� 10 �� 40: ";
	cin >> my_num;
	years_10_40(my_num);

	// 18
	int my_znach_num;
	cout << "100-999: ";
	cin >> my_znach_num;
	_100_999(my_znach_num);

	// 19	
	int y_num;
	cout << "���� �������� (60-������ ����)";
	cin >> y_num;
	SIX_cikl(y_num);

	// 20
	int month, day;
	cout << "month: ";
	cin >> month;
	cout << "day: ";
	cin >> day;
	LAST(month, day);


	system("pause");
	return 0;
}


void day_week(int p) //////11111111111111111
{
	switch (p) 
	{
	case 1:
		cout << "�����������\n";
		break;
	case 2:
		cout << "�������\n";
		break;
	case 3:
		cout << "�����\n";
		break;
	case 4:
		cout << "�������\n";
		break;
	case 5:
		cout << "�������\n";
		break;
	case 6:
		cout << "�������\n";
		break;
	case 7:
		cout << "�����������\n";
		break;
	}
}

void mark_(int mark) //////2222222222222
{
	switch (mark)
	{
	case 1:
		cout << "�����\n";
		break;
	case 2:
		cout << "�������������������\n";
		break;
	case 3:
		cout << "�����������������\n";
		break;
	case 4:
		cout << "������\n";
		break;
	case 5:
		cout << "�������\n";
		break;
	default:
	{
		cout << "������\n";
	}
	}
}

void number_month(int num_month) //////333333333
{
	switch (num_month)
	{
	// ����
	case 12: // �������
	case 1: // ������
	case 2: // �������
	{
		cout << "������ �����\n";
		break;
	}
	// �����
	case 3: // ����
	case 4: // ������
	case 5: // ���
	{
		cout << "�������� �����\n";
		break;
	}
	// ����
	case 6: // ����
	case 7: // ����
	case 8: // ������
	{
		cout << "������ �����\n";
		break;
	}
	// �����
	case 9: // ��������
	case 10: // �������
	case 11: // ������
	{
		cout << "������� �����\n";
		break;
	}
	}
}

void col_day_in_month(int n_month_f_day) //////4444444444444
{
	switch (n_month_f_day)
	{
	case 1:
		cout << "������ 31 - ����\n";
		break;
	case 2:
		cout << "������� 28 - ����\n";
		break;
	case 3:
		cout << "���� 31 - ����\n";
		break;
	case 4:
		cout << "������ 30 - ����\n";
		break;
	case 5:
		cout << "��� 30 - ����\n";
		break;
	case 6:
		cout << "���� 30 - ����\n";
		break;
	case 7:
		cout << "���� 31 - ����\n";
		break;
	case 8:
		cout << "������ 29 - ����\n";
		break;
	case 9:
		cout << "�������� 30 - ����\n";
		break;
	case 10:
		cout << "������� 31 - ����\n";
		break;
	case 11:
		cout << "������ 30 - ����\n";
		break;
	case 12:
		cout << "������� 31 - ����\n";
		break;
	}
}

double arifm_vicheslen(double A, double B, int N) //////55555555555555
{
	if (B == 0)
	{
		cout << "B == 0 - ������ �� �������\n";
		return 0;
	}
	else
	{
		switch (N)
		{
		case 1: // +
			return A + B;
		case 2: // -
			return A - B;
		case 3: // *
			return A * B;
		case 4: // /
			return A / B;
		}
	}
}

double colvo_edenic_metr(double chislo, int edinica_dlinni) //////6666666666666
{
	// ������� ����� �� ��������� ������� ������ � �����
	switch (edinica_dlinni)
	{
	case 1: // ��������
		return chislo / 10;
	case 2: // ��������
		return chislo * 1000;
	case 3: // ����
		return chislo;
	case 4: // ���������
		return chislo / 1000;
	case 5: // ���������
		return chislo / 100;
	}
}

double _edenic_massi(double chisslo, int edinic_massi) //////777777777777777
{
	// ������� ����� �� ��������� ������� ����� � ����������
	switch (edinic_massi)
	{
	case 1: // ����������
		return chisslo;
	case 2: // �����������
		return chisslo / 1000000; // 10e+6
	case 3: // ������
		return chisslo / 1000;
	case 4: // �����
		return chisslo * 1000;
	case 5: // ��������
		return chisslo * 100;
	}
}

void data_nevisokosn_year_predShestv(int Day, int Month) //////88888888888888
{
	// �������������� ����
	switch (Month)
	{
		if (Day < 1)
		{
			cout << "��������������� ��� ���" << endl;
			break;
		}
		case 1:
			if (Day <= 31)
			{
				cout << "����: " << Day-1 << " ����� ������\n";
				break;
			}
		case 2:
			if (Day <= 28)
			{
				cout << "����: " << Day - 1 << " ����� �������\n";
				break;
			}
		case 3:
			if (Day <= 31)
			{
				cout << "����: " << Day - 1 << " ����� ����\n";
				break;
			}
		case 4:
			if (Day <= 30)
			{
				cout << "����: " << Day - 1 << " ����� ������\n";
				break;
			}
		case 5:
			if (Day <= 30)
			{
				cout << "����: " << Day - 1 << " ����� ���\n";
				break;
			}
		case 6:
			if (Day <= 30)
			{ 
				cout << "����: " << Day - 1 << " ����� ����\n";
				break;
			}
		case 7:
			if (Day <= 31)
			{
				cout << "����: " << Day - 1 << " ����� ����\n";
				break;
			}
		case 8:
			if (Day <= 29)
			{
				cout << "����: " << Day - 1 << " ����� ������\n";
				break;
			}
		case 9:
			if (Day <= 30)
			{
				cout << "����: " << Day - 1 << " ����� ��������\n";
				break;
			}
		case 10:
			if (Day <= 31)
			{
				cout << "����: " << Day - 1 << " ����� �������\n";
				break;
			}
		case 11:
			if (Day <= 30)
			{
				cout << "����: " << Day - 1 << "����� ������\n";
				break;
			}
		case 12:
			if (Day <= 31)
			{
				cout << "����: " << Day - 1 << "����� �������\n";
				break;
			}
	}
}

void data_nevisokosn_year_sled(int Day_, int Month_) //////999999999999999999
{

	// ��������� ����
	switch (Month_)
	{
	case 1:
		if (Day_ < 31)
		{
			cout << "����: " << Day_ + 1 << " ����� ������\n";
			break;
		}
	case 2:
		if (Day_ < 28)
		{
			cout << "����: " << Day_ + 1 << " ����� �������\n";
			break;
		}
	case 3:
		if (Day_ < 31)
		{
			cout << "����: " << Day_ + 1 << " ����� ����\n";
			break;
		}
	case 4:
		if (Day_ < 30)
		{
			cout << "����: " << Day_ + 1 << " ����� ������\n";
			break;
		}
	case 5:
		if (Day_ < 30)
		{
			cout << "����: " << Day_ + 1 << " ����� ���\n";
			break;
		}
	case 6:
		if (Day_ < 30)
		{
			cout << "����: " << Day_ + 1 << " ����� ����\n";
			break;
		}
	case 7:
		if (Day_ < 31)
		{
			cout << "����: " << Day_ + 1 << " ����� ����\n";
			break;
		}
	case 8:
		if (Day_ < 29)
		{
			cout << "����: " << Day_ + 1 << " ����� ������\n";
			break;
		}
	case 9:
		if (Day_ < 30)
		{
			cout << "����: " << Day_ + 1 << " ����� ��������\n";
			break;
		}
	case 10:
		if (Day_ < 31)
		{
			cout << "����: " << Day_ + 1 << " ����� �������\n";
			break;
		}
	case 11:
		if (Day_ < 30)
		{
			cout << "����: " << Day_ + 1 << "����� ������\n";
			break;
		}
	case 12:
		if (Day_ < 31)
		{
			cout << "����: " << Day_ + 1 << "����� �������\n";
			break;
		}
	}
}

void robot_go(char C_naprav, int N_go) /////////// 10 
{
	cout << "���� �������� �����������: " << C_naprav << endl;
	switch (N_go)
	{
	case 0: // ���������� ��������
		cout << "����� ��������� ��������:" << C_naprav << endl;
		break;
	case 1: // ������� ������
		C_naprav = go_left(C_naprav);
		cout << "����� �������� ������: " << C_naprav << endl;
		break;
	case -1: // ������� �������
		C_naprav = go_right(C_naprav);
		cout << "����� �������� �������: " << C_naprav << endl;
		break;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////��� ���������� ��� 10 �������
char go_left(char C_naprav)
{
	if (C_naprav == '�')
	{
		return '�';
	}
	else
	{
		if (C_naprav == '�')
		{
			return '�';
		}
		else
		{
			if (C_naprav == '�')
			{
				return '�';
			}
			else
			{
				if (C_naprav == '�')
				{
					return '�';
				}
				else
				{
					cout << "Error go_left\n";
					return 0;
				}
			}
		}
	}
}
char go_right(char C_naprav)
{
	if (C_naprav == '�')
	{
		return '�';
	}
	else
	{
		if (C_naprav == '�')
		{

			return '�';
		}
		else
		{
			if (C_naprav == '�')
			{
				return '�';
			}
			else
			{
				if (C_naprav == '�')
				{
					return '�';
				}
				else
				{
					cout << "Error go_right\n";
					return 0;
				}
			}
		}
	}
}

///////// 
//11

void locator_sveta(char C_orient_locatora, int N_1, int N_2) //////// 11 11 11 11 11 11 11
{
	cout << "���� �������� ��������� ��������: " << C_orient_locatora << endl;
	// ���� N_1
	cout << "���� N_1\n";
	char next_C_orient_locatora = switch_2_N(C_orient_locatora, N_1);
	// ���� N_2
	cout << "���� N_2\n";
	switch_2_N(next_C_orient_locatora, N_2);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////��� ���������� ��� 11 �������
char switch_2_N(char C_orient_locatora, int N)
{
	switch (N)
	{
	case 0: // ������� ������
		C_orient_locatora = go_left(C_orient_locatora); // ������� ������� go_left() �� 10 �������
		cout << "���� ������� (������� ������): " << C_orient_locatora << endl;
		break;
	case 1: // ������� �������
		C_orient_locatora = go_right(C_orient_locatora); // ������� ������� go_right() �� 10 �������
		cout << "���� ������� (������� �������): " << C_orient_locatora << endl;
		break;
	case -1: // ������� �� 180 ��������
		C_orient_locatora = locator_180_gradusov(C_orient_locatora);
		cout << "���� ������� (������� �� 180 ��������) (�� ������� �������): " << C_orient_locatora << endl;
		break;
	}
	return C_orient_locatora;
}
char locator_180_gradusov(char C_orient_locatora)
{
	if (C_orient_locatora == '�')
	{
		return '�';
	}
	else
	{
		if (C_orient_locatora == '�')
		{

			return '�';
		}
		else
		{
			if (C_orient_locatora == '�')
			{
				return '�';
			}
			else
			{
				if (C_orient_locatora == '�')
				{
					return '�';
				}
				else
				{
					cout << "Error 180\n";
					return 0;
				}
			}
		}
	}
}


///////// 
// 12

void ocruzhnost(double Radius, int P_num, const double pi)
{
	switch (P_num)
	{
	case 1: // 1 - ������
		cout << "������ = " << Radius << endl;
	case 2: // 2 - ������� D = 2 * R
		cout << "������� D = " << 2 * Radius << endl;
	case 3: //  3 - ������ L = 2*pi*R
		cout << "������ L = " << 2 * pi * Radius << endl;
	case 4: // 4 - ������� ����� S = pi*R^2
		cout << "������� ����� S = " << pi * pow(Radius, 2) << endl;
	default:
	{
		cout << "�����\n";
	}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 13 13 13 13 13 13 13 13 13 13 13 13 13 13
void ravnobedren_triengl(int p_chisl, double katet)
{
	double C;
	C = katet * sqrt(2);
	double h_ = C / 2;
	switch (p_chisl)
	{
	case 1: // 1 - �����
		cout << "����� = " << katet << endl;
	case 2: // 2 - ���������� C = katet * sqrt(2)
		cout << "���������� C = " << C << endl;
	case 3: //  3 - ������ h = C / 2
		cout << "������ h = " << h_ << endl;
	case 4: // 4 - �������  S = C*h/2
		cout << "������� S = " << C*h_/2 << endl;
	default:
	{
		cout << "�����\n";
	}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14
void ravnostaron_triengl(int P_vib, double storona_a)
{
	double R1, R2;
	R1 = storona_a * sqrt(3) / 6;
	R2 = 2*R1;
	double S = pow(storona_a, 2) * sqrt(3) / 4;
	switch (P_vib)
	{
	case 1: // 1 - ������� �
		cout << "������� � = " << storona_a << endl;
	case 2: // 2 - R1 
		cout << "R1 = " << R1 << endl;
	case 3: //  3 - R2
		cout << "R2 = " << R2 << endl;
	case 4: // 4 - S
		cout << "S = " << S << endl;
	default:
	{
		cout << "�����\n";
	}
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 
void cards(int M_mast, int N_dostoinstvo, char* piki, char* trefi, char* bubni, char* chervi)
{
	switch (M_mast)
	{
		
	case 1: 
		switch_card(N_dostoinstvo, piki);
		break;
	case 2:
		switch_card(N_dostoinstvo, trefi);
		break;
	case 3:
		switch_card(N_dostoinstvo, bubni);
		break;
	case 4:
		switch_card(N_dostoinstvo, chervi);
		break;
	}
}
void switch_card(int N_dostoinstvo, char* mast_card)
{

	switch (N_dostoinstvo)
	{

	case 6:
		cout << "������� ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 7:
		cout << "������ ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 8:
		cout << "������� ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 9:
		cout << "������� ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 10:
		cout << "������� ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 11:
		cout << "����� ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 12:
		cout << "���� ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 13:
		cout << "������ ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 14:
		cout << "��� ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16
void year_20_69(int my_number) // 16
{
	if (my_number < 20 | my_number > 69)
	{
		cout << "�� ����� �� ���������\n";
		return;
	}
	int p_2 = my_number / 10;
	switch (p_2)
	{
	case 2:
		cout << "�������� ";
		break;
	case 3:
		cout << "�������� ";
		break;
	case 4:
		cout << "����� ";
		break;
	case 5:
		cout << "�������� ";
		break;
	case 6:
		cout << "���������� ";
		break;
	}
	int p = my_number % 10; // ����� ������ ���-�� ������ � �����
	switch (p)
	{
	case 1:
		cout << "���� ";
		break;
	case 2:
		cout << "��� ";
		break;
	case 3:
		cout << "��� ";
		break;
	case 4:
		cout << "������ ";
		break;
	case 5:
		cout << "���� ";
		break;
	case 6:
		cout << "����� ";
		break;
	case 7:
		cout << "���� ";
		break;
	case 8:
		cout << "������ ";
		break;
	case 9:
		cout << "������ ";
		break;
	}
	int p_3 = my_number % 10;
	switch (p_3)
	{
	case 0:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		cout << "���.\n ";
		break;
	case 1:
		cout << "���.\n ";
		break;
	case 2:
	case 3:
	case 4:
		cout << "����.\n ";
		break;
	}
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17

void years_10_40(int my_num)
{
	if (my_num < 10 | my_num > 40)
	{
		cout << "�� ����� �� ��������\n";
		return;
	}
	if (my_num / 10 == 1)
	{
		switch (my_num)
		{
		case 10:
			cout << "������ ������� �������. \n";
			break;
		case 11:
			cout << "���������� ������� �������.\n";
			break;
		case 12:
			cout << "���������� ������� �������.\n";
			break;
		case 13:
			cout << "���������� ������� �������.\n";
			break;
		case 14:
			cout << "������������ ������� �������.\n";
			break;
		case 15:
			cout << "���������� ������� �������.\n";
			break;
		case 16:
			cout << "����������� ������� �������.\n";
			break;
		case 17:
			cout << "���������� ������� �������.\n";
			break;
		case 18:
			cout << "������������ ������� �������.\n";
			break;
		case 19:
			cout << "������������ ������� �������.\n";
			break;
		}
	}
	else 
	{
		switch (my_num / 10)
		{
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		}

		switch (my_num % 10)
		{
		case 1:
			cout << "���� ";
			break;
		case 2:
			cout << "��� ";
			break;
		case 3:
			cout << "��� ";
			break;
		case 4:
			cout << "������ ";
			break;
		case 5:
			cout << "���� ";
			break;
		case 6:
			cout << "����� ";
			break;
		case 7:
			cout << "���� ";
			break;
		case 8:
			cout << "������ ";
			break;
		case 9:
			cout << "������ ";
			break;
		}

		switch (my_num % 10)
		{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout << "������� �������.\n";
			break;
		case 1:
			cout << "������� �������.\n";
			break;
		case 2:
		case 3:
		case 4:
			cout << "������� �������.\n";
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18

void _100_999(int my_znach_num)
{

	switch (my_znach_num / 100) {
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "���������  ";
		break;
	case 9:
		cout << "���������  ";
		break;
	}

	if ((my_znach_num % 100) / 10 == 1)
	{
		switch (my_znach_num % 100)
		{
		case 10:
			cout << "������\n";
			break;
		case 11:
			cout << "����������\n";
			break;
		case 12:
			cout << "����������\n";
			break;
		case 13:
			cout << "����������\n";
			break;
		case 14:
			cout << "������������\n";
			break;
		case 15:
			cout << "����������\n";
			break;
		case 16:
			cout << "�����������\n";
			break;
		case 17:
			cout << "����������\n";
			break;
		case 18:
			cout << "������������\n";
			break;
		case 19:
			cout << "������������\n";
			break;
		}
	}
	else
	{
		switch ((my_znach_num % 100) / 10) 
		{
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}

		switch (my_znach_num % 10) 
		{
		case 1:
			cout << "����\n";
			break;
		case 2:
			cout << "���\n";
			break;
		case 3:
			cout << "���\n";
			break;
		case 4:
			cout << "������\n";
			break;
		case 5:
			cout << "����\n";
			break;
		case 6:
			cout << "�����\n";
			break;
		case 7:
			cout << "����\n";
			break;
		case 8:
			cout << "������\n";
			break;
		case 9:
			cout << "������\n";
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19

void SIX_cikl(int y_num)
{
	cout << "��� ";
	switch ((y_num) % 10)
	{
	case 0:
	case 1:
		cout << "���";
		break;
	case 2:
	case 3:
		cout << "����";
		break;
	case 4:
	case 5:
		cout << "����";
		break;
	case 6:
	case 7:
		cout << "�����";
		break;
	case 8:
	case 9:
		cout << "���";
		break;
	}

	switch ((y_num + 1) % 5) 
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 9:
	case 10:
	case 11:
		cout << "�� ";
		break;
	case 6:
	case 7:
	case 8:
		cout << "��� ";
		break;
	}

	switch ((y_num + 8) % 12)
	{
	case 0:
		cout << "�����\n";
		break;
	case 1:
		cout << "������\n";
		break;
	case 2:
		cout << "�����\n";
		break;
	case 3:
		cout << "�����\n";
		break;
	case 4:
		cout << "�������\n";
		break;
	case 5:
		cout << "����\n";
		break;
	case 6:
		cout << "������\n";
		break;
	case 7:
		cout << "����\n";
		break;
	case 8:
		cout << "��������\n";
		break;
	case 9:
		cout << "������\n";
		break;
	case 10:
		cout << "������\n";
		break;
	case 11:
		cout << "������\n";
		break;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20

void LAST(int month, int day)
{
	switch (month) 
	{
	case 1:
		if (day > 19)
		{
			cout << "�������";
			break;
		}
		else
		{
			cout << "�������";
			break;
		}
	case 2:
		if (day > 18)
		{
			cout << "����";
			break;
		}
		else
		{
			cout << "�������";
			break;
		}
	case 3:
		if (day > 20)
		{
			cout << "����";
			break;
		}
		else
		{
			cout << "����";
			break;
		}
	case 4:
		if (day > 19)
		{
			cout << "�����";
			break;
		}
		else
		{
			cout << "����";
			break;
		}
	case 5:
		if (day > 20)
		{
			cout << "��������";
			break;
		}
		else
		{
			cout << "�����";
			break;
		}
	case 6:
		if (day > 21)
		{
			cout << "���";
			break;
		}
		else
		{
		cout << "��������";
			break;
		}
	case 7:
		if (day > 22)
		{
			cout << "���";
			break;
		}
		else 
		{
			cout << "���";
			break;
		}
	case 8:
		if (day > 22)
		{
			cout << "����";
			break;
		}
		else
		{
			cout << "���";
			break;
		}
	case 9:
		if (day > 22)
		{
			cout << "����";
			break;
		}
		else
		{
			cout << "����";
			break;
		}
	case 10:
		if (day > 22)
		{
			cout << "��������";
			break;
		}
		else
		{
			cout << "����";
			break;
		}
	case 11:
		if (day > 22)
		{
			cout << "�������";
			break;
		}
		else
		{
			cout << "��������";
			break;
		}
	case 12:
	if (day > 21)
	{
		cout << "�������";
		break;
	}
	else
	{ 
		cout << "�������";
		break;
	}
	}
	cout << endl;
}
