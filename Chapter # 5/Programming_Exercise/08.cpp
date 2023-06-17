#include <iostream>
using namespace std;
int main()
{
    float value, inch, cm, gal, ltr, mile, km, lbs, kg;
    int choice;

start:
    cout << "1. Inches to Centimeters: \n";
    cout << "2. Gallon to Litters: \n";
    cout << "3. Miles to Kilometers: \n";
    cout << "4. Pounds to Kilograms: \n";
    cout << "5. Quit the Programm! \n";
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter Value in Inches to convert it into Centimeters! ";
            cin >> inch;
            cm = inch * 2.54;
            cout << "Value in Centimeters is " << cm << " cm" << endl;
            break;
        case 2:
            cout << "Enter Value in Gallon to convert it into Litters! ";
            cin >> gal;
            ltr = gal * 3.785;
            cout << "Value in Litters is " << ltr << " ltr" << endl;
            break;
        case 3:
            cout << "Enter Value in Miles to convert it into Kilometers! ";
            cin >> mile;
            km = mile * 1.609;
            cout << "Value in Kilometers is " << km << " km" << endl;
            break;
        case 4:
            cout << "Enter Value in Pounds to convert it into Kilograms! ";
            cin >> lbs;
            kg = lbs * 0.4536;
            cout << "Value in Kilograms is " << kg << " kg" << endl;
            break;

        default:
            break;
        }
    }

    else if (choice != 5)
    {
        if (choice != 5)
        {
            cout << "\nWrong Choice!\nChose 1 to 4 for Converssion and 5 for Quit the programm! \n\n";
            goto start;
        }
    }

    return 0;
}