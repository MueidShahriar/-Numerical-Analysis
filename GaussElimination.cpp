#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<double> eq1(4), eq2(4), eq3(4), eq4(4), eq5(4), eq6(4);

    cout << "Enter your values: ";
    cout << endl;

    for (int i=0; i<4; i++)
        cin >> eq1[i];
    for (int j=0; j<4; j++)
        cin >> eq2[j];
    for (int k=0; k<4; k++)
        cin >> eq3[k];

    double r1 = eq2[0]/eq1[0];
    for (int i=0; i<4; i++)
        eq4[i] = eq2[i] - (r1 * eq1[i]);
    
    double r2 = eq3[0]/eq1[0];
    for (int j=0; j<4; j++)
        eq5[j] = eq3[j] - (r2 * eq1[j]);

    double r3 = eq5[1] / eq4[1];
    for (int k=0; k<4; k++)
        eq6[k] = eq5[k] - (r3 * eq4[k]);

    double x, y, z;
    z = eq6[3] / eq6[2];
    y = (eq5[3] - (eq5[2]*z)) / eq5[1];
    x = (eq1[3] - (eq1[2]*z) - (eq1[1]*y)) / eq1[0];
    
    cout << "\nFinal Values:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
