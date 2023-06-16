//13.11
#include <iostream>
using namespace std;
class bilal
{
private:
    int num;
    char ch;

public:
    bilal()
    {
        num = 0;
        ch = 'x';
    }
    bilal(int n, char c)
    {
        num = n;
        ch = c;
    }
    void show()
    {
        cout << "num = " << num << endl;
        cout << "ch = " << ch << endl;
    }
};

int main()
{
    bilal b, d(1, 'b');
    cout << "Before Value change: " << endl;
    b.show();
    cout << "After Value change " << endl;
    d.show();
}