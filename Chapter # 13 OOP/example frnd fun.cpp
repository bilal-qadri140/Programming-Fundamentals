/*
	Name: Muhammad Bilal Qadri..
	Copyright: NILL..
	Author: main khud...hehehehehe.
	Date: 17/05/21 20:44
	Description: Friend Function...
*/

#include <iostream>
using namespace std;

class B;
class A
{
	int x;
	public: 
	A()
	{
		cout<<"Enter Value of x:";
		cin>>x;
//		x = 10;
	}
	friend int add(A , B);
};
class B
{
	int y;
	public: 
	B()
	{
		cout<<"Enter Value of y:";
		cin>>y;
//		y = 12;
	}
	friend int add(A , B);
};
int add(A a , B b)
{
	return (a.x + b.y);
}

int main()
{
	A a;
	B b;
	cout<<"Sum of x and y is "<<add(a , b);
}




