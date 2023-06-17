#include <iostream>
using namespace std;
int main()
{
    int i;
    int fact = 1;
    int arr[5] = {3, 5, 4, 2, 9};
    for (i = 0; i < 5; i++)
    {
        switch (arr[i] % 2 == 0)
        {
        case (true):
            cout << arr[i] << " is even" << endl;

            for (int j = 1; j <= arr[i]; j++)
            {
                fact = fact * j;
            }
            cout << "Factorial is " << fact << endl;

            break;

        default:
            cout << arr[i] << " is odd" << endl;
            break;
        }
    }
}