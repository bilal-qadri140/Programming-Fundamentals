#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int roll;

public:
    string name;
    int Class;
    void setData(int r); // declared
    void getData()
    {

        cout << "The name of the student is " << name << endl;
        cout << "The class of the student is " << Class << endl;
        cout << "The roll no. of the student is " << roll << endl;
    }
};
void Student ::setData(int r)
{
    roll = r;
}
int main()
{
    Student bilal;
    bilal.name = "Bilal Qadri";
    bilal.Class = 13;
    bilal.setData(11);
    bilal.getData();

    return 0;
}