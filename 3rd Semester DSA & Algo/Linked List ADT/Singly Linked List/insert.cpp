#include <iostream>
using namespace std;

struct node
{
    int rno;
    float marks;
    node *next;
};

node *head = NULL;

void insert(int Rno, float Marks)
{
    node *new_node = new node();
    new_node->rno = Rno;
    new_node->marks = Marks;
    new_node->next = head;
    head = new_node;
}

void display()
{
    node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        cout << "Roll No is " << ptr->rno << endl;
        cout << "Marks is " << ptr->marks << endl;
        ptr = ptr->next;
    }
} 

int main()
{
    insert(12, 78.0);
    insert(13, 76.0);
    insert(14, 73.0);
    display();

    return 0;
}