#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *Link;
};
Node *start = NULL;

// add Nodes in Linked List
void add(int data)
{
    Node *node = new Node();
    node->info = data;
    node->Link = NULL;

    if (start == NULL)
    {
        start = node;
    }
    else
    {
        Node *temp;
        temp = start;

        while (temp->Link != NULL)
        {
            temp = temp->Link;
        }

        temp->Link = node;
    }
    cout << "Data added successfuly" << endl;
    system("pause");
}

// insert element at specific node
void insert(int N, int Item)
{
    if (start == NULL)
    {
        cout << "List is empty ";
    }
    else
    {
        Node *ptr = start;
        int flag = 0;
        while (ptr != NULL)
        {
            if (ptr->info == N)
            {
                Node *new_node = new Node(); // creat new node
                Node *New = new_node;        // creat temporary variable to store add of new node
                New->info = Item;
                New->Link = ptr->Link;
                ptr->Link = New;
                cout << "Item inserted!" << endl;
                system("pause");
                flag = 1;
                break;
            }
            else
            {
                ptr = ptr->Link;
            }
        }
        if (flag == 0)
        {
            cout << "Item Not found!" << endl;
            system("pause");
        }
    }
}

// display Link Nodes
void display()
{
    Node *current_node = start;
    while (current_node != NULL)
    {
        cout << "Data is: " << current_node->info;
        cout << endl;
        current_node = current_node->Link;
    }
    system("pause");
}
int main()
{
    int data;
    int choice;
    bool flag = true;

    while (flag)
    {
        system("cls");
        cout << endl
             << "1: Data Entry" << endl
             << "2: Show Record" << endl
             << "3: Insert at specific Node" << endl
             << "4: Exit" << endl
             << "Please Make Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Data: ";
            cin >> data;
            add(data);
            break;

        case 2:
            cout << "#################==>Records<==#################" << endl;
            display();
            break;
        case 3:
            int N, Item;
            cout << "Enter the value after which new node is to be inserted  ";
            cin >> N;
            cout << "Enter Value to be inserted  ";
            cin >> Item;
            insert(N, Item);
            break;
        case 4:
            flag = false;
            break;
        default:
            cout << "Wrong Choice";
            break;
        }
    }
}