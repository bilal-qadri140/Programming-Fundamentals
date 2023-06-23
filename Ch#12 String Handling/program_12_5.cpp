#include <iostream>
using namespace std;
int main()
{
    char a[40];
    cout << "Enter a string: ";
    cin.getline(a, 40);

    int i = 0;

    while (a[i] != '\0')
    {
        i++;
    }
    cout << "The Length of string is: " << i;
}