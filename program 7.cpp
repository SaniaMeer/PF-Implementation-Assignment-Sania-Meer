#include <iostream>
using namespace std;
int main()
 {
    int rollno, pf, ic, cg, total;
    float average;

    cout << "Enter roll no: ";
    cin >> rollno;

    cout << "Enter marks in pf, ic, cg: ";
    cin >> pf >> ic >> cg;

    total = pf + ic + cg;
    average = total/3.0;

    cout << "total= " << total << endl;
    cout << " average= " << average << endl;
    return 0;
 }