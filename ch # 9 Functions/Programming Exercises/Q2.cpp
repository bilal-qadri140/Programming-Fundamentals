#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, rem, sum = 0;
    cout << "Enter a Binary Number: ";
    cin >> n;
    int i = 0;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        sum= sum+ rem*pow(2,i);
        i++;
    }
    cout<<sum;
}