#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character to check whether it is a Vovel or Consonent:";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'A':
        cout << "Character is Vovel!";
        break;
    case 'e':
    case 'E':
        cout << "Character is Vovel!";
        break;
    case 'i':
    case 'I':
        cout << "Character is Vovel!";
        break;
    case 'o':
    case 'O':
        cout << "Character is Vovel!";
        break;
    case 'u':
    case 'U':
        cout << "Character is Vovel!";
        break;

    default:
        cout << "Character is Consonent!";
        break;
    }

    return 0;
}