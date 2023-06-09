#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, x;
    cout << "Enter first float value: ";
    cin >> a;

    cout << "Enter second float value: ";
    cin >> b;
    x = fmod(a, b);
    cout << "The result of fmod()= " << x;
}