#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a;
    cout << "Enter a floating point value: ";
    cin >> a;
    cout << "Trignometric cosine of " << a << " is = " << cos(a) << endl;
    cout << "Trignometric sine of " << a << " is = " << sin(a) << endl;
    cout << "Trignometric tangent of " << a << " is = " << tan(a) << endl;
    cout << "Natural Log of " << a << " is = " << log(a) << endl;
    cout << "Base 10 Log of " << a << " is = " << log10(a) << endl;
}