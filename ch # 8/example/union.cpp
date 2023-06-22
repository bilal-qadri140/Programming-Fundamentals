#include <iostream>
using namespace std;
union bilal
{
    int a;
    char b;
    float c;
}t;
struct qadri
{
    int a;
    char b;
    float c;
};

int main()
{
    bilal t;
    qadri j;
    char g;
    cout<<sizeof(t)<<endl;
    cout<<sizeof(g)<<endl;
    cout<<sizeof(j);
}
