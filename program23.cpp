#include <iostream>
#define PI 3.14159
using namespace std;
int main() 
{
    float r;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area = " << PI * r * r << endl;
    cout << "Circumference = " << 2 * PI * r << endl;
    return 0;
}