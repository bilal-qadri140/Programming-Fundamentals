// Swaping with third variable..
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Before swaping: \na = " << a << " b= " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swaping: \na = " << a << " b = " << b;
}