#include<iostream>
#include<cmath>
#include<Windows.h>
using namespace std;
//Begin
double Pi = 3.14;

double Begin1(double a)
{
	double P = 4 * a;
	return P;
}
double Begin2(double a)
{
	double S = pow(a, 2);
	return S;

}
double Begin3(double a, double b)
{
	double P = 2 * (a + b);
	double S = a * b;
	cout << "Ответ: " << P << " " << S;
	return 0;
}
double Begin4(double d)
{
	double L = Pi * d;
	return L;
}
double Begin5(double a)
{
	double V = pow(a, 3);
	double S = 6 * pow(a, 2);
	cout << "Ответ: " << V << " " << S << endl;
	return 0;
}
double Begin6(double a, double b, double c)
{
	double V = a * b * c;
	double S = 2 * (a * b + b * c + a * c);
	cout << "Ответ: " << V << " " << S << endl;
	return 0;
}
double Begin7(double R)
{
	double L = 2 * Pi * R;
	double S = Pi * pow(R, 2);
	cout << "Ответ: " << L << " " << S << endl;
	return 0;
}
double Begin8(double a, double b)
{
	double sred = (a + b) / 2;
	cout << "Ответ: " << sred;
	return 0;
}
double Begin9(double a, double b)
{
	double sredgeom = sqrt(a * b);
	cout << "Ответ: " << sredgeom;
	return 0;
}
double Begin10(double a, double b)//больше нуля(проверку)
{
	double Sum = pow(a, 2) + pow(b, 2);
	double Diff = pow(a, 2) - pow(b, 2);
	double Composition = pow(a, 2) / pow(b, 2);
	double Quotient = pow(a, 2) * pow(b, 2);
	cout << "Ответ: " << Sum << " " << Diff << " " << Composition << " " << Quotient << endl;
	return 0;
}
double Begin11(double a, double b)
{
	double Sum = fabs(a) + fabs(b);
	double Diff = fabs(a) - fabs(b);
	double Composition = fabs(a) / fabs(b);
	double Quotient = fabs(a) * fabs(b);
	cout << "Ответ: " << Sum << " " << Diff << " " << Composition << " " << Quotient << endl;
	return 0;
}
double Begin12(double a, double b, double c)
{
	double P = a + b + c;
	double G = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Ответ: " << P << " " << G << endl;
	return 0;
}
double Begin13(double R2, double R1)
{
	double S1 = Pi * (R1 * R1);
	double S2 = Pi * (R2 * R2);
	double S3 = S1 - S2;
	cout << "Ответ:" << S1 << "" << S2 << "" << S3 << endl;
	return 0;
}
double Begin14(double R)
{
	double dlina = 2 * Pi * R;
	double S = Pi * pow(R, 2);
	cout << "Ответ" << "Длина- " << dlina << "Плошадь-" << S << endl;
	return 0;
}
double Begin15(double D)
{
	double d = Pi * D;
	double S = Pi * pow(D, 2) / 4;
	cout << "Ответ" << "Длина- " << d << "Плошадь-" << S << endl;
	return 0;
}
double Begin16(double x1, double x2)
{
	double rast = fabs(x2 - x1);
	cout << "Ответ" << "Растояние- " << rast << endl;
	return 0;
}
double Begin17(double x1, double x2, double x3)
{
	double AC = fabs(x3 - x1);
	double BC = fabs(x3 - x2);
	double Summ = AC + BC;
	cout << "Ответ" << "AC- " << AC << "BC- " << BC << "Summ- " << Summ << endl;
	return 0;
}
double Begin18(double x1, double x2, double x3)
{
	double AC = fabs(x3 - x1);
	double BC = fabs(x3 - x2);
	double Proiz = AC * BC;
	cout << "Ответ" << "AC- " << AC << "BC- " << BC << "Proiz- " << Proiz << endl;
	return 0;
}
double Begin19(double x1, double x2, double y1, double y2)
{
	double A = (x2 - x1);
	double B = (y2 - y1);
	double Perimetr = 2 * (A + B);
	double S = A * B;
	cout << "Ответ" << "A- " << A << "B- " << B << "Perimetr- " << Perimetr << "S- " << S << endl;
	return 0;
}
double Begin20(double x1, double x2, double y1, double y2)
{
	double Rast = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "Ответ: " << Rast << endl;
	return 0;
}
double Begin21(double x1, double x2, double x3, double y1, double y2, double y3)
{
	double st1 = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	double st2 = sqrt(((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3)));
	double st3 = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
	double P = st1 + st2 + st3;
	double p = P / 2;
	double S = sqrt(p * (p - st1) * (p - st2) * (p - st3));
	cout << "\nP= " << P << "\nS= " << S << endl;
	return 0;
}
void Begin22(double* a, double* b, double* c)
{
	*c = *a;
	*a = *b;
	*b = *c;
}
void Begin23(double* a, double* b, double* c)
{
	*a = *b;
	*b = *c;
	*c = *a;

}
void Begin24(double* a, double* b, double* c)
{
	*a = *c;
	*c = *b;
	*b = *a;

}
double Begin25(double x)
{
	double Y = 3 * pow(x, 6) - 6 * pow(x, 2);
	cout << "\nY= " << Y << endl;
	return 0;

}
double Begin26(double x)
{
	double Y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	cout << "\nY= " << Y << endl;
	return 0;
}
double Begin27(double a)
{
	double a2 = a * a;
	double a4 = a2 * a2;
	double a8 = a4 * a4;
	cout << "\na^2= " << a2 << "\na^4= " << a4 << "\na^8= " << a8;
	return 0;
}
double Begin28(double a)
{

	double b = a * a;

	double c = a * b;

	double B = c * b;

	double C = b * B;
	double AA = B * C;
	cout << "a^2 " << b << "a^3 " << c << "a^5" << B << "a^10" << C << "a^15" << AA;
	return 0;
}
double Begin29(double a)
{
	double gradmer = a * Pi / 180;
	cout << "градусная мера угла :" << gradmer << endl;
	return 0;
}
double Begin30(double a)
{
	double radian = a * 180 / Pi;
	cout << "градусная мера угла :" << radian << endl;
	return 0;
}
double Begin31(double TF)
{
	double TC = (TF - 32) * 5 / 9;
	cout << "Эта температура в градусах Цельсия: " << TC << endl;
	return 0;
}
double Begin32(double TC)
{
	double TF = TC * 9 / 5 + 32;
	cout << "Эта температура в градусах Фаренгейт: " << TF << endl;
	return 0;
}
double Begin33(double a, double x, double y)
{
	double O = a / x;
	double U = O * y;
	cout << "1 кг конфет стоит " << O << endl;
	cout << y << " кг конфет стоит " << U << endl;
	return 0;
}
double Begin34(double a/*киллограмм конфет*/, double x/*стоимость*/, double y/*ириски*/, double c/*стоимость ирисок*/)
{
	double sweetconf = x / a;
	cout << "1 кг конфет стоит " << sweetconf << endl;
	double sweetirisk = y / c;
	cout << "1 кг конфет стоит " << sweetirisk << endl;
	double ratio = sweetconf / sweetirisk;
	cout << "Один килограмм конфет дороже ирисок в " << ratio << "раз" << endl;
	return 0;
}
double Begin35(double V, double U, double T1, double T2)
{
	double S = T2 * (V - U) + T1 * V;
	cout << "Путь пройденный лодкой равен" << S << endl;
	return 0;
}
double Begin36(double V1, double V2, double T, double S)
{
	double SD = (V1 + V2) * T + S;
	cout << "Через" << T << "ч.расстояние" << SD << "км" << endl;
	return 0;
}
double Begin37(double V1, double V2, double S, double T)
{
	double obchai = T * (V1 + V2);
	double cherez = fabs(S - obchai);
	cout << "Рассстояние между автомобилями через " << T << "ч = " << cherez;
	return 0;
}
double Begin38(double b, double a)
{
	double x = -b / a;
	cout << "x =" << x << endl;
	return 0;
}
double Begin39(double b, double a, double c)
{
	double D = sqrt(b) - 4 * a * c;
	double x1 = (-b + sqrt(D)) / (2 * a);
	double x2 = (-b - sqrt(D)) / (2 * a);
	cout << "x1 =" << x1 << "x2 =" << x2 << endl;
	return 0;
}
double Begin40(double A1, double A2, double B1, double B2, double C1, double C2)
{
	double D = A1 * B2 - A2 * B1;
	double x = (C1 * B2 - C2 * B1) / D;
	double y = (A1 * C2 - A2 * C1) / D;
	cout << "x1 =" << x << "y =" << y << endl;
	return 0;

}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a, b, c, d, R, T, T1, T2, V, V1, V2, S, S1, S2, S3, R1, R2, D, x, y, TF, TC, U;
	double x1, x2, x3, y2, y3, y1, A1, A2, C1, C2, B1, B2;
	int v;

	cout << "\n1 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Ответ: " << Begin1(a) << endl;

	cout << "\n2 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Ответ: " << Begin2(a) << endl;

	cout << "\n3 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << Begin3(a, b) << endl;

	cout << "\n4 задание\n";
	cout << "Введите d: ";
	cin >> d;
	cout << "Ответ: " << Begin4(d) << endl;

	cout << "\n5 задание\n";
	cout << "Введите а: ";
	cin >> a;
	Begin5(a);

	cout << "\n6 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	Begin6(a, b, c);

	cout << "\n7 задание\n";
	cout << "Введите R: ";
	cin >> R;
	Begin7(R);

	cout << "\n8 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	Begin8(a, b);

	cout << "\n9 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	Begin9(a, b);
	cout << "\n10 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	Begin10(a, b);


	cout << "\n11 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	Begin11(a, b);

	cout << "\n12 задание\n";
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	Begin12(a, b, c);
	cout << "\n13 задание\n";
	cout << "Введите R1: ";
	cin >> R1;
	cout << "Введите R2: ";
	cin >> R2;
	if (R1 < R2)
	{
		cout << "Error return\n" << false;
	}
	else if (R1 > R2)
	{
		true;
	}
	Begin13(R1, R2);
	cout << "\n14 задание\n";
	cout << "Введите R: ";
	cin >> R;
	Begin14(R);
	cout << "\n15 задание\n";
	cout << "Введите D: ";
	cin >> D;
	Begin15(D);
	cout << "\n16 задание\n";
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите x1: ";
	cin >> x1;
	Begin16(x1, x2);
	cout << "\n17 задание\n";
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите x3: ";
	cin >> x3;
	Begin17(x1, x2, x3);
	cout << "\n18 задание\n";
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите x3: ";
	cin >> x3;
	Begin18(x1, x2, x3);
	cout << "\n19 задание\n";
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите y1: ";
	cin >> y1;
	cout << "Введите y2: ";
	cin >> y2;
	Begin19(x1, x2, y1, y2);
	cout << "\n20 задание\n";
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите y2: ";
	cin >> y2;
	cout << "Введите y1: ";
	cin >> y1;
	Begin20(x1, x2, y1, y2);

	cout << "\n21 задание\n";
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите x3: ";
	cin >> x3;
	cout << "Введите y1: ";
	cin >> y1;
	cout << "Введите y2: ";
	cin >> y2;
	cout << "Введите y3: ";
	cin >> y3;
	Begin21(x1, x2, x3, y1, y2, y3);

	cout << "\n22 задание\n";

	cout << "Введите первое число и нажмите Enter на клавиатуре:" << endl;
	cin >> a;
	cout << "Число а = " << a << "\n\n";

	cout << "Введите второе число и нажмите Enter на клавиатуре:" << endl;
	cin >> b;
	cout << "Число b = " << b << "\n\n";
	Begin22(&a, &b, &c);

	cout << "Произведена смена мест значений переменных:" << endl;

	cout << "Число а = " << a << "Число b = " << b << endl;
	cout << "\n23 задание\n";
	/*double a, b, c;*/

	cout << "Введите первое число и нажмите Enter на клавиатуре:" << endl;
	cin >> a;
	cout << "Число а = " << a << "\n\n";

	cout << "Введите второе число и нажмите Enter на клавиатуре:" << endl;
	cin >> b;
	cout << "Число b = " << b << "\n\n";
	cout << "Введите третье число и нажмите Enter на клавиатуре:" << endl;
	cin >> c;
	cout << "Число c = " << c << "\n\n";
	Begin23(&a, &b, &c);

	cout << "Произведена смена мест значений переменных:" << endl;

	cout << "\nЧисло а = " << a << "\nЧисло b = " << b << "\nЧисло c = " << c << endl;

	cout << "\n24 задание\n";
	/*double a, b, c;*/

	cout << "Введите первое число и нажмите Enter на клавиатуре:" << endl;
	cin >> a;
	cout << "Число а = " << a << "\n\n";
	cout << "Введите второе число и нажмите Enter на клавиатуре:" << endl;
	cin >> b;
	cout << "Число b = " << b << "\n\n";
	cout << "Введите третье число и нажмите Enter на клавиатуре:" << endl;
	cin >> c;
	cout << "Число c = " << c << "\n\n";
	Begin24(&a, &b, &c);
	cout << "Произведена смена мест значений переменных:" << endl;
	cout << "\nЧисло а = " << a << "\nЧисло b = " << b << "\nЧисло c = " << c << endl;
	cout << "\n25 задание\n";
	cout << "Введите x: ";
	cin >> x;
	Begin25(x);
	cout << "\n26 задание\n";
	cout << "Введите x: ";
	cin >> x;
	Begin26(x);
	cout << "\n27 задание\n";
	cout << "Введите a: ";
	cin >> a;
	Begin27(a);
	cout << "\n28 задание\n";
	cout << "Введите a: ";
	cin >> a;
	Begin28(a);
	cout << "\n29 задание\n";
	cout << "Введите a: ";
	cin >> a;
	Begin29(a);
	cout << "\n30 задание\n";
	cout << "Введите a: ";
	cin >> a;
	Begin30(a);

	cout << "\n31 задание\n";
	cout << "Введите градусы по Фаренгейту: ";
	cin >> TF;
	Begin31(TF);
	cout << "\n32 задание\n";
	cout << "Введите градусы по Цельсия: ";
	cin >> TC;
	Begin32(TC);
	cout << "\n33 задание\n";
	cout << "Введите x - килограммы" << endl;
	cin >> x;
	cout << "Введите a - рубли" << endl;
	cin >> a;
	cout << "Введите y - килограммы" << endl;
	cin >> y;
	Begin33(x, a, y);
	cout << "\n34 задание\n";
	cout << "Введите x - килограммы" << endl;
	cin >> x;
	cout << "Введите a - рубли" << endl;
	cin >> a;
	cout << "Введите y - килограммы" << endl;
	cin >> y;
	cout << "Введите c - рубли" << endl;
	cin >> y;
	Begin34(x, a, y, c);
	cout << "\n35 задание\n";
	cout << "Введите скорость лодки: ";
	cin >> V;
	cout << "Введите скорость течение реки: ";
	cin >> U;
	cout << "Введите время движения по озеру: ";
	cin >> T1;
	cout << "Введите время движения по реке: ";
	cin >> T2;
	if (U < V)
	{
		true;
	}
	else if (U > V)
	{
		false;
	}

	Begin35(U, V, T1, T2);
	cout << "\n36 задание\n";
	cout << "Введите скорость первой машиины: ";
	cin >> V1;
	cout << "Введите скорость второй машины: ";
	cin >> V2;
	cout << "Введите время : ";
	cin >> T;
	cout << "Введите растояние между авто: ";
	cin >> S;
	Begin36(V1, V2, T, S);
	cout << "\n37 задание\n";
	cout << "Введите скорость первой машиины: ";
	cin >> V1;
	cout << "Введите скорость второй машины: ";
	cin >> V2;
	cout << "Введите первоначальное расстояние: ";
	cin >> S;
	cout << "Время";
	cin >> T;
	Begin37(V1, V2, S, T);
	cout << "\n38 задание\n";
	cout << " Введите коэффициент А :";
	cin >> a;
	cout << "Введите коэффициент В: ";
	cin >> b;
	Begin38(a, b);
	cout << "\n39 задание\n";
	cout << " Введите коэффициент А :";
	cin >> a;
	cout << "Введите коэффициент В: ";
	cin >> b;
	cout << "Введите коэффициент C: ";
	cin >> c;
	Begin39(a, b, c);
	cout << "\n40 задание\n";
	cout << " Введите коэффициент А1 :";
	cin >> A1;
	cout << " Введите коэффициент А2 :";
	cin >> A2;
	cout << "Введите коэффициент В1: ";
	cin >> B1;
	cout << "Введите коэффициент В2: ";
	cin >> B2;
	cout << "Введите коэффициент C1: ";
	cin >> C1;
	cout << "Введите коэффициент C2: ";
	cin >> C2;
	Begin40(A1, A2, B1, B2, C1, C2);
	system("pause");
	return 0;
}
