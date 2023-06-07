// The function counts even and odd Numbes in an array...
// Muhammad Bilal Qadri...
#include <iostream>
using namespace std;
int even(int arr[]);
int odd(int arr[]);
int main()
{
    int array[5], n;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> array[i];
    }
    cout << "You Entered: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    n = even(array);
    cout << "The Array contains " << n << " Even Nummbers: " << endl;
    n = odd(array);
    cout << "The Array contains " << n << " Odd Nummbers: " << endl;
}
int even(int arr[])
{
    int e = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            e++;
        }
    }
    return e;
}
int odd(int arr[])
{
    int e = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            e++;
        }
    }
    return e;
}