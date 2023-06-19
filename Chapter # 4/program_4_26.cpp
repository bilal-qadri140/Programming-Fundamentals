#include <iostream>
using namespace std;
int main()
{
    int h, w, d;
    cout << "Enter hours: ";
    cin >> h;
    w = h / 168;
    h = h % 168;
    d = h / 24;
    h = h % 24;

    cout << "Weak = " << w << endl;
    cout << "Day = " << d << endl;
    cout << "Hours = " << h << endl;
}