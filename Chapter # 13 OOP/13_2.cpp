#include <iostream>
using namespace std;
class attari
{
    int marks[3];

public:
    void in();
    void sum();
    void avg();
    void grade();
};
void attari ::in()
{
    cout << "Enter Marks of three books: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> marks[i];
    }
}
void attari ::sum()
{
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        s += marks[i];
    }
    cout << "Total marks is: " << s << endl;
}
void attari ::avg()
{
    float a = 0;
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        s = s + marks[i];
    }
    a = s / 3.0;

    cout << "Average Marks is: " << a << endl;
}
void attari ::grade()
{
    float a = 0;
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        s = s + marks[i];
    }
    a = s / 3.0;

    if (a >= 90)
    {
        cout << "Grade: "
             << "A+";
    }
    else if (a >= 80)
    {
        cout << "Grade: " << 'A';
    }
    else if (a >= 70)
    {
        cout << "Grade: " << 'B';
    }
    else if (a >= 60)
    {
        cout << "Grade: " << 'C';
    }
    else
        cout << "Anni dya parh v lya kar.....";
}

int main()
{

    attari qadri;
    qadri.in();
    qadri.sum();
    qadri.avg();
    qadri.grade();
}