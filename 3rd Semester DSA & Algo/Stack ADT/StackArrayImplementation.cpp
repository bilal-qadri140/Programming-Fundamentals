#include <iostream>
using namespace std;
#define MAX_SIZE 101

int A[MAX_SIZE]; // Global variable array
int top = -1;    // Empty Stack

void push(int x)
{
    if (top >= MAX_SIZE - 1)
    {
        cout << "Error: Stack overflow\n";
        return;
    }

    top = top + 1;
    A[top] = x;
}

void pop()
{
    if (top == -1)
    {
        cout << "Error: No element to print\n";
        return;
    }
    top--;
}

bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
int Top()
{
    return A[top];
}

void print()
{
    cout << "Stack: ";
    for (int i = 0; i <= top; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(2); // 2
    print();

    push(5); // 2 5
    print();

    push(11); // 2 5 11
    print();

    pop(); // 2 5
    print();

    push(12); // 2 5 12
    print();
    return 0;
}