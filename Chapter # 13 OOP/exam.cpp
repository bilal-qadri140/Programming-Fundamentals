#include <iostream>
using namespace std;

class student
{
	private:
		char name[30];
		int rno;
		char grade;
	public:
		void getdata();
		void showdata();
		
			
};
void student :: getdata()
{
	cout<<"Enter Your Name: ";
	cin.getline(name , 30);
	
	cout<<"Enter Your Roll no. ";
	cin>>rno;
	
	cout<<"Enter Your Grade: ";
	cin>>grade;
}
void student :: showdata()
{
	cout<<"Your Name is "<< name <<endl;
	cout<<"Your Roll No. is "<<rno<<endl;
	cout<<"Your Grade is " <<grade<<endl;
}

int main()
{
	student s;
	
	s.getdata();
	s.showdata();
}
