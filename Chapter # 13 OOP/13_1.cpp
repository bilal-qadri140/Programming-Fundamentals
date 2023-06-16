#include <iostream>
using namespace std;
class bilal
{
private:
    int n[5];

public:
    void in();
    void show();
    int max();
    void min();
};
void bilal ::in()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number for n[" << i << "]=";
        cin >> n[i];
    }
}
void bilal::show()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "You entered n[" << i << "]=" << n[i] << endl;
    }
}
int bilal ::max()
{
    int max;
    max = n[0];
    for (int i = 0; i < 5; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
    }
    // cout << "Maximum is: " << max<<endl;
    return max;
}
void bilal ::min()
{
    int min;
    min = n[0];
    for (int i = 0; i < 5; i++)
    {
        if (n[i] < min)
        {
            min = n[i];
        }
    }
    cout << "Minimum is: " << min;
}

int main()
{
    bilal b;
    int m;
    b.in();
    b.show();
    m = b.max();
    cout << "maximum is: " << m << endl;
    b.min();
}