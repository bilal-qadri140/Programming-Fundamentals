// Write a program to find no of day in this year till date..
// Muhammad Bilal Qadri..
#include <iostream>
using namespace std;
int main()
{
    int day, month, t_days; // t_day=total days..
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Enter the month number: ";
    cin >> month;

    cout << "Enter the day number: ";
    cin >> day;
    t_days = day;

    for (int i = 0; i < month - 1; i++)
    {
        t_days = t_days + days_per_month[i];
    }
    cout << "Total nnumber of days in this year till date: " << t_days;
}