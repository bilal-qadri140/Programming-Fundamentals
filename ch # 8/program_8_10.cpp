#include <iostream>
using namespace std;

struct Result
{
    int marks;
    char grade;
};
struct Record
{
    int rno;
    Result r;
};
int main()
{
    Record rec;
    cout << "Enter Roll No. ";
    cin >> rec.rno;
    cout << "Enter Marks: ";
    cin >> rec.r.marks;
    cout << "Enter Grade: ";
    cin >> rec.r.grade;

    cout << "Roll no is: " << rec.rno << endl;
    cout << "Marks is: " << rec.r.marks << endl;
    cout << "Grade is: " << rec.r.grade << endl;
}
