#include<iostream>
using namespace std;
char bilal(int x)
{
    if (x==10)
    {
        return ('b');
    }
    else if (x==20)
    {
        return ('c');
    }
    else
    return ('d');
}
int main()
{
    cout<<bilal(5);
}