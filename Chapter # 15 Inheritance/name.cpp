#include <iostream>
using namespace std;
int main()
{
	char name[50];
	gets(name);
	cout<<"name is "<<name<<endl;
	cout<<sizeof(name);
}
