#include <iostream>
using namespace std;
unsigned long fact(int);
int main()
{
    double sum = 1;
    int n;
    cout << "Enter the maximum valu of dinominator: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        double term = 1.0 / fact(i);
        sum = sum + term;
    }
    cout << "Sum of Series is: " << sum;
}
unsigned long fact(int x)
{
    unsigned long factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}