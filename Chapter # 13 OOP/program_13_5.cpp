//13.5
#include <iostream>
using namespace std;
class Result
{
private:
    int rno, marks[3];
    char name[30];

public:
    void input()
    {
        cout << "Enter Name ";
        cin.getline(name, 30);
        cout << "Enter Roll No. ";
        cin >> rno;

        cout << "Enter Marks of Three Books:\n ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    void show()
    {
        cout << "Your Name is: " << name << endl;
        cout << "Your Roll No. is: " << rno << endl;
        cout << "Your Marks is: " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
    }
    int total()
    {
        int t = 0;
        for (int i = 0; i < 3; i++)
        {
            t = t + marks[i];
        }
        return t;
    }
    float avg()
    {
        int ttl;
        float a = 0;
        for (int i = 0; i < 3; i++)
        {
            ttl = ttl + marks[i];
        }
        a = a + (ttl / 3.0);
        return a;
    }
};

int main()
{
    Result r;
    r.input();
    r.show();

    cout << "\nTotal Number is: " << r.total() << endl;
    cout << "Average Marks is: " << r.avg();
}