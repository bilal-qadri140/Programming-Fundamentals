#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, max, min;

    cout << "Enter Five Integers:\n";
    cin >> a >> b >> c >> d >> e;

    max = min = a;

    //Find Maximum Number...
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

    //Find Minimum Number...

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

    cout << "Maximmumm Number is " << max << endl;
    cout << "Minimmumm Number is " << min << endl;

    return 0;
}