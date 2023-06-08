#include <iostream>
using namespace std;

struct Link
{
    int rollNumber;
    string name;
    Link *next;
};

class LinkedList
{
private:
    Link *first;

public:
    LinkedList()
    {
        first = NULL;
    }

    void add(int rNum, string nm)
    {
        Link *ptr = new Link();
        ptr->rollNumber = rNum;
        ptr->name = nm;
        ptr->next = first;
        first = ptr;
    }

    void show()
    {
        Link *current = first;
        while (current != NULL)
        {
            cout << "Name: " << current->name;
            cout << endl
                 << "Roll Number: " << current->rollNumber << endl;
            current = current->next;
        }
    }
};
int main()
{
    LinkedList student;
    int choice = 0, rollNumber = -1;
    string name;
    bool draw = true;

    while (draw)
    {
        cout << endl
             << "1: Data Entry" << endl
             << "2: Show Record" << endl
             << "3: Exit" << endl
             << "Please Make Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Roll Number: ";
            cin >> rollNumber;
            cout << "################################################";
            student.add(rollNumber, name);
            break;

        case 2:

            cout << "#################==>Records<==#################" << endl;
            student.show();
            break;
        case 3:

            draw = false;
            break;
        default:

            cout << "Wrong Choice";
            break;
        }
    }
}