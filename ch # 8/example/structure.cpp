#include <iostream>
using namespace std;
struct Bilal
{
    int weight, age, roll;
    float height; 
    char name[30], f_name[30], cls[30], uni[30], add[50];
};
int main()
{
    Bilal b;
    cout << "Enter Your Name! ";
    cin >> b.name;
    cout << "Enter Your Father Name! ";
    cin >> b.f_name;
    cout << "Enter Your Age! ";
    cin >> b.age;
    cout << "Enter Your Height! ";
    cin >> b.height;
    cout << "Enter Your Weight! ";
    cin >> b.weight;
    cout << "Enter Your Roll No! ";
    cin >> b.roll;
    cout << "Enter Your Class! ";
    cin >> b.cls;
    cout << "Enter Your University Name! ";
    cin >> b.uni;
    cout << "Enter Your Mailing Address! ";
    cin >> b.add;
    cout<<"\n\n\n\n\n\n\n";

    cout << "Your Name is! \t" << b.name << endl;
    cout << "Your Father Name is! \t" << b.f_name << endl;
    cout << "Your Age is! \t" << b.age << endl;
    cout << "Your Height is! \t" << b.height << endl;
    cout << "Your Weight is! \t" << b.weight << endl;
    cout << "Your Class is! \t" << b.cls << endl;
    cout << "Your Roll No is! \t" << b.roll << endl;
    cout << "Your University Name is! \t" << b.uni << endl;
    cout << "Your Address is! \t" << b.add << endl;
}
