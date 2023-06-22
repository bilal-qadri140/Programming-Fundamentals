#include <iostream>
using namespace std;
struct birth
{
    int date, month;
    float year;
};
int main()
{
    birth b;
    cout << "Enter yor Birth date: ";
    cin >> b.date;
    cout << "Enter yor Birth month: ";
    cin >> b.month;
    cout << "Enter yor Birth year: ";
    cin >> b.year;

    cout << "Your Date of Birth is! " << b.date << "/" << b.month << "/" << b.year;
}
