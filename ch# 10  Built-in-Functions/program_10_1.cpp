#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    float b;
    cout << "Enter an Integer: ";
    cin >> a;
    cout << "Enter a Float: ";
    cin >> b;

    cout << "Absolute value of " << a << " is " << abs(a) << endl;
    cout << "Absolute value of " << b << " is " << fabs(b) << endl;
}