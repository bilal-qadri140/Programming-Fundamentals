#include <iostream>
using namespace std;
class Date
{
private:
    int Day, Month, Year;

public:
    void Dat()
    {
        Day = 23;
        Month = 6;
        Year = 2021;
    }
    void Show()
    {
        cout << "Current Date is dd/mm/yyyy: " << Day << "/" << Month << "/" << Year << endl;
    }
    void inc()
    {
        ++Day;
    }
    void dic()
    {
        --Day;
    }
    void print()
    {
        cout << Day << "/" << Month << "/" << Year <<endl;
    }
};
int main()
{
    Date d;
    d.Dat();
    d.Show();
    cout << "Date after one day increament: ";
    d.inc();
    d.print();
    cout << "Date after one day decreament: ";
    d.dic();
    d.print();
}