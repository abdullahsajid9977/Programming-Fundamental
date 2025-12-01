#include <iostream>
using namespace std;
int main() 
{
    int a = 7, b = 3;
    cout << "Before: " << a << " " << b << endl;
    a = a + b;
    b = a - b;
    a = a = a - b;
    cout << "After: " << a << " " << b << endl;
    return 0;
}