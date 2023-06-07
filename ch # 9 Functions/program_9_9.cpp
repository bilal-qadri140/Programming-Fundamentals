#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a, b;
    cout << "Enter Number: ";
    cin >> a;
    cout << "Enter Number: ";
    cin >> b;

    cout << "Values before swaping: \n";
    cout << "a = " << a << endl
         << " b = " << b << endl;
    cout << "Swaping: ";
    swap(a, b);
    cout << "Values after swaping: \n";
    cout << "a = " << a << endl
         << " b = " << b << endl;
}
void swap(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}