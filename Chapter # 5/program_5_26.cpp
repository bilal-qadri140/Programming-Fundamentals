#include <iostream>
using namespace std;
int main()
{
    int choice, month;
    double charges;
    cout << "Health club Membership menu: \n\n";
    cout << "1-Standard adult membership: \n";
    cout << "2-Child Membershhip: \n";
    cout << "3-Senior citizen Membership:\n ";
    cout << "4-Quit the program: \n";

    cout << "Enter your choice: ";
    cin >> choice;
    if (choice >= 1 && choice <= 3)
    {
        cout << "Enter how many months: ";
        cin >> month;
        switch (choice)
        {
        case 1:
            charges = month * 50.0;
            break;
        case 2:
            charges = month * 20.0;
            break;
        case 3:
            charges = month * 30.0;
            break;
        }
        cout << "Total charges are: " << charges << endl;
    }
    else if (choice != 4)
    {
        cout << "The valid choice are 1 to 4: \n";
        cout << "Run the program again and select one of these: ";
    }
}