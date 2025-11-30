#include <iostream>
using namespace std;
int main()
 {
    float fractional, number = 15.58971 ;
    int integral;

    integral = int(number);
    fractional = number - integral;

    cout << "Integral part = " << integral << endl;
    cout << "Fractional part = " << fractional << endl;

    return 0;
 }