#include <iostream>
using namespace std;
int main()
{
    float salary, bonus;
    cout << "Enter your salary:";
    cin >> salary;
    cout << "Enter your bonus:";
    cin >> bonus;

    if (bonus > 15)
    {
        bonus = salary * 50.0 / 100.0;
    }
    else
        bonus = salary * 25.0 / 100.0;
    salary = salary + bonus;

    cout << "Your total salary is " << salary;
}