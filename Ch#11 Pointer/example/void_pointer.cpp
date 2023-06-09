#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    float a = 3.45;
    char c = 'A';
    void *ptr;
    ptr = &n;

    cout << "The value of n = " << n << endl;
    cout << "The Address of n = " << ptr << endl;
    ptr = &a;
    cout << "The value of a = " << a << endl;
    cout << "The Address of a = " << ptr << endl;
    ptr = &c;
    cout << "The value of c = " << c << endl;
    cout << "The Address of c = " << ptr << endl;
}