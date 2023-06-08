#include <iostream>
using namespace std;

class LinkList
{

private:
    struct Node
    {
        int rollNo;
        string name;
        Node *next_add;
    };
    Node *Head; // Head pointer variable to store first node address

public:
    LinkList()
    {
        Head = NULL;
    }

    void insertNode(int, string);
    void display();
};

// Insert data on Singly Linked List Nodes
void LinkList::insertNode(int n, string nm)
{
    Node *new_node = new Node();
    new_node->rollNo = n;
    new_node->name = nm;
    new_node->next_add = NULL;

    if (Head == NULL)
    {
        Head = new_node;
    }
    else
    {
        Node *temp;
        temp = Head;

        while (temp->next_add != NULL)
        {
            temp = temp->next_add;
        }

        temp->next_add = new_node;
    }
}

// display nodes of Link List
void LinkList ::display()
{
    Node *ptr;
    ptr = Head;

    while (ptr != NULL)
    {
        cout << "Name of Student is " << ptr->name << endl;
        cout << "Roll No. of Student is " << ptr->rollNo << endl
             << endl;

        ptr = ptr->next_add;
    }
}
int main()
{
    LinkList l1;
    int choice = 0, rollNumber = -1;
    string name;
    bool flag = true;
    while (flag)
    {
        cout << endl
             << "1: Data Entry" << endl
             << "2: Show Record" << endl
             << "3: Exit" << endl
             << "Please Make Your Choice: ";
        cin >> choice;
        system("cls");

        switch (choice)
        {
        case 1:

            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Roll Number: ";
            cin >> rollNumber;
            system("cls");
            l1.insertNode(rollNumber, name);
            break;

        case 2:

            cout << "#################==>Records<==#################" << endl;
            l1.display();
            break;
        case 3:

            flag = false;
            break;
        default:
            break;
        }
    }
}
