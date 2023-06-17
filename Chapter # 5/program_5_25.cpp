#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "Enter floating point number: ";
    cin >> a;
    cout << "Enter an operator: ";
    cin >> op;
    cout << "Enter floating point number: ";
    cin >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '/':
        if (b == 0)
        {
            cout << "Devison by zero! ";
        }
        else

            cout << a / b << endl;
        break;

    default:
        cout << "Please chose correct operator:";
        break;
    }
}