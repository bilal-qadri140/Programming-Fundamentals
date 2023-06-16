#include<iostream>
using namespace std;

class A
{
	int x;
	int y;
	public:
		A()
		{
			x = 12;
			y = 11;
		}
		friend class B;
};

class B
{
	public:
	void show1(A a)
	{
		cout << "Value of x is "<<a.x<<endl;
	}
	void show2(A a)
	{
		cout << "Value of y is "<<a.y<<endl;
	}
};
int main()
{
	A a;
	B b;
	b.show1(a);
	b.show2(a);
}







