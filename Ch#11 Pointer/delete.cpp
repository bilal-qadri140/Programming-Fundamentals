#include <iostream>
using namespace std;
int main()
{
    int* a;
    int b;
    a = new int;
    cout<<"Enter number: ";
    cin>>*a;
    cout<<a<<endl;
    delete a;
    cout<<a;
    
    return 0;
}