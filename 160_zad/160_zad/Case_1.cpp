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
char go_left(char); // Подфункция 10
char go_right(char); // Подфункция 10
/////////////////////////////////////////////////////////////////////////////////////11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11
void locator_sveta(char, int, int); // 11
char switch_2_N(char, int);  // Подфункция 11
char locator_180_gradusov(char);// Подфункция 11
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
	cout << "Введите день недель (цифрой) 1-7: ";
	cin >> p;
	day_week(p);
	
	// 2
	int mark;
	cout << "Введите оценку (цифрой) 1-5: ";
	cin >> mark;
	mark_(mark);

	// 3
	int num_month;
	cout << "Введите номер месяца (цифрой) 1-12 (пора года): ";
	cin >> num_month;
	number_month(num_month);

	// 4
	int n_month_f_day;
	cout << "Введите номер месяца (цифрой) 1-12 (сколько дней в месяце / невисокосный год): ";
	cin >> n_month_f_day;
	col_day_in_month(n_month_f_day);
	
	// 5
	int N;
	double A, B;
	cout << "Введите номер действия (цифрой) 1-4 (+ - * /) & (B != 0): ";
	cin >> N;
	cout << "A (double): ";
	cin >> A;
	cout << "B (double): ";
	cin >> B;
	cout << "ответ: " << arifm_vicheslen(A, B, N) << endl;

	// 6 найти длину отрезка в метрах
	int edinica_dlinni;
	double chislo;
	cout << "Введите номер единицы длины (цифрой) 1-5 (дециметр, километр, метр, миллиметр, сантиметр): ";
	cin >> edinica_dlinni;
	cout << "chislo (double): ";
	cin >> chislo;
	cout << "your number:" << colvo_edenic_metr(chislo, edinica_dlinni) << endl;

	// 7 найти массу в киллограммах
	int edinic_massi;
	double chisslo;
	cout << "Введите номер единицы массы (цифрой) 1-5 (килограмм, миллиграмм, грамм, тонна, центнер): ";
	cin >> edinic_massi;
	cout << "chisslo (double): ";
	cin >> chisslo;
	cout << "your number:" << colvo_edenic_metr(chisslo, edinic_massi) << endl;

	// 8
	int Day, Month;
	cout << "Введите День: ";
	cin >> Day;
	cout << "Введите Месяц: ";
	cin >> Month;
	data_nevisokosn_year_predShestv(Day, Month);

	// 9
	int Day_, Month_;
	cout << "Введите День: ";
	cin >> Day_;
	cout << "Введите Месяц: ";
	cin >> Month_;
	data_nevisokosn_year_sled(Day_, Month_);


	// 10
	char C_naprav; // Направление
	int N_go; // Команда
	cout << "Введите исходное направление (символом) (С - север, З - запад, Ю - юг, В - восток): ";
	cin >> C_naprav;
	cout << "Введите цифро движения 1-3 (0 - Продолжать движение 1 - поворот налево -1 - поворот направо): ";
	cin >> N_go;
	robot_go(C_naprav, N_go);

	// 11
	char C_orient_locatora; // Исходная ориентация
	int N_1, N_2; // Посланные команды
	cout << "Введите исходную ориентацию локатора (символом) (С - север, З - запад, Ю - юг, В - восток): ";
	cin >> C_orient_locatora;
	cout << "N_1 (0 - Поворот налево 1 - поворот направо -1 - поворот на 180 градусов - по часовой стрелке): ";
	cin >> N_1;
	cout << "N_2 (0 - Поворот налево 1 - поворот направо -1 - поворот на 180 градусов - по часовой стрелке): ";
	cin >> N_2;
	locator_sveta(C_orient_locatora, N_1, N_2);

	// 12
	const double pi = 3.14;
	int p_num;
	double radius;
	cout << "введите radius: ";
	cin >> radius;
	cout << "введите цифру 1-4 (1 - радиус, 2 - диаметр d = 2*r, 3 - длинна l = 2*pi*r, 4 - площадь круга s = pi*r^2): ";
	cin >> p_num;
	ocruzhnost(radius, p_num, pi);

	//13
	int p_chisl;
	double katet;
	cout << "Введите катет: ";
	cin >> katet;
	cout << "Введите число 1-4 (вывод)(1 - Катет 2 - Гипотенуза 3 - Высота 4 - Площадь): ";
	cin >> p_chisl;
	ravnobedren_triengl(p_chisl, katet);

	//14
	int p_vib;
	double storona_a;
	cout << "введите сторону a: ";
	cin >> storona_a;
	cout << "введите число 1-4 (вывод)(1 - сторона a 2 - радиус r1(вписанной окружности) 3 - радиус r2(описанной окружности)  4 - площадь): ";
	cin >> p_vib;
	ravnobedren_triengl(p_vib, storona_a);

	// 15 
	int M_mast, N_dostoinstvo;
	char piki[] = "пики";
	char trefi[] = "трефы";
	char bubni[] = "бубны";
	char chervi[] = "черви";
	cout << "Введите масть карты (1 - пики 2 - трефы 3 - бубны 4 - черви): ";
	cin >> M_mast;
	cout << "Введите достоинство карты (1-14 (11 - валет 12 - дама 13 - король 14 - туз)): ";
	cin >> N_dostoinstvo;
	cards(M_mast, N_dostoinstvo, piki, trefi, bubni, chervi);
	

	// 16
	int my_number;
	cout << "Введите число от 20 до 69: ";
	cin >> my_number;
	year_20_69(my_number);


	// 17
	int my_num;
	cout << "Введите от 10 до 40: ";
	cin >> my_num;
	years_10_40(my_num);

	// 18
	int my_znach_num;
	cout << "100-999: ";
	cin >> my_znach_num;
	_100_999(my_znach_num);

	// 19	
	int y_num;
	cout << "Ваше значение (60-летний цикл)";
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
		cout << "Понедельник\n";
		break;
	case 2:
		cout << "Вторник\n";
		break;
	case 3:
		cout << "Среда\n";
		break;
	case 4:
		cout << "Четверг\n";
		break;
	case 5:
		cout << "Пятница\n";
		break;
	case 6:
		cout << "Суббота\n";
		break;
	case 7:
		cout << "Воскресенье\n";
		break;
	}
}

