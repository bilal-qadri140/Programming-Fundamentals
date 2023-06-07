#include "iostream"
using namespace std;
void calculator(int, int, char);
int main()
{
    int x, y;
    char c;
    cout << "Enter integer, operator, integer:\n ";
    cin >> x >> c >> y;
    calculator(x, y, c);
}
void calculator(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " x " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    case '%':
        cout << a << " % " << b << " = " << a % b;
        break;

    default:
        cout << "Invalid operator! ";
        break;
    }
}
