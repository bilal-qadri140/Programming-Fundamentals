//13.6
#include <iostream>
using namespace std;
class Array
{
private:
    int a[5];

public:
    void fill();
    void display();
    int max();
    int min();
};
void Array ::fill()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value of a[" << i << "] = ";
        cin >> a[i];
    }
}
void Array ::display()
{
    cout << "You Entered: " <<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Value of a[" << i << "] = " << a[i] << endl;
    }
}
int Array::max()
{
    int m;
    m = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    return m;
}
int Array::min()
{
    int m;
    m = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < m)
        {
            m = a[i];
        }
    }
    return m;
}

int main()
{
    Array arr;
    arr.fill();
    arr.display();
    cout<<"Maximum Number is: "<<arr.max()<<endl;
    cout<<"Minimum Number is: "<<arr.min()<<endl;
}