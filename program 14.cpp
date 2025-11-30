#include <iostream>
using namespace std;
int main()
 {
    float millimeter, inches ;

    cout << "Enter millimeter value: ";
    cin >> millimeter;

    inches = millimeter / 25.4 ;

    cout << "inches = " << inches << endl;
    return 0;
 }