#include <iostream>
using namespace std;
int main()
{
    float base, height;
    float area;
    cout << "Enter the base of tringle: ";
    cin >> base;
    cout << "Enter the height of triangle: ";
    cin >> height;
    area = 0.5 * base * height;
    cout << "Area of Tringle is: " << area;
}