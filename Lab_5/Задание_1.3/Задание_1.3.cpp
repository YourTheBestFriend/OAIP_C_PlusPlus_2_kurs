#include<iostream>
#include<cmath>
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    long double a, b, h, x, Sx=0, S0, Yx, razn_Y_and_S;
    int  n;
    //��� x �� a �� b, � ����� h
    cout << "������� a:";
    cin >> a; 
    cout << "������� b:";
    cin >> b;
    cout << "������ ���� ������ (b-a) - ������� h:";
    cin >> h; 
    //##########################
    cout << "������� ����� n:"; // ������� �� �������, �������� �� ��������� � ����� ban
    cin >> n; // �� k = 0, �� n

    // ���� n �������������
    if (n < 0)
    {
        n = -n;
    }
    // ���� b < a
    if (b < a)
    {
        double t = a;
        a = b;
        b = t;
    }
    // h �� ������ ���� ������ �������� a � b 
    if (h > (b - a))
    {
        cout << "Error" << endl;
        return 0;
    }

    cout << "|\tx\t|\tS(x)\t|\tY(x)\t|\tY(x)-S(x)" << endl;
    // �� a �� b
    for (x = a; x <= b; x+= h)
    {
        // ����� �� k �� n
        for (int k = 0; k <= n; k++)
        {
            // ���������
            unsigned long long int f = 1;
            for (int j = 1; j <= k; j++)
            {
                f = f * j;
            }
            S0 = (2*k+1) / f * pow(x, 2*k);
            Sx = Sx + S0;
        }
        Yx = (1+2*pow(x, 2))*exp(pow(x, 2));
        razn_Y_and_S = fabs(Yx - Sx);
        cout << "|\t" << x << "\t|\t" << Sx << "\t|\t" << Yx << "\t|\t" << razn_Y_and_S << "\t|" << endl;
    }
    system("pause");
    return 0;
}