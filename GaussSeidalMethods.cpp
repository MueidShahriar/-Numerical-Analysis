#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y, z;

    /*Given
    20x+y-2z = 17
    3x+20y-z = -18
    2x-3y+20z = 25
    */

    //Step 01
    x = (2*z-y+17)/20;
    y = (-3*x+z-18)/20;
    z = (-2*x+3*y+25)/20;

    //Step 02
    y=0; z=0;
    double x1, y1, z1;  
    x1 = x;
    x = x1;
    y = (-3*x+z-18)/20;

    y1 = y;
    y = y1;
    z = (-2*x+3*y+25)/20;
    z1 = z;

    cout << "For 1st Iteration: "<< endl;
    cout << "x1 = " << x1 <<endl;
    cout << "y1 = " << y1 <<endl;
    cout << "z1 = " << z1 << endl;

    //Step 03
    double x2, y2, z2;
    y2 = y1;            
    z2 = z1;
    x2 = (2*z2-y2+17)/20;
    y2 = (-3*x2+z2-18)/20;
    z2 = (-2*x2+3*y2+25)/20;

    cout <<endl << "For 2nd Iteration: "<< endl;
    cout << "x2 = " << x2 <<endl;
    cout << "y2 = " << y2 <<endl;
    cout << "z2 = " << z2 << endl;
    
    //Step 04
    double x3, y3, z3;
    y3 = y2;
    z3 = z2;
    x3 = (2*z3-y3+17)/20;
    y3 = (-3*x3+z3-18)/20;
    z3 = (-2*x3+3*y3+25)/20;

    cout <<endl<< "For 3rd Iteration: "<< endl;
    cout << "x3 = " << x3 <<endl;
    cout << "y3 = " << y3 <<endl;
    cout << "z3 = " << z3 << endl;
    
    //Step 05
    double x4, y4, z4;
    y4 = y3;
    z4 = z3;
    x4 = (2*z4-y4+17)/20;
    y4 = (-3*x4+z4-18)/20;
    z4 = (-2*x4+3*y4+25)/20;

    cout <<endl<< "For 4th Iteration: "<< endl;
    cout << "x4 = " << x4 <<endl;
    cout << "y4 = " << y4 <<endl;
    cout << "z4 = " << z4 << endl;
}