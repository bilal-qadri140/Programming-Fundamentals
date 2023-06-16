#include <iostream>
using namespace std;
class test
{
private:
    int a;

public:
    void in()
    {
        cout << "Enter Number: ";
        cin >> a;
    }
    void out()
    {
        cout << "You Entered: " << a;
    }
};
int main()
{
    test t;
    t.in();
    t.out();
}