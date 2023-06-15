#include <iostream>
using namespace std;
class Parent 
{
    protected:
    int n;
    public:
    Parent()
    {
        n = 0;
    }
    Parent(int p)
    {
        n = 0;
    }
    void show()
    {
        cout<<"n = "<<n<<endl;
    }
};
class child :    public Parent
{

}




int main()
{
    
    
    return 0;
}