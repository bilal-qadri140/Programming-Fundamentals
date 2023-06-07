// Write a program to find the age of persons between 18 and 22 years..
// Muhammad Bilal Qadri..
#include <iostream>
using namespace std;
int main()
{
    int age[100], n, i, count = 0;

    cout << "Enter the number of persons required: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter age of person: ";
        cin >> age[i];
        if (age[i] >= 18 && age[i] <= 22)
        {
            count = count + 1;
        }
    }
    cout << count << " Persons are between 18 and 22 years..";
}