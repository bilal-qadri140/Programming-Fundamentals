#include <iostream>
using namespace std;
#define MAX_SIZE 100

int arr[MAX_SIZE];
int top = -1;
class Test
{
public:
    void push(int n)
    {
        if (top == MAX_SIZE - 1)
        {
            cout << "Error: Stack overflow! ";
            return;
        }
        top++;
        arr[top] = n;
    }
    void pop()
    {
        // Test t;
        // t.push(12);
        if (top == -1)
        {
            cout << "Error: Stack underflow ";
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "Error: Stack underflow ";
        }
        else
            return arr[top];
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    cout << "Hello";
    return 0;
}