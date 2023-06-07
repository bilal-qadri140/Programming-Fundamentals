// Write a program to find the minimum number in array..
// Muhammad Bilal Qadri..
#include <iostream>
using namespace std;
int main()
{
    int arr[5], min;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter The number: ";
        cin >> arr[i];
    }
    min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum Number is:  " << min;
}