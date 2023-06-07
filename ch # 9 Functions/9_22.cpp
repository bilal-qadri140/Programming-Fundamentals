#include<iostream>
using namespace std;
struct Test
{
    int marks;
    char grade;
};
void show(Test p);
int main()
{
    Test t;
    cout<<"Enter Number: ";
    cin>>t.marks;
    cout<<"Enter Grade: ";
    cin>>t.grade;
    show(t);
}
void show(Test p)
{
    cout<<"Your Marks is: "<<p.marks<<endl;
    cout<<"Your Grade is: "<<p.grade<<endl;
}