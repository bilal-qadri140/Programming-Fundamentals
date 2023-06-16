//13.3
#include <iostream>
using namespace std;
class circle
{
private:
    float radius;

public:
    void get_radius(float r)
    {
        radius = r;
    }
    void area()
    {
        cout << "Area is: " << 3.14 * radius * radius << endl;
    }
    void circum()
    {
        cout << "Circumference is: " << 2 * 3.14 * radius << endl;
    }
};
int main()
{
    float rad;
    circle r;
    cout << "Enter The Radius: ";
    cin >> rad;
    r.get_radius(rad);
    r.area();
    r.circum();
}