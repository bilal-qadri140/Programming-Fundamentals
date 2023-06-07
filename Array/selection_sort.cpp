#include <iostream>
using namespace std;
int main()
{
    int a[5] = {4, 1, 3, 2, 5};
    int temp, ci, i, j;
    for (int i = 0; i < 4; i++)
    {
        ci = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[ci])
            {
                ci = j;
            }
        }
        temp = a[ci];
        a[ci] = a[i];
        a[i] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }
}