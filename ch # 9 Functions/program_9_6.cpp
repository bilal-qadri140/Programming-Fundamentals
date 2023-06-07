#include <iostream>
using namespace std;
void check(int);
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "Nature of Number is: ";

    check(n);
}
void check(int a)
{
    int c = 0, i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            c += 1;
        }
    }
    if (a % 2 == 0 && c == 0)
    {
        cout << a << " is Prime, even number! ";
    }
    else if (a % 2 != 0 && c == 0)
    {
        cout << a << " is Prime, odd number! ";
    }
    else if (a % 2 == 0 && c != 0)
    {
        cout << a << " is Only even number! ";
    }
    else if (a % 2 != 0)
    {
        cout << a << " is Only odd number! ";
    }
    else
        cout << a << " is not Prime Number: ";
}