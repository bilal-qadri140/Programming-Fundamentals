#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double distance, speed, time;
    cout << "Enter distance traveled in km: ";
    cin >> distance;
    cout << "Enter the speed of vehicle (km/h) ";
    cin >> speed;

    time = distance / speed;
    cout << "Time required to reached: " << setprecision(2) << time;
}