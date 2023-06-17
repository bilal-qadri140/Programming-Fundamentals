#include <iostream>
using namespace std;
int main()
{
    int choice;
    float area, circumference, radius;
    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter 1 for area & 2 for circumference: ";
    cin >> choice;

    if (choice == 1)
    {
        area = 3.141 * radius * radius;
        cout << "Area of circle is " << area;
    }
    else if (choice == 2)
    {
        circumference = 2.0 * radius * 3.141;
        cout << "Circumference of circle is " << circumference;
    }
    else
        cout << "Error!";
}