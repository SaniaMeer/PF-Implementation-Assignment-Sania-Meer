#include <iostream>
using namespace std;
int main()
 {
    float F,C;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> F;

    C = 5.0/9.0 * (F - 32.0);

    cout << "temperature in Celsius= " << C << endl;
    return 0;
 }