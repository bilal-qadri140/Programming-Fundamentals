#include <iostream>
using namespace std;
void table(int);
int main()
{
    int n;
    cout << "Enter No for Table: ";
    cin >> n;
    table(n);
}
void table(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << a << " x " << i << " = " << i * a << endl;
    }
}