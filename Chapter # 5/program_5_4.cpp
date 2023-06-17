#include <iostream>
using namespace std;
int main()
{
    int sub1, sub2, sub3;
    float avg;
    cout << "Enter 1st subject number: ";
    cin >> sub1;
    cout << "Enter 2nd subject number: ";
    cin >> sub2;
    cout << "Enter 3rd subject number: ";
    cin >> sub3;
    avg = (sub1 + sub2 + sub3) / 3.0;

    if (avg > 80)
    {
        cout << "You are above standard! \n";
        cout << "Admission grantid! ";
    }
}