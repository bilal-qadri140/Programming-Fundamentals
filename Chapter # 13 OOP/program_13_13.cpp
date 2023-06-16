//13.13
#include <iostream>
using namespace std;
class Travel
{
private:
    int km, hr;

public:
    Travel();
    void get();
    void show();
    void add(Travel p);
};

Travel::Travel()
{
    km = hr = 0;
}
void Travel::get()
{
    cout << "Enter Distance: ";
    cin >> km;
    cout << "Enter Hours: ";
    cin >> hr;
}
void Travel::show()
{
    cout << "Distance is: " << km << endl;
    cout << "Time is: " << hr << endl;
}
void Travel::add(Travel p)
{
    Travel t;
    t.km = km + p.km;
    t.hr = hr + p.hr;
    cout << "Total Distance is " << t.km << " Kilometers in " << t.hr << " Hours. " << endl;
}
int main()
{
    Travel t1, t2;
    t1.get();
    t1.show();
    t2.get();
    t2.show();
    t2.add(t1);
}