#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter Value of 'a': ";
    cin >> a;
    cout << "Enter Value of 'b': ";
    cin >> b;
    cout << "Enter Value of 'c': ";
    cin >> c;

    if (a != 0)
    {
        if (b % a == 0 && c % a == 0)
        {
            cout << "a is common divisor of b and c \n";
        }
        else
            cout << "a is not common divisor of b and c \n";
    }
    else
        cout << "Please Run program again & Enter 'a' as non zero Integer!";

    return 0;
}