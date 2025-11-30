#include <iostream>
using namespace std;
int main()
 {
    int hours, minutes, seconds, Totalseconds;

    cout << "Enter time in hours, minutes and seconds: ";
    cin >> hours >> minutes >> seconds;
    
    Totalseconds = hours * 3600 + minutes * 60 + seconds;

    cout << "Total seconds = " << Totalseconds << endl;

    return 0;
 }