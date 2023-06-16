#include <iostream>
using namespace std;
class Array
{
private:
    int arr[5];

public:
    void fill();
    void display();
    void max();
    void min();
};
void Array ::fill()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value of arr[" << i << "] = ";
        cin >> arr[i];
    }
}
void Array ::display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "The Value of arr[" << i << "] = " << arr[i] << endl;
    }
}
void Array ::max()
{
    int m;
    m = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }
    cout << "Maximum Value is: " << m<<endl;
}
void Array ::min()
{
    int m;
    m = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
        }
    }
    cout << "Minimum Value is: " << m<<endl;
}
int main()
{
    Array a;
    a.fill();
    a.display();
    a.max();
    a.min();
}