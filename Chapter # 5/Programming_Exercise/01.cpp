#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a Character!\n";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is Lowercase:";
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is Upercase:";
    }
    else
        cout << ch << " is not a Lowercase character:";

    return 0;
}