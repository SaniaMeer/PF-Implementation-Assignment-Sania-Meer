#include <iostream>
using namespace std;
int main()
 {
    int a, b, c, d;

    cout << "Enter value of a, b, c and d: ";
    cin >> a >> b >> c >> d;

      if(a > b && a > c && a > d) {
         cout << "a is the largest" << endl;
      }
      else if(b > a && b > c && b > d) {
         cout << "b is the largest" << endl;
      }
      else if(c > a && c > b && c > d) {
         cout << "c is the largest" << endl;
      }
      else {
         cout << "d is the largest" << endl;
      }
      
    return 0;
 }