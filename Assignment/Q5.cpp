#include <iostream>
using namespace std;
int main()
{
    float rupee;

    cout << "Enter Rupees: ";
    cin >> rupee;

    cout << "Currency in Dollars: " << rupee / 160 << endl;
    cout << "Currency in Ponds: " << rupee / 210 << endl;
    cout << "Currency in Euros: " << rupee / 180 << endl;
}