#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, max, min;
    cout << "Enter five integers: \n";
    cin >> a >> b >> c >> d >> e;
    max = min = a;
    // find maximum.

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    if (e > max)
    {
        max = e;
    }

    // Find minimum..

    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    if (d < min)
    {
        min = d;
    }
    if (e < min)
    {
        min = e;
    }
    cout << "Maximum number is: " << max << endl;
    cout << "Minimum number is: " << min << endl;
}