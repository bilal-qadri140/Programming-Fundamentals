#include <iostream>
using namespace std;
void swap(int &x, int &y);
int main()
{
    int a, b;

    cout << "Enter number: ";
    cin >> a;
    cout << "Enter number: ";
    cin >> b;

    cout << "Before Swaping a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After Swaping a = " << a << " b = " << b << endl;
}
void swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}