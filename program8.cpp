#include <iostream>
using namespace std;
int main()
 {
    float f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    float c = 5.0/9.0 * (f - 32);
    cout << "Temperature in Celsius = " << c << endl;
    return 0;
}