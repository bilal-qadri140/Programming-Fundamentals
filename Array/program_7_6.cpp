// Write a program to find the square, cube and sum of given array..
// Muhammad Bilal Qadri..
#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int total = 0;
    int num[size];
    int sq[size];
    int cub[size];
    int sum[size];

    for (int i = 0; i < size; i++)
    {
        num[i] = i;
        sq[i] = i * i;
        cub[i] = i * i * i;
        sum[i] = num[i] + sq[i] + cub[i];
    }
    cout << "Numbers: \t";
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << "\t";
    }
    cout << endl;

    cout << "Squares: \t";
    for (int i = 0; i < size; i++)
    {
        cout << sq[i] << "\t";
    }
    cout << endl;

    cout << "Cubes: \t\t";
    for (int i = 0; i < size; i++)
    {
        cout << cub[i] << "\t";
    }
    cout << endl;

    cout << "Sum: \t\t";
    for (int i = 0; i < size; i++)
    {
        cout << sum[i] << "\t";
        total = total + sum[i];
    }
    cout << endl;

    cout << "Grand Total: = " << total;
}