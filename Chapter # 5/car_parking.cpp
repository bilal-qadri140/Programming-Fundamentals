#include <iostream>
using namespace std;
int main()
{
    int choice, responce;
    cout << "1-Bike parking: \n";
    cout << "2-Riksha parking: \n";
    cout << "3-Car & Jeep parking: \n";
    cout << "4-HIACE parking: \n";
    cout << "5-Bus parking: \n";
    cout << "6-Truck parking: \n";

    cout << "Chose 1 to 6 for Parking: \n";
    cin >> choice; 
    if (choice >= 1 && choice <= 6)
    {
        switch (choice)
        {
        case 1:
            cout << "You are parking a Bike. Please give me RS.20 \n";
            cout << "If ticket paid. Please press 1. \nIf not paid please press 0: ";
            cin >> responce;
            if (responce == 1)
            {
                cout << "Good luck! ";
            }
            else if (responce == 0)
                cout << "Anni dya pasy tery pyo ny deny aa: \n";

            break;
        case 2:
            cout << "You are parking a Riksha. Please give me RS.30 \n";
            cout << "If ticket paid. please press 1. If not paid please press 0: ";
            cin >> responce;
            if (responce == 1)
            {
                cout << "Good luck! ";
            }
            else if (responce == 0)
                cout << "Anni dya pasy tery pyo ny deny aa: \n";
            break;
        case 3:
            cout << "You are parking a Car or a Jeep. Please give me RS.50 \n";
            cout << "If ticket paid. please press 1. If not paid please press 0: ";
            cin >> responce;
            if (responce == 1)
            {
                cout << "Good luck! ";
            }
            else if (responce == 0)
                cout << "Anni dya pasy tery pyo ny deny aa: \n";
            break;
        case 4:
            cout << "You are parking a HIACE. Please give me RS.70 \n";
            cout << "If ticket paid. please press 1. If not paid please press 0: ";
            cin >> responce;
            if (responce == 1)
            {
                cout << "Good luck! ";
            }
            else if (responce == 0)
                cout << "Anni dya pasy tery pyo ny deny aa: \n";
            break;
        case 5:
            cout << "You are parking a Bus. Please give me RS.100 \n";
            cout << "If ticket paid. please press 1. If not paid please press 0: ";
            cin >> responce;
            if (responce == 1)
            {
                cout << "Good luck! ";
            }
            else if (responce == 0)
                cout << "Anni dya pasy tery pyo ny deny aa: \n";
            break;
        case 6:
            cout << "You are parking a Truck. Please give me RS.150 \n";
            cout << "If ticket paid. please press 1. If not paid please press 0: ";
            cin >> responce;
            if (responce == 1)
            {
                cout << "Good luck! ";
            }
            else if (responce == 0)
                cout << "Anni dya pasy tery pyo ny deny aa: \n";
            break;
        }
    }
    else
    {
        cout << "Choice is 1 to 6: \n";
        cout << "Run program again and chose 1 to 6: ";
    }
    return 0;
}