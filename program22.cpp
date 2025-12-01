#include <iostream>
using namespace std;
int main()
 {
    string name;
    int age;
    float height;
    char gender;
    cout << "Enter name, age, height, gender (M/F): ";
    cin >> name >> age >> height >> gender;
    cout << "\nName: " << name << "\nAge: " << age << "\nHeight: " << height << "\nGender: " << gender << endl;
    return 0;
}