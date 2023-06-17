#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "code \tdisk drive manufacture\n";
    cout << "1. \tWestern Digital\n";
    cout << "2. \t3M Corporation\n";
    cout << "3. \tMaxell Corporation\n";
    cout << "4. \tSony Corporation\n";
    cout << "5. \tVerbatim Corporation\n";

    cout << "Enter your choice: ";
    cin >> choice;
    if (choice >= 1 && choice <= 5)
    {
        switch (choice)
        {
        case 1:
            cout << "Western Digital.";
            break;
        case 2:
            cout << "3M Corporation.";
            break;
        case 3:
            cout << "Maxell Corporation.";
            break;
        case 4:
            cout << "Sony Corporation.";
            break;
        case 5:
            cout << "Verbatim Corporation.";
            break;
        }
    }
    else
        cout << "Chose 1 to 5 for Display.";

    return 0;
}