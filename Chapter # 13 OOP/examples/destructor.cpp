#include <iostream>
using namespace std;
class Bilal
{

public:
    Bilal();
    ~Bilal();
};

Bilal::Bilal()
{
    cout << "Object created: " << endl;
}

Bilal::~Bilal()
{
    cout << "Object Destroyed: " << endl;
}

int main()
{
    Bilal a, b, c;
}