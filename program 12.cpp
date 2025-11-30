#include <iostream>
using namespace std;
int main()
 {
    int r = 2, h = 5;
    float volume;
    const float pi = 3.1417;

    volume = pi * r * r * h;

    cout << "Volume of the cylinder = " << volume << endl;
    return 0;
 }