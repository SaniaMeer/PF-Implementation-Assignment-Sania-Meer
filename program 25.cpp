#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
    float a, b, c;
    double area, s;

    cout << "Enter values of three sides of triangle: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    cout << "Area of triangle = " << area << endl;
    return 0;
 }