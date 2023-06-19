#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cout << "Enter 3-digit number: ";
    cin >> n;
    cout << "Number you enterd: " << n;

    a = n / 100;
    n = n % 100;
    b = n / 10;
    n = n % 10;
    cout << "\nNumber in reverse order: " << n << b << a;
}