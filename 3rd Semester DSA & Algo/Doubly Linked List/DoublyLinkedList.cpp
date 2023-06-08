#include <iostream>
using namespace std;
struct Node
{
    int rollNo;
    string name;
    Node *next;
    Node *prev;
};
//Global variables
Node *head = NULL;
Node *last = NULL;


void add(int rollNo, string name)
{
    Node *newnode = new Node();
    newnode->rollNo = rollNo;
    newnode->name = name;
    newnode->prev = last;
    newnode->next = NULL;
    last = newnode;

    if (head==NULL)
    {
        head = newnode;
        return;
    }
    newnode->prev->next = newnode;
}

int main()
{
    
    return 0;
}