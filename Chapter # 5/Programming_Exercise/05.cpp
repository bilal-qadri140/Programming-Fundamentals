#include <iostream>
using namespace std;
int main()
{
    char ch;
    float temp, Fahren, Celsius;
    cout << "f. Fahrenheit to degree Celsius! \n";
    cout << "c. Degree Celsius to Fahrenheit! \n";
    cin >> ch;

    if (ch == 'f')
    {
        cout << "Enter temperature in Fahrenheit to convert it into Celsius!  ";
        cin >> temp;
        Celsius = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius is " << Celsius << "`C";
    }
    else if (ch == 'c')
    {
        cout << "Enter temperature in Celsius to convert it into Fahrenheit!  ";
        cin >> temp;
        Fahren = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit is " << Fahren << "`F";
    }
    else
    cout<<"Error";

    return 0;
}