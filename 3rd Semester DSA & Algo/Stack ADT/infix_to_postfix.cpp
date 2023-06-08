#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100 // defining maximum length of stack array

int top = -1; // Global variable

class Stack
{
private:
    // char arr[MAX_SIZE];
    string array;

public:
    void push(string);
    void pop();
    char Top();
    string Top();
    string infixToPrefix(string);
    bool isOperator(char);
    int getPriority(char);
    bool isEmpty();
};

void Stack::push(string s)
{
    if (top == MAX_SIZE - 1) // Empty Stack
    {
        cout << "Error: Stack overflow";
        return;
    }
    for (int i = 0; i < s.length(); i++) // pushing elements on to stack
    {
        top++;
        array[top] = s[i];
    }
}

// delete top element
void Stack ::pop()
{
    if (top == -1) // empty Stack
        return;
    top--;
}

// getting element at top of stack
char Stack::Top()
{
    return array[top];
}
string Stack::Top()
{
    return array[top];
}

// check char is operator or not
bool Stack::isOperator(char c)
{
    return (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z') && !(c >= '0' && c <= '9'));
}
// check Empty Stack

bool Stack::isEmpty()
{
    if (top == -1)
        return true;
    return false;
}
// checking operators prioraty

int Stack::getPriority(char c)
{
    if (c == '-' || c == '+')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;
    else
        return 0;
}

string Stack::infixToPrefix(string infix)
{
    // stack for operators
    Stack operators;
    // stack for operands
    Stack operands;

    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] == '(')
        {
            operators.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (!operators.isEmpty() && operators.Top() != "(")
            {
                char op1 = operands.Top();
                operands.pop();
                char op2 = operands.Top();
                operands.pop();

                char op = operators.Top();
                operators.pop();

                string temp = op + op1 + op2;
            }
        }
    }
}
int main()
{
    Stack s;

    // // s.pop();
    // s.push("bilal q");
    // cout << s.Top();
    // cout << s.isOperator('0');

    return 0;
}