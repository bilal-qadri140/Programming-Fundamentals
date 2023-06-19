#include <iostream>
using namespace std;
int main()
{
    int vf, vi, a, t;
    cout << "Enter initial velocity, acceleration and time span: \n";
    cin >> vi >> a >> t;
    vf = vi + a * t;
    cout << "Final velocity is: " << vf;
}