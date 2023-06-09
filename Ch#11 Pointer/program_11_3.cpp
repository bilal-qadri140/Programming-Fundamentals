#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int *ptr, i;
    cout << "Enter Number's: " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    ptr = &num[4];
    cout << "The number You Entered: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr-- << "\t";
    }
}
