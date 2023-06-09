#include <iostream>
using namespace std;
int main()
{
    char a[] = "hello world\n";
    char *ptr = a;
    cout << ptr; // Address of a[0]
    ptr++;
    cout << ptr; // Address of a[1]
    ptr = ptr + 5;
    cout << ptr; // Address of a[6]
    return 0;
}