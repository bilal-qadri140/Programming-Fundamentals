#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a > 0)
    {
        cout << "Number is positive!";
    }
    if (a < 0)
    {
        cout << "Number is negative!";
    }
    if (a == 0)
    {
        cout << "Number is zero!";
    }
}