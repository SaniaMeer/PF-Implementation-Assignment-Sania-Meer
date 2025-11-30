#include <iostream>
using namespace std;
int main()
 {
    int a, b, c, disc;

    cout << "Enter values of a, b and c: ";
    cin >> a >> b >> c;
    
    disc = b * b - 4 * a * c;

    cout << "Disc = " << disc << endl;

    return 0;
 }