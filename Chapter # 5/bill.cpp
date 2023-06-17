#include <iostream>
using namespace std;
int main()
{
    float bill;
    int units;
    cout << "Enter Unit consumed:\n";
    cin >> units;
    if (units > 500)
    {
        bill = units * 7;
    }
    else if (units > 300)
    {
        bill = units * 5;
    }
    else
        bill = units * 2;
    bill = bill + 150;
    if (units > 200)
        bill = bill + (bill * 5.0 / 100.0);

    cout << "Total Bill is: " << bill;

    return 0;
}
