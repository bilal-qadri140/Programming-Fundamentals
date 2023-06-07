// Write a program to find the value index in an array..
// Muhammad Bilal Qadri..
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 5, 7, 3, 8};

    int n, loc = -1;

    cout << "Enter the value to find: ";
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            loc = i;
        }
    }
    if (loc == -1)
    {
        cout << "Value not found in an array:";
    }
    else
        cout << "Value found at index: " << loc;
}