#include <iostream>
using namespace std;
int main()
{
    char choice;
    int days, charges;

    cout << "M. Motorcycle.\nC. Car.\nB. Bus.";
    cout << "Enter yor choice: ";
    cin >> choice;

    if (choice == 'M' || choice == 'C' || choice == 'B')
    {
        cout << "Enter Days for parking: ";
        cin >> days;
        
        switch (choice)
        {
        case 'M':
            charges = days * 10;
            cout << "Total Charges are Rs. " << charges << "/-";

            break;
        case 'C':
            charges = days * 20;
            cout << "Total Charges are Rs. " << charges << "/-";

            break;
        case 'B':
            charges = days * 30;
            cout << "Total Charges are Rs. " << charges << "/-";

            break;
        }
    }
    else

        cout << "Run Program again and chose correct!";
    return 0;
}