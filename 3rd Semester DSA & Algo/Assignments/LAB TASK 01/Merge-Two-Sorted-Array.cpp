#include <iostream>
using namespace std;
int main()
{
    int m, n; // m is size of array A and n is size of array B

    int i, j, k; // counter variables i for Array B, j for Array B,and k for Array C
    cout << "Enter Array A size:  ";
    cin >> m;
    cout << "Enter Array B size:  ";
    cin >> n;
    int size = m + n;
    int A[m], B[n]; // declaring Array A of size m and array B of size n
    int C[size];    // declaring Array C of size m+n (sum of first two array's size)

    // input Array A elements from user
    cout << "Enter " << m << " elements of Array A " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    // input Array B elements from user
    cout << "Enter " << n << " elements of Array B " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    i = j = k = 0; // initialize counter variables

    // copy elements of A and B in array C
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i += 1;
        }
        else
        {
            C[k] = B[j];
            j += 1;
        }
        k += 1;
    }

    if (i >= m) // Array A is empty
    {
        // copy all elements of B in C
        while (j < n)
        {
            C[k] = B[j];
            j += 1;
            k += 1;
        }
    }
    if (j >= n) // Array B is empty
    {

        // copy all elements of A in C
        while (i < m)
        {
            C[k] = A[i];
            i += 1;
            k += 1;
        }
    }

    cout << "New Array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}