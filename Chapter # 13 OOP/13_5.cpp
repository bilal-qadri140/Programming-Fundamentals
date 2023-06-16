#include <iostream>
using namespace std;
class Result
{
    int rno, marks[3];
    char name[30];

public:
    void input();
    void show();
    int total();
    int avg();
};
void Result ::input()
{
    cout << "Enter Your Name: ";
    cin.getline(name, 30);
    cout << "Enter Your Roll No. ";
    cin >> rno;
    cout << "Enter Marks of three Books:\n ";
    for (int i = 0; i < 3; i++)
    {
        cin >> marks[i];
    }
}
void Result ::show()
{
    cout << "Your Name is " << name << endl;
    cout << "Your Roll No. is " << rno << endl;
    cout << "Your Marks is \n" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << marks[i] << endl;
    }
}
int Result ::total()
{
    int t = 0;
    for (int i = 0; i < 3; i++)
    {
        t = t + marks[i];
    }
    return t;
}
int Result ::avg()
{
    float a = 0;
    int t = 0;
    for (int i = 0; i < 3; i++)
    {
        t = t + marks[i];
    }
    a = t / 3.0;
    return a;
}

int main()
{
    Result obj;
    int ttl;
    float avrg;
    obj.input();
    obj.show();
    ttl = obj.total();
    cout << "Total Marks is: " << ttl << endl;
    avrg = obj.avg();
    cout << "Average Marks is: " << avrg << endl;
}