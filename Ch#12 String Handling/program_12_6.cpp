#include <iostream>
using namespace std;
int main()
{
    char s1[30], s2[30];
    int i = 0;
    cout << "Enter a string ";
    cin.getline(s1, 30);
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }

    cout << "The value of s1 is: " << s1 << endl;
    cout << "The value of s2 is: " << s2 << endl;
}