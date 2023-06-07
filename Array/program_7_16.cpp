// Write a program to find maximum or minimum value in 2D array...
// Muhammad Bilal Qadri..
#include "iostream"
using namespace std;
int main()
{
    int max, min;
    int arr[2][4] = {15, 21, 90, 84, 33, 72, 31, 22};
    max = min = arr[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum = " << max << endl
         << "Mininum = " << min;
}