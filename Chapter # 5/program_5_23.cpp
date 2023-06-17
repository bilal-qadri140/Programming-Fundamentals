#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of a weekday: ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Friday";
        break;
    case 2:
        cout<<"Saturday";
        break;
    case 3:
        cout<<"Sunday";
        break;
    case 4:
        cout<<"Monday";
        break;
    case 5:
        cout<<"Tuesday";
        break;
    case 6:
        cout<<"Wednesday";
        break;
    case 7:
        cout<<"Thursday";
        break;

    
    default:
    cout<<"\n\n \t ja ja turja turja \n\n\n ";
        break;
    }
}