#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter three integers:\n";
     if (a > b)
    {
        if (a > c)
        {
            cout << a << " is greater number.";
        }
        else
            cout << c << " is greater number.";
    }
    else if (b > c)
    {
        cout << b << " is greater number.";
    }
    else
        cout << c << " is greater number.";

    return 0;
}