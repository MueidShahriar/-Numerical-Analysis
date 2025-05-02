#include <bits/stdc++.h>
using namespace std;
double func(double x, double ar[], int n)
{
    double r = 0;
    for (int i = 0; i <= n; i++)
    {
        r += ar[i] * pow(x, n - i);
    }
    return r;
}

int main()
{
    int n;
    cin >> n;
    double ar[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cin >> ar[i];
    }
    double a, b;
    cin >> a >> b;
    if (func(a, ar, n) * func(b, ar, n) >= 0)
    {
        cout << "Range is wrong\n";
        return 0;
    }
    double xr = a;
    for (int i = 0; i < 10000; i++)
    {
        xr = ((func(b, ar, n) * a) - (func(a, ar, n) * b)) / (func(b, ar, n) - func(a, ar, n));
        if (func(xr, ar, n) == 0.0)
            break;
        else if (func(xr, ar, n) * func(a, ar, n) < 0)
            b = xr;
        else
            a = xr;
    }
    cout << "Final Root is: " << xr << endl;
}