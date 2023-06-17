#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (a % b == 0)
    {
        cout << "First is multiple of second!";
    }
    else
        cout << "First is not multiple of second!";
}