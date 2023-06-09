#include <iostream>
using namespace std;
int main()
{
    int n;
    int *ptr;
    cout << "Enter Value: ";
    cin >> n;
    ptr = &n;

    cout << "The Value of n = " << n << endl;
    cout << "The Address of n = " << ptr << endl;
}