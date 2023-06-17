#include <iostream>
using namespace std;
int main()
{
    int num, choice;
    char ch;
    cout << "1. ASCII value to Character!\n";
    cout << "2. Character Value to ASCII!\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter ASCII Value to convert Character:\n";
        cin >> num;
        cout << "The Character of "<<num << " is \'"<<char(num)<<"\'";
        break;
    case 2:
        cout << "Enter a Character to convert it into ASCII:\n";
        cin >> ch;
        cout << "The ASCII of \""<<ch << "\" is \'"<<int(ch)<<"\'";
        break;

    default:
        break;
    }
    return 0;
}