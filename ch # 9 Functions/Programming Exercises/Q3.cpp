#include <iostream>
using namespace std;
int main()
{
    int n = 54301, i, rem[10];

    for (i = 0; n > 0; i++)
    {
        rem[i] = n % 10000;
        n = n / 10000;
    }
    int zer = 0, even = 0, odd = 0;
    for (i = 0; i <= 5; i++)
    {
        if (rem[i] == 0)
        {
            zer++;
        }
        if (rem[i] % 2 == 0)
        {
            even++;
        }
        if (rem[i] % 2 != 0)
        {
            odd++;
        }
    }
    cout << "Number of zero: " << zer << endl;
    cout << "Number of even: " << even << endl;
    cout << "Number of odd: " << odd << endl;
}