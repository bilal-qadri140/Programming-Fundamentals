#include <iostream>
using namespace std;
float area(int, int);

int main()
{  
    int base, height;
    float arr;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    arr = area(base, height);
    cout << "Area of Triangle is: " << arr;
}
float area(int b, int h)
{
    float a;
    a = (b * h) / 2;
    return a;
}