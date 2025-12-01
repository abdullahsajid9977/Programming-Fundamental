#include <iostream>
using namespace std;
int main() 
{
    int h,m,s;
    cout << "Enter hours minutes seconds: ";
    cin >> h >> m >> s;
    long total = h*3600 + m*60 + s;
    cout << "Total seconds = " << total << endl;
    return 0;
}