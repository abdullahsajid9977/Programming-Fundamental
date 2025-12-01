#include <iostream>
using namespace std;
int main() 
{
    int roll, pf, ict, cg;
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter marks (PF ICT CG): ";
    cin >> pf >> ict >> cg;
    int total = pf + ict + cg;
    float avg = total / 3.0;
    cout << "Total = " << total << endl;
    cout << "Average = " << avg << endl;
    return 0;
}