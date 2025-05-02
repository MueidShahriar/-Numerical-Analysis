#include <bits/stdc++.h>
using namespace std;
double func(double x)
{
    double r = x * x * x - 2 * x - 5;
    return r;
}

int main()
{
    double a, b;
    cin >> a >> b;
    double temp = 0, xr = 10000;
    if (func(a) * func(b) < 0)
    {
        while (abs(xr - temp) > 0.0001)
        {
            temp = xr;
            xr = (a + b) / 2;
            cout << xr << endl;
            if (func(xr) * func(a) < 0)
                b = xr;
            else
                a = xr;
        }
    }
    if (xr == 10000)
        cout << "Error!" << endl;
    else
        cout << "Final Root: " << xr << endl;
}