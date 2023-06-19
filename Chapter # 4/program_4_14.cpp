// Swaping without third variable..
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Before swaping: \na = " << a << " b= " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swaping: \na = " << a << " b = " << b;
}