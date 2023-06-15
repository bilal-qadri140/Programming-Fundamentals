#include <iostream>
using namespace std;
class Move
{
	protected:
		int position;
		
	public:
		Move()
		{
			position = 0;
		}
		void show()
		{
			cout<<"position = "<<position<<endl;
		}
};
class Move1 : public Move

{
	public: 
	void forword()
	{
		position++;
	}	
};
class Move2 : public Move
{
	public:
	void backword()
	{
		position--;
	}	
};


int main()
{
	Move1 m1; // when object is created. The constructer is executsd automatically and value of  position == 0
	Move2 m2; // in this case again constructer is automatically invoked and position == 0
	
	m1.show(); // position ==0
	m1.forword(); // positoin ++
	m1.show(); // position == 1
	m2.backword(); // after object created value of position is 0 and position-- 
	m2.show(); // position == -1
}
