#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int number, option;
    char letter;
    cout << "1-Convert ASCII to character: \n";
    cout << "2-Convert character to ASCII: \n";
    cout << "Enter your choice: \n";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Enter a Number: ";
        cin >> number;
        cout << "The corrosponding character is: " << char(number) << endl;
        break;
    case 2:
        cout << "Enter a letter: ";
        cin >> letter;
        cout << "ASCII value of letter is: " << int(letter) << endl;
        break;
    default:
        cout << "Invalid option! ";
        break;
    }
}