///*
//	Name: Muhammad Bilal Qadri...
//	Copyright: NILL
//	Author: Me
//	Date: 17/05/21 09:36
//	Description: Friend Class prctice... 
//*/
//#include <iostream>
//using namespace std;
//class B;
//class A
//{
//	private:
//	int a;
//	public: 
//		A()
//		{
//			a = 10;
//		}
//		friend void Show(A , B);
//};
//class B
//{
//	int b;
//	public:
//		B()
//		{
//			b = 30;
//		}
//		friend void show(A , B);
//};
//void  show( A x, B y)
//{
//	if(x.a < y.b)
//	cout<<x.a;
//	else
//	cout<<y.b;
////	cout<<"Value of a = "<< x.a<<endl;
////	cout<<"Value of b = "<< y.b<<endl;
//}
//int main()
//{
//	A obj1;
//	B obj2;
//	
//	show(obj1 ,obj2);
//}
//

#include <iostream>  
using namespace std;  
class B;          // forward declarartion.  
class A  
{  
    int x;  
    public:  
    void setdata(int i)  
    {  
        x=i;  
    }  
    friend void min(A,B);         // friend function.  
};  
class B  
{  
    int y;  
    public:  
    void setdata(int i)  
    {  
        y=i;  
    }  
    friend void min(A,B);                    // friend function  
};  
void min(A a,B b)  
{  
    if(a.x<=b.y)  
    cout << a.x << std::endl;  
    else  
    cout << b.y << std::endl;  
}  
   int main()  
{  
   A a;  
   B b;  
   a.setdata(10);  
   b.setdata(20);  
   min(a,b);  
    return 0;  
 }
