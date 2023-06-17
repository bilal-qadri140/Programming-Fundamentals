#include <iostream>
using namespace std;
int main()
{
    int a = 1;

here:
    cout << a << ": Muhammad Bilal Qadri" << endl;
    a++;
    while (a <= 10)
        goto here;

    return 0;
}