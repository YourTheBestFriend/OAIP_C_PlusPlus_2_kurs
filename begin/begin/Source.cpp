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
	cout << "�����: " << P << " " << S;
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
	cout << "�����: " << V << " " << S << endl;
	return 0;
}
double Begin6(double a, double b, double c)
{
	double V = a * b * c;
	double S = 2 * (a * b + b * c + a * c);
	cout << "�����: " << V << " " << S << endl;
	return 0;
}
double Begin7(double R)
{
	double L = 2 * Pi * R;
	double S = Pi * pow(R, 2);
	cout << "�����: " << L << " " << S << endl;
	return 0;
}
double Begin8(double a, double b)
{
	double sred = (a + b) / 2;
	cout << "�����: " << sred;
	return 0;
}
double Begin9(double a, double b)
{
	double sredgeom = sqrt(a * b);
	cout << "�����: " << sredgeom;
	return 0;
}
double Begin10(double a, double b)//������ ����(��������)
{
	double Sum = pow(a, 2) + pow(b, 2);
	double Diff = pow(a, 2) - pow(b, 2);
	double Composition = pow(a, 2) / pow(b, 2);
	double Quotient = pow(a, 2) * pow(b, 2);
	cout << "�����: " << Sum << " " << Diff << " " << Composition << " " << Quotient << endl;
	return 0;
}
double Begin11(double a, double b)
{
	double Sum = fabs(a) + fabs(b);
	double Diff = fabs(a) - fabs(b);
	double Composition = fabs(a) / fabs(b);
	double Quotient = fabs(a) * fabs(b);
	cout << "�����: " << Sum << " " << Diff << " " << Composition << " " << Quotient << endl;
	return 0;
}
double Begin12(double a, double b, double c)
{
	double P = a + b + c;
	double G = sqrt(pow(a, 2) + pow(b, 2));
	cout << "�����: " << P << " " << G << endl;
	return 0;
}
double Begin13(double R2, double R1)
{
	double S1 = Pi * (R1 * R1);
	double S2 = Pi * (R2 * R2);
	double S3 = S1 - S2;
	cout << "�����:" << S1 << "" << S2 << "" << S3 << endl;
	return 0;
}
double Begin14(double R)
{
	double dlina = 2 * Pi * R;
	double S = Pi * pow(R, 2);
	cout << "�����" << "�����- " << dlina << "�������-" << S << endl;
	return 0;
}
double Begin15(double D)
{
	double d = Pi * D;
	double S = Pi * pow(D, 2) / 4;
	cout << "�����" << "�����- " << d << "�������-" << S << endl;
	return 0;
}
double Begin16(double x1, double x2)
{
	double rast = fabs(x2 - x1);
	cout << "�����" << "���������- " << rast << endl;
	return 0;
}
double Begin17(double x1, double x2, double x3)
{
	double AC = fabs(x3 - x1);
	double BC = fabs(x3 - x2);
	double Summ = AC + BC;
	cout << "�����" << "AC- " << AC << "BC- " << BC << "Summ- " << Summ << endl;
	return 0;
}
double Begin18(double x1, double x2, double x3)
{
	double AC = fabs(x3 - x1);
	double BC = fabs(x3 - x2);
	double Proiz = AC * BC;
	cout << "�����" << "AC- " << AC << "BC- " << BC << "Proiz- " << Proiz << endl;
	return 0;
}
double Begin19(double x1, double x2, double y1, double y2)
{
	double A = (x2 - x1);
	double B = (y2 - y1);
	double Perimetr = 2 * (A + B);
	double S = A * B;
	cout << "�����" << "A- " << A << "B- " << B << "Perimetr- " << Perimetr << "S- " << S << endl;
	return 0;
}
double Begin20(double x1, double x2, double y1, double y2)
{
	double Rast = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "�����: " << Rast << endl;
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
	cout << "��������� ���� ���� :" << gradmer << endl;
	return 0;
}
double Begin30(double a)
{
	double radian = a * 180 / Pi;
	cout << "��������� ���� ���� :" << radian << endl;
	return 0;
}
double Begin31(double TF)
{
	double TC = (TF - 32) * 5 / 9;
	cout << "��� ����������� � �������� �������: " << TC << endl;
	return 0;
}
double Begin32(double TC)
{
	double TF = TC * 9 / 5 + 32;
	cout << "��� ����������� � �������� ���������: " << TF << endl;
	return 0;
}
double Begin33(double a, double x, double y)
{
	double O = a / x;
	double U = O * y;
	cout << "1 �� ������ ����� " << O << endl;
	cout << y << " �� ������ ����� " << U << endl;
	return 0;
}
double Begin34(double a/*���������� ������*/, double x/*���������*/, double y/*������*/, double c/*��������� ������*/)
{
	double sweetconf = x / a;
	cout << "1 �� ������ ����� " << sweetconf << endl;
	double sweetirisk = y / c;
	cout << "1 �� ������ ����� " << sweetirisk << endl;
	double ratio = sweetconf / sweetirisk;
	cout << "���� ��������� ������ ������ ������ � " << ratio << "���" << endl;
	return 0;
}
double Begin35(double V, double U, double T1, double T2)
{
	double S = T2 * (V - U) + T1 * V;
	cout << "���� ���������� ������ �����" << S << endl;
	return 0;
}
double Begin36(double V1, double V2, double T, double S)
{
	double SD = (V1 + V2) * T + S;
	cout << "�����" << T << "�.����������" << SD << "��" << endl;
	return 0;
}
double Begin37(double V1, double V2, double S, double T)
{
	double obchai = T * (V1 + V2);
	double cherez = fabs(S - obchai);
	cout << "����������� ����� ������������ ����� " << T << "� = " << cherez;
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

	cout << "\n1 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "�����: " << Begin1(a) << endl;

	cout << "\n2 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "�����: " << Begin2(a) << endl;

	cout << "\n3 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	cout << Begin3(a, b) << endl;

	cout << "\n4 �������\n";
	cout << "������� d: ";
	cin >> d;
	cout << "�����: " << Begin4(d) << endl;

	cout << "\n5 �������\n";
	cout << "������� �: ";
	cin >> a;
	Begin5(a);

	cout << "\n6 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	cout << "������� c: ";
	cin >> c;
	Begin6(a, b, c);

	cout << "\n7 �������\n";
	cout << "������� R: ";
	cin >> R;
	Begin7(R);

	cout << "\n8 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	Begin8(a, b);

	cout << "\n9 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	Begin9(a, b);
	cout << "\n10 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	Begin10(a, b);


	cout << "\n11 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	Begin11(a, b);

	cout << "\n12 �������\n";
	cout << "������� �: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	cout << "������� c: ";
	cin >> c;
	Begin12(a, b, c);
	cout << "\n13 �������\n";
	cout << "������� R1: ";
	cin >> R1;
	cout << "������� R2: ";
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
	cout << "\n14 �������\n";
	cout << "������� R: ";
	cin >> R;
	Begin14(R);
	cout << "\n15 �������\n";
	cout << "������� D: ";
	cin >> D;
	Begin15(D);
	cout << "\n16 �������\n";
	cout << "������� x2: ";
	cin >> x2;
	cout << "������� x1: ";
	cin >> x1;
	Begin16(x1, x2);
	cout << "\n17 �������\n";
	cout << "������� x2: ";
	cin >> x2;
	cout << "������� x1: ";
	cin >> x1;
	cout << "������� x3: ";
	cin >> x3;
	Begin17(x1, x2, x3);
	cout << "\n18 �������\n";
	cout << "������� x2: ";
	cin >> x2;
	cout << "������� x1: ";
	cin >> x1;
	cout << "������� x3: ";
	cin >> x3;
	Begin18(x1, x2, x3);
	cout << "\n19 �������\n";
	cout << "������� x2: ";
	cin >> x2;
	cout << "������� x1: ";
	cin >> x1;
	cout << "������� y1: ";
	cin >> y1;
	cout << "������� y2: ";
	cin >> y2;
	Begin19(x1, x2, y1, y2);
	cout << "\n20 �������\n";
	cout << "������� x2: ";
	cin >> x2;
	cout << "������� x1: ";
	cin >> x1;
	cout << "������� y2: ";
	cin >> y2;
	cout << "������� y1: ";
	cin >> y1;
	Begin20(x1, x2, y1, y2);

	cout << "\n21 �������\n";
	cout << "������� x2: ";
	cin >> x2;
	cout << "������� x1: ";
	cin >> x1;
	cout << "������� x3: ";
	cin >> x3;
	cout << "������� y1: ";
	cin >> y1;
	cout << "������� y2: ";
	cin >> y2;
	cout << "������� y3: ";
	cin >> y3;
	Begin21(x1, x2, x3, y1, y2, y3);

	cout << "\n22 �������\n";

	cout << "������� ������ ����� � ������� Enter �� ����������:" << endl;
	cin >> a;
	cout << "����� � = " << a << "\n\n";

	cout << "������� ������ ����� � ������� Enter �� ����������:" << endl;
	cin >> b;
	cout << "����� b = " << b << "\n\n";
	Begin22(&a, &b, &c);

	cout << "����������� ����� ���� �������� ����������:" << endl;

	cout << "����� � = " << a << "����� b = " << b << endl;
	cout << "\n23 �������\n";
	/*double a, b, c;*/

	cout << "������� ������ ����� � ������� Enter �� ����������:" << endl;
	cin >> a;
	cout << "����� � = " << a << "\n\n";

	cout << "������� ������ ����� � ������� Enter �� ����������:" << endl;
	cin >> b;
	cout << "����� b = " << b << "\n\n";
	cout << "������� ������ ����� � ������� Enter �� ����������:" << endl;
	cin >> c;
	cout << "����� c = " << c << "\n\n";
	Begin23(&a, &b, &c);

	cout << "����������� ����� ���� �������� ����������:" << endl;

	cout << "\n����� � = " << a << "\n����� b = " << b << "\n����� c = " << c << endl;

	cout << "\n24 �������\n";
	/*double a, b, c;*/

	cout << "������� ������ ����� � ������� Enter �� ����������:" << endl;
	cin >> a;
	cout << "����� � = " << a << "\n\n";
	cout << "������� ������ ����� � ������� Enter �� ����������:" << endl;
	cin >> b;
	cout << "����� b = " << b << "\n\n";
	cout << "������� ������ ����� � ������� Enter �� ����������:" << endl;
	cin >> c;
	cout << "����� c = " << c << "\n\n";
	Begin24(&a, &b, &c);
	cout << "����������� ����� ���� �������� ����������:" << endl;
	cout << "\n����� � = " << a << "\n����� b = " << b << "\n����� c = " << c << endl;
	cout << "\n25 �������\n";
	cout << "������� x: ";
	cin >> x;
	Begin25(x);
	cout << "\n26 �������\n";
	cout << "������� x: ";
	cin >> x;
	Begin26(x);
	cout << "\n27 �������\n";
	cout << "������� a: ";
	cin >> a;
	Begin27(a);
	cout << "\n28 �������\n";
	cout << "������� a: ";
	cin >> a;
	Begin28(a);
	cout << "\n29 �������\n";
	cout << "������� a: ";
	cin >> a;
	Begin29(a);
	cout << "\n30 �������\n";
	cout << "������� a: ";
	cin >> a;
	Begin30(a);

	cout << "\n31 �������\n";
	cout << "������� ������� �� ����������: ";
	cin >> TF;
	Begin31(TF);
	cout << "\n32 �������\n";
	cout << "������� ������� �� �������: ";
	cin >> TC;
	Begin32(TC);
	cout << "\n33 �������\n";
	cout << "������� x - ����������" << endl;
	cin >> x;
	cout << "������� a - �����" << endl;
	cin >> a;
	cout << "������� y - ����������" << endl;
	cin >> y;
	Begin33(x, a, y);
	cout << "\n34 �������\n";
	cout << "������� x - ����������" << endl;
	cin >> x;
	cout << "������� a - �����" << endl;
	cin >> a;
	cout << "������� y - ����������" << endl;
	cin >> y;
	cout << "������� c - �����" << endl;
	cin >> y;
	Begin34(x, a, y, c);
	cout << "\n35 �������\n";
	cout << "������� �������� �����: ";
	cin >> V;
	cout << "������� �������� ������� ����: ";
	cin >> U;
	cout << "������� ����� �������� �� �����: ";
	cin >> T1;
	cout << "������� ����� �������� �� ����: ";
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
	cout << "\n36 �������\n";
	cout << "������� �������� ������ �������: ";
	cin >> V1;
	cout << "������� �������� ������ ������: ";
	cin >> V2;
	cout << "������� ����� : ";
	cin >> T;
	cout << "������� ��������� ����� ����: ";
	cin >> S;
	Begin36(V1, V2, T, S);
	cout << "\n37 �������\n";
	cout << "������� �������� ������ �������: ";
	cin >> V1;
	cout << "������� �������� ������ ������: ";
	cin >> V2;
	cout << "������� �������������� ����������: ";
	cin >> S;
	cout << "�����";
	cin >> T;
	Begin37(V1, V2, S, T);
	cout << "\n38 �������\n";
	cout << " ������� ����������� � :";
	cin >> a;
	cout << "������� ����������� �: ";
	cin >> b;
	Begin38(a, b);
	cout << "\n39 �������\n";
	cout << " ������� ����������� � :";
	cin >> a;
	cout << "������� ����������� �: ";
	cin >> b;
	cout << "������� ����������� C: ";
	cin >> c;
	Begin39(a, b, c);
	cout << "\n40 �������\n";
	cout << " ������� ����������� �1 :";
	cin >> A1;
	cout << " ������� ����������� �2 :";
	cin >> A2;
	cout << "������� ����������� �1: ";
	cin >> B1;
	cout << "������� ����������� �2: ";
	cin >> B2;
	cout << "������� ����������� C1: ";
	cin >> C1;
	cout << "������� ����������� C2: ";
	cin >> C2;
	Begin40(A1, A2, B1, B2, C1, C2);
	system("pause");
	return 0;
}
