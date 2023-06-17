#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter score of student: ";
    cin >> score;

    if (score >= 90)
    {
        cout << "Grade is A";
    }
    else if (score >= 80)
    {
        cout << "Grade is B";
    }
    else if (score >= 70)
    {
        cout << "Grade is C";
    }
    else if (score >= 60)
    {
        cout << "Grade is D";
    }
    else
        cout << "Grade is F";
}