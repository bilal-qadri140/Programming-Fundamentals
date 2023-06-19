#include <iostream>
using namespace std;
int main()
{
    int num, div, rem, qnt;
    cout << "Enter devinder and diviser: ";
    cin >> num >> div;
    rem = num % div;
    qnt = num / div;
    cout << "Reminder is: " << rem << endl;
    cout << "Qoutient is: " << qnt;
}