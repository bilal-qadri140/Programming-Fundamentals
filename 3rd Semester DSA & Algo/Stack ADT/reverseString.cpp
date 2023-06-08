#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100

// Global variable
int top = -1;
char str[MAX];
void push(char item)
{
    top++;
    str[top] = item;
}

char pop()
{
    char item = str[top];
    top--;
    return item;
}
int main()
{
    char A[MAX];
    cout << "Enter a string: ";
    gets(A);

    for (int i = 0; i < strlen(A); i++)
    {
        push(A[i]);
    }
    for (int i = 0; i < strlen(A); i++)
    {
        A[i] = pop();
    }
    cout << A;
    return 0;
}