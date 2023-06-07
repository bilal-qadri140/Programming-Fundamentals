#include <iostream>
using namespace std;
void max(int, int);
main()
{
    int x, y;
    cout << "Enter values:\n ";
    cin >> x >> y;
    max(x, y);
}
void max(int a, int b)
{

    if (a > b)
    {
        cout << "Maximum number is " << a;
    }
    else
        cout << "Maximum number is " << b;
}
