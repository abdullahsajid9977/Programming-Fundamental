#include <iostream>
using namespace std;
int main() 
{
    float vi, t, a;
    cout << "Enter vi, t, a: ";
    cin >> vi >> t >> a;
    float s = vi * t + 0.5 * a * t * t;
    cout << "Distance s = " << s << endl;
    return 0;
}