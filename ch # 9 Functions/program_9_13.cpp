#include <iostream>
using namespace std;
int sqr(int);
int cube(int);
int main()
{
    int a, b, r;
    cout << "Enter first Integer: ";
    cin >> a;
    cout << "Enter second Integer: ";
    cin >> b;
    r = sqr(a) + cube(b);
    cout << "Result is " << r << endl;
}
int sqr(int n)
{
    return n * n;
}
int cube(int n)
{
    return n * n * n;
}