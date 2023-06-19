#include <iostream>
using namespace std;
int main()
{
    int even, odd, res;
    cout << "Enter even number: ";
    cin >> even;
    cout << "Enter odd number: ";
    cin >> odd;

    even = even * 5;
    odd = odd * 3;
    res = even + odd;
    res = 1000 - res;

    cout << "Result is: " << res;
}