#include <iostream>
using namespace std;
int mul(int, int);
int main()
{
    int a, b, r;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter a pair of integer: ";
        cin >> a >> b;
        r = mul(a, b);
        if (r == 1)
        {
            cout << b << " is Multiple of " << a << endl;
        }
        else
            cout << b << " is Not Multiple of " << a << endl;
    }
}
int mul(int x, int y)
{
    if (y % x == 0)
    {
        return 1;
    }
    else
        return 0;
}