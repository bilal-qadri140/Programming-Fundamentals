#include <iostream>
using namespace std;
int bilal()
{
    char x;
    cout << "Enter an alphabet: ";
    cin >> x;
    switch (x)
    {
    case 'a':
    case 'A':
        cout << "You enterd Vowel! ";
        break;
    case 'e':
    case 'E':
        cout << "You enterd Vowel! ";
        break;
    case 'i':
    case 'I':
        cout << "You enterd Vowel! ";
        break;
    case 'o':
    case 'O':
        cout << "You enterd Vowel! ";
        break;
    case 'u':
    case 'U':
        cout << "You enterd Vowel! ";
        break;

    default:
        cout << "Chal mera put chutti kar! ";
        break;
    }
}
main()
{
    bilal();
}
