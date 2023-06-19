#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char str[]= "Bilal Qadri";
    cout<<setw(20)<<setfill('*')<<str<<endl;
    cout<<setw(20)<<setfill('@')<<str<<endl;
    cout<<setw(6)<<setfill('#')<<str<<endl;
}