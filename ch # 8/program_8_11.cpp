#include <iostream>
using namespace std;
struct date
{
    int day, month, year;
};
struct phonebook
{
    char name[30], city[30];
    int tel;
    date d;
};
int main()
{
    phonebook p;

    cout << "Enter Your Name: ";
    cin >> p.name;
    cout << "Enter Your city name: ";
    cin >> p.city;
    cout << "Enter Your Phone no.: ";
    cin >> p.tel;
    cout << "Enter your Date of Birth: ";
    cin >> p.d.day >> p.d.month >> p.d.year;

    cout << "Personal Information is: " << endl;
    cout << p.name << "-" << p.city << "-" << p.tel << "-" << p.d.day << "/" << p.d.month << "/" << p.d.year;
}
