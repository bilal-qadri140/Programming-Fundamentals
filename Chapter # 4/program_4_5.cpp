// use of 'setw' manipulators..
// Muhammad Bilal Qadri...
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n = 5342;
    double d = 91.5;
    char str[] = "oop using c++";
    cout << "(" << setw(5) << n << ")" << endl;
    cout << "(" << setw(8) << d << ")" << endl;
    cout << "(" << setw(16) << str << ")" << endl;
}