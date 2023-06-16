//13.8
#include <iostream>
using namespace std;
class Number
{
private:
    int x, y;

public:
    Number()
    {
        x = 50;
        y = 60;
        
    }
    void avg()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"Average = "<<(x+y)/2;
    }
};

int main()
{
    Number n;
    n.avg();
}