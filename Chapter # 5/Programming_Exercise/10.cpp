#include <iostream>
using namespace std;
int main()
{
    int temperature;
    cout << "Enter Temperature: ";
    cin >> temperature;
    if (temperature > 35)
    {
        cout << "Hot Today!";
    }
    else if (temperature >= 25)
    {
        cout << "Pleasant Day!";
    }
    else
        cout << "Cool Day!";

    return 0;
}