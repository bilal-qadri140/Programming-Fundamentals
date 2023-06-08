#include <iostream>
#include <string.h>
using namespace std;

class Stack
{
private:
    int top;

public:
    char A[50];
    Stack()
    {
        top = -1;
    }
    void push(char);
    char Top();
    void pop();
    void reverse(char[], int);
};
void Stack ::push(char c)
{
    top++;
    A[top] = c;
}
void Stack ::pop()
{
    top--;
}
char Stack ::Top()
{
    return A[top];
}

void Stack ::reverse(char A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        push(A[i]);
    }

    
    for (int i = 0; i <= size; i++)
    {

        A[i] = Top();
        pop();
    }
    for (int i = 0; i <= size; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    char str[50];
    Stack s;
    cout << "Enter String: ";
    gets(str);

    s.reverse(str, strlen(str));

    return 0;
}