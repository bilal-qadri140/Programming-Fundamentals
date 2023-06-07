#include <iostream>
using namespace std;
void sqr(int n);
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a Number: ";
        cin >> arr[i];
    }
    cout << "Passing Array elements to function! " << endl;
    cout << "num\tsquare\tcube" << endl;
    for (int i = 0; i < 5; i++)
    {
        sqr(arr[i]);
    }
}
void sqr(int n)
{

    cout << n << "\t" << n * n << "\t" << n * n * n << endl;
}