// 13.2
#include <iostream>
using namespace std;
class marks
{
private:
    int a, b, c;

public:
    void in()
    {
        cout << "Enter three books marks: ";
        cin >> a >> b >> c;
    }
    int sum()
    {
        return (a + b + c);
    }
    float avg()
    {
        return (a + b + c) / 3.0;
    }
};

int main()
{
    marks m;
    int s;
    float a;
    m.in();
    s = m.sum();
    a = m.avg();
    cout << "Sum of Marks is: " << s << endl;
    cout << "Average of Marks is: " << a;
}