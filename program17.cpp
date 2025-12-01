#include <iostream>
using namespace std;
int main()
 {
    float num = 15.58971;
    int int_part = (int)num;
    float frac_part = num - int_part;
    cout << "Integer part = " << int_part << endl;
    cout << "Fractional part = " << frac_part << endl;
    return 0;
}