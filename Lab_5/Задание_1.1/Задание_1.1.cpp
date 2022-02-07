#include<iostream>
#include<cmath>
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    long double a = 0.1, b = 1,n = 100, h, x; // n должно быть меньше т.к влияет на фактариал, будет infinity - если 100 по условию
    h = (b - a) / n;
    long double s0 = 0, s = 0, y = 0; 
    cout << "|\tx\t|\tS(x)\t|\tY(x)\t|" << endl;
    for (x = a; x <= b; x = x + h)
    {
        if (n > 20)
        {
            n = 20;
        }
        // S(x)
        for (int i = 0; i < n + 1; i += 2)
        {
            unsigned long long int f = 1;
            for (int j = 1; j < i; j++)
            {
                f = f * j;
            }
            s0 = pow(x, i) / f; //очередное слагаемое s0
            s = s + s0; // S(x)
        }
        // Y(x)
        y = exp(2 * x); 
        cout << "|\t" << x << "\t|\t" << s << "\t|\t" << y << "\t|" << endl;
    }
    system("pause");
    return 0;
}
