#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "Enter first number:";
    cin >> a;

    cout << "Enter operator:";
    cin >> op;

    cout << "Enter second number:";
    cin >> b;
    switch (op)
    {
    case '+':
        cout << "Sum is " << a + b;
        break;
    case '-':
        cout << "Subtraction is " << a - b;
        break;
    case '*':
        cout << "Multiply is " << a * b;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Division by zero!";
        }
        else
            cout << "Division is " << a / b;
        break;

    default:
        break;
    }

    return 0;
}