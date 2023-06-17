#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout << "Enter 's' or 'S' for Senior Salesperson's Salary: \n";
    cout << "Enter 'j' or 'J' for Jonior Salesperson's Salary: \n";
    cin >> choice;

    if (choice == 's' || choice == 'S')
    {
        cout << "Salary of Senior Salesperson is Rs. 400/week!\n";
    }
    else if (choice == 'j' || choice == 'J')
    {
        cout << "Salary of Jonior Salesperson is Rs. 275/week!\n";
    }
    else
        cout << "Error!\n";

    return 0;
}