#include <iostream>
using namespace std;
int main()
{
    float gpa[] = {3.3, 4.0, 2.3, 3.3, 4.0};
    int a = 1;
    int b = 3;
    float t = gpa[a];
    gpa[a] = gpa[b];
    gpa[b] = t;
    for (int i = 0; i <= 4; i++)
    {
        cout << gpa[i];
    }
}