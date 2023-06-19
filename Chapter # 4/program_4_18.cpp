#include <iostream>
using namespace std;
int main()
{
    float cel, far;
    cout << "Enter temperature in celcius: ";
    cin >> cel;

    far = 9.0 / 5.0 * cel + 32;
    cout << "Temperature in fahrenheit: " << far;
}