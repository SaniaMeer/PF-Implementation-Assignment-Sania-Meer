#include <iostream>
using namespace std;
int main()
 {
    int s1, s2, s3, s4, s5, total;
    float average;

    cout << "Enter marks of s1, s2, s3, s4, s5: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    total = s1+ s2 + s3 + s4 + s5;
    average = total / 5.0;

    cout << "Total marks = " << total << endl;
    cout << "Average = " << average << endl;
    return 0;
 }