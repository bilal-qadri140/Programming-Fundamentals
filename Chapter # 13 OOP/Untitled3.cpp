/*
	Name: Muhammad Bilal Qadri...
	Copyright: NILL
	Author: Me
	Date: 17/05/21 09:36
	Description: Friend Class prctice... 
*/
#include <iostream>
using namespace std;
class B;
class A
{
	int g;
	public: 
		void setdata(int i)
		{
			g = i;
		}
		friend void Show(A , B);
};
class B
{
	int b;
	public:
		B()
		{
			b = 30;
		}
		friend void show(A , B);
};
void  show( A x, B y)
{
	cout<<"Value of a = "<< x.g<<endl;
	cout<<"Value of b = "<< y.b<<endl;
}
int main()
{
	A obj1;
	B obj2;
	setdata(10);
	
	show(obj1 ,obj2);
}


