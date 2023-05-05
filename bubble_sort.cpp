#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Size of array: ";
    cin>>size;
    int a[size];
    int temp, i, j;
    cout << "Enter "<<size<<" Numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "The numbers you enterd! : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i]<<" ";
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout<<"\n Sorted Numbers! ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i]<<" ";
    }
}