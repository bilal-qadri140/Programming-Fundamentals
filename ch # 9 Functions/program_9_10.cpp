#include <iostream>
using namespace std;
char grade(int);
int main()
{
    int marks;
    char g;
    cout << "Enter Your Marks: ";
    cin >> marks;
    g = grade(marks);
    cout << "Your Grade is: " << g;
}
char grade(int m)
{
    if (m >= 80)
    {
        return 'A';
    }
    else if (m >= 60)
    {
        return 'B';
    }
    else if (m >= 40)
    {
        return 'C';
    }
    else
        return 'F';
}