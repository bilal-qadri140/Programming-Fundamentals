#include <iostream>
using namespace std;
int main()
{
    int m, n; // m is size of array A and n is size of array B
    int k;    // counter variable used at the time of merging 2nd array in 3rd array
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

    // copy Array A elements in array C
    for (int i = 0; i < m; i++)
    {
        C[i] = A[i];
    }

    // copy array B elements in array C

    k = m; // index of array C starts from the end of array A
    for (int i = 0; i < n; i++)
    {
        C[k] = B[i];
        k = k + 1;
    }

    // Display new array after merging
    cout << "New Array after merging: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}