void mark_(int mark) //////2222222222222
{
	switch (mark)
	{
	case 1:
		cout << "плохо\n";
		break;
	case 2:
		cout << "неудовлетворительно\n";
		break;
	case 3:
		cout << "удовлетворительно\n";
		break;
	case 4:
		cout << "хорошо\n";
		break;
	case 5:
		cout << "отлично\n";
		break;
	default:
	{
		cout << "Ошибка\n";
	}
	}
}

void number_month(int num_month) //////333333333
{
	switch (num_month)
	{
	// Зима
	case 12: // декабрь
	case 1: // январь
	case 2: // февраль
	{
		cout << "Зимний месяц\n";
		break;
	}
	// Весна
	case 3: // март
	case 4: // апрель
	case 5: // май
	{
		cout << "Весенний месяц\n";
		break;
	}
	// Лето
	case 6: // июнь
	case 7: // июль
	case 8: // август
	{
		cout << "Летний месяц\n";
		break;
	}
	// Осень
	case 9: // сентябрь
	case 10: // октябрь
	case 11: // ноябрь
	{
		cout << "Осенний месяц\n";
		break;
	}
	}
}

void col_day_in_month(int n_month_f_day) //////4444444444444
{
	switch (n_month_f_day)
	{
	case 1:
		cout << "январь 31 - день\n";
		break;
	case 2:
		cout << "февраль 28 - дней\n";
		break;
	case 3:
		cout << "март 31 - день\n";
		break;
	case 4:
		cout << "апрель 30 - дней\n";
		break;
	case 5:
		cout << "май 30 - дней\n";
		break;
	case 6:
		cout << "июнь 30 - дней\n";
		break;
	case 7:
		cout << "июль 31 - день\n";
		break;
	case 8:
		cout << "август 29 - дней\n";
		break;
	case 9:
		cout << "сентябрь 30 - дней\n";
		break;
	case 10:
		cout << "октябрь 31 - день\n";
		break;
	case 11:
		cout << "ноябрь 30 - дней\n";
		break;
	case 12:
		cout << "декабрь 31 - день\n";
		break;
	}
}

