#include <iostream>
using namespace std;
int main()
{
    int marks;
    float Percentage;
    cout << "Enter Your obtained Marks out of 1100 : ";
    cin >> marks;
    Percentage = (marks / 1100.0) * 100;

    if (Percentage >= 80)
    {
        cout << "Grade: A+";
    }
    else if (Percentage >= 70)
    {
        cout << "Grade: A";
    }
    else if (Percentage >= 60)
    {
        cout << "Grade: B";
    }
    else if (Percentage >= 50)
    {
        cout << "Grade: C";
    }
    else if (Percentage >= 40)
    {
        cout << "Grade: D";
    }
    else if (Percentage >= 33)
    {
        cout << "Grade: E";
    }
    else
        cout << "Grade: F";

    return 0;
}