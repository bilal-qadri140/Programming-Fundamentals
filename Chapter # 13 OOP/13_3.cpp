#include <iostream>
using namespace std;
class circle
{
    int rad;

public:
    void get_radius(int r);
    void area();
    void circum();
};
void circle ::get_radius(int r)
{
    rad = r;
}
void circle ::area()
{
    float a;
    a = 3.1416 * rad * rad;
    cout << "Area of Circle is: " << a << endl;
}
void circle :: circum()
{
    float c;
    c= 2 * 3.1416 * rad;
    cout << "Circumference is: "<<c<<endl;
}

int main()
{
    circle cir;
    cir.get_radius(6);
    cir.area();
    cir.circum();
}