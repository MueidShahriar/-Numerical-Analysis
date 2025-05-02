#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numPoints;
    cout << "Enter the number of points: ";
    cin >> numPoints;

    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < numPoints; i++)
    {
        double xValue, yValue;
        cout << "Enter the value of x and y for point " << i + 1 << ": ";
        cin >> xValue >> yValue;

        sumX += xValue;
        sumY += yValue;
        sumXY += xValue * yValue;
        sumX2 += xValue * xValue;
    }

    double intercept, slope;
    double meanX = sumX / numPoints;
    double meanX2 = sumX2 / sumX;

    slope = (sumXY - sumY * meanX) / (sumX2 - sumX * meanX);
    intercept = (sumY - slope * sumX) / numPoints;

    cout << endl<< "The equation of the line is: y = " << intercept << " + " << slope << "x" << endl;
}