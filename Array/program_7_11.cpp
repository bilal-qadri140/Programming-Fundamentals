// Write a program to find selection sort in an array..
// Muhammad Bilal Qadri..
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {52, 54, 55, 12, 30};
    int i, j, cn, temp; // cn= current number of array..
    cout<<"The origional values in an array: \n";
    for ( i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
    for (i = 0; i < 4; i++)
    {
        
        cn = i;
        for (j = i + 1; j < 5; j++)
        {
            if (a[cn] > a[j])
            {
                cn = j;
            }
        }
        temp = a[cn];
        a[cn] = a[i];
        a[i] = temp;
    }
    cout << "\nThe sorted array:\n";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}