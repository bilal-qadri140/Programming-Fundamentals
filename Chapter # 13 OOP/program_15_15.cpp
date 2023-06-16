#include <iostream>
using namespace std;
class yahoo
{
    static int n;

public:
    yahoo()
    {
        n++;
    }
    void show()
    {
        cout << "You are created " << n << " Objects: " << endl;
    }
};
int yahoo ::n;

int main()
{
    yahoo x;
    x.show();

    yahoo c, v, n, m;
    x.show();
}