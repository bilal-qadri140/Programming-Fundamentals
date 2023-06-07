// Write a program to store integer values in an array of 2 Rows and 4 Columns..
// Muhammad Bilal Qadri...
#include <iostream>
using namespace std;
int main()
{
    int arr[2][4], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "Enter an Integer: ";
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << arr[i][j]<<"\t";
        }
        cout << endl;
    }
}