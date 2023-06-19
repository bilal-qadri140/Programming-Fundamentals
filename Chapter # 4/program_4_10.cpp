#include<iostream>
using namespace std;
int main()
{
    double p,t,r,i;

    cout<<"Enter principal ammount, rate, time: ";
    cin>>p>>r>>t;

    i=(p*r*t)/100;
    cout<<"\nPrincipal amont = Rs. "<<p;
    cout<<"\nRate = "<<r<<"%";
    cout<<"\nTime = "<<t<<" years";
    cout<<"\nSimple Interest Amount = Rs."<<i;
}