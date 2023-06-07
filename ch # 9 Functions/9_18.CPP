// Practice of calling  functions with array Parameter ....
// Muhammad Bilal Qadri....
#include <iostream>
using namespace std;
void show(int arr[]);
void max(int arr[]);
void min(int arr[]);
void loc_find(int arr[]);
int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a Number: ";
        cin >> array[i];
    }
    loc_find(array);
    show(array);
    max(array);
    min(array);
}
void loc_find(int arr[])
{
    int n, loc = -1;
    cout << "Enter Number to find in array: ";
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
        cout << "Nummber not found in Array" << endl;
    }
    else
        cout << "Number found at index: " << loc << endl;
}

void show(int arr[])
{
    cout << "You Entered: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}
void max(int arr[])
{
    int m;
    m = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }
    cout << "Maximum Number is: " << m << endl;
}
void min(int arr[])
{
    int m;
    m = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
        }
    }
    cout << "Minimum Number is: " << m << endl;
}