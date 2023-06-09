// #include <iostream>
// using namespace std;
// int sum(int *ptr);
// int main()
// {
//     int a[5] = {10, 20, 30, 40, 50};
//     sum(&a[0]);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << a[i] << endl;
//     }
// }
// int sum(int *ptr)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         *ptr = *ptr / 10;
//         ptr = ptr + 1;
//     }
// }

#include <iostream>
using namespace std;
int *fun(int *p1, int *p2);
int main()
{
    int a = 12, b = 19;
    
    cout << "Greater Value is: " << *fun(&a, &b);
}
int *fun(int *p1, int *p2)
{
    if (*p1 > *p2)
    {
        return p1;
    }
    else
        return p2;
}