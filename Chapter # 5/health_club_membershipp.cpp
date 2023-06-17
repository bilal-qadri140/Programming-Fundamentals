#include <iostream>
using namespace std;
int main()
{
    int choice, months, charges;
    cout << "1. Standard Adult Mrmbership!\n";
    cout << "2. hildren Membership!\n";
    cout << "3. Senior Citizen Mrmbership!\n";
    cout << "4. Quit the program!\n";

    cout << "Enter your choice:\n";
    cin >> choice;

    if (choice >= 1 && choice <= 3)
    {
        cout << "For How many months?\n";
        cin >> months;
        switch (choice)
        {

        case 1:
            charges = months * 50;
            break;
        case 2:
            charges = months * 20;
            break;
        case 3:
            charges = months * 30;
            break;
        }
        cout << "Your Total Charges is " << charges;
    }
    else if (choice != 4)
    {
        cout << "You Entered wrong choice!\n";
        cout << "Run the program again and chose 1 to 4!";
    }

    return 0;
}