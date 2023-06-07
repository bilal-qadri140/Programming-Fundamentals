#include <iostream>
using namespace std;
void sqr(int);
int main()
{
    int i, num[5];
    cout << "Enter five Integers: " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    cout << "Calling the Function: "<<endl;
    for (i = 0; i < 5; i++)
    {
        sqr(num[i]);
    }
}
void sqr(int n)
{
    cout << n << "\t" << n * n << endl;
}