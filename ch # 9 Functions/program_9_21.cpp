#include <iostream>
using namespace std;
int max(int[3][2]);
int main()
{
    int num[3][2], i, j;
    int maximum;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "Enter Value for num[" << i << "][" << j << "]:";
            cin >> num[i][j];
        }
    }
    maximum = max(num);
    cout << "Maximum Value is: " << maximum;
}
int max(int arr[3][2])
{
    int i, j, m;
    m = arr[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (arr[i][j] > m)
            {
                m = arr[i][j];
            }
        }
    }
    return m;
}