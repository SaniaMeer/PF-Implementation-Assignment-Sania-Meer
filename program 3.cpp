#include <iostream>
using namespace std;
int main()
 {
    int temp, a=2, b=3;
    temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << " b=" << b << endl;
    return 0;
 }
