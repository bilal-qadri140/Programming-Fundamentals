// Write a program to display numbers in actual and reverse order in an array....
// Muhammad Bilal Qadri....
#include <iostream>
using namespace std;
int main()
{
    int num[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer: ";
        cin >> num[i];
    }
    cout << "Number in actual order: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    cout << "\nNumber in reverse order: \n";
    for (int i = 4; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
}