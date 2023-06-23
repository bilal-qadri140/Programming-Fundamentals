#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{

    string name, uni;

    cout << "Enter your Name: ";
    getline(cin, name);
    cout << "Enter your University Name: ";
    getline(cin, uni);

    cout << "Your Name is: " << name << endl;
    cout << "Your University Name is: " << uni << endl;
}