#include <iostream>
using namespace std;
int main()
{
    float height_in_cm, height;

    cout << "Enter height in inches: ";
    cin >> height;

    height_in_cm = 2.54 * height;

    cout << "Height in cm is: " << height_in_cm;
}