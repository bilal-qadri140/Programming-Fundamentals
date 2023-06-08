#include <iostream>
using namespace std;
class Node
{
private:
    int data;
    Node *Link;
    Node *top;

public:
    Node()
    {
        top = NULL;
    }
    void push(int x);
    void pop();
    int Top();
    bool isEmpty();
    void print();
};

void Node::push(int x)
{
    Node *node = new Node();
    node->data = x; // adding value at the biggining of the List
    node->Link = top;
    top = node;
}
void Node ::pop()
{
    Node *temp;
    if (top == NULL)
        return;
    temp = top;
    top = top->Link;
    delete temp;
}
int Node ::Top()
{
    if (top == NULL)
    {
        cout << "Error: Stack underflow ";
        return 0;
    }
    else
        return top->data;
}

bool Node::isEmpty()
{
    if (top == NULL)
        return true;
    else
        return false;
}

void Node::print()
{

    Node *current = top;
    if (current == NULL)
    {
        cout << "Error: Stack underflow ";
        return;
    }
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->Link;
    }
    cout << endl;
}
int main()
{
    Node n;

    cout << "Checking is empty or not: ";
    if (n.isEmpty())
        cout << "Stask is empty " << endl;
    else
        cout << "Stask is not empty " << endl;

    n.push(2); // 2
    n.print();

    n.push(5); // 2 5
    n.print();

    n.push(10); // 2 5 10
    n.print();

    n.pop(); // 2 5
    n.print();

    n.push(12); // 2 5 12
    n.print();
    cout << n.Top(); // 12
    cout << endl;

    cout << "Checking is empty or not: ";
    if (n.isEmpty())
        cout << "Stask is empty " << endl;
    else
        cout << "Stask is not empty " << endl;
    return 0;
}