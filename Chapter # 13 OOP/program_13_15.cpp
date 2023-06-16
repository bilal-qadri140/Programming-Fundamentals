//13.15
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
        cout << "You created " << n << " object so far " << endl;
    }
};
int yahoo ::n = 0;

int main()
{
    yahoo a, b;
    b.show();
    yahoo v;
    v.show();
}