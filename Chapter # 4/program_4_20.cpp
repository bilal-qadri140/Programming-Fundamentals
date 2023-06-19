#include <iostream>
using namespace std;
int main()
{
    const float PI = 3.1416;
    float area, rad, cir;

    cout << "Enter the radiuse of circle in cm: ";
    cin >> rad;

    area = PI * rad * rad;
    cir = 2 * PI * rad;
    cout << "Area of circle is: " << area << " sqcm\n";
    cout << "Circumference of circle is: " << cir << " cm\n";
}