#include <iostream>
using namespace std;
int main()
{
    double salary, tax, net_salary;

    cout << "Enter Your Salary: ";
    cin >> salary;

    if (salary > 30000)
    {
        tax = salary * (20 / 100.0);
        net_salary = salary - tax;
        cout << "Your Salary is " << salary << endl;
        cout << "Tax is " << tax << endl;
        cout << "Your net Salary after tax deduction is " << net_salary << endl;
    }
    else if (salary >= 20000)
    {
        tax = salary * (15 / 100.0);
        net_salary = salary - tax;
        cout << "Your Salary is " << salary << endl;
        cout << "Tax is " << tax << endl;
        cout << "Your net Salary after tax deduction is " << net_salary << endl;
    }
    else
    {
        tax = salary * (10 / 100.0);
        net_salary = salary - tax;
        cout << "Your Salary is " << salary << endl;
        cout << "Tax is " << tax << endl;
        cout << "Your net Salary after tax deduction is " << net_salary << endl;
    }

    return 0;
}