double arifm_vicheslen(double A, double B, int N) //////55555555555555
{
	if (B == 0)
	{
		cout << "B == 0 - нельзя по условию\n";
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
	// Перевод числа из выбранной единици длинны в метры
	switch (edinica_dlinni)
	{
	case 1: // дециметр
		return chislo / 10;
	case 2: // километр
		return chislo * 1000;
	case 3: // метр
		return chislo;
	case 4: // миллиметр
		return chislo / 1000;
	case 5: // сантиметр
		return chislo / 100;
	}
}

double _edenic_massi(double chisslo, int edinic_massi) //////777777777777777
{
	// Перевод числа из выбранной единици массы в килограммы
	switch (edinic_massi)
	{
	case 1: // килограммы
		return chisslo;
	case 2: // миллиграммы
		return chisslo / 1000000; // 10e+6
	case 3: // граммы
		return chisslo / 1000;
	case 4: // тонны
		return chisslo * 1000;
	case 5: // центнеры
		return chisslo * 100;
	}
}

void data_nevisokosn_year_predShestv(int Day, int Month) //////88888888888888
{
	// Предшествующая дата
	switch (Month)
	{
		if (Day < 1)
		{
			cout << "Предшествующего дня нет" << endl;
			break;
		}
		case 1:
			if (Day <= 31)
			{
				cout << "День: " << Day-1 << " месяц январь\n";
				break;
			}
		case 2:
			if (Day <= 28)
			{
				cout << "День: " << Day - 1 << " месяц февраль\n";
				break;
			}
		case 3:
			if (Day <= 31)
			{
				cout << "День: " << Day - 1 << " месяц март\n";
				break;
			}
		case 4:
			if (Day <= 30)
			{
				cout << "День: " << Day - 1 << " месяц апрель\n";
				break;
			}
		case 5:
			if (Day <= 30)
			{
				cout << "День: " << Day - 1 << " месяц май\n";
				break;
			}
		case 6:
			if (Day <= 30)
			{ 
				cout << "День: " << Day - 1 << " месяц июнь\n";
				break;
			}
		case 7:
			if (Day <= 31)
			{
				cout << "День: " << Day - 1 << " месяц июль\n";
				break;
			}
		case 8:
			if (Day <= 29)
			{
				cout << "День: " << Day - 1 << " месяц август\n";
				break;
			}
		case 9:
			if (Day <= 30)
			{
				cout << "День: " << Day - 1 << " месяц сентябрь\n";
				break;
			}
		case 10:
			if (Day <= 31)
			{
				cout << "День: " << Day - 1 << " месяц октябрь\n";
				break;
			}
		case 11:
			if (Day <= 30)
			{
				cout << "День: " << Day - 1 << "месяц ноябрь\n";
				break;
			}
		case 12:
			if (Day <= 31)
			{
				cout << "День: " << Day - 1 << "месяц декабрь\n";
				break;
			}
	}
}

void data_nevisokosn_year_sled(int Day_, int Month_) //////999999999999999999
{

	// Следующая дата
	switch (Month_)
	{
	case 1:
		if (Day_ < 31)
		{
			cout << "День: " << Day_ + 1 << " месяц январь\n";
			break;
		}
	case 2:
		if (Day_ < 28)
		{
			cout << "День: " << Day_ + 1 << " месяц февраль\n";
			break;
		}
	case 3:
		if (Day_ < 31)
		{
			cout << "День: " << Day_ + 1 << " месяц март\n";
			break;
		}
	case 4:
		if (Day_ < 30)
		{
			cout << "День: " << Day_ + 1 << " месяц апрель\n";
			break;
		}
	case 5:
		if (Day_ < 30)
		{
			cout << "День: " << Day_ + 1 << " месяц май\n";
			break;
		}
	case 6:
		if (Day_ < 30)
		{
			cout << "День: " << Day_ + 1 << " месяц июнь\n";
			break;
		}
	case 7:
		if (Day_ < 31)
		{
			cout << "День: " << Day_ + 1 << " месяц июль\n";
			break;
		}
	case 8:
		if (Day_ < 29)
		{
			cout << "День: " << Day_ + 1 << " месяц август\n";
			break;
		}
	case 9:
		if (Day_ < 30)
		{
			cout << "День: " << Day_ + 1 << " месяц сентябрь\n";
			break;
		}
	case 10:
		if (Day_ < 31)
		{
			cout << "День: " << Day_ + 1 << " месяц октябрь\n";
			break;
		}
	case 11:
		if (Day_ < 30)
		{
			cout << "День: " << Day_ + 1 << "месяц ноябрь\n";
			break;
		}
	case 12:
		if (Day_ < 31)
		{
			cout << "День: " << Day_ + 1 << "месяц декабрь\n";
			break;
		}
	}
}

void robot_go(char C_naprav, int N_go) /////////// 10 
{
	cout << "Ваше исходное направление: " << C_naprav << endl;
	switch (N_go)
	{
	case 0: // Продолжать движение
		cout << "Робот продолжил движение:" << C_naprav << endl;
		break;
	case 1: // Поворот налево
		C_naprav = go_left(C_naprav);
		cout << "Робот повернул налево: " << C_naprav << endl;
		break;
	case -1: // Поворот направо
		C_naprav = go_right(C_naprav);
		cout << "Робот повернул направо: " << C_naprav << endl;
		break;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Две ПОДФУНКЦИИ для 10 задания
char go_left(char C_naprav)
{
	if (C_naprav == 'С')
	{
		return 'З';
	}
	else
	{
		if (C_naprav == 'З')
		{
			return 'Ю';
		}
		else
		{
			if (C_naprav == 'Ю')
			{
				return 'В';
			}
			else
			{
				if (C_naprav == 'В')
				{
					return 'С';
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
	if (C_naprav == 'С')
	{
		return 'В';
	}
	else
	{
		if (C_naprav == 'В')
		{

			return 'Ю';
		}
		else
		{
			if (C_naprav == 'Ю')
			{
				return 'З';
			}
			else
			{
				if (C_naprav == 'З')
				{
					return 'С';
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
	cout << "Ваше ИСХОДНОЕ положение локатора: " << C_orient_locatora << endl;
	// Ходы N_1
	cout << "Ходы N_1\n";
	char next_C_orient_locatora = switch_2_N(C_orient_locatora, N_1);
	// Ходы N_2
	cout << "Ходы N_2\n";
	switch_2_N(next_C_orient_locatora, N_2);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Две ПОДФУНКЦИИ для 11 задания
char switch_2_N(char C_orient_locatora, int N)
{
	switch (N)
	{
	case 0: // Поворот налево
		C_orient_locatora = go_left(C_orient_locatora); // Пользую функцию go_left() из 10 задания
		cout << "Ваша позиция (Поворот налево): " << C_orient_locatora << endl;
		break;
	case 1: // Поворот Направо
		C_orient_locatora = go_right(C_orient_locatora); // Пользую функцию go_right() из 10 задания
		cout << "Ваша позиция (Поворот Направо): " << C_orient_locatora << endl;
		break;
	case -1: // Поворот на 180 градусов
		C_orient_locatora = locator_180_gradusov(C_orient_locatora);
		cout << "Ваша позиция (Поворот на 180 градусов) (по часовой стрелке): " << C_orient_locatora << endl;
		break;
	}
	return C_orient_locatora;
}
char locator_180_gradusov(char C_orient_locatora)
{
	if (C_orient_locatora == 'С')
	{
		return 'Ю';
	}
	else
	{
		if (C_orient_locatora == 'В')
		{

			return 'З';
		}
		else
		{
			if (C_orient_locatora == 'Ю')
			{
				return 'С';
			}
			else
			{
				if (C_orient_locatora == 'З')
				{
					return 'В';
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
	case 1: // 1 - радиус
		cout << "Радиус = " << Radius << endl;
	case 2: // 2 - диаметр D = 2 * R
		cout << "Диаметр D = " << 2 * Radius << endl;
	case 3: //  3 - длинна L = 2*pi*R
		cout << "Длинна L = " << 2 * pi * Radius << endl;
	case 4: // 4 - площадь круга S = pi*R^2
		cout << "Площадь круга S = " << pi * pow(Radius, 2) << endl;
	default:
	{
		cout << "Конец\n";
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
	case 1: // 1 - Катет
		cout << "Катет = " << katet << endl;
	case 2: // 2 - Гипотенуза C = katet * sqrt(2)
		cout << "Гипотенуза C = " << C << endl;
	case 3: //  3 - Высота h = C / 2
		cout << "Высота h = " << h_ << endl;
	case 4: // 4 - площадь  S = C*h/2
		cout << "Площадь S = " << C*h_/2 << endl;
	default:
	{
		cout << "Конец\n";
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
	case 1: // 1 - сторона а
		cout << "сторона а = " << storona_a << endl;
	case 2: // 2 - R1 
		cout << "R1 = " << R1 << endl;
	case 3: //  3 - R2
		cout << "R2 = " << R2 << endl;
	case 4: // 4 - S
		cout << "S = " << S << endl;
	default:
	{
		cout << "Конец\n";
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
		cout << "шестёрка ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 7:
		cout << "семёрка ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 8:
		cout << "восмёрка ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 9:
		cout << "девятка ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 10:
		cout << "десятка ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 11:
		cout << "валет ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 12:
		cout << "дама ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 13:
		cout << "король ";
		for (int i = 0; i < strlen(mast_card); i++)
		{
			cout << mast_card[i];
		}
		cout << endl;
		break;
	case 14:
		cout << "туз ";
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
		cout << "Вы вышли из диапазона\n";
		return;
	}
	int p_2 = my_number / 10;
	switch (p_2)
	{
	case 2:
		cout << "двадцать ";
		break;
	case 3:
		cout << "тридцать ";
		break;
	case 4:
		cout << "сорок ";
		break;
	case 5:
		cout << "пятдесят ";
		break;
	case 6:
		cout << "шестьдесят ";
		break;
	}
	int p = my_number % 10; // Чтобы узнать кол-во едениц в числе
	switch (p)
	{
	case 1:
		cout << "один ";
		break;
	case 2:
		cout << "два ";
		break;
	case 3:
		cout << "три ";
		break;
	case 4:
		cout << "четыре ";
		break;
	case 5:
		cout << "пять ";
		break;
	case 6:
		cout << "шесть ";
		break;
	case 7:
		cout << "семь ";
		break;
	case 8:
		cout << "восемь ";
		break;
	case 9:
		cout << "девять ";
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
		cout << "лет.\n ";
		break;
	case 1:
		cout << "год.\n ";
		break;
	case 2:
	case 3:
	case 4:
		cout << "года.\n ";
		break;
	}
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17

void years_10_40(int my_num)
{
	if (my_num < 10 | my_num > 40)
	{
		cout << "Вы вышли за диапазон\n";
		return;
	}
	if (my_num / 10 == 1)
	{
		switch (my_num)
		{
		case 10:
			cout << "десять учебных заданий. \n";
			break;
		case 11:
			cout << "одинадцать учебных заданий.\n";
			break;
		case 12:
			cout << "двенадцать учебных заданий.\n";
			break;
		case 13:
			cout << "тринадцать учебных заданий.\n";
			break;
		case 14:
			cout << "четырнадцать учебных заданий.\n";
			break;
		case 15:
			cout << "пятнадцать учебных заданий.\n";
			break;
		case 16:
			cout << "шестнадцать учебных заданий.\n";
			break;
		case 17:
			cout << "семнадцать учебных заданий.\n";
			break;
		case 18:
			cout << "восемнадцать учебных заданий.\n";
			break;
		case 19:
			cout << "девятнадцать учебных заданий.\n";
			break;
		}
	}
	else 
	{
		switch (my_num / 10)
		{
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		}

		switch (my_num % 10)
		{
		case 1:
			cout << "одно ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
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
			cout << "учебных заданий.\n";
			break;
		case 1:
			cout << "учебное задание.\n";
			break;
		case 2:
		case 3:
		case 4:
			cout << "учебных задания.\n";
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18

void _100_999(int my_znach_num)
{

	switch (my_znach_num / 100) {
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот  ";
		break;
	case 9:
		cout << "девятьсот  ";
		break;
	}

	if ((my_znach_num % 100) / 10 == 1)
	{
		switch (my_znach_num % 100)
		{
		case 10:
			cout << "десять\n";
			break;
		case 11:
			cout << "одинадцать\n";
			break;
		case 12:
			cout << "двенадцать\n";
			break;
		case 13:
			cout << "тринадцать\n";
			break;
		case 14:
			cout << "четырнадцать\n";
			break;
		case 15:
			cout << "пятнадцать\n";
			break;
		case 16:
			cout << "шестнадцать\n";
			break;
		case 17:
			cout << "семнадцать\n";
			break;
		case 18:
			cout << "восемнадцать\n";
			break;
		case 19:
			cout << "девятнадцать\n";
			break;
		}
	}
	else
	{
		switch ((my_znach_num % 100) / 10) 
		{
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}

		switch (my_znach_num % 10) 
		{
		case 1:
			cout << "один\n";
			break;
		case 2:
			cout << "два\n";
			break;
		case 3:
			cout << "три\n";
			break;
		case 4:
			cout << "четыре\n";
			break;
		case 5:
			cout << "пять\n";
			break;
		case 6:
			cout << "шесть\n";
			break;
		case 7:
			cout << "семь\n";
			break;
		case 8:
			cout << "восемь\n";
			break;
		case 9:
			cout << "девять\n";
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19

void SIX_cikl(int y_num)
{
	cout << "год ";
	switch ((y_num) % 10)
	{
	case 0:
	case 1:
		cout << "бел";
		break;
	case 2:
	case 3:
		cout << "черн";
		break;
	case 4:
	case 5:
		cout << "зелён";
		break;
	case 6:
	case 7:
		cout << "красн";
		break;
	case 8:
	case 9:
		cout << "жёлт";
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
		cout << "ой ";
		break;
	case 6:
	case 7:
	case 8:
		cout << "ого ";
		break;
	}

	switch ((y_num + 8) % 12)
	{
	case 0:
		cout << "крысы\n";
		break;
	case 1:
		cout << "коровы\n";
		break;
	case 2:
		cout << "тигра\n";
		break;
	case 3:
		cout << "зайца\n";
		break;
	case 4:
		cout << "дракона\n";
		break;
	case 5:
		cout << "змеи\n";
		break;
	case 6:
		cout << "лошади\n";
		break;
	case 7:
		cout << "овцы\n";
		break;
	case 8:
		cout << "обезьяны\n";
		break;
	case 9:
		cout << "курицы\n";
		break;
	case 10:
		cout << "собаки\n";
		break;
	case 11:
		cout << "свиньи\n";
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
			cout << "Водолей";
			break;
		}
		else
		{
			cout << "Козерог";
			break;
		}
	case 2:
		if (day > 18)
		{
			cout << "Рыбы";
			break;
		}
		else
		{
			cout << "Водолей";
			break;
		}
	case 3:
		if (day > 20)
		{
			cout << "Овен";
			break;
		}
		else
		{
			cout << "Рыбы";
			break;
		}
	case 4:
		if (day > 19)
		{
			cout << "Телец";
			break;
		}
		else
		{
			cout << "Овен";
			break;
		}
	case 5:
		if (day > 20)
		{
			cout << "Близнецы";
			break;
		}
		else
		{
			cout << "Телец";
			break;
		}
	case 6:
		if (day > 21)
		{
			cout << "Рак";
			break;
		}
		else
		{
		cout << "Близнецы";
			break;
		}
	case 7:
		if (day > 22)
		{
			cout << "Лев";
			break;
		}
		else 
		{
			cout << "Рак";
			break;
		}
	case 8:
		if (day > 22)
		{
			cout << "Дева";
			break;
		}
		else
		{
			cout << "Лев";
			break;
		}
	case 9:
		if (day > 22)
		{
			cout << "Весы";
			break;
		}
		else
		{
			cout << "Дева";
			break;
		}
	case 10:
		if (day > 22)
		{
			cout << "Скорпион";
			break;
		}
		else
		{
			cout << "Весы";
			break;
		}
	case 11:
		if (day > 22)
		{
			cout << "Стрелец";
			break;
		}
		else
		{
			cout << "Скорпион";
			break;
		}
	case 12:
	if (day > 21)
	{
		cout << "Козерог";
		break;
	}
	else
	{ 
		cout << "Стрелец";
		break;
	}
	}
	cout << endl;
}
