#include <cstdlib> // дл€ system
#include <iostream> 
#include <string>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(0, "");
    double x, s;
    double a[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
    int n, i;
    cout << "¬ведите х=";
    cin >> x;
    cout << "¬ведите пор€док полинома (1<=n<=10)";
    cin >> n;
    if (n == 1)
    {
        s = a[n - 1] + a[n] * x;
        cout << s << endl;
    }
    if (n > 1)
    {
        s = a[n];
        for (i = n; i >= 1; i--)
        {
            s = a[i - 1] + x * s;

        }
        cout << "P" << n << "(" << x << ")=" << s << endl;
    }
    system("pause");

}