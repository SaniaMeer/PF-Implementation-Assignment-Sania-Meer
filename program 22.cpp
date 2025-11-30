#include <iostream>
using namespace std;
int main()
 {
    int age;
    float height;
    string name, gender;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter gender: ";
    cin >> gender;

    cout << "Age = " << age << endl;
    cout << "Height = " << height << endl;
    cout << "Name = " << name << endl;   
    cout << "Gender = " << gender << endl;

    return 0;
 }