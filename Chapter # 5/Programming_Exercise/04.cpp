#include <iostream>
using namespace std;
int main()
{
    int side, base, height;
    float area;
    char choice;
    cout << "Enter 'S' for Area of Square.\nEnter 'T' for Area of Triangle. \n";
    cin >> choice;

    if (choice == 'S')
    {
        cout << "Enter side of square: ";
        cin >> side;

        area = side * side;
        cout << "Area of Square is  " << area;
    }
    else if (choice == 'T')
    {
        cout << "Enter base of Triangle: ";
        cin >> base;
        cout << "Enter height of Triangle: ";
        cin >> height;

        area = (base * height) * 0.5;
        cout << "Area of Triangle is  " << area;
    }
    else
        cout << "Please Run Program again and chose currect character!";

    return 0;
}