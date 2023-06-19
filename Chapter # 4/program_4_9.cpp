#include <iostream>
using namespace std;
int main()
{
    char name[20], city[20];
    int age;

    cout << "Enter your Name here: ";
    cin >> name;
    cout << "Enter your Age here: ";
    cin >> age;
    cout << "Enter your City here: ";
    cin >> city;

    cout << "\n\nYour Name is: " << name << endl;
    cout << "Your Age is: " << age << endl;
    cout << "Your City is: " << city << endl;
}