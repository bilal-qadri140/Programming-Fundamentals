// Write a program to find the maximum number in array..
// Muhammad Bilal Qadri..
#include <iostream>
using namespace std;
int main()
{
    int arr[5], max;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter The number: ";
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum Number is:  " << max;
}