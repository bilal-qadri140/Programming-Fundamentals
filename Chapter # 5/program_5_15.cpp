#include <iostream>
using namespace std;
int main()
{
    int salary;
    float net;
    cout << "Enter your salary: ";
    cin >> salary;

    if (salary >= 20000)
    {
        net = salary - (salary * 7.0 / 100.0);
    }
    else if (salary >= 10000)
    {
        net = salary - 1000;
    }
    else
        net = salary;

    cout << "Your net salary is " << net;
}