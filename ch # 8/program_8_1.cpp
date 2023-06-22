#include <iostream>
using namespace std;
struct student
{
    int rno;
    int marks;
    float avg;
    char grade;
};
int main()
{
    student s;
    cout << "Enter Roll no. ";
    cin >> s.rno;
    cout << "Enter Marks. ";
    cin >> s.marks;
    cout << "Enter Average. ";
    cin >> s.avg;
    cout << "Enter Grade. ";
    cin >> s.grade;
    cout << "You Entered following details: " << endl;
    cout << "Roll No. is " << s.rno << endl;
    cout << "Marks is " << s.marks << endl;
    cout << "Average is " << s.avg << endl;
    cout << "Grade is " << s.grade << endl;
}