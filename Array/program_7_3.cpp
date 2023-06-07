// Write a program that input values from user and store them in an array.
// Then find sum and average of given values...
// Muhammad Bilal Qadri..
#include <iostream>
using namespace std;
int main()
{
    int arr[5], sum = 0;
    float avg;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer: \n";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    avg = sum / 5.0;
    cout << "Sum of given integers is: " << sum << endl;
    cout << "Average of given integers is : " << avg;
}