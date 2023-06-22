#include <iostream>
using namespace std;

struct Dimension
{
    float length, width;
};
struct Result
{
    float area, peremeter;
};
struct Rectangle
{
    Dimension d;
    Result r;
};
int main()
{
    Rectangle R;
    cout << "Enter Length: ";
    cin >> R.d.length;
    cout << "Enter Width: ";
    cin >> R.d.width;

    R.r.area = R.d.length * R.d.width;
    R.r.peremeter = 2 * (R.d.length + R.d.width);
    cout << "Area is: " << R.r.area << endl;
    cout << "Peremeter is: " << R.r.peremeter;
}