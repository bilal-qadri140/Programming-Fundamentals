//13.9
#include <iostream>
using namespace std;
class Student
{
private:
    int marks;
    char grade;

public:
    Student(int m, char g)
    {
        marks = m;
        grade = g;
    }
    void show()
    {
        cout << "Marks is: " << marks << endl;
        cout << "Grade is: " << grade << endl;
    }
};

int main()
{
    Student s1(65, 'C'), s2(80, 'A');
    cout << "Data of 1st Student: " << endl;
    s1.show(); 
    cout << "Data of 2nd Student: " << endl;
    s2.show(); 
}